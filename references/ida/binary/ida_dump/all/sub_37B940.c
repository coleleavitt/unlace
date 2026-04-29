__int64 __fastcall sub_37B940(__int64 a1, unsigned int a2)
{
  _DWORD *exception; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // ebp
  int v6; // r12d
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
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r14
  const __m128i *v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm0
  unsigned __int64 v25; // rdx
  __int64 v26; // r13
  unsigned __int64 v27; // rax
  const __m128i *v28; // rax
  __int64 v29; // rax
  int v30; // r13d
  int v31; // r13d
  __int64 v32; // r11
  __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int32 v36; // esi
  _DWORD *v37; // r15
  __int64 v38; // r9
  unsigned __int64 v39; // r10
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rdi
  __int64 v44; // r13
  unsigned __int64 v45; // r15
  __int64 v46; // r14
  __int64 v47; // r12
  char v48; // bl
  __int64 v49; // rdx
  char *v50; // rdi
  __int64 v51; // rdx
  char *v52; // rdx
  int v53; // eax
  char v54; // r8
  __int64 v55; // [rsp+8h] [rbp-D0h]
  __int64 v56; // [rsp+8h] [rbp-D0h]
  __int64 v57; // [rsp+10h] [rbp-C8h]
  signed int v58; // [rsp+1Ch] [rbp-BCh]
  int v59; // [rsp+24h] [rbp-B4h]
  _DWORD *v60; // [rsp+28h] [rbp-B0h]
  __int64 v61; // [rsp+30h] [rbp-A8h]
  __int64 v62; // [rsp+38h] [rbp-A0h]
  _QWORD v63[5]; // [rsp+40h] [rbp-98h] BYREF
  char v64; // [rsp+68h] [rbp-70h]
  const __m128i *v65; // [rsp+70h] [rbp-68h]
  __int128 v66; // [rsp+78h] [rbp-60h]
  char v67; // [rsp+88h] [rbp-50h]
  unsigned __int64 v68; // [rsp+98h] [rbp-40h]

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 4);
  v68 = __readfsqword(0x28u);
  v6 = a2;
  v7 = sub_1CFC10();
  v8 = *(int *)(a1 + 120);
  v9 = v5 & 0x40;
  if ( v8 != v7 )
  {
    if ( v9 )
      return 0;
    if ( v8 > v7 )
    {
      if ( a2 <= 0x10 )
        v6 = getinf();
      *(_DWORD *)(a1 + 72) = v6;
      exception = __cxa_allocate_exception(0x30u);
      v3 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)exception = off_4DBCD0;
      exception[2] = -17;
      *((_QWORD *)exception + 2) = v3;
      *((_QWORD *)exception + 3) = 0;
      *((_OWORD *)exception + 2) = 0;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
    }
    v10 = sub_1CFC10();
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
    sub_37A500(a1, a2, 1);
  }
  v15 = *(_DWORD *)(a1 + 72);
  if ( v15 <= 0x10 )
  {
    v15 = getinf();
    if ( v15 == 176 )
      goto LABEL_9;
  }
  else if ( v15 == 176 )
  {
    goto LABEL_9;
  }
  if ( v15 != 256 && !(unsigned __int8)getinf_flag() )
    return 1;
LABEL_9:
  if ( a2 <= 0x10 )
    v6 = getinf();
  if ( v6 == 176 || v6 == 256 || (unsigned __int8)getinf_flag() )
    return 1;
  v17 = *(_QWORD *)(a1 + 440);
  memset(&v63[1], 0, 32);
  v64 = 0;
  v63[0] = off_4E61E0;
  v65 = nullptr;
  v67 = 0;
  v66 = 0;
  if ( v17 )
  {
    v18 = qvector_reserve();
    v19 = v18;
    v20 = *((_QWORD *)&v66 + 1);
    *((_QWORD *)&v66 + 1) = 0;
    v21 = v65;
    v22 = v66 - 1;
    if ( (__int64)v66 - 1 >= 0 )
    {
      do
      {
        v23 = _mm_loadu_si128(v21);
        v19 += 16;
        ++v21;
        *(__m128i *)(v19 - 16) = v23;
      }
      while ( v22-- != 0 );
    }
    qfree();
    v65 = (const __m128i *)v18;
    *((_QWORD *)&v66 + 1) = v20;
    if ( (unsigned __int64)v66 < v17 )
    {
      v25 = v66 + 1;
      v26 = 16 * v66 + v18;
      *(_QWORD *)v26 = 0;
      *(_DWORD *)(v26 + 8) = -1;
      if ( v25 < v17 )
      {
        do
        {
          v27 = v25++;
          v28 = &v65[v27];
          v28->m128i_i64[0] = 0;
          v28->m128i_i32[2] = -1;
        }
        while ( v17 != v25 );
      }
    }
    v29 = *(_QWORD *)(a1 + 1504);
    v30 = *(_DWORD *)(a1 + 464);
    *(_QWORD *)&v66 = v17;
    v58 = *(_DWORD *)(v29 + 80);
    v31 = v30 - 1;
    if ( v31 >= 0 )
      goto LABEL_30;
LABEL_52:
    if ( v67 )
      sub_11FBB0(v4, (__int64)v63);
    goto LABEL_54;
  }
  v58 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v31 = *(_DWORD *)(a1 + 464) - 1;
  if ( v31 < 0 )
  {
LABEL_54:
    v63[0] = off_4E61E0;
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree();
    }
    return 1;
  }
LABEL_30:
  v32 = v58;
  v33 = 4LL * v31;
  while ( 1 )
  {
    v34 = *(_QWORD *)(v4 + 456);
    v35 = *(_QWORD *)(v4 + 432);
    v36 = *(_DWORD *)(v34 + v33);
    v37 = (_DWORD *)(v35 + 104LL * v36);
    if ( *v37 != 1 )
      goto LABEL_31;
    v38 = *((_QWORD *)v37 + 1);
    if ( v38 % v32 )
      goto LABEL_31;
    v57 = v32 + v38;
    v39 = v31 + 1;
    if ( v39 >= *(_QWORD *)(v4 + 464)
      || (v40 = *(int *)(v34 + 4 * v39),
          v56 = 4 * v39,
          v41 = *(_DWORD *)(v34 + 4 * v39),
          v42 = v35 + 104 * v40,
          *(_DWORD *)v42 != 1)
      || (v43 = *(_QWORD *)(v42 + 8), v43 >= v32 + v38) )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(v4 + 1496) + 145LL) || v37[22] >= v58 )
        goto LABEL_31;
      v55 = v32;
      if ( v9 )
        break;
      goto LABEL_59;
    }
    if ( v9 )
      break;
    v62 = v32;
    v59 = v31;
    v44 = *((_QWORD *)v37 + 1);
    v60 = (_DWORD *)(v35 + 104LL * v36);
    v45 = v39;
    v61 = v33;
    v46 = v35 + 104 * v40;
    v47 = v4;
    v48 = 0;
    do
    {
      v49 = v40;
      v48 |= (*(_BYTE *)(v46 + 26) & 8) == 0;
      v65[v49].m128i_i32[2] = v36;
      v65[v49].m128i_i64[0] = v43 - v44;
      v50 = *(char **)(v47 + 456);
      v51 = *(_QWORD *)(v47 + 464);
      v67 = 1;
      v52 = &v50[4 * v51];
      if ( v50 != v52 )
      {
        while ( v41 != *(_DWORD *)v50 )
        {
          v50 += 4;
          if ( v52 == v50 )
            goto LABEL_45;
        }
        if ( v50 != v52 )
        {
          memmove(v50, v50 + 4, v52 - v50 - 4);
          --*(_QWORD *)(v47 + 464);
        }
      }
LABEL_45:
      v53 = *(_DWORD *)(v46 + 24);
      BYTE1(v53) &= 0x7Eu;
      *(_DWORD *)(v46 + 24) = v53 | 0x100000;
      if ( v45 >= *(_QWORD *)(v47 + 464) )
        break;
      v40 = *(int *)(*(_QWORD *)(v47 + 456) + v56);
      v41 = *(_DWORD *)(*(_QWORD *)(v47 + 456) + v56);
      v46 = *(_QWORD *)(v47 + 432) + 104 * v40;
      if ( *(_DWORD *)v46 != 1 )
        break;
      v43 = *(_QWORD *)(v46 + 8);
    }
    while ( v57 > v43 );
    v54 = v48;
    v9 = 0;
    v31 = v59;
    v4 = v47;
    v37 = v60;
    v33 = v61;
    v32 = v62;
    if ( v54 )
    {
      if ( v60[22] < v58 )
      {
        sub_1EF680(v60, *(_QWORD **)(v47 + 1504), v58, 0);
        v32 = v62;
      }
      v60[6] &= ~0x80000u;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v47 + 1496) + 145LL) && v60[22] < v58 )
    {
      v55 = v62;
LABEL_59:
      sub_1EF680(v37, *(_QWORD **)(v4 + 1504), v58, 0);
      v32 = v55;
    }
LABEL_31:
    --v31;
    v33 -= 4;
    if ( v31 == -1 )
      goto LABEL_52;
  }
  v63[0] = off_4E61E0;
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  return 0;
}
