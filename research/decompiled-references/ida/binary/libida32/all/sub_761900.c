__int64 __fastcall sub_761900(_QWORD *a1, const char *a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbp
  __int64 v4; // rax
  size_t v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  void *v10; // rax
  const void *v11; // rsi
  __int64 v12; // rax

  v2 = (_DWORD *)operator new(0x20u);
  v2[6] = 0;
  v3 = v2;
  *v2 = 1;
  v4 = operator new(0x18u);
  v5 = a1[6];
  *(_QWORD *)v4 = 0;
  v6 = (_QWORD *)v4;
  *(_OWORD *)(v4 + 8) = 0;
  if ( v5 )
  {
    v10 = (void *)qalloc_or_throw(v5, a2);
    *v6 = v10;
    v11 = (const void *)a1[5];
    v6[2] = v5;
    memcpy(v10, v11, v5);
    v6[1] = v5;
  }
  v7 = a1[43];
  *((_QWORD *)v3 + 2) = v6;
  v8 = a1[42];
  if ( a1[44] < (unsigned __int64)(v7 + 1) )
  {
    v12 = qvector_reserve(a1 + 42, v8, v7 + 1, 8);
    a1[42] = v12;
    v8 = v12;
    v7 = a1[43];
  }
  *(_QWORD *)(v8 + 8 * v7) = v3;
  ++a1[43];
  return 0;
}

