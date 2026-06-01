__m128i *__fastcall sub_DA5410(__m128i *a1, _QWORD *a2, __int64 a3)
{
  char **v3; // r14
  void *exception; // r14
  void *v5; // r14
  __int64 v6; // rax
  __int64 v8; // rbp
  _OWORD *v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rdi
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // r12
  _QWORD *v15; // rbp
  __int64 **v16; // r13
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rdx
  char v23; // al
  int v24; // eax
  __int64 **v25; // r15
  __int64 v26; // rax
  __m128 v27; // xmm1
  __int64 **v28; // r14
  __int64 **v29; // rax
  __int64 *v30; // r15
  __int64 *v31; // r14
  __int64 v32; // rsi
  __m128i *result; // rax
  int v34; // r9d
  __int64 v35; // rdx
  __int64 **v36; // r10
  __int64 **i; // rdx
  __int64 *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 **v42; // rdx
  __int64 *v43; // rcx
  unsigned int v44; // r14d
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int *v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int *v51; // rdx
  __int64 v52; // rdx
  int v53; // eax
  _QWORD *v54; // rbp
  __m128i v55; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v56; // [rsp+18h] [rbp-C0h]
  __m128i *v57; // [rsp+20h] [rbp-B8h]
  _QWORD *v58; // [rsp+28h] [rbp-B0h]
  unsigned int *v59; // [rsp+30h] [rbp-A8h]
  __int64 v60; // [rsp+38h] [rbp-A0h]
  __int64 v61[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v62; // [rsp+70h] [rbp-68h] BYREF
  __int64 v63; // [rsp+78h] [rbp-60h]
  _QWORD *v64; // [rsp+80h] [rbp-58h]
  void *ptr; // [rsp+88h] [rbp-50h]
  __int64 v66; // [rsp+90h] [rbp-48h]
  int v67; // [rsp+98h] [rbp-40h]

  v8 = *a2;
  v57 = a1;
  v58 = a2;
  v9 = (_OWORD *)sub_186B270(0x80u);
  v10 = a3;
  v67 = 0;
  ptr = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v11 = &v62;
  v55.m128i_i64[0] = (__int64)&v62;
  v62 = v8;
  v63 = 0;
  v64 = nullptr;
  v66 = 8;
  v12 = sub_DAE860(&v62, a3);
  v13 = v62;
  v14 = v63;
  v15 = v64;
  v16 = (__int64 **)ptr;
  v17 = (unsigned int)v66;
  if ( !v12 && v63 )
  {
    v18 = *(_DWORD *)(v63 - 4);
LABEL_4:
    if ( !v18 )
      goto LABEL_16;
    do
    {
LABEL_5:
      if ( *(_QWORD *)(v13 + 672) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v11, v10) )
      {
        exception = __cxa_allocate_exception(0x28u);
        sub_DA7950(exception, off_1C7E178);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'aig_exception, sub_DA72D0);
      }
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(v13 + 104)) )
      {
        v5 = __cxa_allocate_exception(0x28u);
        v6 = sub_1829130(*(_QWORD *)(v13 + 104));
        sub_DA7950(v5, v6);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'aig_exception, sub_DA72D0);
      }
      v19 = 0xFFFFFFFF0LL;
      if ( v14 )
        v19 = 16LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
      v20 = v14 + v19;
      v21 = *(_DWORD *)(v14 + v19 + 8);
      v11 = *(__int64 **)(v14 + v19);
      if ( !v21 && *((_DWORD *)v11 + 2) > 1u )
      {
        v34 = *((_DWORD *)v11 + 3);
        v10 = 16LL * (unsigned int)v17;
        v35 = 16LL * (v34 & (unsigned int)(v17 - 1));
        v36 = &v16[(unsigned __int64)v35 / 8];
        if ( v35 != v10 )
        {
          for ( i = &v16[(unsigned __int64)v35 / 8]; (__int64 **)((char *)v16 + v10) != i; i += 2 )
          {
            v38 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *((_DWORD *)v38 + 3) == v34 && v38 == v11 )
              {
LABEL_42:
                v56 = i[1];
                ++*(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFELL) + 4);
                if ( v15 )
                {
                  v39 = *((_DWORD *)v15 - 1);
                  if ( v39 == *((_DWORD *)v15 - 2) )
                  {
                    v44 = (3 * v39 + 1) >> 1;
                    v45 = 8 * v44 + 8;
                    if ( 8 * v39 + 8 >= v45 || v39 >= v44 )
                    {
                      v56 = v61;
                      v3 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v61, "Overflow encountered when expanding vector");
                      *v3 = (char *)off_1C63128;
                      sub_2333C0(v3 + 1, v61);
                      sub_233E40((__int64)v56);
                      __cxa_throw(
                        v3,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v46 = sub_186B270(v45);
                    v47 = *((unsigned int *)v15 - 1);
                    v48 = (unsigned int *)v46;
                    v10 = v46 + 8;
                    *(_DWORD *)(v46 + 4) = v47;
                    v49 = 0;
                    v50 = 8 * v47;
                    if ( v50 )
                    {
                      do
                      {
                        *(_QWORD *)&v48[v49 / 4 + 2] = v15[v49 / 8];
                        v49 += 8LL;
                      }
                      while ( v49 != v50 );
                    }
                    v11 = v15 - 1;
                    v60 = v10;
                    v59 = v48;
                    sub_186B220(v15 - 1);
                    v51 = v59;
                    *v59 = v44;
                    v52 = v51[1];
                    v15 = (_QWORD *)v10;
                    v53 = v52;
                    v42 = (__int64 **)(v10 + 8 * v52);
                    v41 = v53 + 1;
                  }
                  else
                  {
                    v40 = v39;
                    v41 = v39 + 1;
                    v42 = (__int64 **)&v15[v40];
                  }
                }
                else
                {
                  v11 = &qword_18;
                  v54 = (_QWORD *)sub_186B270(0x18u);
                  *v54 = 2;
                  v41 = 1;
                  v15 = v54 + 1;
                  v42 = (__int64 **)v15;
                }
                *v42 = v56;
                *((_DWORD *)v15 - 1) = v41;
                v18 = *(_DWORD *)(v14 - 4) - 1;
                *(_DWORD *)(v14 - 4) = v18;
                goto LABEL_4;
              }
            }
            else if ( !v38 )
            {
              goto LABEL_11;
            }
          }
        }
        if ( v16 != v36 )
        {
          for ( i = v16; v36 != i; i += 2 )
          {
            v43 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *((_DWORD *)v43 + 3) == v34 && v43 == v11 )
                goto LABEL_42;
            }
            else if ( !v43 )
            {
              break;
            }
          }
        }
      }
LABEL_11:
      LODWORD(v56) = *((_DWORD *)v11 + 6);
      while ( v21 < (unsigned int)v56 )
      {
        v22 = *(_QWORD *)v20;
        v11 = (__int64 *)v55.m128i_i64[0];
        v62 = v13;
        v10 = *(_QWORD *)(v22 + 8LL * v21 + 32);
        *(_DWORD *)(v20 + 8) = v21 + 1;
        v63 = v14;
        v64 = v15;
        ptr = v16;
        LODWORD(v66) = v17;
        v23 = sub_DAE860(v11, v10);
        v13 = v62;
        v14 = v63;
        v15 = v64;
        v16 = (__int64 **)ptr;
        v17 = (unsigned int)v66;
        if ( !v23 )
          goto LABEL_5;
        v21 = *(_DWORD *)(v20 + 8);
      }
      v11 = (__int64 *)v55.m128i_i64[0];
      v10 = v20;
      v62 = v13;
      v63 = v14;
      v64 = v15;
      ptr = v16;
      LODWORD(v66) = v17;
      sub_DAD020(v55.m128i_i64[0], v20);
      v14 = v63;
      v13 = v62;
      v15 = v64;
      v16 = (__int64 **)ptr;
      v17 = (unsigned int)v66;
      v24 = *(_DWORD *)(v63 - 4) - 1;
      *(_DWORD *)(v63 - 4) = v24;
    }
    while ( v24 );
  }
LABEL_16:
  v25 = &v16[2 * v17];
  v26 = (unsigned int)(*((_DWORD *)v15 - 1) - 1);
  v27 = _mm_loadh_ps((const double *)&v15[(unsigned int)v26]);
  *((_DWORD *)v15 - 1) = v26;
  v55 = (__m128i)v27;
  if ( v16 != v25 )
  {
    v28 = v16;
    while ( (unsigned __int64)*v28 <= 1 )
    {
      v28 += 2;
      if ( v25 == v28 )
        goto LABEL_27;
    }
    if ( v25 != v28 )
    {
      do
      {
        sub_DAAB00(v13, (unsigned __int64)v28[1] & 0xFFFFFFFFFFFFFFFELL);
        v29 = v28 + 2;
        if ( v25 == v28 + 2 )
          break;
        while ( 1 )
        {
          v28 = v29;
          if ( (unsigned __int64)*v29 > 1 )
            break;
          v29 += 2;
          if ( v25 == v29 )
            goto LABEL_26;
        }
      }
      while ( v25 != v29 );
LABEL_26:
      v26 = *((unsigned int *)v15 - 1);
    }
  }
LABEL_27:
  v30 = v15;
  v31 = &v15[v26];
  if ( (_DWORD)v26 )
  {
    do
    {
      v32 = *v30++;
      sub_DAAB00(v13, v32 & 0xFFFFFFFFFFFFFFFELL);
    }
    while ( v31 != v30 );
  }
  *((_DWORD *)v15 - 1) = 0;
  if ( v16 )
    sub_186B220(v16);
  sub_186B220(v15 - 1);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  result = v57;
  *v57 = _mm_load_si128(&v55);
  return result;
}

