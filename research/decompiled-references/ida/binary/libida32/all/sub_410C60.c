__int64 __fastcall sub_410C60(_QWORD *a1, __int64 a2, __int64 *a3, _DWORD *a4, _BYTE *a5, __int64 a6, __int64 *a7)
{
  __m128i *outctx; // r15
  __int64 (__fastcall *v11)(__m128i *, char); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__m128i *, char); // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r12
  unsigned __int64 v20; // r13
  bool v21; // r14
  char v22; // r13
  unsigned int v23; // r12d
  int v24; // ebp
  __int64 v25; // r9
  __int64 (__fastcall *v26)(__m128i *, char); // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(__m128i *, char); // rax
  __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rsi
  int v36; // ebp
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  bool v46; // cf
  __int64 v47; // rax
  unsigned __int8 v48; // bp
  const char *v49; // rsi
  __int64 v50; // rax
  __int64 (__fastcall *v51)(__m128i *, char); // rax
  __int64 v52; // r12
  unsigned __int64 v53; // r14
  __int64 v54; // r13
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // [rsp+4h] [rbp-4C4h]
  int v59; // [rsp+8h] [rbp-4C0h]
  int v60; // [rsp+Ch] [rbp-4BCh]
  unsigned int v62; // [rsp+20h] [rbp-4A8h]
  unsigned __int64 v63; // [rsp+20h] [rbp-4A8h]
  unsigned __int64 v64; // [rsp+20h] [rbp-4A8h]
  int v65; // [rsp+28h] [rbp-4A0h]
  int v66; // [rsp+2Ch] [rbp-49Ch]
  unsigned __int8 v68; // [rsp+4Fh] [rbp-479h] BYREF
  _BYTE v69[16]; // [rsp+50h] [rbp-478h] BYREF
  void *ptr; // [rsp+60h] [rbp-468h] BYREF
  __int128 v71; // [rsp+68h] [rbp-460h]
  _BYTE v72[1032]; // [rsp+80h] [rbp-448h] BYREF
  unsigned __int64 v73; // [rsp+488h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  dto_init(v69, 0);
  dto_copy_from_inf(v69);
  *a4 = 0;
  *a5 = 6;
  v65 = (*(__int64 (__fastcall **)(__int64 *))(*a7 + 80))(a7);
  v59 = (*(__int64 (__fastcall **)(__int64 *))(*a7 + 88))(a7);
  outctx = (__m128i *)create_outctx(0xFFFFFFFFLL, 0, 0);
  if ( (unsigned __int8)sub_615160(*a1, 44, 32) )
  {
    hexplace_t__ea2str(v72, 1024, a7);
    (*(void (__fastcall **)(__m128i *, _BYTE *, __int64))(outctx->m128i_i64[0] + 56))(outctx, v72, 19);
    v11 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
    if ( (char *)v11 == (char *)sub_3598B0 )
    {
      v12 = outctx[2].m128i_i64[0];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = outctx[2].m128i_i64[0];
        v15 = outctx[1].m128i_i64[1];
        --v12;
        if ( outctx[2].m128i_i64[1] >= v13 )
        {
LABEL_5:
          outctx[2].m128i_i64[0] = v13;
          *(_BYTE *)(v15 + v12) = 32;
          *(_BYTE *)(outctx[1].m128i_i64[1] + v14) = 0;
          goto LABEL_7;
        }
      }
      else
      {
        v15 = outctx[1].m128i_i64[1];
        v14 = 1;
        v13 = 2;
        if ( outctx[2].m128i_i64[1] >= 2uLL )
          goto LABEL_5;
      }
      v56 = qvector_reserve(&outctx[1].m128i_u64[1], v15, v13, 1);
      outctx[1].m128i_i64[1] = v56;
      v15 = v56;
      goto LABEL_5;
    }
    v11(outctx, 32);
  }
  else
  {
    (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 64))(outctx, 19);
    (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 72))(outctx, 19);
  }
LABEL_7:
  v16 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
  if ( (char *)v16 == (char *)sub_3598B0 )
  {
    v17 = outctx[2].m128i_i64[0];
    if ( v17 )
    {
      v20 = v17 + 1;
      v19 = outctx[2].m128i_i64[0];
      v18 = outctx[1].m128i_i64[1];
      --v17;
      if ( outctx[2].m128i_i64[1] >= v20 )
        goto LABEL_10;
    }
    else
    {
      v18 = outctx[1].m128i_i64[1];
      v19 = 1;
      v20 = 2;
      if ( outctx[2].m128i_i64[1] >= 2uLL )
      {
LABEL_10:
        outctx[2].m128i_i64[0] = v20;
        *(_BYTE *)(v18 + v17) = 32;
        *(_BYTE *)(outctx[1].m128i_i64[1] + v19) = 0;
        goto LABEL_11;
      }
    }
    v43 = qvector_reserve(&outctx[1].m128i_u64[1], v18, v20, 1);
    outctx[1].m128i_i64[1] = v43;
    v18 = v43;
    goto LABEL_10;
  }
  v16(outctx, 32);
LABEL_11:
  v68 = 1;
  v66 = v65 / 2;
  if ( (unsigned int)(v59 - 1) > 0x3E )
  {
    if ( !under_debugger )
      interr(40228);
    BUG();
  }
  v60 = 0;
  v58 = 0;
  if ( v65 > 0 )
  {
    while ( 1 )
    {
      v21 = 0;
      v22 = 0;
      v23 = *(_DWORD *)(a2 + 16) + v60;
      v62 = v23;
      v24 = v59 + v23;
      do
      {
        while ( 1 )
        {
          if ( !v22 )
            v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a7 + 24))(a7, v23, 0);
          if ( !v21 )
            break;
          if ( v24 == ++v23 )
            goto LABEL_19;
        }
        v21 = (unsigned __int8)sub_79B3A0(*(_QWORD *)(qword_2CA1698 + 1480) + 2312LL, qword_2CA1698, v23++, 4432) != 0;
      }
      while ( v24 != v23 );
LABEL_19:
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))*a7)(a7)
        && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 8))(a7)
        && v62 == (*(unsigned int (__fastcall **)(__int64 *))(*a7 + 48))(a7) )
      {
        v46 = (*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 16))(a7) != 0;
        v47 = *a7;
        v71 = 0;
        ptr = nullptr;
        v48 = v46 ? 9 : 0;
        (*(void (__fastcall **)(__int64 *, void **))(v47 + 56))(a7, &ptr);
        v49 = haystack;
        if ( (_QWORD)v71 )
          v49 = (const char *)ptr;
        (*(void (__fastcall **)(__m128i *, const char *, _QWORD))(outctx->m128i_i64[0] + 56))(outctx, v49, v48);
        if ( ptr )
        {
          *(_QWORD *)&v71 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v25 = 9;
        if ( !v22 )
          v25 = !v21 ? 1 : 13;
        hexplace_t__out_one_item(a2, outctx, a7, v58, &v68, v25);
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 120))(a7) )
      {
        if ( !--v66 )
        {
          v26 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
          if ( (char *)v26 == (char *)sub_3598B0 )
          {
            v27 = outctx[2].m128i_i64[0];
            if ( v27 )
            {
              v28 = v27 + 1;
              v29 = outctx[2].m128i_i64[0];
              v30 = outctx[1].m128i_i64[1];
              --v27;
              if ( outctx[2].m128i_i64[1] >= v28 )
              {
LABEL_30:
                outctx[2].m128i_i64[0] = v28;
                *(_BYTE *)(v30 + v27) = 32;
                *(_BYTE *)(outctx[1].m128i_i64[1] + v29) = 0;
                goto LABEL_31;
              }
            }
            else
            {
              v30 = outctx[1].m128i_i64[1];
              v29 = 1;
              v28 = 2;
              if ( outctx[2].m128i_i64[1] >= 2uLL )
                goto LABEL_30;
            }
            v64 = v28;
            v45 = qvector_reserve(&outctx[1].m128i_u64[1], v30, v28, 1);
            v28 = v64;
            outctx[1].m128i_i64[1] = v45;
            v30 = v45;
            goto LABEL_30;
          }
          v26(outctx, 32);
        }
      }
LABEL_31:
      v31 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
      if ( (char *)v31 != (char *)sub_3598B0 )
      {
        v31(outctx, 32);
        goto LABEL_35;
      }
      v32 = outctx[2].m128i_i64[0];
      if ( v32 )
      {
        v33 = v32 + 1;
        v34 = outctx[2].m128i_i64[0];
        v35 = outctx[1].m128i_i64[1];
        --v32;
        if ( outctx[2].m128i_i64[1] < v33 )
          goto LABEL_50;
      }
      else
      {
        v35 = outctx[1].m128i_i64[1];
        v34 = 1;
        v33 = 2;
        if ( outctx[2].m128i_i64[1] < 2uLL )
        {
LABEL_50:
          v63 = v33;
          v44 = qvector_reserve(&outctx[1].m128i_u64[1], v35, v33, 1);
          v33 = v63;
          outctx[1].m128i_i64[1] = v44;
          v35 = v44;
        }
      }
      outctx[2].m128i_i64[0] = v33;
      *(_BYTE *)(v35 + v32) = 32;
      *(_BYTE *)(outctx[1].m128i_i64[1] + v34) = 0;
LABEL_35:
      ++v58;
      v60 += v59;
      if ( v65 == v58 )
      {
        if ( v68 != 1 )
          (*(void (__fastcall **)(__m128i *, _QWORD))(outctx->m128i_i64[0] + 72))(outctx, v68);
        break;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 128))(a7) )
  {
    v36 = (*(__int64 (__fastcall **)(__int64 *))(*a7 + 104))(a7);
    if ( v36 == 4 && v65 == 1 )
    {
      hexplace_t__out_one_item(a2, outctx, a7, 1, &v68, 1);
    }
    else
    {
      v51 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
      if ( (char *)v51 == (char *)sub_3598B0 )
      {
        v52 = outctx[2].m128i_i64[0];
        if ( v52 )
        {
          v53 = v52 + 1;
          v54 = outctx[2].m128i_i64[0];
          --v52;
        }
        else
        {
          v54 = 1;
          v53 = 2;
        }
        v55 = outctx[1].m128i_i64[1];
        if ( outctx[2].m128i_i64[1] < v53 )
        {
          v57 = qvector_reserve(&outctx[1].m128i_u64[1], v55, v53, 1);
          outctx[1].m128i_i64[1] = v57;
          v55 = v57;
        }
        outctx[2].m128i_i64[0] = v53;
        *(_BYTE *)(v55 + v52) = 32;
        *(_BYTE *)(outctx[1].m128i_i64[1] + v54) = 0;
      }
      else
      {
        v51(outctx, 32);
      }
      if ( v36 == 4 )
      {
        hexplace_t__out_one_item(a2, outctx, a7, (unsigned int)v65, &v68, 1);
      }
      else
      {
        (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 64))(outctx, 51);
        hexplace_t__out_one_item(a2, outctx, a7, (unsigned int)v65, &v68, 1);
        (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 72))(outctx, 51);
      }
    }
  }
  v37 = a3[1];
  v38 = *a3;
  if ( a3[2] < (unsigned __int64)(v37 + 1) )
  {
    v50 = qvector_reserve(a3, v38, v37 + 1, 24);
    v37 = a3[1];
    *a3 = v50;
    v38 = v50;
  }
  v39 = v38 + 24 * v37;
  *(_OWORD *)(v39 + 8) = 0;
  *(_QWORD *)v39 = 0;
  ++a3[1];
  v40 = *(_QWORD *)v39;
  v41 = _mm_loadu_si128((const __m128i *)(v39 + 8));
  *(_QWORD *)v39 = outctx[1].m128i_i64[1];
  *(_QWORD *)(v39 + 8) = outctx[2].m128i_i64[0];
  *(_QWORD *)(v39 + 16) = outctx[2].m128i_i64[1];
  outctx[1].m128i_i64[1] = v40;
  outctx[2] = v41;
  if ( outctx )
    (*(void (__fastcall **)(__m128i *))(outctx->m128i_i64[0] + 8))(outctx);
  dto_copy_to_inf(v69);
  return 1;
}

