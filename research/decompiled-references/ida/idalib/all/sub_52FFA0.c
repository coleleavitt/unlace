_QWORD *__fastcall sub_52FFA0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  char *v5; // rax
  __int64 v6; // rsi
  char *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  char *v11; // r13
  __int64 v13; // rax

  v3 = operator new(0x28u);
  *(_WORD *)(v3 + 24) = 0;
  v4 = (_QWORD *)v3;
  *(_QWORD *)v3 = a2;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v3 + 36) = sub_52FF20((__int64)(a1 + 4), a2);
  v5 = (char *)sub_52EA70((__int64)a1, a2);
  v6 = a1[1];
  v7 = v5;
  v8 = a1[2];
  v9 = 8 * v8;
  if ( v7 != (char *)(v6 + 8 * v8) && **(_QWORD **)v7 == a2 )
  {
    if ( !under_debugger )
      interr(914);
    BUG();
  }
  v10 = v8 + 1;
  v11 = &v7[-v6];
  if ( a1[3] < v10 )
  {
    v13 = qvector_reserve(a1 + 1, v6, v10, 8);
    a1[1] = v13;
    v7 = &v11[v13];
    v9 = 8LL * a1[2];
  }
  memmove(v7 + 8, v7, v9 - (_QWORD)v11);
  *(_QWORD *)v7 = v4;
  ++a1[2];
  return v4;
}
