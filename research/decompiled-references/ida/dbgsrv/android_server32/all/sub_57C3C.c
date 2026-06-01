/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57C3C
// Address: 0x00057C3C

//----- (00057C3C) --------------------------------------------------------
int __fastcall sub_57C3C(int *a1, unsigned int a2, unsigned int a3)
{
  int *v4; // r5
  _DWORD *v5; // r0
  unsigned int *v6; // r4
  unsigned int *i; // r1
  unsigned int v8; // r2
  unsigned int v9; // r1
  int result; // r0
  _DWORD *v11; // r4
  _DWORD *v12; // r0
  unsigned int v13; // r7
  int v14; // r6
  unsigned int v15; // [sp+Ch] [bp-34h]
  int *v16; // [sp+18h] [bp-28h]
  _BYTE v18[4]; // [sp+34h] [bp-Ch] BYREF

  v4 = a1;
  v5 = (_DWORD *)a1[2];
  v6 = (unsigned int *)v5[49];
  for ( i = &v6[10 * v5[50]]; v6 < i; v6 += 10 )
  {
    if ( *v6 > a2 )
      break;
    v8 = v6[1];
    if ( v8 > a2 )
      goto LABEL_8;
  }
  if ( v6 != i )
  {
    a2 = *v6;
    if ( *v6 < a3 )
    {
      v8 = v6[1];
LABEL_8:
      v9 = a3;
      if ( v8 <= a3 )
        v9 = v8;
      v15 = v9;
      if ( (*(int (__fastcall **)(_DWORD *))(*v5 + 144))(v5) == 1 )
      {
        result = (*(int (__fastcall **)(int *, unsigned int, unsigned int))(*v4 + 12))(v4, a2, v15);
        if ( result != -1 )
          return result;
      }
      else
      {
        sub_64B30(v4[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n");
      }
      v11 = v6 + 10;
      v16 = v4;
      while ( 1 )
      {
        v12 = (_DWORD *)v4[2];
        if ( (unsigned int)v11 >= v12[49] + 40 * v12[50] )
          break;
        v13 = v11[1];
        if ( v13 > a3 )
          break;
        v14 = *v11;
        v4 = v16;
        if ( (*(int (__fastcall **)(_DWORD *, _DWORD, _BYTE *, int, _DWORD))(*v12 + 144))(v12, *v11, v18, 1, 0) == 1 )
        {
          result = (*(int (__fastcall **)(int *, int, unsigned int))(*v16 + 12))(v16, v14, v13);
        }
        else
        {
          sub_64B30(v16[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n");
          result = -1;
        }
        v11 += 10;
        if ( result != -1 )
          return result;
      }
    }
  }
  return -1;
}
