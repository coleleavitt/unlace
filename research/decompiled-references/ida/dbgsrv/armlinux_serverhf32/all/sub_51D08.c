/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51D08
// Address: 0x00051D08

//----- (00051D08) --------------------------------------------------------
int __fastcall sub_51D08(int *a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v4; // r0
  unsigned int v6; // r1
  int v7; // r3
  unsigned int *v8; // r4
  int result; // r0
  unsigned int v10; // r3
  unsigned int v11; // r8
  unsigned int v12; // r5
  _DWORD *v13; // r3
  unsigned int v14; // r8
  unsigned int *v15; // r4
  unsigned int v16; // r2
  unsigned int v17; // r7
  unsigned int v18; // r8
  unsigned int v19; // r5
  double v20; // [sp+0h] [bp-1Ch]
  char v21; // [sp+13h] [bp-9h] BYREF

  v4 = (_DWORD *)a1[2];
  v6 = v4[59];
  v7 = 40 * v4[60] - 40;
  v8 = (unsigned int *)(v6 + v7);
  if ( __CFADD__(v6, v7) )
    return -1;
  if ( a3 <= *(_DWORD *)(v6 + v7) )
  {
    do
    {
      v8 -= 10;
      if ( (unsigned int)v8 < v6 )
        return -1;
    }
    while ( *v8 >= a3 );
  }
  v10 = v8[1];
  if ( a3 >= v10 )
    a3 = v8[1];
  v11 = a3;
  if ( a3 == -1 )
    return -1;
  v12 = *v8;
  if ( a2 >= *v8 && v10 > a2 )
    v12 = a2;
  if ( (*(int (__fastcall **)(_DWORD *, unsigned int, char *, int, _DWORD))(*v4 + 144))(v4, v12, &v21, 1, 0) != 1 )
  {
    sub_53D50(
      a1[2],
      "dbg_bin_search memory range %a..%a is unreadable, skip it\n",
      COERCE_DOUBLE(__PAIR64__(v11, v12)),
      v20);
    goto LABEL_16;
  }
  result = (*(int (__fastcall **)(int *, unsigned int, unsigned int))(*a1 + 12))(a1, v12, v11);
  if ( result == -1 )
  {
LABEL_16:
    v13 = (_DWORD *)a1[2];
    if ( v13[59] <= (unsigned int)(v8 - 10) )
    {
      v14 = *(v8 - 9);
      if ( a2 < v14 )
      {
        v15 = v8 - 20;
        v16 = a2;
        v17 = v14;
        v18 = v16;
        do
        {
          v19 = v15[10];
          if ( v19 < v18 )
            v19 = v18;
          if ( (*(int (__fastcall **)(_DWORD *, unsigned int, char *, int, _DWORD))(*v13 + 144))(v13, v19, &v21, 1, 0) == 1 )
          {
            result = (*(int (__fastcall **)(int *, unsigned int, unsigned int))(*a1 + 12))(a1, v19, v17);
            if ( result != -1 )
              return result;
          }
          else
          {
            sub_53D50(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v19, v17);
          }
          v13 = (_DWORD *)a1[2];
          if ( (unsigned int)v15 < v13[59] )
            break;
          v15 -= 10;
          v17 = v15[11];
        }
        while ( v17 > v18 );
      }
    }
    return -1;
  }
  return result;
}
// 51E2E: variable 'v20' is possibly undefined
