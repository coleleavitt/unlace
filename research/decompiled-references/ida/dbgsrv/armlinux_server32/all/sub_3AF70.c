/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AF70
// Address: 0x0003AF70

//----- (0003AF70) --------------------------------------------------------
int __fastcall sub_3AF70(_DWORD *a1, char *a2, int *a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r3
  int v10; // r0
  int v11; // r3
  int v12; // r10
  _DWORD *v13; // r6
  int v14; // r11
  const char *v15; // r0
  int v16; // r0
  int v17; // [sp+4h] [bp-8h]

  v6 = sub_3928C(a1 + 17, a2);
  if ( v6 == -1 )
  {
    v10 = sub_3928C(a1 + 20, a2);
    v7 = v10;
    if ( v10 == -1 )
    {
      v11 = a1[16];
      v12 = *(_DWORD *)(v11 + 56);
      v17 = v11;
      if ( v12 )
      {
        v13 = *(_DWORD **)(v11 + 52);
        v14 = 0;
        while ( 1 )
        {
          v15 = v13[1] ? (const char *)*v13 : (const char *)&dword_8DB98;
          v13 += 10;
          if ( !strcmp(v15, a2) )
            break;
          if ( ++v14 == v12 )
            goto LABEL_16;
        }
        v7 = v14;
        v8 = 3;
      }
      else
      {
LABEL_16:
        if ( sub_3F38C(v17, a2) )
        {
          v8 = 5;
        }
        else if ( sub_3F524((_DWORD *)a1[16], a2) == 0x7FFFFFFF )
        {
          if ( !off_D3D08 || (v16 = ((int (__fastcall *)(int))off_D3D08)((int)a2), v8 = 4, !v16) )
            v8 = 0;
        }
        else
        {
          v8 = 6;
        }
      }
    }
    else
    {
      v8 = 2;
    }
  }
  else
  {
    v7 = v6;
    v8 = 1;
  }
  if ( a3 )
    *a3 = v8;
  return v7;
}
// 8DB98: using guessed type int dword_8DB98;
// D3D08: using guessed type _UNKNOWN *off_D3D08;
