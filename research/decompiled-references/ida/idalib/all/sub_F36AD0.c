void __fastcall sub_F36AD0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbp
  __int64 v3; // rax
  __int64 *v4; // rbp
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm2
  __m128i *v10; // rdx
  __int64 v11; // rdx
  __m128i si128; // xmm3
  __m128i *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i *v21; // rdx
  __m128i v22; // xmm5
  __m128i *v23; // rcx
  __m128i v24; // xmm0
  void (__fastcall *v25)(__m128i *, __m128i *, __int64); // rax
  char v26; // al
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r11
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  _WORD *v35; // rdi
  __int64 v36; // r9
  void *v37; // rsi
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rdi
  void (__fastcall *v48)(__int64, __int64, __int64); // rax
  __int64 v49; // rax
  _BYTE *v50; // rax
  __int64 v51; // rdi
  _BYTE *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rbx
  size_t v55; // rax
  size_t v56; // rax
  __m128i *v57; // [rsp+8h] [rbp-110h] BYREF
  __m128 v58; // [rsp+10h] [rbp-108h] BYREF
  __int64 *v59; // [rsp+20h] [rbp-F8h]
  __int64 v60; // [rsp+28h] [rbp-F0h]
  __int64 v61; // [rsp+30h] [rbp-E8h]
  __int64 v62; // [rsp+38h] [rbp-E0h]
  __m128i v63; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v64; // [rsp+50h] [rbp-C8h]
  __m128 v65; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+70h] [rbp-A8h]
  void *v67; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+80h] [rbp-98h]
  __m128i v69; // [rsp+88h] [rbp-90h] BYREF
  void *v70; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v71; // [rsp+A8h] [rbp-70h] BYREF
  void *v72; // [rsp+B8h] [rbp-60h]
  __int64 v73; // [rsp+C0h] [rbp-58h]
  __m128i v74[5]; // [rsp+C8h] [rbp-50h] BYREF

  v2 = *(unsigned int **)(a2 + 40);
  v3 = (__int64)&v2[2 * *v2 + 4];
  v4 = (__int64 *)(v2 + 4);
  v59 = (__int64 *)v3;
  if ( (__int64 *)v3 != v4 )
  {
    v58 = _mm_loadh_ps((const double *)off_2B4C2A8);
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *v4;
        if ( *(_BYTE *)(a1 + 1056) )
          break;
        v57 = (__m128i *)*v4;
        v66 = a1;
        v67 = &v69;
        v65 = _mm_loadh_ps((const double *)&v57);
        sub_F24710(&v67, &byte_22F0C30, (__int64)&byte_22F0C30);
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v6 = _mm_loadu_si128((const __m128i *)&v65.m128_u16[4]);
          v70 = (void *)v65.m128_u64[0];
          v72 = v74;
          v71 = v6;
          if ( v67 == &v69 )
          {
            v74[0] = _mm_loadu_si128(&v69);
          }
          else
          {
            v72 = v67;
            v74[0].m128i_i64[0] = v69.m128i_i64[0];
          }
          v7 = v68;
          v68 = 0;
          v69.m128i_i8[0] = 0;
          v73 = v7;
          v67 = &v69;
          v64.m128i_i64[0] = 0;
          v8 = operator new(0x38u);
          v9 = _mm_loadu_si128(&v71);
          *(_QWORD *)v8 = v70;
          *(_QWORD *)(v8 + 24) = v8 + 40;
          v10 = (__m128i *)v72;
          *(__m128i *)(v8 + 8) = v9;
          if ( v10 == v74 )
          {
            *(__m128i *)(v8 + 40) = _mm_loadu_si128(v74);
          }
          else
          {
            *(_QWORD *)(v8 + 24) = v10;
            *(_QWORD *)(v8 + 40) = v74[0].m128i_i64[0];
          }
          v11 = v73;
          v63.m128i_i64[0] = v8;
          si128 = _mm_load_si128((const __m128i *)&v58);
          v73 = 0;
          *(_QWORD *)(v8 + 32) = v11;
          v72 = v74;
          v74[0].m128i_i8[0] = 0;
          v64 = si128;
          sub_ACD330(a1 + 16, &v63);
          if ( v64.m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v64.m128i_i64[0])(&v63, &v63, 3);
        }
        else
        {
          v15 = *(unsigned int *)(a1 + 24);
          v16 = *(_QWORD *)(a1 + 16);
          v63.m128i_i8[0] = 0;
          v17 = v16 + 32 * v15 - 32;
          if ( !*(_QWORD *)(v17 + 16) )
            goto LABEL_63;
          (*(void (__fastcall **)(__int64, __m128i *))(v17 + 24))(v17, &v63);
          v18 = *(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32;
          v71 = _mm_loadu_si128((const __m128i *)&v65.m128_u16[4]);
          v70 = (void *)v65.m128_u64[0];
          v72 = v74;
          if ( v67 == &v69 )
          {
            v74[0] = _mm_loadu_si128(&v69);
          }
          else
          {
            v72 = v67;
            v74[0].m128i_i64[0] = v69.m128i_i64[0];
          }
          v19 = v68;
          v57 = (__m128i *)v18;
          v68 = 0;
          v73 = v19;
          v67 = &v69;
          v69.m128i_i8[0] = 0;
          v64.m128i_i64[0] = 0;
          v20 = operator new(0x38u);
          v21 = v57;
          v22 = _mm_loadu_si128(&v71);
          *(_QWORD *)v20 = v70;
          *(_QWORD *)(v20 + 24) = v20 + 40;
          v23 = (__m128i *)v72;
          *(__m128i *)(v20 + 8) = v22;
          if ( v23 == v74 )
          {
            *(__m128i *)(v20 + 40) = _mm_loadu_si128(v74);
          }
          else
          {
            *(_QWORD *)(v20 + 24) = v23;
            *(_QWORD *)(v20 + 40) = v74[0].m128i_i64[0];
          }
          v63.m128i_i64[0] = v20;
          v74[0].m128i_i8[0] = 0;
          v24 = _mm_load_si128(&v63);
          *(_QWORD *)(v20 + 32) = v73;
          v72 = v74;
          v73 = 0;
          v63 = _mm_loadu_si128(v21);
          v25 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v21[1].m128i_i64[0];
          *v21 = v24;
          v64.m128i_i64[0] = (__int64)v25;
          v21[1].m128i_i64[0] = (__int64)sub_F25670;
          v64.m128i_i64[1] = v21[1].m128i_i64[1];
          v21[1].m128i_i64[1] = (__int64)sub_F33910;
          if ( v25 )
            v25(&v63, &v63, 3);
        }
        if ( v72 != v74 )
          operator delete(v72);
        v13 = (__m128i *)v67;
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v13 != &v69 )
          operator delete(v13);
        if ( v59 == ++v4 )
          return;
      }
      v26 = *(_BYTE *)(a1 + 1104);
      *(_BYTE *)(a1 + 1056) = 0;
      v27 = *(_QWORD *)(a1 + 1096);
      LOBYTE(v57) = v26;
      if ( v14 )
        break;
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v27 + 24LL))(v27, 4, 0, 0);
        v54 = *(_QWORD *)(a1 + 1096);
        v55 = j__strlen("<<<NULL>>> OMPClause");
        sub_9954E0(v54, "<<<NULL>>> OMPClause", v55);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
      }
      else
      {
        v56 = j__strlen("<<<NULL>>> OMPClause");
        sub_9954E0(v27, "<<<NULL>>> OMPClause", v56);
      }
LABEL_39:
      v42 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v42 )
      {
        v43 = *(_QWORD *)(a1 + 16);
        LOBYTE(v70) = 1;
        v44 = v43 + 32 * v42 - 32;
        if ( !*(_QWORD *)(v44 + 16) )
LABEL_63:
          std::__throw_bad_function_call();
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, void **))(v44 + 24))(v44, &v70);
          v46 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          *(_DWORD *)(a1 + 24) = v46;
          v47 = *(_QWORD *)(a1 + 16) + 32 * v46;
          v48 = *(void (__fastcall **)(__int64, __int64, __int64))(v47 + 16);
          if ( v48 )
            v48(v47, v47, 3);
          v49 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v49 )
            break;
          v45 = *(_QWORD *)(a1 + 16);
          LOBYTE(v70) = 1;
          v44 = v45 + 32 * v49 - 32;
          if ( !*(_QWORD *)(v44 + 16) )
            goto LABEL_63;
        }
      }
      v50 = *(_BYTE **)(a1 + 1064);
      *(_QWORD *)(a1 + 1072) = 0;
      *v50 = 0;
      v51 = *(_QWORD *)a1;
      v52 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
      if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v52 )
      {
        sub_227BF10(v51, "\n", 1);
      }
      else
      {
        *v52 = 10;
        ++*(_QWORD *)(v51 + 32);
      }
      *(_BYTE *)(a1 + 1056) = 1;
      if ( v59 == ++v4 )
        return;
    }
    if ( (_BYTE)v57 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v27 + 24LL))(v27, 4, 1, 0);
    v29 = sub_20EB760(*(unsigned int *)(v14 + 8), 0);
    v30 = *(_QWORD *)(a1 + 1096);
    v31 = v28;
    v32 = *(_QWORD *)(v30 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v32) > 2 )
    {
      *(_BYTE *)(v32 + 2) = 80;
      *(_WORD *)v32 = 19791;
      *(_QWORD *)(v30 + 32) += 3LL;
    }
    else
    {
      v33 = *(_QWORD *)(a1 + 1096);
      v61 = v28;
      v60 = v29;
      v30 = sub_227BF10(v33, "OMP", 3);
      v29 = v60;
      v31 = v61;
    }
    if ( v31 )
    {
      v62 = v31;
      v65.m128_u64[0] = v29;
      v60 = v29;
      v61 = v30;
      v65.m128_u64[1] = 1;
      sub_2246780(&v70, &v65);
      v34 = sub_227BF10(v61, v70, v71.m128i_i64[0]);
      v35 = *(_WORD **)(v34 + 32);
      v36 = v34;
      v37 = (void *)(v60 + 1);
      v38 = *(_QWORD *)(v34 + 24) - (_QWORD)v35;
      if ( v62 - 1 <= v38 )
      {
        if ( v62 != 1 )
        {
          v61 = v34;
          v60 = v62 - 1;
          memcpy(v35, v37, v62 - 1);
          v36 = v61;
          v53 = *(_QWORD *)(v61 + 24);
          v35 = (_WORD *)(*(_QWORD *)(v61 + 32) + v60);
          *(_QWORD *)(v61 + 32) = v35;
          if ( (unsigned __int64)(v53 - (_QWORD)v35) <= 5 )
            goto LABEL_33;
          goto LABEL_57;
        }
LABEL_32:
        if ( v38 <= 5 )
        {
LABEL_33:
          sub_227BF10(v36, "Clause", 6);
LABEL_34:
          if ( v70 != &v71.m128i_u64[1] )
            operator delete(v70);
          if ( (_BYTE)v57 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
          sub_F29AE0(a1, v14);
          sub_F2A050(a1, *(_QWORD *)v14);
          goto LABEL_39;
        }
LABEL_57:
        *(_DWORD *)v35 = 1969318979;
        v35[2] = 25971;
        *(_QWORD *)(v36 + 32) += 6LL;
        goto LABEL_34;
      }
      v39 = v62 - 1;
      v40 = v34;
    }
    else
    {
      v60 = v30;
      v65 = (__m128)(unsigned __int64)v29;
      sub_2246780(&v70, &v65);
      v39 = v71.m128i_i64[0];
      v37 = v70;
      v40 = v60;
    }
    v41 = sub_227BF10(v40, v37, v39);
    v35 = *(_WORD **)(v41 + 32);
    v36 = v41;
    v38 = *(_QWORD *)(v41 + 24) - (_QWORD)v35;
    goto LABEL_32;
  }
}
