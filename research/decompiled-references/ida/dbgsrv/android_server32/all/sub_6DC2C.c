/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DC2C
// Address: 0x0006DC2C

//----- (0006DC2C) --------------------------------------------------------
int __fastcall sub_6DC2C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r5
  int *v5; // r6
  unsigned __int64 v6; // r0
  int (__fastcall *v7)(_DWORD, _DWORD, _DWORD, _DWORD); // r5
  unsigned int v8; // r7
  int v9; // r0
  signed int v10; // r2
  int v11; // r0
  int v12; // r1
  int v14; // [sp+4h] [bp-8h]
  unsigned int v15; // [sp+8h] [bp-4h]

  v2 = a1[5];
  v3 = 0;
  if ( v2 )
  {
    v14 = a1[4];
    v4 = v14 + 24 * v2;
    v5 = (int *)(v4 - 16);
    LODWORD(v6) = qtime64();
    if ( v6 >= *(_QWORD *)(v4 - 16) )
    {
      v7 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))a1[1];
      v3 = 0;
      if ( v7 )
      {
        v15 = HIDWORD(v6);
        v8 = v6;
        v9 = v7(*(unsigned __int8 *)(v14 + 16), *(_DWORD *)(v14 + 4), *(_DWORD *)v14, a1[2]);
        if ( v9 == 2 )
        {
          a1[11] = "cancelled";
          a1[12] = -15059582;
          return 1;
        }
        else
        {
          if ( v9 == 1 )
          {
            a1[11] = "skip_iter";
            a1[12] = -21015;
          }
          else
          {
            v10 = a1[3];
            v11 = 0;
            if ( v10 < 0 )
            {
              v12 = 0;
            }
            else
            {
              v12 = 0;
              if ( a1[1] )
                v11 = sub_6C66C(v8, v15, v10);
            }
            *v5 = v11;
            v5[1] = v12;
          }
          return 0;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
// 6DC62: variable 'v6' is possibly undefined
// 6DCC0: variable 'v12' is possibly undefined
