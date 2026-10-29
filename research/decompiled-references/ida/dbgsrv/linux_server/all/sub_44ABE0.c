/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44ABE0
// Address: 0x000000000044ABE0

//----- (000000000044ABE0) ----------------------------------------------------
__int64 *__fastcall sub_44ABE0(__int64 *a1, const void **a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 **v7; // rax
  __int64 *v8; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 *v14; // r13
  __int64 v15; // r14
  __int64 *v16; // rax
  __int64 *v17; // rdx
  unsigned __int64 v18; // r15
  size_t v19; // r14
  __int64 *v20; // r10
  _QWORD *v21; // rsi
  unsigned __int64 v22; // r9
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rdx

  v3 = std::_Hash_bytes(*a2, *((_QWORD *)*a2 - 3), 0xC70F6907);
  v4 = a1[1];
  v5 = v3;
  v6 = v3 % v4;
  v7 = (__int64 **)sub_449130(*a1, v4, v3 % v4, *a2, v3);
  if ( !v7 || (v8 = *v7) == nullptr )
  {
    v10 = operator new(0x20u);
    *(_QWORD *)v10 = 0;
    v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = *a2;
    *a2 = &std::string::_Rep::_S_empty_rep_storage[3];
    v11 = a1[3];
    v12 = a1[1];
    *(_WORD *)(v10 + 16) = 0;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v12,
                            v11,
                            1u) )
    {
      v18 = v13;
      if ( v13 == 1 )
      {
        v20 = a1 + 6;
        a1[6] = 0;
        v14 = a1 + 6;
      }
      else
      {
        if ( v13 >> 60 )
        {
          if ( v13 >> 61 )
            sub_40B3F3();
          std::__throw_bad_alloc();
        }
        v19 = 8 * v13;
        v14 = (__int64 *)operator new(8 * v13);
        memset(v14, 0, v19);
        v20 = a1 + 6;
      }
      v21 = (_QWORD *)a1[2];
      a1[2] = 0;
      v22 = 0;
      while ( v21 )
      {
        while ( 1 )
        {
          v23 = v21;
          v21 = (_QWORD *)*v21;
          v24 = v23[3] % v18;
          v25 = &v14[v24];
          if ( !*v25 )
            break;
          *v23 = *(_QWORD *)*v25;
          *(_QWORD *)*v25 = v23;
          if ( !v21 )
            goto LABEL_16;
        }
        *v23 = a1[2];
        a1[2] = (__int64)v23;
        *v25 = (__int64)(a1 + 2);
        if ( *v23 )
          v14[v22] = (__int64)v23;
        v22 = v24;
      }
LABEL_16:
      if ( (__int64 *)*a1 != v20 )
        operator delete((void *)*a1, 8 * a1[1]);
      a1[1] = v18;
      *a1 = (__int64)v14;
      v6 = v5 % v18;
    }
    else
    {
      v14 = (__int64 *)*a1;
    }
    v15 = v6;
    v8[3] = v5;
    v16 = &v14[v15];
    v17 = (__int64 *)v14[v15];
    if ( v17 )
    {
      *v8 = *v17;
      *(_QWORD *)*v16 = v8;
    }
    else
    {
      v26 = a1[2];
      a1[2] = (__int64)v8;
      *v8 = v26;
      if ( v26 )
      {
        v14[*(_QWORD *)(v26 + 24) % (unsigned __int64)a1[1]] = (__int64)v8;
        v16 = (__int64 *)(v15 * 8 + *a1);
      }
      *v16 = (__int64)(a1 + 2);
    }
    ++a1[3];
  }
  return v8 + 2;
}
// 44ACF0: variable 'v13' is possibly undefined
// 4C96C0: using guessed type unsigned __int64 std::string::_Rep::_S_empty_rep_storage[4];
