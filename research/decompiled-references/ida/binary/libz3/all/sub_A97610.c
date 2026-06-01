__int64 __fastcall sub_A97610(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // r12
  __m128i v21; // xmm0
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // r12
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // r12
  __m128i v35; // xmm0
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rbx
  __m128i *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __m128i *v46; // rcx
  __int64 result; // rax
  unsigned int v48; // r15d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rcx
  __m128i v52; // xmm0
  unsigned int v53; // ebx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  char **exception; // r14
  char **v60; // r15
  int v61; // [rsp-8h] [rbp-D8h]
  char **v62; // [rsp+0h] [rbp-D0h]
  __int64 v63; // [rsp+8h] [rbp-C8h]
  unsigned int v64; // [rsp+8h] [rbp-C8h]
  __int64 v65; // [rsp+10h] [rbp-C0h]
  _QWORD *v66; // [rsp+18h] [rbp-B8h]
  __int64 v67; // [rsp+20h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v69; // [rsp+30h] [rbp-A0h] BYREF
  __m128i v70; // [rsp+40h] [rbp-90h]
  __int64 **v71; // [rsp+50h] [rbp-80h] BYREF
  char v72; // [rsp+58h] [rbp-78h]
  int v73; // [rsp+5Ch] [rbp-74h]
  __int64 v74; // [rsp+60h] [rbp-70h]
  int v75; // [rsp+68h] [rbp-68h]
  __int64 v76; // [rsp+70h] [rbp-60h]
  int v77; // [rsp+78h] [rbp-58h]
  __int64 v78; // [rsp+80h] [rbp-50h]
  __m128i v79; // [rsp+88h] [rbp-48h] BYREF

  v4 = *a1;
  v5 = a1[107];
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(v6 + 8LL * a2);
  v67 = v7;
  v8 = *(_QWORD *)(v6 + 8LL * a3);
  v9 = *(_QWORD **)(v4 + 16);
  v68 = v8;
  v66 = v9;
  if ( v5 )
  {
    v10 = a1[106];
    v11 = *(unsigned int *)(v5 - 4);
    if ( v10 )
    {
LABEL_3:
      v12 = *(unsigned int *)(v10 - 4);
      goto LABEL_4;
    }
  }
  else
  {
    v10 = a1[106];
    v11 = 0;
    if ( v10 )
      goto LABEL_3;
  }
  v12 = 0;
LABEL_4:
  v13 = *(_DWORD *)(v4 + 8);
  v62 = (char **)&v71;
  sub_B72D60(&v71, v66, v12, v10, v11, v5);
  v77 = v13;
  v78 = 0;
  v79.m128i_i64[0] = v7;
  v71 = (__int64 **)&off_1C579E8;
  v79.m128i_i64[1] = v8;
  nullsub_687(&v71, v66);
  v14 = sub_180C100(v66 + 1050, 72);
  v65 = v14;
  LOBYTE(v63) = *(_BYTE *)(v14 + 8);
  *(_BYTE *)(v14 + 8) = v72 & 3 | v63 & 0xFC;
  *(_DWORD *)(v14 + 12) = v73;
  *(_QWORD *)(v14 + 16) = v74;
  *(_DWORD *)(v14 + 24) = v75;
  v15 = v76;
  *(_QWORD *)v14 = qword_1C6E7C8;
  *(_QWORD *)(v14 + 32) = v15;
  LODWORD(v15) = v77;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 40) = v15;
  if ( !v78 )
  {
    *(__m128i *)(v14 + 56) = _mm_loadu_si128(&v79);
    *(_QWORD *)v14 = &off_1C579E8;
    goto LABEL_15;
  }
  v16 = *(_DWORD *)(v78 - 4);
  v64 = *(_DWORD *)(v78 - 8);
  v17 = sub_186B270(16LL * v64 + 8) + 8;
  *(_QWORD *)(v17 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v64), _mm_cvtsi32_si128(v16)).m128i_u64[0];
  *(_QWORD *)(v14 + 48) = v17;
  v18 = v78;
  v63 = v17;
  if ( !v78 || (v19 = v78 + 16LL * *(unsigned int *)(v78 - 4), v78 == v19) )
  {
    v52 = _mm_loadu_si128(&v79);
    *(_QWORD *)v65 = &off_1C579E8;
    *(__m128i *)(v65 + 56) = v52;
  }
  else
  {
    v20 = v17;
    do
    {
      sub_15D0E50(v20, v18);
      v18 += 16;
      v20 += 16;
    }
    while ( v19 != v18 );
    v21 = _mm_loadu_si128(&v79);
    v22 = *(_QWORD *)(v65 + 48);
    *(_QWORD *)v65 = &off_1C579E8;
    v63 = v22;
    *(__m128i *)(v65 + 56) = v21;
    if ( !v22 )
      goto LABEL_15;
  }
  if ( *(_DWORD *)(v63 - 4) )
  {
    v23 = (_QWORD *)v66[1075];
    if ( v23 )
    {
      v24 = *((_DWORD *)v23 - 1);
      if ( v24 == *((_DWORD *)v23 - 2) )
      {
        v53 = (3 * v24 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v54 || v24 >= v53 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A((char **)&v69);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v69);
          sub_233E40((__int64)&v69);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v55 = (unsigned int *)sub_186B300(v23 - 1, v54);
        v23 = v55 + 2;
        v66[1075] = v55 + 2;
        v56 = v55[1];
        *v55 = v53;
        LODWORD(v55) = v56;
        v27 = &v23[v56];
        v26 = (_DWORD)v55 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v23[v25];
      }
    }
    else
    {
      v58 = (_QWORD *)sub_186B270(0x18u);
      v23 = v58 + 1;
      *v58 = 2;
      v27 = v58 + 1;
      v66[1075] = v58 + 1;
      v26 = 1;
    }
    *v27 = v65;
    *((_DWORD *)v23 - 1) = v26;
  }
LABEL_15:
  v28 = v78;
  v71 = (__int64 **)qword_1C6E7C8;
  if ( v78 )
  {
    v29 = *(unsigned int *)(v78 - 4);
    if ( (_DWORD)v29 )
    {
      v30 = v78 + 16 * v29;
      do
      {
        v31 = v28;
        v28 += 16;
        sub_15D0DF0(v31);
      }
      while ( v30 != v28 );
      v28 = v78;
    }
    sub_186B220((void *)(v28 - 8));
  }
  v70 = 0u;
  v69 = 0;
  v32 = (_QWORD *)operator new(0x18u);
  *v32 = a1;
  v33 = _mm_loadl_epi64((const __m128i *)off_1C56608);
  v32[1] = &v67;
  v34 = *a1;
  v32[2] = &v68;
  *(_QWORD *)&v69 = v32;
  v35 = _mm_unpacklo_epi64(v33, (__m128i)(unsigned __int64)sub_A77800);
  v70 = v35;
  v36 = *(_QWORD *)(v34 + 24);
  if ( *(_QWORD *)(v36 + 912) )
  {
    v37 = sub_A77800((__int64)&v69);
    v38 = v37;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    v71 = nullptr;
    sub_966750(v34, v37, -1, 0, 0, -1, &v71, v61, (int)&v71, v63, v65, v66);
    if ( v71 )
      sub_186B220(v71 - 1);
    sub_A72BE0(v38, v36);
    v34 = *a1;
  }
  v39 = *(_QWORD *)(v34 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v39 + 112) + 348LL) )
  {
    if ( !(unsigned __int8)sub_A97400(a1, *(double *)v35.m128i_i64, (__m128)(unsigned __int64)sub_A77800) )
    {
      sub_1872CE0("");
      sub_1873130(114, 3356);
    }
    v39 = *(_QWORD *)(*a1 + 16);
  }
  v40 = v68;
  v41 = v67;
  if ( *(_QWORD *)(v67 + 8) != *(_QWORD *)(v68 + 8) )
  {
    v42 = *(__m128i **)(v39 + 8760);
    if ( v42 )
    {
      v43 = v42[-1].m128i_u32[3];
      if ( v43 == v42[-1].m128i_i32[2] )
      {
        v48 = (3 * v43 + 1) >> 1;
        v49 = 8 * (v48 + ((3 * v43 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v43 + 8 >= (unsigned int)v49 || v43 >= v48 )
        {
          v60 = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A(v62);
          *v60 = (char *)off_1C63128;
          sub_2333C0(v60 + 1, v62);
          sub_233E40((__int64)v62);
          __cxa_throw(v60, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(&v42[-1].m128i_u64[1], v49);
        v51 = v50[1];
        v42 = (__m128i *)(v50 + 2);
        *(_QWORD *)(v39 + 8760) = v50 + 2;
        *v50 = v48;
        LODWORD(v50) = v51;
        v46 = (__m128i *)((char *)v42 + 24 * v51);
        v45 = (_DWORD)v50 + 1;
      }
      else
      {
        v44 = v43;
        v45 = v43 + 1;
        v46 = (__m128i *)((char *)v42 + 24 * v44);
      }
    }
    else
    {
      v57 = (_QWORD *)sub_186B270(0x38u);
      v42 = (__m128i *)(v57 + 1);
      *v57 = 2;
      v45 = 1;
      *(_QWORD *)(v39 + 8760) = v42;
      v46 = v42;
    }
    *v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v40);
    v46[1].m128i_i64[0] = v65 | 3;
    v42[-1].m128i_i32[3] = v45;
  }
  if ( *(_QWORD *)(v36 + 912) )
    std::operator<<<std::char_traits<char>>();
  result = v70.m128i_i64[0];
  if ( v70.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64))v70.m128i_i64[0])(&v69, &v69, 3);
  return result;
}

