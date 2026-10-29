void __fastcall install_user_defined_prefix(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *i; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  _QWORD *v10; // rsi
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 *v16; // rdi

  v16 = *(__int64 **)(qword_2CCB598 + 1632);
  if ( !a2 )
  {
    nullsub_1534();
    return;
  }
  v3 = *(_QWORD *)(qword_2CCB598 + 1632);
  v4 = a2;
  v5 = a1;
  v6 = v16[1];
  if ( a1 )
  {
    v16[3] += a1;
    v9 = a3;
    v10 = (_QWORD *)*v16;
    if ( v16[2] < (unsigned __int64)(v6 + 1) )
    {
      v12 = qvector_reserve(v16, v10, v6 + 1, 32);
      v6 = v16[1];
      *v16 = v12;
      v10 = (_QWORD *)v12;
    }
    v11 = &v10[4 * v6];
    *v11 = v5;
    v11[1] = v9;
    v11[2] = v4;
    *((_BYTE *)v11 + 24) = 0;
    v8 = v16[1] + 1;
  }
  else
  {
    if ( !v6 )
      return;
    for ( i = (_QWORD *)*v16; i[2] != v4; i += 4 )
    {
      if ( v6 == ++v5 )
        return;
    }
    *(_QWORD *)(v3 + 24) -= *i;
    memmove(i, i + 4, 32 * (v6 - v5) - 32);
    v8 = *(_QWORD *)(v3 + 8) - 1LL;
  }
  *(_QWORD *)(v3 + 8) = v8;
}
