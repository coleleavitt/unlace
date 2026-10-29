signed int *__fastcall sub_B69FE0(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  char **v7; // rbp
  __int64 v8; // rdx
  char **exception; // rbp
  __int64 v10; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 *m128i_i64; // rdi
  const __m128i *v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rbp
  char v20; // dl
  char v21; // al
  unsigned int v22; // ebx
  _QWORD *v23; // rax
  _QWORD *v24; // r14
  const __m128i *v25; // rbx
  _QWORD *v26; // r12
  const __m128i *v27; // r13
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  const __m128i *v34; // r12
  __int64 v35; // rax
  const __m128i *v36; // rbx
  const __m128i *v37; // rdi
  unsigned int v38; // r14d
  size_t v39; // rdi
  __int64 v40; // rax
  const __m128i *v41; // r15
  _DWORD *v42; // r13
  __m128i *v43; // rax
  __int64 v44; // rcx
  __m128i *v45; // rdx
  const __m128i *v46; // rax
  const __m128i *v47; // rcx
  bool v48; // zf
  __int64 v49; // rax
  const __m128i *v50; // rbp
  const __m128i *v51; // rdi
  unsigned int v52; // ebx
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  unsigned int v57; // [rsp+8h] [rbp-B0h]
  __m128i *v58; // [rsp+8h] [rbp-B0h]
  __int64 v59; // [rsp+10h] [rbp-A8h]
  unsigned int v62; // [rsp+28h] [rbp-90h]
  __int64 v63[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v64; // [rsp+50h] [rbp-68h] BYREF
  char v65; // [rsp+58h] [rbp-60h]
  int v66; // [rsp+5Ch] [rbp-5Ch]
  __int64 v67; // [rsp+60h] [rbp-58h]
  int v68; // [rsp+68h] [rbp-50h]
  const __m128i *v69; // [rsp+70h] [rbp-48h]

  v62 = a3;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 104) + 712LL) )
  {
    v19 = 0;
    return sub_B68F30(a1, v62, a4, v19, a7, 0);
  }
  sub_B727F0(&v64, a1, a3);
  v68 = a2;
  v64 = qword_1C6F870;
  v69 = nullptr;
  if ( a5 )
  {
    v13 = a6;
    v59 = 16LL * a5 + a6;
    v14 = (_QWORD *)sub_186B270(0x28u);
    m128i_i64 = v14 + 1;
    *v14 = 2;
    v69 = (const __m128i *)(v14 + 1);
    while ( 1 )
    {
      v13 += 16;
      sub_15D0E50(m128i_i64, a6);
      v16 = v69;
      v17 = (unsigned int)(v69[-1].m128i_i32[3] + 1);
      v69[-1].m128i_i32[3] = v17;
      if ( v59 == v13 )
        break;
      v18 = v16[-1].m128i_u32[2];
      a6 = v13;
      if ( v18 == (_DWORD)v17 )
      {
        v38 = (3 * v18 + 1) >> 1;
        v39 = 16 * v38 + 8;
        if ( 16 * v18 + 8 >= (unsigned int)v39 || v18 >= v38 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v63, "Overflow encountered when expanding vector", v10);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v63);
          sub_233E40((__int64)v63);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v40 = sub_186B270(v39);
        v41 = v69;
        v42 = (_DWORD *)v40;
        v43 = (__m128i *)(v40 + 8);
        v58 = v43;
        if ( v69 )
        {
          v44 = v69[-1].m128i_u32[3];
          v45 = v43;
          v46 = v69;
          v42[1] = v44;
          v47 = &v41[v44];
          if ( v41 != v47 )
          {
            do
            {
              v48 = v46->m128i_i8[8] == 0;
              *v45 = _mm_loadu_si128(v46);
              v46->m128i_i32[0] = 0;
              if ( !v48 )
                v46->m128i_i8[8] = 0;
              ++v46;
              ++v45;
            }
            while ( v47 != v46 );
          }
          v49 = v41[-1].m128i_u32[3];
          v50 = &v41[v49];
          if ( (_DWORD)v49 )
          {
            do
            {
              v51 = v41++;
              sub_15D0DF0(v51);
            }
            while ( v41 != v50 );
            v41 = v69;
          }
          sub_186B220(&v41[-1].m128i_u64[1]);
          m128i_i64 = v58[v42[1]].m128i_i64;
          v43 = v58;
        }
        else
        {
          v42[1] = 0;
          m128i_i64 = (__int64 *)v43;
        }
        v69 = v43;
        *v42 = v38;
      }
      else
      {
        m128i_i64 = v16[v17].m128i_i64;
      }
    }
  }
  v64 = (__int64 *)&off_1C57830;
  v19 = sub_180C100(a1 + 8400, 40);
  v20 = v65;
  v21 = *(_BYTE *)(v19 + 8);
  *(_QWORD *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 8) = v20 & 3 | v21 & 0xFC;
  *(_DWORD *)(v19 + 12) = v66;
  *(_QWORD *)(v19 + 16) = v67;
  *(_QWORD *)v19 = qword_1C6F870;
  *(_DWORD *)(v19 + 24) = v68;
  if ( v69 )
  {
    v22 = v69[-1].m128i_u32[3];
    v57 = v69[-1].m128i_u32[2];
    v23 = (_QWORD *)sub_186B270(16LL * v57 + 8);
    v24 = v23 + 1;
    *v23 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), _mm_cvtsi32_si128(v22)).m128i_u64[0];
    *(_QWORD *)(v19 + 32) = v23 + 1;
    v25 = v69;
    if ( !v69 || (v26 = v23 + 1, v27 = &v69[v69[-1].m128i_u32[3]], v69 == v27) )
    {
      *(_QWORD *)v19 = &off_1C57830;
      goto LABEL_12;
    }
    do
    {
      sub_15D0E50(v26, v25++);
      v26 += 2;
    }
    while ( v25 != v27 );
    v24 = *(_QWORD **)(v19 + 32);
    *(_QWORD *)v19 = &off_1C57830;
    if ( v24 )
    {
LABEL_12:
      if ( *((_DWORD *)v24 - 1) )
      {
        v28 = *(_QWORD **)(a1 + 8600);
        if ( v28 )
        {
          v29 = *((_DWORD *)v28 - 1);
          if ( v29 == *((_DWORD *)v28 - 2) )
          {
            v52 = (3 * v29 + 1) >> 1;
            v53 = 8 * v52 + 8;
            if ( 8 * v29 + 8 >= v53 || v29 >= v52 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_14E142(v63, "Overflow encountered when expanding vector", v8);
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v63);
              sub_233E40((__int64)v63);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = (unsigned int *)sub_186B300(v28 - 1, v53);
            v55 = v54[1];
            v28 = v54 + 2;
            *v54 = v52;
            LODWORD(v54) = v55;
            *(_QWORD *)(a1 + 8600) = v28;
            v32 = &v28[v55];
            v31 = (_DWORD)v54 + 1;
          }
          else
          {
            v30 = v29;
            v31 = v29 + 1;
            v32 = &v28[v30];
          }
        }
        else
        {
          v56 = (_QWORD *)sub_186B270(0x18u);
          *v56 = 2;
          v28 = v56 + 1;
          *(_QWORD *)(a1 + 8600) = v56 + 1;
          v32 = v56 + 1;
          v31 = 1;
        }
        *v32 = v19;
        *((_DWORD *)v28 - 1) = v31;
      }
    }
  }
  else
  {
    *(_QWORD *)v19 = &off_1C57830;
  }
  v34 = v69;
  v64 = qword_1C6F870;
  if ( v69 )
  {
    v35 = v69[-1].m128i_u32[3];
    if ( (_DWORD)v35 )
    {
      v36 = &v69[v35];
      do
      {
        v37 = v34++;
        sub_15D0DF0(v37);
      }
      while ( v34 != v36 );
      v34 = v69;
    }
    sub_186B220(&v34[-1].m128i_u64[1]);
  }
  return sub_B68F30(a1, v62, a4, v19, a7, 0);
}

