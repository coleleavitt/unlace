/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79CC8
// Address: 0x00079CC8

//----- (00079CC8) --------------------------------------------------------
int __fastcall sub_79CC8(int a1, int a2, int a3)
{
  _BOOL4 v3; // r8
  int *v4; // r4
  int *v5; // r5
  int v6; // r1
  int v9; // r6
  bool v10; // zf
  int v12; // [sp+4h] [bp-8h]

  v3 = (a3 & 0x7F) == 0 || ((a3 & 0x7F) + 1) << 24 >> 25 > 0;
  v5 = (int *)(a1 + 12);
  v4 = *(int **)(a1 + 12);
  if ( v4 != (int *)(a1 + 12) )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( *((_BYTE *)v4 + 28) )
        goto LABEL_20;
      if ( v6 )
        goto LABEL_18;
      v9 = v4[2];
      v10 = v9 == a2;
      if ( v9 != a2 )
        v10 = v9 == -1;
      if ( !v10 || a3 == 0xFFFF && (v4[5] & 8) == 0 )
      {
LABEL_18:
        if ( !v3 || v4[2] != a2 )
          goto LABEL_20;
        *((_BYTE *)v4 + 16) = 1;
        *((_BYTE *)v4 + 28) = 1;
        v12 = v6;
        sub_79C1C(v4[6]);
        v4 = (int *)*v4;
        v6 = v12;
        if ( v4 == v5 )
          return v6;
      }
      else
      {
        v4[2] = a2;
        v4[3] = a3;
        *((_BYTE *)v4 + 28) = 1;
        sub_79C1C(v4[6]);
        v4 = (int *)*v4;
        if ( v4 == v5 )
          return 1;
        v6 = *((unsigned __int8 *)v4 + 28);
        if ( !*((_BYTE *)v4 + 28) )
        {
          v6 = 1;
          goto LABEL_18;
        }
LABEL_20:
        v4 = (int *)*v4;
        if ( v4 == v5 )
          return v6;
      }
    }
  }
  return 0;
}
