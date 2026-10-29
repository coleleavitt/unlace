void __fastcall sub_2276410(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  void *v7; // rax
  void *v8; // rdx
  char *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rcx
  void *v13; // r15
  const void *v14; // r12
  char *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // r13
  _QWORD *v20; // rbp
  void *v21; // r10
  size_t v22; // rdx
  int v23; // eax
  void *v24; // rcx
  size_t v25; // rdx
  int v26; // eax
  __int64 *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // r12
  __int64 v32; // rdi
  void *v33; // rdi
  const void *v34; // rsi
  size_t v35; // rdx
  __int64 v36; // rcx
  char *v37; // [rsp+8h] [rbp-C0h]
  __int64 v38; // [rsp+10h] [rbp-B8h]
  _QWORD *v39; // [rsp+20h] [rbp-A8h]
  void *v40; // [rsp+20h] [rbp-A8h]
  _QWORD *v41; // [rsp+20h] [rbp-A8h]
  void *v42; // [rsp+28h] [rbp-A0h]
  void *s2[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v44; // [rsp+40h] [rbp-88h] BYREF
  char *v45; // [rsp+48h] [rbp-80h]
  char v46[8]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v47; // [rsp+58h] [rbp-70h] BYREF
  void *v48; // [rsp+68h] [rbp-60h]
  __int64 v49; // [rsp+78h] [rbp-50h] BYREF

  sub_2273D80((__int64)v46, **(__m128 ***)a1, a3, a4, a5, a6);
  *(__m128i *)s2 = _mm_loadu_si128(&v47);
  v7 = (void *)sub_2246EC0((__int64 *)s2, (unsigned __int8 *)" \t", 2, 0);
  v8 = s2[1];
  v9 = nullptr;
  if ( v7 <= s2[1] )
  {
    v8 = v7;
    v9 = (char *)((char *)s2[1] - (char *)v7);
  }
  v45 = v9;
  v44 = (__int64)s2[0] + (unsigned __int64)v8;
  v10 = sub_2246FB0(&v44, (unsigned __int8 *)" \t", 2, 0);
  v11 = (unsigned __int64)v45;
  v12 = nullptr;
  if ( v10 < (unsigned __int64)v45 )
  {
    v11 = v10;
    v12 = &v45[-v10];
  }
  s2[1] = v12;
  s2[0] = (void *)(v44 + v11);
  v13 = (void *)sub_2246EC0((__int64 *)s2, (unsigned __int8 *)" \t", 2, 0);
  if ( v13 > s2[1] )
  {
    v13 = s2[1];
    v14 = s2[0];
    v15 = nullptr;
  }
  else
  {
    v14 = s2[0];
    v15 = (char *)((char *)s2[1] - (char *)v13);
  }
  v44 = (__int64)v13 + (_QWORD)v14;
  v45 = v15;
  v16 = sub_2246FB0(&v44, (unsigned __int8 *)" \t", 2, 0);
  v17 = (unsigned __int64)v45;
  v37 = nullptr;
  if ( v16 < (unsigned __int64)v45 )
  {
    v37 = &v45[-v16];
    v17 = v16;
  }
  v18 = *(_QWORD **)(a1 + 128);
  v19 = (_QWORD *)(a1 + 120);
  v38 = v44 + v17;
  v20 = (_QWORD *)(a1 + 120);
  if ( !v18 )
    goto LABEL_33;
  do
  {
    while ( 1 )
    {
      v21 = (void *)v18[5];
      v22 = (size_t)v13;
      if ( v21 <= v13 )
        v22 = v18[5];
      if ( v22 )
      {
        v42 = (void *)v18[5];
        v39 = v18;
        v23 = memcmp((const void *)v18[4], v14, v22);
        v18 = v39;
        v21 = v42;
        if ( v23 )
          break;
      }
      if ( v21 == v13 || v21 >= v13 )
      {
        v20 = v18;
        v18 = (_QWORD *)v18[2];
        goto LABEL_19;
      }
LABEL_11:
      v18 = (_QWORD *)v18[3];
      if ( !v18 )
        goto LABEL_20;
    }
    if ( v23 < 0 )
      goto LABEL_11;
    v20 = v39;
    v18 = (_QWORD *)v39[2];
LABEL_19:
    ;
  }
  while ( v18 );
LABEL_20:
  if ( v19 == v20 )
    goto LABEL_33;
  v24 = (void *)v20[5];
  v25 = (size_t)v13;
  if ( v24 <= v13 )
    v25 = v20[5];
  if ( v25 && (v40 = (void *)v20[5], v26 = memcmp(v14, (const void *)v20[4], v25), v24 = v40, v26) )
  {
    if ( v26 < 0 )
      goto LABEL_33;
  }
  else
  {
    if ( v24 == v13 || v24 <= v13 )
      goto LABEL_27;
LABEL_33:
    v41 = v20;
    v28 = operator new(0x40u);
    *(_QWORD *)(v28 + 32) = v14;
    v20 = (_QWORD *)v28;
    *(_QWORD *)(v28 + 40) = v13;
    *(_QWORD *)(v28 + 48) = 0;
    *(_QWORD *)(v28 + 56) = 0;
    v29 = sub_2276130((_QWORD *)(a1 + 112), v41, (const void **)(v28 + 32));
    v31 = v30;
    if ( v30 )
    {
      if ( v19 == v30 || v29 )
      {
        v32 = 1;
      }
      else
      {
        v34 = (const void *)v30[4];
        v35 = v30[5];
        v36 = v20[4];
        v45 = (char *)v20[5];
        v44 = v36;
        v32 = (unsigned int)sub_9C4B00((__int64)&v44, v34, v35) >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v32, v20, v31, a1 + 120);
      ++*(_QWORD *)(a1 + 152);
    }
    else
    {
      v33 = v20;
      v20 = (_QWORD *)v29;
      operator delete(v33);
    }
  }
LABEL_27:
  v27 = (__int64 *)v48;
  v20[6] = v38;
  v20[7] = v37;
  if ( v27 != &v49 )
    operator delete(v27);
}
