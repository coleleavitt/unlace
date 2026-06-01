/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BC80
// Address: 0x000000000044BC80

//----- (000000000044BC80) ----------------------------------------------------
__int64 *__fastcall sub_44BC80(__int64 *a1, const void **a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 *v7; // rax
  __int64 v8; // rbp
  _QWORD *v10; // rax
  const void *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 *v13; // r13
  __int64 v14; // r14
  __int64 **v15; // rax
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r15
  size_t v18; // r14
  __int64 *v19; // r10
  _QWORD *v20; // rsi
  unsigned __int64 v21; // r9
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rdx

  v3 = std::_Hash_bytes(*a2, *((_QWORD *)*a2 - 3), 0xC70F6907);
  v4 = a1[1];
  v5 = v3;
  v6 = v3 % v4;
  v7 = sub_4490A0(*a1, v4, v3 % v4, *a2, v3);
  if ( !v7 || (v8 = *v7) == 0 )
  {
    v10 = (_QWORD *)operator new(0x38u);
    *v10 = 0;
    v8 = (__int64)v10;
    v11 = *a2;
    *(_WORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 8) = v11;
    *(_QWORD *)(v8 + 16) = 0;
    *(_OWORD *)(v8 + 24) = 0;
    *a2 = &std::string::_Rep::_S_empty_rep_storage[3];
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            a1[1],
                            a1[3],
                            1u) )
    {
      v17 = v12;
      if ( v12 == 1 )
      {
        v19 = a1 + 6;
        a1[6] = 0;
        v13 = a1 + 6;
      }
      else
      {
        if ( v12 >> 60 )
        {
          if ( v12 >> 61 )
            sub_40B3F3();
          std::__throw_bad_alloc();
        }
        v18 = 8 * v12;
        v13 = (__int64 *)operator new(8 * v12);
        memset(v13, 0, v18);
        v19 = a1 + 6;
      }
      v20 = (_QWORD *)a1[2];
      a1[2] = 0;
      v21 = 0;
      while ( v20 )
      {
        while ( 1 )
        {
          v22 = v20;
          v20 = (_QWORD *)*v20;
          v23 = v22[6] % v17;
          v24 = &v13[v23];
          if ( !*v24 )
            break;
          *v22 = *(_QWORD *)*v24;
          *(_QWORD *)*v24 = v22;
          if ( !v20 )
            goto LABEL_16;
        }
        *v22 = a1[2];
        a1[2] = (__int64)v22;
        *v24 = (__int64)(a1 + 2);
        if ( *v22 )
          v13[v21] = (__int64)v22;
        v21 = v23;
      }
LABEL_16:
      if ( (__int64 *)*a1 != v19 )
        operator delete((void *)*a1, 8 * a1[1]);
      a1[1] = v17;
      *a1 = (__int64)v13;
      v6 = v5 % v17;
    }
    else
    {
      v13 = (__int64 *)*a1;
    }
    v14 = v6;
    *(_QWORD *)(v8 + 48) = v5;
    v15 = (__int64 **)&v13[v14];
    v16 = (_QWORD *)v13[v14];
    if ( v16 )
    {
      *(_QWORD *)v8 = *v16;
      **v15 = v8;
    }
    else
    {
      v25 = a1[2];
      a1[2] = v8;
      *(_QWORD *)v8 = v25;
      if ( v25 )
      {
        v13[*(_QWORD *)(v25 + 48) % (unsigned __int64)a1[1]] = v8;
        v15 = (__int64 **)(v14 * 8 + *a1);
      }
      *v15 = a1 + 2;
    }
    ++a1[3];
  }
  return (__int64 *)(v8 + 16);
}
// 44BDA0: variable 'v12' is possibly undefined
// 4C96C0: using guessed type unsigned __int64 std::string::_Rep::_S_empty_rep_storage[4];
