void __fastcall sub_202F450(unsigned int *a1)
{
  _DWORD *v2; // rbp
  _DWORD *v3; // r12
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  unsigned int *v8; // r12
  unsigned int *v9; // rbp
  unsigned int *v10; // rdi

  *(_QWORD *)a1 = off_2BE5D48;
  v2 = *((_DWORD **)a1 + 5);
  v3 = &v2[10 * a1[12]];
  while ( v3 != v2 )
  {
    v6 = *((_QWORD *)a1 + 34);
    v7 = *(_BYTE **)(v6 + 32);
    if ( *(_BYTE **)(v6 + 24) == v7 )
    {
      sub_227BF10(v6, "\n", 1);
    }
    else
    {
      *v7 = 10;
      ++*(_QWORD *)(v6 + 32);
    }
    v4 = *v2;
    v2 += 10;
    v5 = sub_227D090(*((_QWORD *)a1 + 34), (unsigned int)(2 * v4));
    sub_227BF10(v5, *((_QWORD *)v2 - 4), *((_QWORD *)v2 - 3));
  }
  if ( !*((_BYTE *)a1 + 236) )
    free(*((void **)a1 + 27));
  v8 = *((unsigned int **)a1 + 5);
  v9 = &v8[10 * a1[12]];
  if ( v8 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v9 -= 10;
        v10 = *((unsigned int **)v9 + 1);
        if ( v10 == v9 + 6 )
          break;
        operator delete(v10);
        if ( v8 == v9 )
          goto LABEL_12;
      }
    }
    while ( v8 != v9 );
LABEL_12:
    v9 = *((unsigned int **)a1 + 5);
  }
  if ( v9 != a1 + 14 )
    free(v9);
  operator delete(a1, 0x118u);
}
