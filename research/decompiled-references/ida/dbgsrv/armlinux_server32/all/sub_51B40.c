/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51B40
// Address: 0x00051B40

//----- (00051B40) --------------------------------------------------------
int __fastcall sub_51B40(int *a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v4; // r0
  unsigned int *v6; // r4
  unsigned int *v7; // r3
  double v8; // r6
  int result; // r0
  _DWORD *v10; // r1
  unsigned int v11; // r6
  unsigned int v12; // r4
  int v13; // r7
  double v14; // [sp+0h] [bp-1Ch]
  char v15; // [sp+13h] [bp-9h] BYREF

  v4 = (_DWORD *)a1[2];
  v6 = (unsigned int *)v4[59];
  v7 = &v6[10 * v4[60]];
  if ( v6 >= v7 )
  {
LABEL_11:
    if ( v7 == v6 )
      return -1;
LABEL_12:
    LODWORD(v8) = *v6;
  }
  else
  {
    while ( 1 )
    {
      LODWORD(v8) = *v6;
      if ( a2 < *v6 )
        break;
      if ( a2 < v6[1] )
      {
        if ( a2 == -1 )
          goto LABEL_12;
        LODWORD(v8) = a2;
        goto LABEL_4;
      }
      v6 += 10;
      if ( v6 >= v7 )
        goto LABEL_11;
    }
  }
  if ( a3 <= LODWORD(v8) )
    return -1;
LABEL_4:
  HIDWORD(v8) = v6[1];
  LODWORD(v14) = 0;
  if ( HIDWORD(v8) >= a3 )
    HIDWORD(v8) = a3;
  if ( (*(int (__fastcall **)(_DWORD *))(*v4 + 144))(v4) != 1 )
  {
    sub_53ED4(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v8, v14);
    goto LABEL_14;
  }
  result = (*(int (__fastcall **)(int *, _DWORD, _DWORD))(*a1 + 12))(a1, LODWORD(v8), HIDWORD(v8));
  if ( result == -1 )
  {
LABEL_14:
    v10 = (_DWORD *)a1[2];
    if ( (unsigned int)(v6 + 10) < v10[59] + 40 * v10[60] )
    {
      v11 = v6[11];
      if ( a3 >= v11 )
      {
        v12 = (unsigned int)(v6 + 20);
        do
        {
          v13 = *(_DWORD *)(v12 - 40);
          if ( (*(int (__fastcall **)(_DWORD *, int, char *, int, _DWORD))(*v10 + 144))(v10, v13, &v15, 1, 0) == 1 )
          {
            result = (*(int (__fastcall **)(int *, int, unsigned int))(*a1 + 12))(a1, v13, v11);
            if ( result != -1 )
              return result;
          }
          else
          {
            sub_53ED4(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v13, v11);
          }
          v10 = (_DWORD *)a1[2];
          if ( v12 >= v10[59] + 40 * v10[60] )
            break;
          v12 += 40;
          v11 = *(_DWORD *)(v12 - 36);
        }
        while ( v11 <= a3 );
      }
    }
    return -1;
  }
  return result;
}
// 51BD8: variable 'v14' is possibly undefined
