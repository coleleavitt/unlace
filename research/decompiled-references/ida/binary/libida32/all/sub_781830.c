__int64 *__fastcall sub_781830(__int64 *a1, const void **a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 **v8; // rax
  __int64 *v9; // rbp
  __int64 *v11; // rax
  _QWORD *v12; // rdi
  const void *v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // r13
  __int64 v19; // r14
  char *v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // r15
  size_t v23; // r14
  _QWORD *v24; // r10
  _QWORD *v25; // rsi
  unsigned __int64 v26; // r9
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rdx
  char *v29; // rax
  __int64 v30; // rdx

  v4 = std::_Hash_bytes(*a2, *((_QWORD *)*a2 - 3), 0xC70F6907);
  v5 = a1[1];
  v6 = v4;
  v7 = v4 % v5;
  v8 = (__int64 **)sub_77EA40(*a1, v5, v4 % v5, *a2, v4);
  if ( !v8 || (v9 = *v8) == nullptr )
  {
    v11 = (__int64 *)operator new(0x38u);
    v12 = a1 + 4;
    *v11 = 0;
    v9 = v11;
    v13 = *a2;
    *((_WORD *)v9 + 20) = 0;
    v9[1] = (__int64)v13;
    v9[2] = 0;
    *(_OWORD *)(v9 + 3) = 0;
    *a2 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    v14 = a1[1];
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v14,
                            a1[3],
                            1u) )
    {
      v22 = v15;
      if ( v15 == 1 )
      {
        v24 = a1 + 6;
        a1[6] = 0;
        v18 = (char *)(a1 + 6);
      }
      else
      {
        if ( v15 >> 60 )
        {
          if ( v15 >> 61 )
            sub_2E883E(v12, v14, v15, v16, v17);
          std::__throw_bad_alloc();
        }
        v23 = 8 * v15;
        v18 = (char *)operator new(8 * v15);
        memset(v18, 0, v23);
        v24 = a1 + 6;
      }
      v25 = (_QWORD *)a1[2];
      a1[2] = 0;
      v26 = 0;
      while ( v25 )
      {
        while ( 1 )
        {
          v27 = v25;
          v25 = (_QWORD *)*v25;
          v28 = v27[6] % v22;
          v29 = &v18[8 * v28];
          if ( !*(_QWORD *)v29 )
            break;
          *v27 = **(_QWORD **)v29;
          **(_QWORD **)v29 = v27;
          if ( !v25 )
            goto LABEL_16;
        }
        *v27 = a1[2];
        a1[2] = (__int64)v27;
        *(_QWORD *)v29 = a1 + 2;
        if ( *v27 )
          *(_QWORD *)&v18[8 * v26] = v27;
        v26 = v28;
      }
LABEL_16:
      if ( (_QWORD *)*a1 != v24 )
        operator delete((void *)*a1, 8 * a1[1]);
      a1[1] = v22;
      *a1 = (__int64)v18;
      v7 = v6 % v22;
    }
    else
    {
      v18 = (char *)*a1;
    }
    v19 = 8 * v7;
    v9[6] = v6;
    v20 = &v18[v19];
    v21 = *(__int64 **)&v18[v19];
    if ( v21 )
    {
      *v9 = *v21;
      **(_QWORD **)v20 = v9;
    }
    else
    {
      v30 = a1[2];
      a1[2] = (__int64)v9;
      *v9 = v30;
      if ( v30 )
      {
        *(_QWORD *)&v18[8 * (*(_QWORD *)(v30 + 48) % (unsigned __int64)a1[1])] = v9;
        v20 = (char *)(v19 + *a1);
      }
      *(_QWORD *)v20 = a1 + 2;
    }
    ++a1[3];
  }
  return v9 + 2;
}

