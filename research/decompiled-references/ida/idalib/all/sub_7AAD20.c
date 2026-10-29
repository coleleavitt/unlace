__int64 __fastcall sub_7AAD20(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rsi
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax

  v1 = (_QWORD *)operator new(0x10u);
  v2 = a1[14];
  *v1 = 0;
  v3 = v1;
  v1[1] = 0;
  v4 = a1[15];
  if ( a1[16] < (unsigned __int64)(v4 + 1) )
  {
    v11 = qvector_reserve(a1 + 14, v2, v4 + 1, 8);
    a1[14] = v11;
    v2 = v11;
    v4 = a1[15];
  }
  *(_QWORD *)(v2 + 8 * v4) = v3;
  v5 = a1[14];
  v6 = a1[15] + 1LL;
  a1[15] = v6;
  v7 = *(_QWORD *)(v5 + 8 * v6 - 8);
  v8 = operator new(0x18u);
  *(_QWORD *)v8 = 0;
  v9 = v8;
  *(_OWORD *)(v8 + 8) = 0;
  if ( *(_DWORD *)v7 )
    jvalue_t_clear(v7);
  *(_DWORD *)v7 = 4;
  *(_QWORD *)(v7 + 8) = v9;
  return 0;
}
