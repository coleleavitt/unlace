__int64 __fastcall sub_4245C0(_QWORD *a1, __int64 a2, __int64 *a3, _DWORD *a4, _BYTE *a5, __int64 a6, __int64 *a7)
{
  __m128i *outctx; // r15
  unsigned __int64 v11; // rcx
  __int64 (__fastcall *v12)(__m128i *, char); // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__m128i *, char); // rax
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  bool v22; // r14
  __int64 v23; // r13
  __int64 v24; // rbp
  char v25; // r12
  unsigned __int8 v26; // r9
  __int64 (__fastcall *v27)(__m128i *, char); // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(__m128i *, char); // rax
  __int64 v33; // rbp
  unsigned __int64 v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rsi
  int v37; // ebp
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm0
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  bool v47; // cf
  __int64 v48; // rax
  unsigned __int8 v49; // bp
  const char *v50; // rsi
  __int64 v51; // rax
  __int64 (__fastcall *v52)(__m128i *, char); // rax
  __int64 v53; // r12
  unsigned __int64 v54; // r14
  __int64 v55; // r13
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // [rsp+Ch] [rbp-4CCh]
  int v61; // [rsp+20h] [rbp-4B8h]
  signed int v62; // [rsp+24h] [rbp-4B4h]
  __int64 v63; // [rsp+28h] [rbp-4B0h]
  unsigned __int64 v64; // [rsp+28h] [rbp-4B0h]
  unsigned __int64 v65; // [rsp+28h] [rbp-4B0h]
  int v66; // [rsp+38h] [rbp-4A0h]
  int v67; // [rsp+3Ch] [rbp-49Ch]
  unsigned __int8 v69; // [rsp+5Fh] [rbp-479h] BYREF
  _BYTE v70[16]; // [rsp+60h] [rbp-478h] BYREF
  void *ptr; // [rsp+70h] [rbp-468h] BYREF
  __int128 v72; // [rsp+78h] [rbp-460h]
  char v73[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v74; // [rsp+498h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  dto_init(v70, 0);
  dto_copy_from_inf(v70);
  *a4 = 0;
  *a5 = 6;
  v62 = (*(__int64 (__fastcall **)(__int64 *))(*a7 + 80))(a7);
  v66 = (*(__int64 (__fastcall **)(__int64 *))(*a7 + 88))(a7);
  outctx = (__m128i *)create_outctx(-1, 0, 0);
  if ( (unsigned __int8)sub_631C90(*a1, 44, 32) )
  {
    v11 = *(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 16) < v11 )
      v11 = 0;
    hexplace_t__ea2str(v73, 1024, a7, v11);
    (*(void (__fastcall **)(__m128i *, char *, __int64))(outctx->m128i_i64[0] + 56))(outctx, v73, 19);
    v12 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
    if ( (char *)v12 == (char *)sub_35CB90 )
    {
      v13 = outctx[2].m128i_i64[0];
      if ( v13 )
      {
        v14 = v13 + 1;
        v15 = outctx[2].m128i_i64[0];
        v16 = outctx[1].m128i_i64[1];
        --v13;
        if ( outctx[2].m128i_i64[1] >= v14 )
        {
LABEL_7:
          outctx[2].m128i_i64[0] = v14;
          *(_BYTE *)(v16 + v13) = 32;
          *(_BYTE *)(outctx[1].m128i_i64[1] + v15) = 0;
          goto LABEL_9;
        }
      }
      else
      {
        v16 = outctx[1].m128i_i64[1];
        v15 = 1;
        v14 = 2;
        if ( outctx[2].m128i_i64[1] >= 2uLL )
          goto LABEL_7;
      }
      v57 = qvector_reserve(&outctx[1].m128i_u64[1], v16, v14, 1);
      outctx[1].m128i_i64[1] = v57;
      v16 = v57;
      goto LABEL_7;
    }
    v12(outctx, 32);
  }
  else
  {
    (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 64))(outctx, 19);
    (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 72))(outctx, 19);
  }
LABEL_9:
  v17 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
  if ( (char *)v17 == (char *)sub_35CB90 )
  {
    v18 = outctx[2].m128i_i64[0];
    if ( v18 )
    {
      v21 = v18 + 1;
      v20 = outctx[2].m128i_i64[0];
      v19 = outctx[1].m128i_i64[1];
      --v18;
      if ( outctx[2].m128i_i64[1] >= v21 )
        goto LABEL_12;
    }
    else
    {
      v19 = outctx[1].m128i_i64[1];
      v20 = 1;
      v21 = 2;
      if ( outctx[2].m128i_i64[1] >= 2uLL )
      {
LABEL_12:
        outctx[2].m128i_i64[0] = v21;
        *(_BYTE *)(v19 + v18) = 32;
        *(_BYTE *)(outctx[1].m128i_i64[1] + v20) = 0;
        goto LABEL_13;
      }
    }
    v44 = qvector_reserve(&outctx[1].m128i_u64[1], v19, v21, 1);
    outctx[1].m128i_i64[1] = v44;
    v19 = v44;
    goto LABEL_12;
  }
  v17(outctx, 32);
LABEL_13:
  v69 = 1;
  v67 = v62 / 2;
  if ( (unsigned int)(v66 - 1) > 0x3E )
  {
    if ( !under_debugger )
      interr(40228);
    BUG();
  }
  v61 = 0;
  v59 = 0;
  if ( v62 > 0 )
  {
    while ( 1 )
    {
      v22 = 0;
      v63 = *(_QWORD *)(a2 + 24) + v61;
      v23 = v63;
      v24 = v66 + v63;
      v25 = 0;
      do
      {
        while ( 1 )
        {
          if ( !v25 )
            v25 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a7 + 24))(a7, v23, 0);
          if ( !v22 )
            break;
          if ( v24 == ++v23 )
            goto LABEL_21;
        }
        v22 = (unsigned __int8)sub_7BE710(*(_QWORD *)(qword_2CCB598 + 1672) + 2400LL, qword_2CCB598, v23++, 4432) != 0;
      }
      while ( v24 != v23 );
LABEL_21:
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))*a7)(a7)
        && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 8))(a7)
        && v63 == (*(__int64 (__fastcall **)(__int64 *))(*a7 + 48))(a7) )
      {
        v47 = (*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 16))(a7) != 0;
        v48 = *a7;
        v72 = 0;
        ptr = nullptr;
        v49 = v47 ? 9 : 0;
        (*(void (__fastcall **)(__int64 *, void **))(v48 + 56))(a7, &ptr);
        v50 = haystack;
        if ( (_QWORD)v72 )
          v50 = (const char *)ptr;
        (*(void (__fastcall **)(__m128i *, const char *, _QWORD))(outctx->m128i_i64[0] + 56))(outctx, v50, v49);
        if ( ptr )
        {
          *(_QWORD *)&v72 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v26 = 9;
        if ( !v25 )
          v26 = !v22 ? 1 : 13;
        hexplace_t__out_one_item(a2, outctx, a7, v59, &v69, v26);
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 120))(a7) )
      {
        if ( !--v67 )
        {
          v27 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
          if ( (char *)v27 == (char *)sub_35CB90 )
          {
            v28 = outctx[2].m128i_i64[0];
            if ( v28 )
            {
              v29 = v28 + 1;
              v30 = outctx[2].m128i_i64[0];
              v31 = outctx[1].m128i_i64[1];
              --v28;
              if ( outctx[2].m128i_i64[1] >= v29 )
              {
LABEL_32:
                outctx[2].m128i_i64[0] = v29;
                *(_BYTE *)(v31 + v28) = 32;
                *(_BYTE *)(outctx[1].m128i_i64[1] + v30) = 0;
                goto LABEL_33;
              }
            }
            else
            {
              v31 = outctx[1].m128i_i64[1];
              v30 = 1;
              v29 = 2;
              if ( outctx[2].m128i_i64[1] >= 2uLL )
                goto LABEL_32;
            }
            v65 = v29;
            v46 = qvector_reserve(&outctx[1].m128i_u64[1], v31, v29, 1);
            v29 = v65;
            outctx[1].m128i_i64[1] = v46;
            v31 = v46;
            goto LABEL_32;
          }
          v27(outctx, 32);
        }
      }
LABEL_33:
      v32 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
      if ( (char *)v32 != (char *)sub_35CB90 )
      {
        v32(outctx, 32);
        goto LABEL_37;
      }
      v33 = outctx[2].m128i_i64[0];
      if ( v33 )
      {
        v34 = v33 + 1;
        v35 = outctx[2].m128i_i64[0];
        v36 = outctx[1].m128i_i64[1];
        --v33;
        if ( outctx[2].m128i_i64[1] < v34 )
          goto LABEL_52;
      }
      else
      {
        v36 = outctx[1].m128i_i64[1];
        v35 = 1;
        v34 = 2;
        if ( outctx[2].m128i_i64[1] < 2uLL )
        {
LABEL_52:
          v64 = v34;
          v45 = qvector_reserve(&outctx[1].m128i_u64[1], v36, v34, 1);
          v34 = v64;
          outctx[1].m128i_i64[1] = v45;
          v36 = v45;
        }
      }
      outctx[2].m128i_i64[0] = v34;
      *(_BYTE *)(v36 + v33) = 32;
      *(_BYTE *)(outctx[1].m128i_i64[1] + v35) = 0;
LABEL_37:
      ++v59;
      v61 += v66;
      if ( v62 == v59 )
      {
        if ( v69 != 1 )
          (*(void (__fastcall **)(__m128i *, _QWORD))(outctx->m128i_i64[0] + 72))(outctx, v69);
        break;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a7 + 128))(a7) )
  {
    v37 = (*(__int64 (__fastcall **)(__int64 *))(*a7 + 104))(a7);
    if ( v37 == 4 && v62 == 1 )
    {
      hexplace_t__out_one_item(a2, outctx, a7, 1u, &v69, 1u);
    }
    else
    {
      v52 = *(__int64 (__fastcall **)(__m128i *, char))(outctx->m128i_i64[0] + 96);
      if ( (char *)v52 == (char *)sub_35CB90 )
      {
        v53 = outctx[2].m128i_i64[0];
        if ( v53 )
        {
          v54 = v53 + 1;
          v55 = outctx[2].m128i_i64[0];
          --v53;
        }
        else
        {
          v55 = 1;
          v54 = 2;
        }
        v56 = outctx[1].m128i_i64[1];
        if ( outctx[2].m128i_i64[1] < v54 )
        {
          v58 = qvector_reserve(&outctx[1].m128i_u64[1], v56, v54, 1);
          outctx[1].m128i_i64[1] = v58;
          v56 = v58;
        }
        outctx[2].m128i_i64[0] = v54;
        *(_BYTE *)(v56 + v53) = 32;
        *(_BYTE *)(outctx[1].m128i_i64[1] + v55) = 0;
      }
      else
      {
        v52(outctx, 32);
      }
      if ( v37 == 4 )
      {
        hexplace_t__out_one_item(a2, outctx, a7, v62, &v69, 1u);
      }
      else
      {
        (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 64))(outctx, 51);
        hexplace_t__out_one_item(a2, outctx, a7, v62, &v69, 1u);
        (*(void (__fastcall **)(__m128i *, __int64))(outctx->m128i_i64[0] + 72))(outctx, 51);
      }
    }
  }
  v38 = a3[1];
  v39 = *a3;
  if ( a3[2] < (unsigned __int64)(v38 + 1) )
  {
    v51 = qvector_reserve(a3, v39, v38 + 1, 24);
    v38 = a3[1];
    *a3 = v51;
    v39 = v51;
  }
  v40 = v39 + 24 * v38;
  *(_OWORD *)(v40 + 8) = 0;
  *(_QWORD *)v40 = 0;
  ++a3[1];
  v41 = *(_QWORD *)v40;
  v42 = _mm_loadu_si128((const __m128i *)(v40 + 8));
  *(_QWORD *)v40 = outctx[1].m128i_i64[1];
  *(_QWORD *)(v40 + 8) = outctx[2].m128i_i64[0];
  *(_QWORD *)(v40 + 16) = outctx[2].m128i_i64[1];
  outctx[1].m128i_i64[1] = v41;
  outctx[2] = v42;
  if ( outctx )
    (*(void (__fastcall **)(__m128i *))(outctx->m128i_i64[0] + 8))(outctx);
  dto_copy_to_inf(v70);
  return 1;
}
