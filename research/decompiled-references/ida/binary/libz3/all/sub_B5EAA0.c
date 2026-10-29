__int64 __fastcall sub_B5EAA0(__int64 a1)
{
  __int64 v1; // r8
  unsigned int **v2; // r14
  unsigned int **v3; // r12
  unsigned int *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r13
  __int64 v7; // r15
  unsigned int **v8; // rax
  __int32 v10; // eax
  void *v11; // r13
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdi
  void *v19; // r14
  unsigned int *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // r12
  bool v33; // zf
  int v34; // r12d
  void *v35; // rdi
  void *v36; // r13
  char v37; // al
  bool v38; // r14
  __int64 *v39; // r13
  __int64 v40; // r14
  __m128i v41; // xmm0
  __int64 v42; // rdi
  __int64 v43; // rax
  unsigned int *v44; // r13
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int *v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned int v56; // eax
  int v57; // eax
  __int64 v58; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-D0h]
  __int64 v60; // [rsp+20h] [rbp-C0h]
  __int64 v61; // [rsp+28h] [rbp-B8h]
  unsigned int *v62; // [rsp+30h] [rbp-B0h]
  __int64 v63; // [rsp+38h] [rbp-A8h]
  unsigned int v64; // [rsp+40h] [rbp-A0h]
  __int64 v65; // [rsp+40h] [rbp-A0h]
  unsigned int v66; // [rsp+48h] [rbp-98h]
  unsigned __int32 v67; // [rsp+48h] [rbp-98h]
  __int64 v68; // [rsp+48h] [rbp-98h]
  __int64 v69; // [rsp+48h] [rbp-98h]
  __m128i v70; // [rsp+50h] [rbp-90h] BYREF
  __int64 *v71; // [rsp+60h] [rbp-80h]
  void *v72; // [rsp+68h] [rbp-78h]
  unsigned int *v73; // [rsp+70h] [rbp-70h]
  __int64 *v74; // [rsp+78h] [rbp-68h]
  __m128i v75; // [rsp+80h] [rbp-60h] BYREF
  __m128i v76; // [rsp+90h] [rbp-50h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-38h]

  v1 = *(unsigned int *)(a1 + 176);
  v74 = (__int64 *)a1;
  v2 = *(unsigned int ***)(a1 + 168);
  v1 *= 16;
  v3 = (unsigned int **)((char *)v2 + v1);
  if ( (unsigned int **)((char *)v2 + v1) == v2 )
    return 1;
  while ( (unsigned __int64)*v2 <= 1 )
  {
    v2 += 2;
    if ( v3 == v2 )
      return 1;
  }
  v74 = (__int64 *)a1;
  if ( v3 == v2 )
    return 1;
  v4 = *v2;
  v71 = &v77;
  while ( 1 )
  {
    v73 = v2[1];
    v5 = sub_B645B0(*(_QWORD *)(v74[1] + 16), v4);
    v6 = v5;
    v7 = *(_QWORD *)(v74[1] + 16);
    v72 = *(void **)(*(_QWORD *)(v7 + 8840) + 8LL * (v5 >> 1));
    if ( (!(unsigned int)sub_8E7030(v7)
       || (*(unsigned __int8 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(v7 + 7488) + 56LL))(
            *(_QWORD *)(v7 + 7488),
            v72))
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v74[1] + 16) + 8848LL) + v6) == 1
      && *(_BYTE *)v73 )
    {
      v10 = v73[13];
      v76.m128i_i64[1] = 0;
      v76.m128i_i8[4] &= 0xFCu;
      v76.m128i_i32[0] = v10;
      v77 = 1;
      v78 = 0;
      sub_182CBA0(qword_1C7F2C0, v71);
      BYTE4(v77) &= ~1u;
      LODWORD(v77) = 1;
      v11 = qword_1C7F2C0;
      v70.m128i_i64[1] = (__int64)(v73 + 2);
      if ( (v73[7] & 1) == 0 && v73[6] == 1 )
      {
        if ( (v76.m128i_i8[4] & 1) != 0 || (v73[3] & 1) != 0 )
        {
          v72 = &v76;
          v56 = sub_182C7B0(qword_1C7F2C0, &v76, v70.m128i_i64[1]);
          v11 = qword_1C7F2C0;
          v12 = v56 >> 31;
        }
        else
        {
          v12 = v73[2];
          v72 = &v76;
          LOBYTE(v12) = v76.m128i_i32[0] < v12;
        }
      }
      else
      {
        v72 = &v76;
        LOBYTE(v12) = sub_1848D40(qword_1C7F2C0, &v76, v70.m128i_i64[1]);
        v11 = qword_1C7F2C0;
      }
      v70.m128i_i8[0] = v12;
      sub_182CBA0(v11, v72);
      sub_182CBA0(v11, v71);
      if ( v70.m128i_i8[0] )
        break;
    }
    v8 = v2 + 2;
    if ( v3 != v2 + 2 )
    {
      while ( 1 )
      {
        v4 = *v8;
        v2 = v8;
        if ( (unsigned __int64)*v8 > 1 )
          break;
        v8 += 2;
        if ( v3 == v8 )
          return 1;
      }
      if ( v3 != v8 )
        continue;
    }
    return 1;
  }
  v13 = *((_QWORD *)v4 + 4);
  v76 = 0u;
  v70.m128i_i64[0] = v13;
  v14 = *v74;
  v77 = 1;
  v58 = v14;
  v78 = 0;
  sub_182CBA0(qword_1C7F2C0, v71);
  v18 = v74[3];
  BYTE4(v77) &= ~1u;
  LODWORD(v77) = 1;
  if ( !v18 )
  {
    sub_16669E0(v74 + 2);
    v18 = v74[3];
  }
  sub_166A700(v18, (_DWORD)v72, 1, v15, v16, v17);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v72);
  sub_182CBA0(v19, v71);
  v20 = (unsigned int *)sub_15E1B70(v74[2]);
  v21 = *v74;
  v62 = v20;
  if ( v20 )
    v20[2] += 2;
  v22 = *(_QWORD *)(v74[1] + 16);
  v23 = *(_QWORD *)(v22 + 8656);
  if ( !v23 || (v24 = *v20, (unsigned int)v24 >= *(_DWORD *)(v23 - 4)) || !*(_QWORD *)(v23 + 8 * v24) )
  {
    sub_B6F780(v22);
    v22 = *(_QWORD *)(v74[1] + 16);
  }
  v66 = sub_B645B0(v22, v62);
  v25 = *(_QWORD *)(v74[1] + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v25 + 7488) + 48LL))(
    *(_QWORD *)(v25 + 7488),
    *(_QWORD *)(*(_QWORD *)(v25 + 8840) + 8LL * (v66 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 7488) + 64LL))(*(_QWORD *)(v25 + 7488));
  v64 = v62[2];
  v62[2] = v64 - 1;
  if ( v64 == 1 )
    sub_15D7BC0(v21, v62);
  v26 = *v74;
  v27 = v74[1];
  ++v4[2];
  v28 = *(_QWORD *)(v27 + 16);
  v29 = *(_QWORD *)(v28 + 8656);
  if ( !v29 || (v30 = *v4, (unsigned int)v30 >= *(_DWORD *)(v29 - 4)) || !*(_QWORD *)(v29 + 8 * v30) )
  {
    sub_B6F780(v28);
    v28 = *(_QWORD *)(v74[1] + 16);
  }
  v31 = sub_B645B0(v28, v4);
  v32 = *(_QWORD *)(v74[1] + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v32 + 7488) + 48LL))(
    *(_QWORD *)(v32 + 7488),
    *(_QWORD *)(*(_QWORD *)(v32 + 8840) + 8LL * (v31 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + 7488) + 64LL))(*(_QWORD *)(v32 + 7488));
  v33 = v4[2]-- == 1;
  if ( v33 )
    sub_15D7BC0(v26, v4);
  v34 = v73[13];
  v59 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31 ^ 1), _mm_cvtsi32_si128(v66)).m128i_u64[0];
  while ( 1 )
  {
    v76 = 0u;
    v35 = qword_1C7F2C0;
    v77 = 1;
    v78 = 0;
    if ( v34 < 0 )
      sub_1830C40(qword_1C7F2C0, v72, (unsigned int)v34);
    else
      v76.m128i_i32[0] = v34;
    sub_182CBA0(v35, v71);
    v36 = qword_1C7F2C0;
    LODWORD(v77) = 1;
    BYTE4(v77) &= ~1u;
    if ( (v73[7] & 1) == 0 && v73[6] == 1 )
    {
      if ( (v76.m128i_i8[4] & 1) != 0 || (v73[3] & 1) != 0 )
      {
        v57 = sub_182C7B0(qword_1C7F2C0, v72, v70.m128i_i64[1]);
        v36 = qword_1C7F2C0;
        v38 = v57 < 0;
      }
      else
      {
        v38 = v76.m128i_i32[0] < (int)v73[2];
      }
    }
    else
    {
      v37 = sub_1848D40(qword_1C7F2C0, v72, v70.m128i_i64[1]);
      v36 = qword_1C7F2C0;
      v38 = v37;
    }
    sub_182CBA0(v36, v72);
    sub_182CBA0(v36, v71);
    if ( !v38 )
      break;
    v39 = v74;
    sub_B5DB60(&v75, v74, v4, v70.m128i_i64[0], v34);
    v40 = v75.m128i_i64[0];
    v63 = *v39;
    v41 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v70), (__m128i)v75.m128i_u64[0]);
    v61 = v75.m128i_i64[1];
    v42 = v39[5];
    v76 = v41;
    v43 = sub_15DCAD0(v42, (int)v72, 0);
    v44 = (unsigned int *)v43;
    if ( v43 )
    {
      v45 = *(_DWORD *)(v43 + 8);
      v44[2] = v45 + 1;
      if ( v45 == -1 )
      {
        sub_15D7BC0(v63, v44);
        v60 = *v74;
        v46 = v44[2] + 1;
      }
      else
      {
        v46 = v45 + 2;
        v60 = *v74;
      }
      v44[2] = v46;
    }
    else
    {
      v60 = *v74;
    }
    v47 = *(_QWORD *)(v74[1] + 16);
    v48 = *(_QWORD *)(v47 + 8656);
    if ( !v48 || (v49 = *v44, (unsigned int)v49 >= *(_DWORD *)(v48 - 4)) || !*(_QWORD *)(v48 + 8 * v49) )
    {
      sub_B6F780(v47);
      v47 = *(_QWORD *)(v74[1] + 16);
    }
    v67 = sub_B645B0(v47, v44);
    v50 = *(_QWORD *)(v74[1] + 16);
    v65 = v50;
    v51 = *(unsigned int **)(*(_QWORD *)(v50 + 8840) + 8LL * (v67 >> 1));
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v50 + 7488) + 48LL))(*(_QWORD *)(v50 + 7488), v51);
    v52 = *(_QWORD *)(v65 + 7488);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 64LL))(v52);
    v33 = v44[2]-- == 1;
    if ( v33 )
    {
      v52 = v60;
      v51 = v44;
      sub_15D7BC0(v60, v44);
    }
    v76.m128i_i64[0] = v59;
    v76.m128i_i32[2] = v67;
    if ( (unsigned int)sub_180B130(v52) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)v41.m128i_i64) )
      {
        sub_186A4C0(*(double *)v41.m128i_i64);
        v68 = *(_QWORD *)(v74[1] + 16);
        v53 = sub_180B150(v68, v51);
        v54 = sub_AA55A0(v68, v53, 3, (unsigned int *)v72);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v54, "\n");
      }
      else
      {
        v69 = *(_QWORD *)(v74[1] + 16);
        v55 = sub_180B150(v69, v51);
        sub_AA55A0(v69, v55, 3, (unsigned int *)v72);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    sub_B69FE0(*(_QWORD *)(v74[1] + 16), *(_DWORD *)(v74[1] + 8), 3, (_DWORD)v72, 0, 0, 1);
    v33 = v44[2]-- == 1;
    if ( v33 )
      sub_15D7BC0(v63, v44);
    if ( v40 )
    {
      v33 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v61, v40);
    }
    ++v34;
  }
  LODWORD(v74) = v62[2];
  v33 = (_DWORD)v74 == 1;
  v62[2] = (_DWORD)v74 - 1;
  if ( v33 )
    sub_15D7BC0(v58, v62);
  return 0xFFFFFFFFLL;
}

