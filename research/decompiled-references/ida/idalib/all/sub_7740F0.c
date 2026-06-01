_QWORD *__fastcall sub_7740F0(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  _QWORD *v6; // r8
  unsigned __int64 v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r14
  _QWORD **v21; // rax
  __int64 v22; // rdx

  v4 = *a2;
  if ( a1[3] )
  {
    v5 = a1[1];
    v6 = *(_QWORD **)(*a1 + 8 * (v4 % v5));
    v7 = v4 % v5;
    if ( v6 )
    {
      v8 = (_QWORD *)*v6;
      if ( *(_QWORD *)(*v6 + 8LL) == v4 )
      {
LABEL_7:
        if ( v6 && *v6 )
          return (_QWORD *)*v6;
      }
      else
      {
        while ( 1 )
        {
          v9 = (_QWORD *)*v8;
          if ( !*v8 )
            break;
          v6 = v8;
          if ( v4 % v5 != v9[1] % v5 )
            break;
          v8 = (_QWORD *)*v8;
          if ( v9[1] == v4 )
            goto LABEL_7;
        }
      }
    }
    goto LABEL_12;
  }
  v11 = (_QWORD *)a1[2];
  if ( !v11 )
  {
LABEL_11:
    v7 = v4 % a1[1];
LABEL_12:
    v12 = (_QWORD *)operator new(0x10u);
    v13 = a1[3];
    v14 = a1[1];
    *v12 = 0;
    v15 = v12;
    v12[1] = *a2;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v14,
                            v13,
                            1u) )
    {
      sub_773FC0((__int64)a1, v16, v16, v17, v18);
      v7 = v4 % a1[1];
    }
    v19 = *a1;
    v20 = 8 * v7;
    v21 = (_QWORD **)(*a1 + v20);
    if ( *v21 )
    {
      *v15 = **v21;
      **v21 = v15;
    }
    else
    {
      v22 = a1[2];
      a1[2] = (__int64)v15;
      *v15 = v22;
      if ( v22 )
      {
        *(_QWORD *)(v19 + 8 * (*(_QWORD *)(v22 + 8) % (unsigned __int64)a1[1])) = v15;
        v21 = (_QWORD **)(v20 + *a1);
      }
      *v21 = a1 + 2;
    }
    ++a1[3];
    return v15;
  }
  while ( v11[1] != v4 )
  {
    v11 = (_QWORD *)*v11;
    if ( !v11 )
      goto LABEL_11;
  }
  return v11;
}
