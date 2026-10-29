__int64 __fastcall sub_82F770(__int64 a1, unsigned int a2, __int64 *a3, int a4)
{
  char **exception; // rbp
  __int64 v5; // rbp
  unsigned int v6; // r13d
  __int64 i; // rcx
  _QWORD *v10; // rdx
  _DWORD *v11; // r14
  __int64 v12; // rax
  _DWORD *v13; // rax
  unsigned __int64 v14; // rax
  __int64 j; // r14
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm2
  bool v18; // al
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  bool v26; // dl
  unsigned int v27; // esi
  void *v28; // r15
  void *v29; // r15
  __m128i v30; // xmm0
  __int64 v31; // rax
  char v32; // cl
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // r12
  unsigned int *v39; // rax
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned int v42; // eax
  const __m128i *v43; // rdx
  unsigned int v44; // r13d
  __int64 v45; // rax
  unsigned int v46; // r14d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  const __m128i *v51; // rdi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rsi
  bool v54; // cc
  const __m128i *v55; // rax
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  unsigned int *v58; // rcx
  __int64 result; // rax
  __m128 *v60; // rax
  unsigned int *v61; // rdx
  unsigned int v62; // esi
  _QWORD *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r12
  _QWORD *v67; // rax
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  _QWORD *v72; // rax
  void *v73[2]; // [rsp+0h] [rbp-118h] BYREF
  void *v74; // [rsp+10h] [rbp-108h]
  int v75; // [rsp+18h] [rbp-100h]
  unsigned int v76; // [rsp+1Ch] [rbp-FCh]
  bool v77; // [rsp+20h] [rbp-F8h]
  int v78; // [rsp+28h] [rbp-F0h] BYREF
  char v79; // [rsp+2Ch] [rbp-ECh]
  __int64 v80; // [rsp+30h] [rbp-E8h]
  int v81; // [rsp+38h] [rbp-E0h] BYREF
  char v82; // [rsp+3Ch] [rbp-DCh]
  __int64 v83; // [rsp+40h] [rbp-D8h]
  __m128i si128; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+58h] [rbp-C0h]
  bool v86; // [rsp+60h] [rbp-B8h]
  int v87; // [rsp+68h] [rbp-B0h] BYREF
  char v88; // [rsp+6Ch] [rbp-ACh]
  __int64 v89; // [rsp+70h] [rbp-A8h]
  int v90; // [rsp+78h] [rbp-A0h]
  char v91; // [rsp+7Ch] [rbp-9Ch]
  __int64 v92; // [rsp+80h] [rbp-98h]
  __int64 v93; // [rsp+88h] [rbp-90h]
  __int64 v94; // [rsp+90h] [rbp-88h]
  __int64 v95; // [rsp+98h] [rbp-80h]
  __int64 v96; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v97[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v98[3]; // [rsp+B8h] [rbp-60h] BYREF
  __m128i v99; // [rsp+D0h] [rbp-48h]

  v6 = 0;
  v75 = a4;
  v76 = a2;
  sub_829BD0((_QWORD *)a1);
  for ( i = *a3; i; ++*((_DWORD *)v10 - 1) )
  {
    if ( v6 >= *(_DWORD *)(i - 4) )
      break;
    v10 = *(_QWORD **)(a1 + 752);
    v11 = (_DWORD *)(i + 4LL * v6);
    if ( v10 )
    {
      v12 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
      {
        v33 = (unsigned int)(3 * v12 + 1) >> 1;
        v34 = 4 * v33 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v34 || (unsigned int)v12 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v96, "Overflow encountered when expanding vector");
LABEL_78:
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v96);
          sub_233E40((__int64)&v96);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v10 - 1, v34);
        v10 = v35 + 2;
        *v35 = v33;
        v36 = v35[1];
        *(_QWORD *)(a1 + 752) = v10;
        i = *a3;
        v13 = (_DWORD *)v10 + v36;
      }
      else
      {
        v13 = (_DWORD *)v10 + v12;
      }
    }
    else
    {
      v72 = (_QWORD *)sub_186B270(0x10u);
      v10 = v72 + 1;
      *v72 = 2;
      *(_QWORD *)(a1 + 752) = v72 + 1;
      v13 = v72 + 1;
      i = *a3;
    }
    ++v6;
    *v13 = *v11;
  }
  v14 = *(_QWORD *)(a1 + 728);
  for ( j = v14 + 12LL * *(unsigned int *)(a1 + 736); j != v14; v14 += 12LL )
  {
    if ( *(_DWORD *)(v14 + 4) == 2 )
      break;
  }
  v16 = *(_QWORD *)(a1 + 720);
  v17 = (__m128i)v14;
  v18 = 0;
  v19 = _mm_unpacklo_epi64((__m128i)v16, v17);
  if ( v16 )
    v18 = *(_DWORD *)(v16 - 4) != 0;
  v77 = v18;
  v74 = &v78;
  *(__m128i *)v73 = v19;
  v79 &= 0xFCu;
  v82 &= 0xFCu;
  v78 = 0;
  v80 = 0;
  v81 = 1;
  v83 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v78, &qword_1C7F280);
  v20 = *(unsigned int *)(a1 + 736);
  v85 = j;
  v21 = *(_QWORD *)(a1 + 720);
  v22 = 3 * v20;
  v23 = *(_QWORD *)(a1 + 728);
  si128 = _mm_load_si128((const __m128i *)v73);
  v24 = v23 + 4 * v22;
  if ( v21 )
  {
    v25 = *(unsigned int *)(v21 - 4);
    v21 += 40 * v25;
    v26 = (_DWORD)v25 != 0;
  }
  else
  {
    v26 = 0;
  }
  v86 = v26;
  v88 &= 0xFCu;
  v91 &= 0xFCu;
  v87 = 0;
  v89 = 0;
  v90 = 1;
  v92 = 0;
  v73[0] = &v87;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v87, &qword_1C7F280);
  v93 = v21;
  v94 = v24;
  v95 = v24;
  while ( v77 )
  {
    if ( si128.m128i_i64[0] == v93 )
      goto LABEL_41;
    v27 = *(_DWORD *)si128.m128i_i64[0];
LABEL_18:
    sub_82E330(a1, v27);
    if ( v77 )
    {
      si128.m128i_i64[0] += 40;
    }
    else
    {
      v31 = si128.m128i_i64[1] + 12;
      si128.m128i_i64[1] = v31;
      if ( v85 != v31 )
      {
        v32 = 0;
        while ( *(_DWORD *)(v31 + 4) != 2 )
        {
          v31 += 12;
          v32 = 1;
          if ( v85 == v31 )
          {
            si128.m128i_i64[1] = v85;
            goto LABEL_20;
          }
          v5 = v31;
        }
        if ( v32 )
          si128.m128i_i64[1] = v5;
      }
    }
LABEL_20:
    LOBYTE(v96) = v77;
    v28 = qword_1C7F2C0;
    v97[0] = 0;
    v97[1] = 0;
    v98[0] = 1;
    v98[1] = 0;
    if ( (v79 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v97, v74);
    else
      LODWORD(v97[0]) = v78;
    if ( (v82 & 1) != 0 )
    {
      sub_182C690(v28, v98, &v81);
    }
    else
    {
      BYTE4(v98[0]) &= ~1u;
      LODWORD(v98[0]) = v81;
    }
    v29 = qword_1C7F2C0;
    v30 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
    v98[2] = si128.m128i_i64[0];
    v99 = v30;
    sub_182CBA0(qword_1C7F2C0, v97);
    sub_182CBA0(v29, v98);
  }
  if ( si128.m128i_i64[1] != v94 )
  {
    v27 = *(_DWORD *)(si128.m128i_i64[1] + 8);
    goto LABEL_18;
  }
LABEL_41:
  sub_25A130((char *)v73[0]);
  sub_25A130((char *)v74);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 80) + 1180LL) && !(unsigned __int8)sub_87EF80(a1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1265);
  }
  if ( (_BYTE)v75 )
  {
    ++*(_DWORD *)(a1 + 392);
    v64 = v76;
    ++*(_DWORD *)(a1 + 424);
    v65 = sub_87F930(a1, v64, a1 + 752, a1 + 776);
    v66 = *(_QWORD *)(a1 + 80);
    v67 = sub_7E5DB0(a1, (const void **)(a1 + 752), (__int64 *)(a1 + 776), v65);
    return sub_7CA490(v66, (__int64)(v67 - 1), v68, v69, v70, v71);
  }
  v37 = *(_QWORD *)(a1 + 776);
  if ( v37 )
  {
    v38 = v37 + 16LL * *(unsigned int *)(v37 - 4);
    if ( v38 != v37 )
    {
      while ( 1 )
      {
        v40 = *(_QWORD *)(a1 + 80);
        v41 = sub_15E1B70(*(_QWORD *)(a1 + 72));
        v42 = sub_79C480(v40, v41);
        v43 = *(const __m128i **)(a1 + 752);
        v44 = v42;
        if ( !v43 )
          break;
        v45 = v43[-1].m128i_u32[3];
        if ( (_DWORD)v45 == v43[-1].m128i_i32[2] )
        {
          v46 = (unsigned int)(3 * v45 + 1) >> 1;
          v47 = 4 * v46 + 8;
          if ( 4 * (int)v45 + 8 >= (unsigned int)v47 || (unsigned int)v45 >= v46 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v96, "Overflow encountered when expanding vector");
            goto LABEL_78;
          }
          v37 += 16;
          v48 = (unsigned int *)sub_186B300(&v43[-1].m128i_u64[1], v47);
          v43 = (const __m128i *)(v48 + 2);
          *v48 = v46;
          v49 = v48[1];
          *(_QWORD *)(a1 + 752) = v43;
          v43->m128i_i32[v49] = v44;
          ++v43[-1].m128i_i32[3];
          if ( v38 == v37 )
            goto LABEL_53;
        }
        else
        {
          v39 = (unsigned int *)v43 + v45;
LABEL_47:
          v37 += 16;
          *v39 = v44;
          ++v43[-1].m128i_i32[3];
          if ( v38 == v37 )
            goto LABEL_53;
        }
      }
      v63 = (_QWORD *)sub_186B270(0x10u);
      v43 = (const __m128i *)(v63 + 1);
      *v63 = 2;
      *(_QWORD *)(a1 + 752) = v63 + 1;
      v39 = (unsigned int *)(v63 + 1);
      goto LABEL_47;
    }
  }
  v43 = *(const __m128i **)(a1 + 752);
  if ( !v43 )
    goto LABEL_67;
LABEL_53:
  v50 = 4LL * v43[-1].m128i_u32[3];
  v51 = (const __m128i *)((char *)v43 + v50);
  if ( &v43->m128i_i8[v50] == (__int8 *)v43 )
    goto LABEL_67;
  v52 = v50 - 4;
  v53 = (v52 >> 2) + 1;
  v54 = v52 <= 8;
  v55 = v43;
  if ( v54 )
    goto LABEL_82;
  v56 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
  do
  {
    v57 = _mm_loadu_si128(v55++);
    v55[-1] = _mm_xor_si128(v57, v56);
  }
  while ( &v43[v53 >> 2] != v55 );
  v55 = (const __m128i *)((char *)v43 + 4 * (v53 & 0xFFFFFFFFFFFFFFFCLL));
  if ( (v53 & 3) != 0 )
  {
LABEL_82:
    v55->m128i_i32[0] ^= 1u;
    if ( v51 != (const __m128i *)((char *)v55->m128i_i64 + 4) )
    {
      v55->m128i_i32[1] ^= 1u;
      if ( v51 != (const __m128i *)&v55->m128i_u64[1] )
        v55->m128i_i32[2] ^= 1u;
    }
  }
  v58 = (unsigned int *)v43 + v43[-1].m128i_u32[3];
  if ( v58 == (unsigned int *)v43 )
  {
LABEL_67:
    v60 = (__m128 *)sub_880FA0(a1, v76, 4294967294LL);
    v61 = *(unsigned int **)(a1 + 752);
    if ( v61 )
      v62 = *(v61 - 1);
    else
      v62 = 0;
    return sub_7E56B0(a1, v62, v61, v60, 1u);
  }
  else
  {
    while ( 1 )
    {
      result = v43->m128i_u32[0];
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * result) == 1 )
        break;
      v43 = (const __m128i *)((char *)v43 + 4);
      if ( v58 == (unsigned int *)v43 )
        goto LABEL_67;
    }
  }
  return result;
}

