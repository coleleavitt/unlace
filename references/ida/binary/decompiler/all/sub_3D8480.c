__int64 __fastcall sub_3D8480(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r14
  __m128i v3; // xmm0
  _QWORD *v4; // rbx
  void *v5; // rdi
  _QWORD *v7; // r10
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r8
  _QWORD *v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // r15
  __int64 v21; // r12
  void ***v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r8
  size_t v26; // r12
  void **v27; // rsi
  unsigned __int64 v28; // rdi
  void **v29; // rcx
  unsigned __int64 v30; // rdx
  void ***v31; // rax
  _QWORD *v32; // rdx
  unsigned __int64 v33; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+18h] [rbp-A8h]
  __int64 v36; // [rsp+28h] [rbp-98h] BYREF
  __m128i v37; // [rsp+30h] [rbp-90h] BYREF
  void *s; // [rsp+48h] [rbp-78h]
  unsigned __int64 v39; // [rsp+50h] [rbp-70h]
  void *i; // [rsp+58h] [rbp-68h] BYREF
  unsigned __int64 v41[2]; // [rsp+60h] [rbp-60h] BYREF
  __int128 v42; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  *(_OWORD *)v41 = 0;
  s = (char *)&v42 + 8;
  v39 = 1;
  i = 0;
  LODWORD(v41[1]) = 1065353216;
  v42 = 0;
  v1 = netnode_altval();
  v2 = v1 - 1;
  if ( v1 )
  {
    if ( v41[0] )
    {
      v7 = (_QWORD *)*((_QWORD *)s + v2 % v39);
      v8 = v2 % v39;
      v24 = v2 % v39;
      if ( v7 )
      {
        v9 = (_QWORD *)*v7;
        v10 = (_QWORD *)*((_QWORD *)s + v2 % v39);
        v11 = (_QWORD *)*v7;
        if ( *(_QWORD *)(*v7 + 8LL) == v2 )
        {
LABEL_17:
          if ( v10 && *v10 )
          {
LABEL_4:
            sub_3D8380((__int64)&v36);
            *(_QWORD *)a1 = v36;
            v3 = _mm_loadu_si128(&v37);
            *(_BYTE *)(a1 + 24) = 1;
            *(__m128i *)(a1 + 8) = v3;
            goto LABEL_5;
          }
        }
        else
        {
          while ( 1 )
          {
            v12 = *v11;
            if ( !*v11 )
              break;
            v10 = v11;
            if ( v8 != *(_QWORD *)(v12 + 8) % v39 )
              break;
            v11 = (_QWORD *)*v11;
            if ( *(_QWORD *)(v12 + 8) == v2 )
              goto LABEL_17;
          }
        }
        if ( *(_QWORD *)(*v7 + 8LL) == v2 )
        {
LABEL_23:
          if ( v7 && *v7 )
          {
LABEL_10:
            if ( !netnode_altval() )
            {
              v37 = 0;
              v36 = 0;
              netnode_qsupstr();
            }
            goto LABEL_4;
          }
        }
        else
        {
          while ( 1 )
          {
            v13 = (_QWORD *)*v9;
            if ( !*v9 )
              break;
            v7 = v9;
            if ( v8 != v13[1] % v39 )
              break;
            v9 = (_QWORD *)*v9;
            if ( v13[1] == v2 )
              goto LABEL_23;
          }
        }
      }
    }
    else
    {
      v24 = v2 % v39;
    }
    v14 = (_QWORD *)operator new(0x10u);
    *v14 = 0;
    v15 = v41[0];
    v16 = v14;
    v17 = v39;
    v14[1] = v2;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)&v41[1],
                            v17,
                            v15,
                            1u) )
    {
      v25 = v18;
      if ( v18 == 1 )
      {
        *((_QWORD *)&v42 + 1) = 0;
        v20 = (char *)&v42 + 8;
      }
      else
      {
        if ( v18 > 0xFFFFFFFFFFFFFFFLL )
        {
          if ( v18 >> 61 )
            sub_5F50F(&v41[1], v17, v18, v19);
          std::__throw_bad_alloc();
        }
        v26 = 8 * v18;
        v33 = v18;
        v20 = (char *)operator new(8 * v18);
        memset(v20, 0, v26);
        v25 = v33;
      }
      v27 = (void **)i;
      v28 = 0;
      for ( i = 0; v27; v28 = v30 )
      {
        while ( 1 )
        {
          v29 = v27;
          v27 = (void **)*v27;
          v30 = (unsigned __int64)v29[1] % v25;
          v31 = (void ***)&v20[8 * v30];
          if ( !*v31 )
            break;
          *v29 = **v31;
          **v31 = v29;
          if ( !v27 )
            goto LABEL_39;
        }
        *v29 = i;
        i = v29;
        *v31 = &i;
        if ( *v29 )
          *(_QWORD *)&v20[8 * v28] = v29;
      }
LABEL_39:
      if ( s != (char *)&v42 + 8 )
      {
        v34 = v25;
        operator delete(s, 8 * v39);
        v25 = v34;
      }
      v39 = v25;
      s = v20;
      v21 = 8 * (v2 % v25);
      v22 = (void ***)&v20[v21];
      v23 = *(_QWORD **)&v20[v21];
      if ( v23 )
        goto LABEL_27;
    }
    else
    {
      v20 = (char *)s;
      v21 = 8 * v24;
      v22 = (void ***)((char *)s + v21);
      v23 = *(_QWORD **)((char *)s + v21);
      if ( v23 )
      {
LABEL_27:
        *v16 = *v23;
        **v22 = v16;
LABEL_28:
        ++v41[0];
        goto LABEL_10;
      }
    }
    v32 = i;
    i = v16;
    *v16 = v32;
    if ( v32 )
    {
      *(_QWORD *)&v20[8 * (v32[1] % v39)] = v16;
      v22 = (void ***)((char *)s + v21);
    }
    *v22 = &i;
    goto LABEL_28;
  }
  *(_BYTE *)(a1 + 24) = 0;
LABEL_5:
  v4 = i;
  if ( i )
  {
    do
    {
      v5 = v4;
      v4 = (_QWORD *)*v4;
      operator delete(v5, 0x10u);
    }
    while ( v4 );
  }
  memset(s, 0, 8 * v39);
  v41[0] = 0;
  i = 0;
  if ( s != (char *)&v42 + 8 )
    operator delete(s, 8 * v39);
  return a1;
}
