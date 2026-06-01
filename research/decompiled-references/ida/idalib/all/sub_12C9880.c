void __fastcall sub_12C9880(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r13
  _QWORD *v6; // r14
  __m128i *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rdi
  __m128i *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _OWORD *v14; // rdi
  __m128i *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _OWORD *v18; // rdi
  __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _OWORD *v22; // rdi
  __m128i *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _OWORD *v26; // rdi
  __m128i *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _OWORD *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r13
  _QWORD *v35; // r14
  __int64 v36; // r15
  char *v37; // r14
  size_t v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+8h] [rbp-140h]
  __int64 v41; // [rsp+8h] [rbp-140h]
  __int64 v42; // [rsp+8h] [rbp-140h]
  __int64 v43; // [rsp+8h] [rbp-140h]
  __int64 v44; // [rsp+8h] [rbp-140h]
  __int64 v45; // [rsp+8h] [rbp-140h]
  void *v46[2]; // [rsp+10h] [rbp-138h] BYREF
  _BYTE v47[16]; // [rsp+20h] [rbp-128h] BYREF
  void *v48[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v49; // [rsp+40h] [rbp-108h] BYREF
  void *v50[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-E8h] BYREF
  void *v52[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+80h] [rbp-C8h] BYREF
  void *v54[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-A8h] BYREF
  void *v56[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-88h] BYREF
  void *v58[2]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-68h] BYREF
  void *v60; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-50h]
  _OWORD v62[4]; // [rsp+100h] [rbp-48h] BYREF

  LODWORD(v60) = 2984;
  v3 = sub_21B6DA0(a1, &v60, 1);
  v4 = a1[1];
  v5 = (_QWORD *)(v4 + 8LL * (unsigned int)v3);
  v6 = (_QWORD *)(v4 + 8 * HIDWORD(v3));
  if ( v5 != v6 )
  {
    while ( !*v5 || !(unsigned __int8)sub_21B9810(*v5, 2984) )
    {
      if ( v6 == ++v5 )
        goto LABEL_5;
    }
    if ( v6 != v5 )
    {
      do
      {
        v31 = *v5;
        if ( *(_QWORD *)(*v5 + 16LL) )
          v31 = *(_QWORD *)(*v5 + 16LL);
        ++v5;
        *(_BYTE *)(v31 + 44) |= 1u;
        if ( v5 == v6 )
          break;
        while ( !*v5 || !(unsigned __int8)sub_21B9810(*v5, 2984) )
        {
          if ( v6 == ++v5 )
            goto LABEL_70;
        }
      }
      while ( v6 != v5 );
LABEL_70:
      LODWORD(v60) = 2984;
      v32 = sub_21B6DA0(a1, &v60, 1);
      v33 = a1[1];
      v34 = (_QWORD *)(v33 + 8LL * (unsigned int)v32);
      v35 = (_QWORD *)(v33 + 8 * HIDWORD(v32));
      if ( v34 == v35 )
        goto LABEL_74;
      while ( !*v34 || !(unsigned __int8)sub_21B9810(*v34, 2984) )
      {
        if ( v35 == ++v34 )
          goto LABEL_74;
      }
      if ( v35 == v34 )
      {
LABEL_74:
        v36 = 0;
      }
      else
      {
        while ( 2 )
        {
          v36 = *v34;
          v39 = *(_QWORD *)(*v34 + 16LL);
          if ( !v39 )
            v39 = *v34;
          ++v34;
          *(_BYTE *)(v39 + 44) |= 1u;
          if ( v34 != v35 )
          {
            while ( !*v34 || !(unsigned __int8)sub_21B9810(*v34, 2984) )
            {
              if ( v35 == ++v34 )
              {
                v37 = **(char ***)(v36 + 48);
                if ( v37 )
                  goto LABEL_76;
                goto LABEL_5;
              }
            }
            if ( v35 != v34 )
              continue;
          }
          break;
        }
      }
      v37 = **(char ***)(v36 + 48);
      if ( v37 )
      {
LABEL_76:
        v38 = strlen(v37);
        if ( v38 )
        {
          v46[0] = v47;
          sub_12C84A0(v46, v37, (__int64)&v37[v38]);
          goto LABEL_6;
        }
      }
    }
  }
LABEL_5:
  sub_12C8560(v46, (__int64)a1);
LABEL_6:
  sub_C05100((__int64)v58, "//'", (__int64)v46);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v58[1] <= 0x12 )
    goto LABEL_97;
  v7 = (__m128i *)sub_9EE560(v58, ".SCEELIB(CRTDQCXE)'", 0x13u);
  v60 = v62;
  if ( (__m128i *)v7->m128i_i64[0] == &v7[1] )
  {
    v62[0] = _mm_loadu_si128(v7 + 1);
  }
  else
  {
    v60 = (void *)v7->m128i_i64[0];
    *(_QWORD *)&v62[0] = v7[1].m128i_i64[0];
  }
  v61 = v7->m128i_i64[1];
  v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
  v7->m128i_i64[1] = 0;
  v7[1].m128i_i8[0] = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 16LL))(a1, v60, v61);
  v9 = *(unsigned int *)(a2 + 8);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    v40 = v8;
    sub_2237220(a2, a2 + 16, v9 + 1, 8);
    v9 = *(unsigned int *)(a2 + 8);
    v8 = v40;
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v9) = v8;
  v10 = v60;
  ++*(_DWORD *)(a2 + 8);
  if ( v10 != v62 )
    operator delete(v10);
  if ( v58[0] != &v59 )
    operator delete(v58[0]);
  sub_C05100((__int64)v56, "//'", (__int64)v46);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v56[1] <= 0x12 )
    goto LABEL_97;
  v11 = (__m128i *)sub_9EE560(v56, ".SCEELIB(CRTDQCXS)'", 0x13u);
  v60 = v62;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v62[0] = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v60 = (void *)v11->m128i_i64[0];
    *(_QWORD *)&v62[0] = v11[1].m128i_i64[0];
  }
  v61 = v11->m128i_i64[1];
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0;
  v11[1].m128i_i8[0] = 0;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 16LL))(a1, v60, v61);
  v13 = *(unsigned int *)(a2 + 8);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    v42 = v12;
    sub_2237220(a2, a2 + 16, v13 + 1, 8);
    v13 = *(unsigned int *)(a2 + 8);
    v12 = v42;
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v13) = v12;
  v14 = v60;
  ++*(_DWORD *)(a2 + 8);
  if ( v14 != v62 )
    operator delete(v14);
  if ( v56[0] != &v57 )
    operator delete(v56[0]);
  sub_C05100((__int64)v54, "//'", (__int64)v46);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v54[1] <= 0x12 )
    goto LABEL_97;
  v15 = (__m128i *)sub_9EE560(v54, ".SCEELIB(CRTDQCXP)'", 0x13u);
  v60 = v62;
  if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
  {
    v62[0] = _mm_loadu_si128(v15 + 1);
  }
  else
  {
    v60 = (void *)v15->m128i_i64[0];
    *(_QWORD *)&v62[0] = v15[1].m128i_i64[0];
  }
  v61 = v15->m128i_i64[1];
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  v15->m128i_i64[1] = 0;
  v15[1].m128i_i8[0] = 0;
  v16 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 16LL))(a1, v60, v61);
  v17 = *(unsigned int *)(a2 + 8);
  if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    v41 = v16;
    sub_2237220(a2, a2 + 16, v17 + 1, 8);
    v17 = *(unsigned int *)(a2 + 8);
    v16 = v41;
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v17) = v16;
  v18 = v60;
  ++*(_DWORD *)(a2 + 8);
  if ( v18 != v62 )
    operator delete(v18);
  if ( v54[0] != &v55 )
    operator delete(v54[0]);
  sub_C05100((__int64)v52, "//'", (__int64)v46);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v52[1] <= 0x12 )
    goto LABEL_97;
  v19 = (__m128i *)sub_9EE560(v52, ".SCEELIB(CRTDQCXA)'", 0x13u);
  v60 = v62;
  if ( (__m128i *)v19->m128i_i64[0] == &v19[1] )
  {
    v62[0] = _mm_loadu_si128(v19 + 1);
  }
  else
  {
    v60 = (void *)v19->m128i_i64[0];
    *(_QWORD *)&v62[0] = v19[1].m128i_i64[0];
  }
  v61 = v19->m128i_i64[1];
  v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
  v19->m128i_i64[1] = 0;
  v19[1].m128i_i8[0] = 0;
  v20 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 16LL))(a1, v60, v61);
  v21 = *(unsigned int *)(a2 + 8);
  if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    v44 = v20;
    sub_2237220(a2, a2 + 16, v21 + 1, 8);
    v21 = *(unsigned int *)(a2 + 8);
    v20 = v44;
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v21) = v20;
  v22 = v60;
  ++*(_DWORD *)(a2 + 8);
  if ( v22 != v62 )
    operator delete(v22);
  if ( v52[0] != &v53 )
    operator delete(v52[0]);
  sub_C05100((__int64)v50, "//'", (__int64)v46);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v50[1] <= 0x12 )
    goto LABEL_97;
  v23 = (__m128i *)sub_9EE560(v50, ".SCEELIB(CRTDQXLA)'", 0x13u);
  v60 = v62;
  if ( (__m128i *)v23->m128i_i64[0] == &v23[1] )
  {
    v62[0] = _mm_loadu_si128(v23 + 1);
  }
  else
  {
    v60 = (void *)v23->m128i_i64[0];
    *(_QWORD *)&v62[0] = v23[1].m128i_i64[0];
  }
  v61 = v23->m128i_i64[1];
  v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
  v23->m128i_i64[1] = 0;
  v23[1].m128i_i8[0] = 0;
  v24 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 16LL))(a1, v60, v61);
  v25 = *(unsigned int *)(a2 + 8);
  if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    v43 = v24;
    sub_2237220(a2, a2 + 16, v25 + 1, 8);
    v25 = *(unsigned int *)(a2 + 8);
    v24 = v43;
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v25) = v24;
  v26 = v60;
  ++*(_DWORD *)(a2 + 8);
  if ( v26 != v62 )
    operator delete(v26);
  if ( v50[0] != &v51 )
    operator delete(v50[0]);
  sub_C05100((__int64)v48, "//'", (__int64)v46);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v48[1] <= 0x12 )
LABEL_97:
    std::__throw_length_error("basic_string::append");
  v27 = (__m128i *)sub_9EE560(v48, ".SCEELIB(CRTDQUNW)'", 0x13u);
  v60 = v62;
  if ( (__m128i *)v27->m128i_i64[0] == &v27[1] )
  {
    v62[0] = _mm_loadu_si128(v27 + 1);
  }
  else
  {
    v60 = (void *)v27->m128i_i64[0];
    *(_QWORD *)&v62[0] = v27[1].m128i_i64[0];
  }
  v61 = v27->m128i_i64[1];
  v27->m128i_i64[0] = (__int64)v27[1].m128i_i64;
  v27->m128i_i64[1] = 0;
  v27[1].m128i_i8[0] = 0;
  v28 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 16LL))(a1, v60, v61);
  v29 = *(unsigned int *)(a2 + 8);
  if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    v45 = v28;
    sub_2237220(a2, a2 + 16, v29 + 1, 8);
    v29 = *(unsigned int *)(a2 + 8);
    v28 = v45;
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v29) = v28;
  v30 = v60;
  ++*(_DWORD *)(a2 + 8);
  if ( v30 != v62 )
    operator delete(v30);
  if ( v48[0] != &v49 )
    operator delete(v48[0]);
  if ( v46[0] != v47 )
    operator delete(v46[0]);
}
