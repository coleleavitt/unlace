__int64 __fastcall sub_1176E40(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // r15
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  __int64 v11; // r12
  size_t v12; // r13
  const char **v13; // rax
  const char *v14; // r12
  size_t v15; // rax
  size_t v16; // r13
  const char *v17; // rax
  const char *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  size_t v22; // r12
  size_t v23; // rax
  const void *v24; // rax
  size_t v25; // rdx
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm1
  __m128 v33; // xmm1
  __m128i v34; // xmm2
  __m128i v35; // xmm3
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r15
  __m128i *p_si128; // r14
  __int64 v40; // rsi
  __int64 v42; // r12
  _BYTE *v43; // rax
  signed __int64 v44; // rdx
  __int64 v45; // rax
  _BYTE *v46; // rax
  signed __int64 v47; // rdx
  _BYTE *v48; // rsi
  size_t v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rsi
  __int64 v54; // r13
  signed __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r12
  __int64 v60; // rbp
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __m128i v64; // [rsp+8h] [rbp-120h] BYREF
  size_t v65; // [rsp+18h] [rbp-110h]
  void ***v66; // [rsp+20h] [rbp-108h]
  __int64 v67; // [rsp+28h] [rbp-100h]
  __int64 v68; // [rsp+38h] [rbp-F0h] BYREF
  void *v69; // [rsp+40h] [rbp-E8h] BYREF
  signed __int64 v70; // [rsp+48h] [rbp-E0h]
  _BYTE v71[16]; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v72; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v73[2]; // [rsp+70h] [rbp-B8h] BYREF
  char v74; // [rsp+90h] [rbp-98h]
  __m128i si128; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v76; // [rsp+B0h] [rbp-78h] BYREF
  __int16 v77; // [rsp+C0h] [rbp-68h]

  v4 = sub_122A550();
  v5 = sub_1105E80();
  if ( !v4 )
  {
    v42 = *(_QWORD *)(a2 + 176);
    v4 = operator new(0x148u);
    sub_21B6CD0(v4, v42);
  }
  v6 = *(_QWORD **)(a2 + 8);
  v7 = &v6[*(unsigned int *)(a2 + 16)];
  if ( v7 != v6 )
  {
    v8 = v6 + 1;
    if ( *v6 )
      goto LABEL_7;
    while ( 1 )
    {
      v6 = v8;
      if ( v7 == v8 )
        break;
      if ( *v8++ )
      {
LABEL_7:
        while ( 1 )
        {
          sub_21B80F0(v4, *v6);
          v9 = v6 + 1;
          if ( v7 == v6 + 1 )
            goto LABEL_13;
          if ( !v6[1] )
          {
            v10 = v6 + 2;
            do
            {
              v9 = v10;
              if ( v7 == v10 )
                goto LABEL_13;
              ++v10;
            }
            while ( !*(v10 - 1) );
          }
          v6 = v9;
        }
      }
    }
  }
LABEL_13:
  v11 = sub_10DCD30(v4, 0x913u);
  if ( v11 )
  {
    v12 = j__strlen("native");
    v13 = *(const char ***)(v11 + 48);
    v14 = *v13;
    if ( *v13 )
    {
      v15 = j__strlen(*v13);
      if ( v15 != v12 || v15 && memcmp(v14, "native", v15) )
        goto LABEL_24;
    }
    else if ( v12 )
    {
      goto LABEL_24;
    }
    sub_21B7DF0(v4, 2323);
    v66 = (void ***)&v72;
    (*(void (__fastcall **)(__m128i *, __int64, __int64))(*(_QWORD *)a1 + 664LL))(&v72, a1, a2);
    if ( (v74 & 1) != 0 )
    {
      sub_FC70B0((__int64)&si128, **(_QWORD **)(a1 + 8), 0, 479);
      v43 = (_BYTE *)sub_22B5820(*(unsigned int *)(a1 + 48));
      sub_AEC220((unsigned __int8 **)&si128, v43, v44);
      if ( (v74 & 1) != 0 )
      {
        v45 = v72.m128i_i64[0];
        v72.m128i_i64[0] = 0;
        v68 = v45;
      }
      else
      {
        v68 = 0;
      }
      sub_2221210(&v69, &v68);
      sub_AEC220((unsigned __int8 **)&si128, v69, v70);
      sub_AE9DF0((unsigned __int8 **)&si128, (__int64)"-mcpu", 1u);
      if ( v69 != v71 )
        operator delete(v69);
      if ( v68 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68);
      sub_AEA040((__int64)&si128);
    }
    else
    {
      if ( v72.m128i_i32[2] > 1u )
      {
        sub_FC70B0((__int64)&si128, **(_QWORD **)(a1 + 8), 0, 576);
        v46 = (_BYTE *)sub_22B5820(*(unsigned int *)(a1 + 48));
        sub_AEC220((unsigned __int8 **)&si128, v46, v47);
        v48 = v71;
        v49 = j__strlen(", ");
        v65 = v49;
        v64.m128i_i64[0] = (__int64)&v69;
        v50 = 32LL * v72.m128i_u32[2];
        v69 = v71;
        v71[0] = 0;
        v64.m128i_i64[1] = v72.m128i_i64[0] + v50;
        v70 = 0;
        if ( v72.m128i_i64[0] == v72.m128i_i64[0] + v50 )
        {
          v55 = 0;
        }
        else
        {
          v51 = (v50 >> 5) - 1;
          v52 = v72.m128i_i64[0];
          v53 = v49 * v51;
          do
          {
            v53 += *(_QWORD *)(v52 + 8);
            v52 += 32;
          }
          while ( v64.m128i_i64[1] != v52 );
          v54 = v72.m128i_i64[0] + 32;
          sub_995C30(v64.m128i_i64[0], v53);
          sub_9EE560(v64.m128i_i64[0], *(_BYTE **)(v54 - 32), *(_QWORD *)(v54 - 24));
          if ( v64.m128i_i64[1] != v54 )
          {
            if ( 0x7FFFFFFFFFFFFFFFLL - v70 < v65 )
LABEL_78:
              std::__throw_length_error("basic_string::append");
            v67 = 0x7FFFFFFFFFFFFFFFLL;
            while ( 1 )
            {
              v54 += 32;
              sub_9EE560(v64.m128i_i64[0], ", ", v65);
              sub_9EE560(v64.m128i_i64[0], *(_BYTE **)(v54 - 32), *(_QWORD *)(v54 - 24));
              if ( v64.m128i_i64[1] == v54 )
                break;
              if ( v65 > v67 - v70 )
                goto LABEL_78;
            }
          }
          v48 = v69;
          v55 = v70;
        }
        sub_AEC220((unsigned __int8 **)&si128, v48, v55);
        sub_AE9DF0((unsigned __int8 **)&si128, (__int64)"-mcpu", 1u);
        if ( v69 != (void *)(v64.m128i_i64[0] + 16) )
          operator delete(v69);
        sub_AEA040((__int64)&si128);
      }
      v16 = 0;
      v77 = 260;
      si128.m128i_i64[0] = v72.m128i_i64[0];
      v17 = (const char *)sub_10DA6C0(a2, (__int64)&si128);
      v18 = v17;
      if ( v17 )
        v16 = j__strlen(v17);
      v19 = sub_21BB380(v5, 2323);
      v21 = sub_21B8AA0(v4, 0, v19, v20, v18, v16);
      sub_21B80F0(v4, v21);
    }
    sub_10DFE60(v66);
  }
LABEL_24:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 808LL))(a1, v4);
  v22 = j__strlen("cl");
  v23 = j__strlen(&byte_22F0C30);
  v24 = (const void *)sub_21B7BC0(a2, 3510, &byte_22F0C30, v23);
  if ( v25 == v22 && (!v25 || !memcmp(v24, "cl", v25)) && sub_10DCD30(a2, 0xF9u) && sub_10DCD30(a2, 0x159u) )
  {
    v26 = sub_22B7EA0(a1 + 16);
    v27 = sub_21BB380(v5, v26 == 0 ? 2207 : 2210);
    v29 = sub_21B9090(v4, 0, v27, v28);
    sub_21B80F0(v4, v29);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9A10);
    v30 = sub_21B6DA0(a2, &si128, 4);
    v31 = *(_QWORD *)(a2 + 8);
    v64.m128i_i64[0] = v31 + 8 * HIDWORD(v30);
    v32 = _mm_loadl_epi64(&v64);
    v64.m128i_i64[1] = v31 + 8LL * (unsigned int)v30;
    v76 = _mm_load_si128((const __m128i *)&xmmword_23A9A10);
    si128 = _mm_unpacklo_epi64(v32, v32);
    sub_1142D80((__int64)&si128);
    v33 = _mm_loadh_ps((const double *)v64.m128i_i64);
    v73[0] = _mm_load_si128((const __m128i *)&xmmword_23A9A10);
    v72 = (__m128i)v33;
    sub_1142D80((__int64)&v72);
    v34 = _mm_load_si128(&v72);
    v35 = _mm_load_si128(v73);
    v64.m128i_i64[0] = v72.m128i_i64[1];
    v36 = v72.m128i_i64[0];
    v76 = v35;
    v64.m128i_i64[1] = si128.m128i_i64[0];
    si128 = v34;
    if ( v72.m128i_i64[0] == v64.m128i_i64[1] )
    {
      v56 = *(_QWORD *)(a1 + 5000);
      v57 = a1 + 4992;
      if ( v56 )
      {
        v58 = a1 + 4992;
        do
        {
          if ( *(int *)(v56 + 32) > 3113 )
          {
            v58 = v56;
            v56 = *(_QWORD *)(v56 + 16);
          }
          else
          {
            v56 = *(_QWORD *)(v56 + 24);
          }
        }
        while ( v56 );
        if ( v57 != v58 && *(int *)(v58 + 32) <= 3114 )
          v57 = v58;
      }
      v59 = *(_QWORD *)(v57 + 40);
      v60 = *(_QWORD *)(v57 + 48);
      v61 = sub_21BB380(v5, 3114);
      v63 = sub_21B8AA0(v4, 0, v61, v62, v59, v60);
      sub_21B80F0(v4, v63);
    }
    else
    {
      do
      {
LABEL_30:
        v37 = *(_QWORD *)(*(_QWORD *)v36 + 16LL);
        if ( !v37 )
          v37 = *(_QWORD *)v36;
        v36 += 8;
        *(_BYTE *)(v37 + 44) |= 1u;
        for ( si128.m128i_i64[0] = v36; v64.m128i_i64[0] != v36; si128.m128i_i64[0] = v36 )
        {
          v38 = *(_QWORD *)v36;
          p_si128 = &si128;
          if ( *(_QWORD *)v36 )
          {
            do
            {
              v40 = p_si128[1].m128i_u32[0];
              if ( !(_DWORD)v40 )
                break;
              if ( (unsigned __int8)sub_21B9810(v38, v40) )
              {
                v36 = si128.m128i_i64[0];
                if ( v64.m128i_i64[1] != si128.m128i_i64[0] )
                  goto LABEL_30;
                return v4;
              }
              p_si128 = (__m128i *)((char *)p_si128 + 4);
            }
            while ( &v76 != p_si128 );
          }
          v36 += 8;
        }
      }
      while ( v64.m128i_i64[1] != v36 );
    }
  }
  return v4;
}
