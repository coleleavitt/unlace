__int64 __fastcall sub_5FEBD0(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 *v9; // rbp
  char *v10; // rbx
  __int64 v11; // r14
  unsigned int v12; // r13d
  unsigned __int64 v13; // rsi
  char v14; // al
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned int v17; // r13d
  unsigned int v18; // eax
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 *v22; // rbp
  char v23; // al
  __int64 v24; // r13
  __int64 v25; // r13
  unsigned int v26; // eax
  __int64 v27; // r15
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // r15
  unsigned int v31; // r13d
  unsigned int v32; // eax
  __m128d v33; // xmm0
  __int64 i; // rbx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // r14
  unsigned int v38; // r13d
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rbp
  unsigned int v43; // r14d
  unsigned int v44; // eax
  char v45; // al
  __m128i v46; // xmm0
  char v47; // al
  char v48; // al
  unsigned int v50; // [rsp+8h] [rbp-50h]
  unsigned int v51; // [rsp+8h] [rbp-50h]
  __int64 *v52; // [rsp+10h] [rbp-48h]

  result = (char *)a2 - (char *)a1;
  v52 = a2;
  if ( (char *)a2 - (char *)a1 <= 128 )
    return result;
  while ( 2 )
  {
    v5 = result;
    v6 = result >> 4;
    v7 = v5 >> 3;
    if ( !a3 )
    {
      for ( i = v6 - 1; ; --i )
      {
        sub_5F9340((__int64)a1, i, v7, a1->m128i_i64[i], a4);
        if ( !i )
          break;
      }
      for ( result = (char *)v52 - (char *)a1;
            (char *)v52 - (char *)a1 > 8;
            result = sub_5F9340((__int64)a1, 0, ((char *)v52 - (char *)a1) >> 3, v35, a4) )
      {
        v35 = *--v52;
        *v52 = a1->m128i_i64[0];
      }
      return result;
    }
    v8 = a1->m128i_i64[1];
    v9 = &a1->m128i_i64[v6];
    --a3;
    v10 = &a1->m128i_i8[8];
    v11 = *v9;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v12 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v13 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) >> 32;
      v29 = sub_CB1620(a4, v13);
      v15 = *(v52 - 1);
      if ( v29 )
        goto LABEL_5;
LABEL_24:
      v30 = a1->m128i_i64[1];
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v31 == v32 )
      {
        (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, v13, v32);
        v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30) >> 32;
        if ( (unsigned __int8)sub_CB1620(a4, v19) )
          goto LABEL_26;
      }
      else
      {
        v19 = v31;
        if ( (unsigned __int8)sub_CB1620(a4, v31) )
        {
LABEL_26:
          v33 = (__m128d)_mm_loadu_si128(a1);
          v21 = a1->m128i_i64[1];
          *(__m128d *)a1 = _mm_shuffle_pd(v33, v33, 1);
          goto LABEL_8;
        }
      }
      v36 = *v9;
      v37 = *(v52 - 1);
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v9 + 16LL))(*v9);
      if ( v38 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37) )
      {
        (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36) >> 32;
        v39 = sub_CB1620(a4, v19);
        v40 = a1->m128i_i64[0];
        if ( !v39 )
        {
LABEL_36:
          a1->m128i_i64[0] = *v9;
          *v9 = v40;
          v21 = a1->m128i_i64[0];
          goto LABEL_8;
        }
      }
      else
      {
        v19 = v38;
        v48 = sub_CB1620(a4, v38);
        v40 = a1->m128i_i64[0];
        if ( !v48 )
          goto LABEL_36;
      }
      a1->m128i_i64[0] = *(v52 - 1);
      *(v52 - 1) = v40;
      v21 = a1->m128i_i64[0];
      goto LABEL_8;
    }
    v13 = v12;
    v14 = sub_CB1620(a4, v12);
    v15 = *(v52 - 1);
    if ( !v14 )
      goto LABEL_24;
LABEL_5:
    v16 = *v9;
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v9 + 16LL))(*v9);
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 == v18 )
    {
      (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, v13, v18);
      v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16) >> 32;
      if ( (unsigned __int8)sub_CB1620(a4, v19) )
        goto LABEL_7;
    }
    else
    {
      v19 = v17;
      if ( (unsigned __int8)sub_CB1620(a4, v17) )
      {
LABEL_7:
        v20 = a1->m128i_i64[0];
        a1->m128i_i64[0] = *v9;
        *v9 = v20;
        v21 = a1->m128i_i64[0];
        goto LABEL_8;
      }
    }
    v41 = a1->m128i_i64[1];
    v42 = *(v52 - 1);
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    if ( v43 == v44 )
    {
      (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v42 + 16LL))(v42, v19, v44);
      v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41) >> 32;
      v45 = sub_CB1620(a4, v19);
      v46 = _mm_loadl_epi64(a1);
      if ( v45 )
      {
LABEL_40:
        a1->m128i_i64[0] = *(v52 - 1);
        *(v52 - 1) = v46.m128i_i64[0];
        v21 = a1->m128i_i64[0];
        goto LABEL_8;
      }
    }
    else
    {
      v19 = v43;
      v47 = sub_CB1620(a4, v43);
      v46 = _mm_loadl_epi64(a1);
      if ( v47 )
        goto LABEL_40;
    }
    v21 = a1->m128i_i64[1];
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, v46);
LABEL_8:
    v22 = v52;
    while ( 2 )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)v10;
        v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10);
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v50 == v26 )
        {
          (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v21 + 16LL))(v21, v19, v26);
          v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25) >> 32;
        }
        else
        {
          v19 = v50;
        }
        v23 = sub_CB1620(a4, v19);
        v21 = a1->m128i_i64[0];
        v24 = a1->m128i_i64[0];
        if ( !v23 )
          break;
        v10 += 8;
      }
      for ( --v22; ; --v22 )
      {
        v27 = *v22;
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        if ( v51 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27) )
          break;
        v19 = v51;
        if ( !(unsigned __int8)sub_CB1620(a4, v51) )
          goto LABEL_19;
LABEL_16:
        v24 = a1->m128i_i64[0];
      }
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24) >> 32;
      if ( (unsigned __int8)sub_CB1620(a4, v19) )
        goto LABEL_16;
LABEL_19:
      if ( v10 < (char *)v22 )
      {
        v28 = *(_QWORD *)v10;
        v10 += 8;
        *((_QWORD *)v10 - 1) = *v22;
        *v22 = v28;
        v21 = a1->m128i_i64[0];
        continue;
      }
      break;
    }
    sub_5FEBD0(v10, v52, a3, a4);
    result = v10 - (char *)a1;
    if ( v10 - (char *)a1 > 128 )
    {
      v52 = (__int64 *)v10;
      continue;
    }
    return result;
  }
}

