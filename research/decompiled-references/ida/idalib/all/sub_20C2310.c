int __fastcall sub_20C2310(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // rbx
  double v5; // xmm0_8
  unsigned __int64 v6; // rsi
  unsigned __int64 bkt; // rax
  unsigned __int64 v8; // r14
  void *v9; // rax
  void *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 *v12; // rax
  unsigned __int64 v13; // r14
  __int64 *v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  __int64 **v17; // r13
  _QWORD *v18; // rcx
  __int64 v19; // rbp
  unsigned __int64 v20; // r15
  __int64 *v21; // rsi
  size_t v22; // rdx
  _QWORD *v23; // rax
  _BYTE *v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // r13
  char v27; // al
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r10
  _QWORD *v30; // r14
  unsigned __int64 *v31; // r15
  _QWORD *v32; // rax
  size_t v33; // r15
  _QWORD *v34; // rcx
  unsigned __int64 v35; // rdi
  _QWORD *v36; // r8
  unsigned __int64 v37; // rdx
  _QWORD **v38; // rax
  __int64 v39; // rax
  _QWORD *v42; // [rsp+8h] [rbp-60h]
  unsigned __int64 v43; // [rsp+8h] [rbp-60h]
  unsigned __int64 v44; // [rsp+8h] [rbp-60h]
  std::__detail::_Prime_rehash_policy *v45; // [rsp+10h] [rbp-58h]
  _QWORD *v46; // [rsp+18h] [rbp-50h]
  _QWORD *v47; // [rsp+20h] [rbp-48h]

  v3 = a1;
  v4 = a2;
  *a1 = a1 + 6;
  v47 = a1 + 6;
  v45 = (std::__detail::_Prime_rehash_policy *)(a1 + 4);
  a1[1] = 1;
  a1[2] = 0;
  a1[3] = 0;
  *((_DWORD *)a1 + 8) = 1065353216;
  a1[5] = 0;
  a1[6] = 0;
  v5 = (double)(unsigned __int64)((a3 - a2) >> 5);
  if ( v5 >= 9.223372036854776e18 )
    v6 = (unsigned int)(int)(v5 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v6 = (unsigned int)(int)v5;
  bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt((std::__detail::_Prime_rehash_policy *)(a1 + 4), v6);
  v8 = bkt;
  if ( bkt > a1[1] )
  {
    if ( bkt == 1 )
    {
      a1[6] = 0;
      v10 = a1 + 6;
    }
    else
    {
      if ( bkt > 0x1FFFFFFFFFFFFFFFLL )
        goto LABEL_45;
      v9 = (void *)operator new(8 * bkt);
      v10 = memset(v9, 0, 8 * v8);
    }
    *a1 = v10;
    a1[1] = v8;
  }
  LODWORD(v11) = (_DWORD)a1 + 16;
  v46 = a1 + 2;
  while ( a3 != v4 )
  {
    v12 = (__int64 *)std::_Hash_bytes(*(const void **)v4, *(_QWORD *)(v4 + 8), 0xC70F6907);
    v13 = v3[1];
    v14 = v12;
    v15 = (unsigned __int64)v12 % v13;
    v11 = *(_QWORD *)(*v3 + 8 * ((unsigned __int64)v12 % v13));
    v16 = 8 * v15;
    if ( !v11 )
      goto LABEL_21;
    v17 = *(__int64 ***)v11;
    v18 = v3;
    v19 = 8 * v15;
    v20 = v15;
    v21 = *(__int64 **)(*(_QWORD *)v11 + 40LL);
    while ( 1 )
    {
      if ( v14 == v21 )
      {
        v22 = *(_QWORD *)(v4 + 8);
        if ( (__int64 *)v22 == v17[2] )
        {
          if ( !v22 )
            break;
          v42 = v18;
          LODWORD(v11) = memcmp(*(const void **)v4, v17[1], v22);
          v18 = v42;
          if ( !(_DWORD)v11 )
            break;
        }
      }
      v17 = (__int64 **)*v17;
      if ( v17 )
      {
        v21 = v17[5];
        v11 = (unsigned __int64)v21 / v13;
        if ( v20 == (unsigned __int64)v21 % v13 )
          continue;
      }
      v16 = v19;
      v3 = v18;
LABEL_21:
      v23 = (_QWORD *)operator new(0x30u);
      v24 = *(_BYTE **)v4;
      v25 = *(_QWORD *)(v4 + 8);
      *v23 = 0;
      v26 = v23;
      v23[1] = v23 + 3;
      sub_20C2250(v23 + 1, v24, (__int64)&v24[v25]);
      v27 = std::__detail::_Prime_rehash_policy::_M_need_rehash(v45, v3[1], v3[3], 1u);
      v29 = v28;
      if ( !v27 )
      {
        v30 = (_QWORD *)*v3;
        v26[5] = v14;
        v31 = (_QWORD *)((char *)v30 + v16);
        v32 = (_QWORD *)*v31;
        if ( *v31 )
          goto LABEL_23;
LABEL_38:
        v39 = v3[2];
        v3[2] = v26;
        *v26 = v39;
        if ( v39 )
          v30[*(_QWORD *)(v39 + 40) % v3[1]] = v26;
        LODWORD(v11) = (_DWORD)v46;
        *v31 = (unsigned __int64)v46;
        goto LABEL_24;
      }
      if ( v28 != 1 )
      {
        if ( v28 <= 0x1FFFFFFFFFFFFFFFLL )
        {
          v33 = 8 * v28;
          v43 = v28;
          v30 = (_QWORD *)operator new(8 * v28);
          memset(v30, 0, v33);
          v29 = v43;
          goto LABEL_28;
        }
LABEL_45:
        std::__throw_bad_alloc();
      }
      v3[6] = 0;
      v30 = v47;
LABEL_28:
      v34 = (_QWORD *)v3[2];
      v3[2] = 0;
      if ( !v34 )
      {
LABEL_35:
        if ( v47 != (_QWORD *)*v3 )
        {
          v44 = v29;
          operator delete((void *)*v3);
          v29 = v44;
        }
        v3[1] = v29;
        *v3 = v30;
        v26[5] = v14;
        v31 = &v30[(unsigned __int64)v14 % v29];
        v32 = (_QWORD *)*v31;
        if ( !*v31 )
          goto LABEL_38;
LABEL_23:
        *v26 = *v32;
        v11 = *v31;
        *(_QWORD *)*v31 = v26;
LABEL_24:
        ++v3[3];
        goto LABEL_18;
      }
      v35 = 0;
      while ( 1 )
      {
        v36 = (_QWORD *)*v34;
        v37 = v34[5] % v29;
        v38 = (_QWORD **)&v30[v37];
        if ( *v38 )
          break;
        *v34 = v3[2];
        v3[2] = v34;
        *v38 = v46;
        if ( !*v34 )
        {
          v35 = v37;
LABEL_31:
          v34 = v36;
          if ( !v36 )
            goto LABEL_35;
          continue;
        }
        v30[v35] = v34;
        v35 = v37;
        v34 = v36;
        if ( !v36 )
          goto LABEL_35;
      }
      *v34 = **v38;
      **v38 = v34;
      goto LABEL_31;
    }
    v3 = v18;
LABEL_18:
    v4 += 32;
  }
  return v11;
}
