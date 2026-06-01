_DWORD *__fastcall sub_517BA0(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char *v5; // rax
  __int64 v6; // rsi
  char *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  char *v11; // r13
  __int64 v13; // rax

  v3 = operator new(0x20u);
  *(_WORD *)(v3 + 16) = 0;
  v4 = (_DWORD *)v3;
  *(_QWORD *)v3 = a2;
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_QWORD *)(v3 + 24) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v3 + 28) = sub_517B20((__int64)(a1 + 4), a2);
  v5 = (char *)sub_516630((__int64)a1, a2);
  v6 = a1[1];
  v7 = v5;
  v8 = a1[2];
  v9 = 8 * v8;
  if ( v7 != (char *)(v6 + 8 * v8) && **(_DWORD **)v7 == a2 )
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

