/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B240
// Address: 0x000000000042B240

//----- (000000000042B240) ----------------------------------------------------
__int64 __fastcall sub_42B240(
        __m128i *a1,
        _BYTE *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i *p_ptr; // rsi
  unsigned __int64 v12; // rdx
  char v13; // r13
  double v14; // xmm4_8
  double v15; // xmm5_8
  __m128i v16; // xmm0
  __m128i *v17; // rax
  int v18; // eax
  unsigned int v19; // r12d
  unsigned __int64 v20; // r14
  char *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rbp
  char *v25; // rbx
  void *v26; // rdi
  void *v27; // rdi
  char *v28; // rdi
  __int64 v29; // r13
  __int64 v30; // rbp
  char *v31; // rbx
  void *v32; // rdi
  void *v33; // rdi
  void *v35; // rdi
  __int64 (*v36)(); // rax
  void *v37; // rdi
  __int64 (*v38)(); // rax
  void *v39; // rdi
  __m128i v40; // xmm0
  void *v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __int64 v47; // r9
  __m128i **v48; // r15
  __int64 v49; // r14
  const char *v50; // rdx
  __int64 (*v51)(); // rax
  __m128i *v52; // rcx
  __int64 (*v53)(); // rax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  char v57; // [rsp+0h] [rbp-538h]
  unsigned int v58; // [rsp+Ch] [rbp-52Ch] BYREF
  void *v59; // [rsp+10h] [rbp-528h] BYREF
  __int128 v60; // [rsp+18h] [rbp-520h]
  _OWORD v61[2]; // [rsp+30h] [rbp-508h] BYREF
  __m256i ptr; // [rsp+50h] [rbp-4E8h] BYREF
  __int128 v63; // [rsp+70h] [rbp-4C8h]
  __int64 v64; // [rsp+80h] [rbp-4B8h]
  __int64 v65; // [rsp+88h] [rbp-4B0h]
  __m128i v66[31]; // [rsp+90h] [rbp-4A8h] BYREF
  __m128i v67[2]; // [rsp+280h] [rbp-2B8h] BYREF
  void *v68; // [rsp+2A0h] [rbp-298h]
  __int64 v69; // [rsp+2A8h] [rbp-290h]
  __int64 v70; // [rsp+2B8h] [rbp-280h]
  int v71[4]; // [rsp+2D0h] [rbp-268h] BYREF
  void *v72; // [rsp+2F0h] [rbp-248h]
  unsigned __int64 v73; // [rsp+2F8h] [rbp-240h]
  unsigned int v74; // [rsp+320h] [rbp-218h]
  unsigned int v75; // [rsp+330h] [rbp-208h]
  unsigned int v76; // [rsp+340h] [rbp-1F8h]
  char v77; // [rsp+378h] [rbp-1C0h]
  void *v78; // [rsp+3A0h] [rbp-198h]
  __int64 v79; // [rsp+3A8h] [rbp-190h]
  __m128i si128; // [rsp+3E0h] [rbp-158h] BYREF
  __m128i v81; // [rsp+3F0h] [rbp-148h]
  bool (__fastcall *v82)(__int64, int); // [rsp+470h] [rbp-C8h]
  char v83; // [rsp+47Ch] [rbp-BCh]
  char v84; // [rsp+47Dh] [rbp-BBh]
  __int64 v85; // [rsp+498h] [rbp-A0h]
  void *v86; // [rsp+4C0h] [rbp-78h]
  __int64 v87; // [rsp+4C8h] [rbp-70h]
  __int64 v88; // [rsp+4D8h] [rbp-60h]
  unsigned __int64 v89; // [rsp+4F8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  p_ptr = a1;
  sub_428130((__int64)v67, (__int64)a1, 0);
  v82 = sub_423680;
  if ( !(unsigned __int8)sub_424C50((__int64)v67) )
    goto LABEL_73;
  v13 = sub_4251B0((__int64)v67);
  if ( !v13 || (unsigned __int8)(v83 - 1) > 1u || (unsigned __int8)(v84 - 1) > 1u )
    goto LABEL_73;
  memset(v61, 0, 28);
  if ( !v85 )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_428380((__int64)v67) )
  {
LABEL_73:
    v19 = -1;
    goto LABEL_36;
  }
  qword_4C8078 = v70;
LABEL_8:
  sub_4295E0((__int64)v67, (__m128)0LL, a4, a5, a6, v14, v15, a9, a10);
  v61[0] = _mm_load_si128((const __m128i *)v71);
  *(__m128i *)((char *)v61 + 12) = _mm_loadu_si128((const __m128i *)&v71[3]);
  if ( !*(_QWORD *)&v61[0] )
  {
    v61[0] = _mm_load_si128(v67);
    *(__m128i *)((char *)v61 + 12) = _mm_loadu_si128((const __m128i *)((char *)&v67[0].m128i_u64[1] + 4));
  }
  v12 = (unsigned __int64)&v66[30];
  v16.m128i_i64[0] = 0;
  v17 = v66;
  do
  {
    v17->m128i_i64[0] = 0;
    v17 += 2;
    *(__m128i *)((char *)&v17[-2] + 8) = 0;
    v17[-1].m128i_i16[4] = 0;
    v17[-1].m128i_i32[3] = 0;
  }
  while ( &v66[30] != v17 );
  memset(v66, 0, 0x1E8u);
  if ( !*(_QWORD *)&v61[0] )
    goto LABEL_13;
  v60 = 0;
  v59 = nullptr;
  p_ptr = (__m128i *)&v59;
  v59 = sub_481540((__int64)&v59, nullptr, 0xAu, 0x10u);
  if ( !(unsigned __int8)sub_428860((__int64)v67, (__m128i **)&v59, (__int64 *)v61) )
    goto LABEL_55;
  p_ptr = v66;
  if ( !(unsigned __int8)sub_425A50((__int64)v67, (__int64)v66, (unsigned __int64 **)&v59) || (a2[8] & 4) == 0 )
    goto LABEL_55;
  if ( v66[0].m128i_i64[0] <= 0 || !v66[1].m128i_i64[0] )
    goto LABEL_100;
  p_ptr = (__m128i *)si128.m128i_i64[0];
  if ( si128.m128i_i64[0] <= 0 || !v81.m128i_i64[0] )
    goto LABEL_99;
  if ( v66[0].m128i_i64[0] != si128.m128i_i64[0] )
  {
    sub_4240B0(
      (int)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX), using the latter",
      si128.m128i_i64[0],
      v66[0].m128i_i64[0],
      v42,
      v43,
      v44,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v45,
      v46,
      a9,
      a10,
      v57);
LABEL_99:
    si128 = _mm_load_si128(v66);
    v16 = _mm_load_si128(&v66[1]);
    v81 = v16;
  }
LABEL_100:
  v47 = v60;
  v12 = (unsigned __int64)v59;
  v48 = (__m128i **)v59;
  if ( !(16LL * (_QWORD)v60) )
  {
    v35 = v59;
    goto LABEL_56;
  }
  v49 = 536920066;
  while ( 1 )
  {
    memset(&ptr, 0, 24);
    p_ptr = *v48;
    v52 = v48[1];
    if ( (unsigned __int64)*v48 <= 0x1D )
    {
      if ( _bittest64(&v49, (unsigned __int64)p_ptr) )
        break;
    }
    v51 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
    if ( v51 != sub_40D2C0 )
    {
      v50 = s1;
      goto LABEL_113;
    }
LABEL_109:
    v48 += 2;
    v35 = (void *)v12;
    if ( v48 == (__m128i **)(v12 + 16 * v47) )
      goto LABEL_56;
  }
  p_ptr = (__m128i *)&ptr;
  sub_428E80((__int64)v67, (__int64)&ptr, si128.m128i_i64, (unsigned int)v52);
  v50 = s1;
  v51 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
  if ( ptr.m256i_i64[1] )
    v50 = (const char *)ptr.m256i_i64[0];
  if ( v51 == sub_40D2C0 )
    goto LABEL_106;
  p_ptr = *v48;
  v52 = v48[1];
LABEL_113:
  if ( !((unsigned int (__fastcall *)(_BYTE *, __m128i *, const char *, __m128i *, double))v51)(
          a2,
          p_ptr,
          v50,
          v52,
          *(double *)v16.m128i_i64) )
  {
LABEL_106:
    if ( ptr.m256i_i64[0] )
    {
      ptr.m256i_i64[1] = 0;
      j__free((void *)ptr.m256i_i64[0]);
    }
    v12 = (unsigned __int64)v59;
    v47 = v60;
    goto LABEL_109;
  }
  if ( ptr.m256i_i64[0] )
  {
    ptr.m256i_i64[1] = 0;
    j__free((void *)ptr.m256i_i64[0]);
  }
LABEL_55:
  v35 = v59;
LABEL_56:
  if ( v35 )
  {
    *(_QWORD *)&v60 = 0;
    j__free(v35);
    v18 = *((_DWORD *)a2 + 2);
    if ( (v18 & 2) != 0 )
      goto LABEL_58;
    goto LABEL_14;
  }
LABEL_13:
  v18 = *((_DWORD *)a2 + 2);
  if ( (v18 & 2) == 0 )
    goto LABEL_14;
LABEL_58:
  v12 = v75;
  if ( !v75 )
    goto LABEL_14;
  if ( !v77 )
    sub_4236E0();
  if ( v75 >= v73 )
  {
LABEL_14:
    v19 = v18 & 1;
    if ( (v18 & 1) == 0 )
      goto LABEL_24;
    v12 = v76;
    v20 = v74;
    if ( v74 | v76 )
    {
      v19 = 0;
      if ( v76 )
      {
        if ( !v77 )
          sub_4236E0();
        if ( v76 >= v73 )
          p_ptr = nullptr;
        else
          p_ptr = (__m128i *)((char *)v72 + 64 * (unsigned __int64)v76);
        v19 = sub_42AF70((__int64)v67, (__int64)p_ptr, 1, (__int64 (***)())a2);
        v13 = v19 == 0;
      }
      if ( !(_DWORD)v20 || !v13 )
        goto LABEL_23;
      if ( !v77 )
        sub_4236E0();
      if ( v20 >= v73 )
        p_ptr = nullptr;
      else
        p_ptr = (__m128i *)((char *)v72 + 64 * v20);
    }
    else
    {
      v12 = v66[2].m128i_u64[0];
      if ( v66[2].m128i_i64[0] <= 0 || !v66[3].m128i_i64[0] )
      {
        v19 = 0;
LABEL_24:
        ptr.m256i_i64[0] = (__int64)v67;
        memset(&ptr.m256i_u64[1], 0, 24);
        LOBYTE(v63) = 0;
        if ( (v18 & 0x10) != 0 )
        {
          sub_42A470((__int64)v67, (__int64)&ptr);
          p_ptr = (__m128i *)&v59;
          v59 = nullptr;
          v60 = 0;
          if ( (unsigned __int8)sub_42A820((__int64)&ptr, (__int64)&v59) )
          {
            p_ptr = (__m128i *)s1;
            v38 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
            if ( (_QWORD)v60 )
              p_ptr = (__m128i *)v59;
            v12 = (unsigned __int64)sub_40D2D0;
            if ( v38 == sub_40D2D0 )
            {
              v39 = v59;
            }
            else
            {
              v55 = ((__int64 (__fastcall *)(_BYTE *, __m128i *))v38)(a2, p_ptr);
              v39 = v59;
              v19 = v55;
              if ( v55 )
              {
                if ( v59 )
                {
                  *(_QWORD *)&v60 = 0;
                  j__free(v59);
                }
                goto LABEL_27;
              }
            }
            v19 = 0;
          }
          else
          {
            v39 = v59;
          }
          if ( v39 )
          {
            *(_QWORD *)&v60 = 0;
            j__free(v39);
          }
          if ( (a2[8] & 0x20) == 0 )
            goto LABEL_27;
        }
        else if ( (v18 & 0x20) == 0 )
        {
          goto LABEL_36;
        }
        v59 = nullptr;
        v60 = 0;
        if ( !v77 )
          goto LABEL_27;
        p_ptr = (__m128i *)&v59;
        if ( !(unsigned __int8)sub_42A0D0((__int64 *)v71, (__int64)&v59, &v58) )
        {
          v41 = v59;
          goto LABEL_89;
        }
        p_ptr = (__m128i *)s1;
        v53 = *(__int64 (**)())(*(_QWORD *)a2 + 40LL);
        if ( (_QWORD)v60 )
          p_ptr = (__m128i *)v59;
        v12 = (unsigned __int64)sub_40D2E0;
        if ( v53 == sub_40D2E0 )
        {
          v41 = v59;
LABEL_120:
          v19 = 0;
LABEL_89:
          if ( !v41 )
            goto LABEL_27;
          goto LABEL_90;
        }
        v56 = ((__int64 (__fastcall *)(_BYTE *, __m128i *, _QWORD))v53)(a2, p_ptr, v58);
        v41 = v59;
        v19 = v56;
        if ( !v56 )
          goto LABEL_120;
        if ( v59 )
        {
LABEL_90:
          *(_QWORD *)&v60 = 0;
          j__free(v41);
        }
LABEL_27:
        v21 = (char *)ptr.m256i_i64[1];
        if ( ptr.m256i_i64[1] )
        {
          v22 = ptr.m256i_i64[2];
          if ( ptr.m256i_i64[2] )
          {
            v23 = 0;
            v24 = 0;
            do
            {
              v25 = &v21[v23];
              v26 = *(void **)&v21[v23 + 24];
              if ( v26 )
              {
                *((_QWORD *)v25 + 4) = 0;
                j__free(v26);
              }
              v27 = *(void **)v25;
              if ( *(_QWORD *)v25 )
              {
                *((_QWORD *)v25 + 1) = 0;
                j__free(v27);
              }
              ++v24;
              v21 = (char *)ptr.m256i_i64[1];
              v23 += 56;
            }
            while ( v22 != v24 );
          }
          ptr.m256i_i64[2] = 0;
          j__free(v21);
        }
        goto LABEL_36;
      }
      v64 = 0;
      v63 = 0;
      p_ptr = (__m128i *)&ptr;
      *(_OWORD *)ptr.m256i_i8 = 0;
      v40 = _mm_loadl_epi64((const __m128i *)&v66[2].m128i_u64[1]);
      HIDWORD(v63) = v66[3].m128i_i32[3];
      *(_QWORD *)&v63 = v66[3].m128i_i64[0];
      ptr.m256i_i32[1] = 11;
      v65 = v66[3].m128i_u16[4];
      *(__m128i *)&ptr.m256i_u64[2] = _mm_unpacklo_epi64(v40, (__m128i)v66[2].m128i_u64[0]);
    }
    v19 = sub_42AF70((__int64)v67, (__int64)p_ptr, 2, (__int64 (***)())a2);
LABEL_23:
    v18 = *((_DWORD *)a2 + 2);
    goto LABEL_24;
  }
  memset(&ptr, 0, 24);
  sub_428C40((__int64)v67, (void **)&ptr, *((_QWORD *)v72 + 8 * (unsigned __int64)v75 + 3));
  p_ptr = (__m128i *)s1;
  v36 = *(__int64 (**)())(*(_QWORD *)a2 + 8LL);
  if ( ptr.m256i_i64[1] )
    p_ptr = (__m128i *)ptr.m256i_i64[0];
  v12 = (unsigned __int64)sub_40D2A0;
  v37 = (void *)ptr.m256i_i64[0];
  if ( v36 == sub_40D2A0
    || (v54 = ((__int64 (__fastcall *)(_BYTE *, __m128i *))v36)(a2, p_ptr),
        v37 = (void *)ptr.m256i_i64[0],
        (v19 = v54) == 0) )
  {
    if ( v37 )
    {
      ptr.m256i_i64[1] = 0;
      j__free(v37);
    }
    v18 = *((_DWORD *)a2 + 2);
    goto LABEL_14;
  }
  if ( ptr.m256i_i64[0] )
  {
    ptr.m256i_i64[1] = 0;
    j__free((void *)ptr.m256i_i64[0]);
  }
LABEL_36:
  if ( v88 )
    (*(void (__fastcall **)(__int64, __m128i *, unsigned __int64))(*(_QWORD *)v88 + 8LL))(v88, p_ptr, v12);
  if ( v86 )
  {
    v87 = 0;
    j__free(v86);
  }
  v28 = (char *)v78;
  if ( v78 )
  {
    v29 = v79;
    if ( v79 )
    {
      v30 = 0;
      do
      {
        v31 = &v28[96 * v30];
        v32 = *((void **)v31 + 3);
        if ( v32 )
        {
          *((_QWORD *)v31 + 4) = 0;
          j__free(v32);
        }
        v33 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          j__free(v33);
        }
        ++v30;
        v28 = (char *)v78;
      }
      while ( v29 != v30 );
    }
    v79 = 0;
    j__free(v28);
  }
  if ( v72 )
  {
    v73 = 0;
    j__free(v72);
  }
  if ( v68 )
  {
    v69 = 0;
    j__free(v68);
  }
  return v19;
}
// 42B319: variable 'v14' is possibly undefined
// 42B319: variable 'v15' is possibly undefined
// 42B50F: variable 'v12' is possibly undefined
// 42B96E: variable 'v42' is possibly undefined
// 42B96E: variable 'v43' is possibly undefined
// 42B96E: variable 'v44' is possibly undefined
// 42B96E: variable 'v45' is possibly undefined
// 42B96E: variable 'v46' is possibly undefined
// 42B96E: variable 'v57' is possibly undefined
// 40D2A0: using guessed type __int64 sub_40D2A0();
// 40D2C0: using guessed type __int64 sub_40D2C0();
// 40D2D0: using guessed type __int64 sub_40D2D0();
// 40D2E0: using guessed type __int64 sub_40D2E0();
// 4C8078: using guessed type __int64 qword_4C8078;
