_QWORD *__fastcall sub_129B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 sort; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  unsigned int error_code; // eax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // rax
  _QWORD *exception; // rbx
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r15
  int sort_kind; // eax
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r15
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r15
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r15
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // r15
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // r15
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // r15
  int v56; // r14d
  __int64 v57; // r12
  __int64 v58; // r15
  __int64 v59; // rbp
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r14
  unsigned int v64; // r15d
  const char *error_msg; // rax
  const char *v66; // rax
  unsigned int v67; // [rsp+Ch] [rbp-7Ch]
  int v68; // [rsp+Ch] [rbp-7Ch]
  int v69; // [rsp+Ch] [rbp-7Ch]
  int v70; // [rsp+Ch] [rbp-7Ch]
  int v71; // [rsp+Ch] [rbp-7Ch]
  int v72; // [rsp+Ch] [rbp-7Ch]
  int v73; // [rsp+Ch] [rbp-7Ch]
  int v74; // [rsp+Ch] [rbp-7Ch]
  __m128 v75; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v76 = __readfsqword(0x28u);
  sort = Z3_get_sort(*(_QWORD *)(v5 + 8), v6);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v9 + 8));
  if ( error_code && *(_BYTE *)v9 )
  {
    v64 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v9 + 8), v64);
    sub_105D0(exception, error_msg);
    goto LABEL_76;
  }
  v12 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v12 + 8), v10);
  if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v10) == 2
    || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v10) == 3 )
  {
    if ( v10 )
      Z3_dec_ref(*(_QWORD *)(v12 + 8));
    v13 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
    v14 = *(_QWORD *)(a3 + 8);
    v15 = v13;
    v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
    if ( v16 && *(_BYTE *)v14 )
      goto LABEL_16;
    v12 = *(_QWORD *)(a3 + 8);
    Z3_inc_ref(*(_QWORD *)(v12 + 8), v15);
    if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v15) == 2
      || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v15) == 3 )
    {
      if ( v15 )
        Z3_dec_ref(*(_QWORD *)(v12 + 8));
      v17 = *(_QWORD *)(a2 + 8);
      v75 = _mm_loadh_ps((const double *)(a3 + 16));
      v18 = Z3_mk_add(*(_QWORD *)(v17 + 8), 2, &v75);
      goto LABEL_11;
    }
    if ( v15 )
      goto LABEL_19;
  }
  else if ( v10 )
  {
LABEL_19:
    Z3_dec_ref(*(_QWORD *)(v12 + 8));
  }
  v25 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v14 = *(_QWORD *)(a2 + 8);
  v26 = v25;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 && *(_BYTE *)v14 )
    goto LABEL_16;
  v27 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v27 + 8), v26);
  sort_kind = Z3_get_sort_kind(*(_QWORD *)(v27 + 8), v26);
  if ( v26 )
  {
    v68 = sort_kind;
    Z3_dec_ref(*(_QWORD *)(v27 + 8));
    sort_kind = v68;
  }
  if ( sort_kind == 4 )
  {
    v29 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
    v14 = *(_QWORD *)(a3 + 8);
    v30 = v29;
    v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
    if ( v16 && *(_BYTE *)v14 )
      goto LABEL_16;
    v31 = *(_QWORD *)(a3 + 8);
    Z3_inc_ref(*(_QWORD *)(v31 + 8), v30);
    v32 = Z3_get_sort_kind(*(_QWORD *)(v31 + 8), v30);
    if ( v30 )
    {
      v69 = v32;
      Z3_dec_ref(*(_QWORD *)(v31 + 8));
      v32 = v69;
    }
    if ( v32 == 4 )
    {
      v18 = Z3_mk_bvadd(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16));
      goto LABEL_11;
    }
  }
  v33 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v14 = *(_QWORD *)(a2 + 8);
  v34 = v33;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 && *(_BYTE *)v14 )
    goto LABEL_16;
  v35 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v35 + 8), v34);
  v36 = Z3_get_sort_kind(*(_QWORD *)(v35 + 8), v34);
  if ( v34 )
  {
    v70 = v36;
    Z3_dec_ref(*(_QWORD *)(v35 + 8));
    v36 = v70;
  }
  if ( v36 == 11 )
  {
    v37 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
    v14 = *(_QWORD *)(a3 + 8);
    v38 = v37;
    v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
    if ( v16 && *(_BYTE *)v14 )
      goto LABEL_16;
    v39 = *(_QWORD *)(a3 + 8);
    Z3_inc_ref(*(_QWORD *)(v39 + 8), v38);
    v40 = Z3_get_sort_kind(*(_QWORD *)(v39 + 8), v38);
    if ( v38 )
    {
      v71 = v40;
      Z3_dec_ref(*(_QWORD *)(v39 + 8));
      v40 = v71;
    }
    if ( v40 == 11 )
    {
      sub_12670(a1, a2, a3);
      return a1;
    }
  }
  v41 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v14 = *(_QWORD *)(a2 + 8);
  v42 = v41;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 )
  {
    if ( *(_BYTE *)v14 )
      goto LABEL_16;
  }
  v43 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v43 + 8), v42);
  v44 = Z3_get_sort_kind(*(_QWORD *)(v43 + 8), v42);
  if ( v42 )
  {
    v72 = v44;
    Z3_dec_ref(*(_QWORD *)(v43 + 8));
    v44 = v72;
  }
  if ( v44 == 12 )
  {
    v45 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
    v14 = *(_QWORD *)(a3 + 8);
    v46 = v45;
    v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
    if ( v16 && *(_BYTE *)v14 )
      goto LABEL_16;
    v47 = *(_QWORD *)(a3 + 8);
    Z3_inc_ref(*(_QWORD *)(v47 + 8), v46);
    v48 = Z3_get_sort_kind(*(_QWORD *)(v47 + 8), v46);
    if ( v46 )
    {
      v73 = v48;
      Z3_dec_ref(*(_QWORD *)(v47 + 8));
      v48 = v73;
    }
    if ( v48 == 12 )
    {
      v61 = *(_QWORD *)(a2 + 8);
      v75 = _mm_loadh_ps((const double *)(a3 + 16));
      v18 = Z3_mk_re_union(*(_QWORD *)(v61 + 8), 2, &v75);
      goto LABEL_11;
    }
  }
  v49 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v14 = *(_QWORD *)(a2 + 8);
  v50 = v49;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 )
  {
    if ( *(_BYTE *)v14 )
      goto LABEL_16;
  }
  v51 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v51 + 8), v50);
  v52 = Z3_get_sort_kind(*(_QWORD *)(v51 + 8), v50);
  if ( v50 )
  {
    v74 = v52;
    Z3_dec_ref(*(_QWORD *)(v51 + 8));
    v52 = v74;
  }
  if ( v52 != 9 )
    goto LABEL_55;
  v53 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
  v14 = *(_QWORD *)(a3 + 8);
  v54 = v53;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 )
  {
    if ( *(_BYTE *)v14 )
    {
LABEL_16:
      v67 = v16;
      exception = __cxa_allocate_exception(0x10u);
      v24 = (const char *)Z3_get_error_msg(*(_QWORD *)(v14 + 8), v67);
      sub_105D0(exception, v24);
      goto LABEL_76;
    }
  }
  v55 = *(_QWORD *)(a3 + 8);
  Z3_inc_ref(*(_QWORD *)(v55 + 8), v54);
  v56 = Z3_get_sort_kind(*(_QWORD *)(v55 + 8), v54);
  if ( v54 )
    Z3_dec_ref(*(_QWORD *)(v55 + 8));
  if ( v56 != 9 )
  {
LABEL_55:
    v18 = 0;
    goto LABEL_11;
  }
  v57 = *(_QWORD *)(a2 + 8);
  v58 = *(_QWORD *)(a3 + 16);
  v59 = *(_QWORD *)(a2 + 16);
  v60 = *(_QWORD *)(v57 + 8);
  switch ( *(_DWORD *)(v57 + 4) )
  {
    case 0:
      v62 = Z3_mk_fpa_rna(v60);
      goto LABEL_69;
    case 1:
      v62 = Z3_mk_fpa_rne(v60);
      goto LABEL_69;
    case 2:
      v62 = Z3_mk_fpa_rtp(v60);
      goto LABEL_69;
    case 3:
      v62 = Z3_mk_fpa_rtn(v60);
      goto LABEL_69;
    case 4:
      v62 = Z3_mk_fpa_rtz(v60);
LABEL_69:
      v63 = v62;
      Z3_inc_ref(*(_QWORD *)(v57 + 8), v62);
      v18 = Z3_mk_fpa_add(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), v63, v59, v58);
      if ( v63 )
        Z3_dec_ref(*(_QWORD *)(v57 + 8));
      break;
    default:
      v18 = Z3_mk_fpa_add(v60, 0, *(_QWORD *)(a2 + 16), v58);
      break;
  }
LABEL_11:
  v19 = *(_QWORD *)(a2 + 8);
  v20 = Z3_get_error_code(*(_QWORD *)(v19 + 8));
  if ( v20 && *(_BYTE *)v19 )
  {
    exception = __cxa_allocate_exception(0x10u);
    v66 = (const char *)Z3_get_error_msg(*(_QWORD *)(v19 + 8), v20);
    sub_105D0(exception, v66);
LABEL_76:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v21 = *(_QWORD *)(a2 + 8);
  a1[2] = v18;
  *a1 = &off_4D850;
  a1[1] = v21;
  Z3_inc_ref(*(_QWORD *)(v21 + 8), v18);
  *a1 = &off_4D890;
  return a1;
}
