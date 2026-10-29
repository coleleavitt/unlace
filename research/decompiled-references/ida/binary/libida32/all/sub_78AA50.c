__int64 __fastcall sub_78AA50(_QWORD *a1)
{
  _QWORD *v1; // rax
  const char *v2; // rsi
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax

  v1 = (_QWORD *)operator new(0x10u);
  v2 = (const char *)a1[13];
  *v1 = 0;
  v3 = v1;
  v1[1] = 0;
  v4 = a1[14];
  if ( a1[15] < (unsigned __int64)(v4 + 1) )
  {
    v11 = qvector_reserve(a1 + 13, v2, v4 + 1, 8);
    a1[13] = v11;
    v2 = (const char *)v11;
    v4 = a1[14];
  }
  *(_QWORD *)&v2[8 * v4] = v3;
  v5 = a1[13];
  v6 = a1[14] + 1LL;
  a1[14] = v6;
  v7 = *(_QWORD *)(v5 + 8 * v6 - 8);
  v8 = qalloc_or_throw(24, v2);
  *(_QWORD *)v8 = 0;
  v9 = v8;
  *(_OWORD *)(v8 + 8) = 0;
  if ( *(_DWORD *)v7 )
    jvalue_t_clear(v7);
  *(_DWORD *)v7 = 3;
  *(_QWORD *)(v7 + 8) = v9;
  return 0;
}

