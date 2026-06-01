__int64 __fastcall sub_8AAF50(__int64 a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rdi
  size_t v4; // rdx
  _DWORD *v5; // rax
  int v6; // edx
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  sub_899150((_QWORD *)(a1 + 1472));
  v2 = *(_QWORD *)(a1 + 1576);
  if ( !v2 || *(_DWORD *)(v2 - 4) != 1 )
  {
    v3 = *(unsigned int **)(a1 + 1584);
    if ( v3 )
      v4 = 4LL * *(v3 - 1);
    else
      v4 = 0;
    memset(v3, 0, v4);
    v5 = *(_DWORD **)(a1 + 1576);
    if ( v5 && (v6 = *(v5 - 2), *(v5 - 1) = 0, v6) )
    {
      v7 = v5;
    }
    else
    {
      sub_313C10((unsigned int **)(a1 + 1576));
      v5 = *(_DWORD **)(a1 + 1576);
      v7 = &v5[*(v5 - 1)];
    }
    *v7 = -1;
    ++*(v5 - 1);
  }
  v8 = *(_QWORD *)(a1 + 1592);
  if ( v8 )
  {
    v9 = v8 + 232LL * *(unsigned int *)(v8 - 4);
    if ( v9 == v8 )
      goto LABEL_13;
    do
    {
      sub_182EF00(a1 + 736, v8 + 8);
      sub_182EF00(a1 + 736, v8 + 24);
      sub_182EF00(a1 + 736, v8 + 40);
      sub_182EF00(a1 + 736, v8 + 56);
      sub_182EF00(a1 + 736, v8 + 72);
      sub_182EF00(a1 + 736, v8 + 88);
      sub_182EF00(a1 + 736, v8 + 104);
      sub_182EF00(a1 + 736, v8 + 120);
      sub_182EF00(a1 + 736, v8 + 136);
      sub_182EF00(a1 + 736, v8 + 152);
      sub_182EF00(a1 + 736, v8 + 168);
      sub_182EF00(a1 + 736, v8 + 184);
      sub_182EF00(a1 + 8, v8 + 200);
      v10 = v8 + 216;
      v8 += 232;
      sub_182EF00(a1 + 8, v10);
    }
    while ( v8 != v9 );
    v8 = *(_QWORD *)(a1 + 1592);
    if ( v8 )
LABEL_13:
      *(_DWORD *)(v8 - 4) = 0;
  }
  v11 = *(_QWORD *)(a1 + 1600);
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
  v12 = *(_QWORD *)(a1 + 1624);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  result = *(_QWORD *)(a1 + 1640);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

