/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454200
// Address: 0x0000000000454200

//----- (0000000000454200) ----------------------------------------------------
__int64 __fastcall sub_454200(_QWORD *a1, int a2, char *a3, __int64 a4)
{
  __int64 (*v6)(void); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rsi

  v6 = *(__int64 (**)(void))(*a1 + 56LL);
  if ( (char *)v6 == (char *)sub_453C00 )
  {
    v7 = a1[6];
    v8 = v7 + 56LL * a1[7];
    if ( !(56LL * a1[7]) )
      goto LABEL_10;
    while ( *(_DWORD *)v7 != a2 )
    {
      v7 += 56;
      if ( v8 == v7 )
        goto LABEL_10;
    }
  }
  else
  {
    v7 = v6();
  }
  if ( !v7 )
  {
LABEL_10:
    sub_485490(a3, a4, "%08X", a2);
    return 0;
  }
  v9 = (char *)s1;
  if ( *(_QWORD *)(v7 + 16) )
    v9 = *(char **)(v7 + 8);
  sub_4821A0(a3, v9, a4);
  return 1;
}
