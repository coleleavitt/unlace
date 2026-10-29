void __fastcall sub_202F580(__int64 a1)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // r12
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi

  *(_QWORD *)a1 = off_2BE5D48;
  v2 = *(_DWORD **)(a1 + 40);
  v3 = &v2[10 * *(unsigned int *)(a1 + 48)];
  while ( v3 != v2 )
  {
    v6 = *(_QWORD *)(a1 + 272);
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
    v5 = sub_227D090(*(_QWORD *)(a1 + 272), (unsigned int)(2 * v4));
    sub_227BF10(v5, *((_QWORD *)v2 - 4), *((_QWORD *)v2 - 3));
  }
  if ( !*(_BYTE *)(a1 + 236) )
    free(*(void **)(a1 + 216));
  v8 = *(_QWORD **)(a1 + 40);
  v9 = &v8[5 * *(unsigned int *)(a1 + 48)];
  if ( v8 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v9 -= 5;
        v10 = (_QWORD *)v9[1];
        if ( v10 == v9 + 3 )
          break;
        operator delete(v10);
        if ( v8 == v9 )
          goto LABEL_12;
      }
    }
    while ( v8 != v9 );
LABEL_12:
    v9 = *(_QWORD **)(a1 + 40);
  }
  if ( v9 != (_QWORD *)(a1 + 56) )
    free(v9);
}
