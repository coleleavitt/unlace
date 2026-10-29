__int64 __fastcall sub_1FBC1A0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 *v8; // rbp
  __int64 result; // rax
  __int64 *v10; // r13
  __int64 v11; // rsi
  int *v12; // rbp
  int *i; // r12
  int v14; // esi

  sub_1FBC160(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 136), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 140), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 144), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 88), *(_QWORD *)(a1 + 24));
  v4 = *(_QWORD *)(a2 + 96);
  if ( v4 )
  {
    v5 = (__int64 *)(v4 + 16);
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(v4 + 8));
    v6 = v4 + 8LL * *(unsigned int *)(v4 + 8) + 16;
    if ( v4 + 16 != v6 )
    {
      do
      {
        v7 = *v5++;
        sub_1F92A90(*(_QWORD *)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
      }
      while ( (__int64 *)v6 != v5 );
    }
    sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)v4, *(_QWORD *)(a1 + 24));
    sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v4 + 4), *(_QWORD *)(a1 + 24));
  }
  else
  {
    sub_1FB1190(*(_QWORD *)(a1 + 24));
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 112));
  v8 = *(__int64 **)(a2 + 104);
  result = *(unsigned int *)(a2 + 112);
  v10 = &v8[result];
  if ( v8 != v10 )
  {
    do
    {
      v11 = *v8++;
      sub_1F92A90(*(_QWORD *)(a1 + 16), v11, *(_QWORD *)(a1 + 24));
    }
    while ( v10 != v8 );
    result = *(unsigned int *)(a2 + 112);
  }
  v12 = *(int **)(a2 + 120);
  for ( i = &v12[result]; i != v12; result = sub_1F6F570(*(_QWORD **)(a1 + 16), v14, *(_QWORD *)(a1 + 24)) )
    v14 = *v12++;
  *(_DWORD *)(a1 + 224) = 62;
  return result;
}
