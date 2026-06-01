char *__fastcall sub_1FC5780(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int *v7; // rsi
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  char *result; // rax
  __int64 v13; // r12
  __int64 i; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // r12d
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-40h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  sub_1FC4AC0(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 44), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 64));
  sub_1F740B0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  v4 = *(_DWORD *)(a2 + 64);
  if ( v4 )
  {
    v5 = 0;
    v6 = 8 * (3LL * (unsigned int)(v4 - 1) + 3);
    do
    {
      v7 = (unsigned int *)(v5 + *(_QWORD *)(a2 + 72));
      v5 += 24;
      sub_1F814C0(*(_QWORD **)a1, v7, *(_QWORD *)(a1 + 24));
    }
    while ( v6 != v5 );
  }
  v8 = *(_DWORD *)(a2 + 24);
  if ( v8 )
  {
    v9 = 0;
    v10 = 16 * ((unsigned int)(v8 - 1) + 1LL);
    do
    {
      v11 = v9 + *(_QWORD *)(a2 + 88);
      v9 += 16;
      sub_1F740B0(*(_QWORD *)(a1 + 16), *(_QWORD *)v11, *(_QWORD *)(v11 + 8), *(_QWORD *)(a1 + 24));
    }
    while ( v10 != v9 );
  }
  result = (char *)*(unsigned int *)(a2 + 16);
  if ( (_DWORD)result )
  {
    v13 = (unsigned int)((_DWORD)result - 1);
    for ( i = 0; ; ++i )
    {
      v15 = sub_EEDE50(a2, i);
      v16 = *(unsigned int *)(a1 + 40);
      if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        v25 = v15;
        sub_2237220(a1 + 32, a1 + 48, v16 + 1, 8);
        v16 = *(unsigned int *)(a1 + 40);
        v15 = v25;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v16) = v15;
      v17 = *(_QWORD *)(a1 + 16);
      ++*(_DWORD *)(a1 + 40);
      sub_1F740B0(
        v17,
        *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16 * i),
        *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16 * i + 8),
        *(_QWORD *)(a1 + 24));
      result = (char *)(i + 1);
      if ( i == v13 )
        break;
    }
  }
  v18 = *(_DWORD *)(a2 + 20);
  v19 = 0;
  if ( v18 )
  {
    do
    {
      v20 = sub_EEDE60(a2, v19);
      v21 = *(unsigned int *)(a1 + 40);
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        v26 = v20;
        sub_2237220(a1 + 32, a1 + 48, v21 + 1, 8);
        v21 = *(unsigned int *)(a1 + 40);
        v20 = v26;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v21) = v20;
      v22 = v19;
      v23 = *(_QWORD *)(a1 + 16);
      ++v19;
      ++*(_DWORD *)(a1 + 40);
      v24 = *(_QWORD *)(a2 + 80) + 16LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v22);
      result = sub_1F740B0(v23, *(_QWORD *)v24, *(_QWORD *)(v24 + 8), *(_QWORD *)(a1 + 24));
    }
    while ( v19 != v18 );
  }
  *(_DWORD *)(a1 + 224) = 170;
  return result;
}
