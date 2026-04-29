__int64 __fastcall sub_3777C0(__int64 a1, unsigned int a2)
{
  _DWORD *exception; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // ebp
  unsigned int v6; // r12d
  signed __int64 v7; // rax
  signed __int64 v8; // rdx
  int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  double v14; // xmm2_8
  unsigned int v15; // eax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  const __m128i *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r14
  const __m128i *v23; // rcx
  __int64 v24; // rax
  __m128i v25; // xmm0
  unsigned __int64 v27; // rdx
  __int64 v28; // r13
  unsigned __int64 v29; // rax
  const __m128i *v30; // rax
  __int64 v31; // rax
  int v32; // r13d
  int v33; // r13d
  __int64 v34; // r11
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int32 v38; // esi
  _DWORD *v39; // r15
  __int64 v40; // r9
  unsigned __int64 v41; // r10
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // r13
  unsigned __int64 v47; // r15
  __int64 v48; // r14
  __int64 v49; // r12
  char v50; // bl
  __int64 v51; // rdx
  char *v52; // rdi
  __int64 v53; // rdx
  char *v54; // rdx
  int v55; // eax
  char v56; // r8
  __int64 v57; // [rsp+8h] [rbp-D0h]
  __int64 v58; // [rsp+8h] [rbp-D0h]
  __int64 v59; // [rsp+10h] [rbp-C8h]
  signed int v60; // [rsp+1Ch] [rbp-BCh]
  int v61; // [rsp+24h] [rbp-B4h]
  _DWORD *v62; // [rsp+28h] [rbp-B0h]
  __int64 v63; // [rsp+30h] [rbp-A8h]
  __int64 v64; // [rsp+38h] [rbp-A0h]
  _QWORD v65[5]; // [rsp+40h] [rbp-98h] BYREF
  char v66; // [rsp+68h] [rbp-70h]
  const __m128i *v67; // [rsp+70h] [rbp-68h] BYREF
  __int128 v68; // [rsp+78h] [rbp-60h]
  char v69; // [rsp+88h] [rbp-50h]
  unsigned __int64 v70; // [rsp+98h] [rbp-40h]

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 4);
  v70 = __readfsqword(0x28u);
  v6 = a2;
  v7 = sub_1CC1D0(a2);
  v8 = *(int *)(a1 + 120);
  v9 = v5 & 0x40;
  if ( v8 != v7 )
  {
    if ( v9 )
      return 0;
    if ( v8 > v7 )
    {
      if ( a2 <= 0x10 )
        v6 = getinf(99);
      *(_DWORD *)(a1 + 72) = v6;
      exception = __cxa_allocate_exception(0x30u);
      v3 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)exception = off_4C8E30;
      exception[2] = -17;
      *((_QWORD *)exception + 2) = v3;
      *((_QWORD *)exception + 3) = 0;
      *((_OWORD *)exception + 2) = 0;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_76A80);
    }
    v10 = sub_1CC1D0(a2);
    v11 = *(int *)(a1 + 120);
    v12 = _mm_loadu_si128((const __m128i *)(a1 + 664));
    *(_DWORD *)(a1 + 120) = v10;
    *(_QWORD *)(a1 + 144) += v10 - v11;
    *(_QWORD *)(a1 + 640) += v10 - v11;
    v13 = _mm_unpacklo_epi64((__m128i)(v10 - v11), (__m128i)(v10 - v11));
    v14 = *(double *)_mm_add_epi64(v13, v12).m128i_i64;
    v12.m128i_i64[1] = _mm_sub_epi64(v12, v13).m128i_i64[1];
    *(double *)v12.m128i_i64 = v14;
    *(__m128i *)(a1 + 664) = v12;
    sub_376380(a1, a2, 1);
  }
  v15 = *(_DWORD *)(a1 + 72);
  if ( v15 <= 0x10 )
  {
    v15 = getinf(99);
    if ( v15 == 176 )
      goto LABEL_9;
  }
  else if ( v15 == 176 )
  {
    goto LABEL_9;
  }
  if ( v15 != 256 && !(unsigned __int8)getinf_flag(67, 2) )
    return 1;
LABEL_9:
  if ( a2 <= 0x10 )
    v6 = getinf(99);
  if ( v6 == 176 || v6 == 256 || (unsigned __int8)getinf_flag(67, 2) )
    return 1;
  v17 = *(_QWORD *)(a1 + 440);
  memset(&v65[1], 0, 32);
  v66 = 0;
  v65[0] = off_4D32E0;
  v67 = nullptr;
  v69 = 0;
  v68 = 0;
  if ( v17 )
  {
    v18 = qvector_reserve(&v67, 0, v17, 16);
    v19 = v67;
    v20 = v18;
    v21 = v18;
    v22 = *((_QWORD *)&v68 + 1);
    *((_QWORD *)&v68 + 1) = 0;
    v23 = v67;
    v24 = v68 - 1;
    if ( (__int64)v68 - 1 >= 0 )
    {
      do
      {
        v25 = _mm_loadu_si128(v23);
        v21 += 16;
        ++v23;
        *(__m128i *)(v21 - 16) = v25;
      }
      while ( v24-- != 0 );
      v19 = v67;
    }
    qfree(v19);
    v67 = (const __m128i *)v20;
    *((_QWORD *)&v68 + 1) = v22;
    if ( (unsigned __int64)v68 < v17 )
    {
      v27 = v68 + 1;
      v28 = 16 * v68 + v20;
      *(_QWORD *)v28 = 0;
      *(_DWORD *)(v28 + 8) = -1;
      if ( v27 < v17 )
      {
        do
        {
          v29 = v27++;
          v30 = &v67[v29];
          v30->m128i_i64[0] = 0;
          v30->m128i_i32[2] = -1;
        }
        while ( v17 != v27 );
      }
    }
    v31 = *(_QWORD *)(v4 + 1504);
    v32 = *(_DWORD *)(v4 + 464);
    *(_QWORD *)&v68 = v17;
    v60 = *(_DWORD *)(v31 + 80);
    v33 = v32 - 1;
    if ( v33 >= 0 )
      goto LABEL_31;
LABEL_53:
    if ( v69 )
      sub_11C170(v4, (__int64)v65);
    goto LABEL_55;
  }
  v60 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v33 = *(_DWORD *)(a1 + 464) - 1;
  if ( v33 < 0 )
  {
LABEL_55:
    v65[0] = off_4D32E0;
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
    return 1;
  }
LABEL_31:
  v34 = v60;
  v35 = 4LL * v33;
  while ( 1 )
  {
    v36 = *(_QWORD *)(v4 + 456);
    v37 = *(_QWORD *)(v4 + 432);
    v38 = *(_DWORD *)(v36 + v35);
    v39 = (_DWORD *)(v37 + 104LL * v38);
    if ( *v39 != 1 )
      goto LABEL_32;
    v40 = *((_QWORD *)v39 + 1);
    if ( v40 % v34 )
      goto LABEL_32;
    v59 = v34 + v40;
    v41 = v33 + 1;
    if ( v41 >= *(_QWORD *)(v4 + 464)
      || (v42 = *(int *)(v36 + 4 * v41),
          v58 = 4 * v41,
          v43 = *(_DWORD *)(v36 + 4 * v41),
          v44 = v37 + 104 * v42,
          *(_DWORD *)v44 != 1)
      || (v45 = *(_QWORD *)(v44 + 8), v45 >= v34 + v40) )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(v4 + 1496) + 145LL) || v39[22] >= v60 )
        goto LABEL_32;
      v57 = v34;
      if ( v9 )
        break;
      goto LABEL_60;
    }
    if ( v9 )
      break;
    v64 = v34;
    v61 = v33;
    v46 = *((_QWORD *)v39 + 1);
    v62 = (_DWORD *)(v37 + 104LL * v38);
    v47 = v41;
    v63 = v35;
    v48 = v37 + 104 * v42;
    v49 = v4;
    v50 = 0;
    do
    {
      v51 = v42;
      v50 |= (*(_BYTE *)(v48 + 26) & 8) == 0;
      v67[v51].m128i_i32[2] = v38;
      v67[v51].m128i_i64[0] = v45 - v46;
      v52 = *(char **)(v49 + 456);
      v53 = *(_QWORD *)(v49 + 464);
      v69 = 1;
      v54 = &v52[4 * v53];
      if ( v52 != v54 )
      {
        while ( v43 != *(_DWORD *)v52 )
        {
          v52 += 4;
          if ( v54 == v52 )
            goto LABEL_46;
        }
        if ( v52 != v54 )
        {
          memmove(v52, v52 + 4, v54 - v52 - 4);
          --*(_QWORD *)(v49 + 464);
        }
      }
LABEL_46:
      v55 = *(_DWORD *)(v48 + 24);
      BYTE1(v55) &= 0x7Eu;
      *(_DWORD *)(v48 + 24) = v55 | 0x100000;
      if ( v47 >= *(_QWORD *)(v49 + 464) )
        break;
      v42 = *(int *)(*(_QWORD *)(v49 + 456) + v58);
      v43 = *(_DWORD *)(*(_QWORD *)(v49 + 456) + v58);
      v48 = *(_QWORD *)(v49 + 432) + 104 * v42;
      if ( *(_DWORD *)v48 != 1 )
        break;
      v45 = *(_QWORD *)(v48 + 8);
    }
    while ( v59 > v45 );
    v56 = v50;
    v9 = 0;
    v33 = v61;
    v4 = v49;
    v39 = v62;
    v35 = v63;
    v34 = v64;
    if ( v56 )
    {
      if ( v62[22] < v60 )
      {
        sub_1EBA00(v62, *(_QWORD **)(v49 + 1504), v60, 0);
        v34 = v64;
      }
      v62[6] &= ~0x80000u;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v49 + 1496) + 145LL) && v62[22] < v60 )
    {
      v57 = v64;
LABEL_60:
      sub_1EBA00(v39, *(_QWORD **)(v4 + 1504), v60, 0);
      v34 = v57;
    }
LABEL_32:
    --v33;
    v35 -= 4;
    if ( v33 == -1 )
      goto LABEL_53;
  }
  v65[0] = off_4D32E0;
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  return 0;
}
