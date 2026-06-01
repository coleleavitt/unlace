__int64 __fastcall sub_1DD2510(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rbx
  char *v7; // rsi
  _BYTE *v8; // rcx
  char *i; // rax
  int v10; // edi
  __int64 v11; // r14
  bool v12; // bp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int16 *v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  char *v37; // rdx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  char *v41; // rbx
  bool v42; // zf
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 *v46; // rax
  void **v47; // rdi
  __int64 v48; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // ebx
  unsigned __int64 v53; // r12
  int v54; // ebp
  __int64 v55; // rax
  unsigned int v56; // esi
  __int64 v57; // rax
  _QWORD *v58; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v59; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v60; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v61; // [rsp+10h] [rbp-1B8h]
  unsigned __int16 *v62; // [rsp+18h] [rbp-1B0h] BYREF
  unsigned __int16 *v63; // [rsp+20h] [rbp-1A8h]
  __int64 v64; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 *v65; // [rsp+30h] [rbp-198h]
  unsigned __int64 v66; // [rsp+38h] [rbp-190h]
  bool v67; // [rsp+43h] [rbp-185h]
  int v68; // [rsp+44h] [rbp-184h]
  void **p_ptr; // [rsp+48h] [rbp-180h]
  __int64 v70; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int64 v71; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int64 v72; // [rsp+68h] [rbp-160h]
  unsigned __int64 v73; // [rsp+70h] [rbp-158h]
  void *ptr; // [rsp+80h] [rbp-148h] BYREF
  __int64 v75; // [rsp+88h] [rbp-140h]
  _BYTE v76[312]; // [rsp+90h] [rbp-138h] BYREF

  v6 = *(unsigned int *)(a2 + 28);
  v7 = v76;
  p_ptr = &ptr;
  v68 = v6;
  ptr = v76;
  v75 = 0x400000000LL;
  if ( v6 )
  {
    v8 = v76;
    if ( v6 > 4 )
    {
      sub_2237220(p_ptr, v76, v6, 64);
      v8 = ptr;
      v7 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v75;
    }
    a4 = 0;
    for ( i = &v8[64 * v6]; i != v7; *((_DWORD *)v7 - 2) = 0 )
    {
      a3 = 0;
      *((_OWORD *)v7 + 1) = 0;
      v7 += 64;
      *((_OWORD *)v7 - 4) = 0;
      *((_OWORD *)v7 - 1) = 0;
      *((_DWORD *)v7 - 14) = 0;
      *((_OWORD *)v7 - 2) = 0;
    }
    v10 = *(_DWORD *)(*a1 + 12632);
    LODWORD(v75) = v68;
    v67 = v10 != 0;
    if ( v68 )
    {
      v11 = 0;
      v12 = 0;
      v64 = (unsigned int)(v68 - 1);
      v65 = &v71;
      while ( 1 )
      {
        v14 = sub_C03D50(a2, v11);
        v15 = *(_QWORD *)(v14 + 40);
        v16 = v14;
        v17 = v14;
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v15 & 7) != 0 )
          v18 = 0;
        v19 = v11 << 6;
        *(_QWORD *)((char *)ptr + v19) = v18;
        *(_DWORD *)((char *)ptr + v19 + 8) = *(_DWORD *)(v16 + 24);
        if ( (unsigned int)sub_B73090(v17) != *(_DWORD *)(v16 + 24) )
        {
          v20 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
            v20 = *(_QWORD *)(v20 + 32);
          v58 = sub_1DD1930((__int64)a1, v20, a3, (__m128)0LL);
          v21 = sub_1DD1AB0((__int64)a1, *(_QWORD *)(v16 + 48), a3, (__m128)0LL);
          v22 = sub_1E61050(*a1, v21, v58, *(double *)a3.m128_u64, 0.0);
          *(_QWORD *)((char *)ptr + v19 + 16) = v22;
        }
        sub_C03D60(v65, a2, v11);
        v60 = v73;
        v59 = v72;
        v66 = v71;
        v63 = sub_1DC71F0(a1, v71, v23, v72, v24, v25, a3, (__m128)0LL);
        v62 = sub_1DC71F0(a1, v59, v26, v27, v28, v29, a3, (__m128)0LL);
        v34 = sub_1DC71F0(a1, v60, v30, v31, v32, v33, a3, (__m128)0LL);
        if ( v12 )
          goto LABEL_8;
        v35 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
          v35 = *(_QWORD *)(v35 + 32);
        if ( v35 )
        {
          v12 = 1;
          v36 = *(_QWORD *)((char *)ptr + v19 + 16);
          if ( !v36 || (v36 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_8;
        }
        v12 = v34 == (unsigned __int16 *)((char *)&dword_0 + 1)
           || v62 == (unsigned __int16 *)((char *)&dword_0 + 1)
           || v63 == (unsigned __int16 *)((char *)&dword_0 + 1);
        if ( v12 )
          goto LABEL_8;
        v37 = (char *)ptr + v19;
        a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v62), (__m128i)xmmword_23AA750);
        *((_QWORD *)v37 + 5) = (unsigned __int64)v34 & 0xFFFFFFFFFFFFFFFELL;
        *(__m128 *)(v37 + 24) = a3;
        v38 = sub_C03DA0(a2, v11);
        *(_DWORD *)((char *)ptr + v19 + 48) = v38;
        v39 = sub_C03DC0(a2, v11);
        *(_DWORD *)((char *)ptr + v19 + 52) = v39;
        v40 = sub_C03DE0(a2, v11);
        v41 = (char *)ptr + v19;
        v42 = !v67;
        *((_DWORD *)v41 + 14) = v40;
        if ( !v42 )
          goto LABEL_31;
        v43 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
          v43 = *(_QWORD *)(v43 + 32);
        if ( v43 )
        {
          if ( (*((_QWORD *)v41 + 2) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v44 = *(_QWORD *)(*((_QWORD *)v41 + 2) & 0xFFFFFFFFFFFFFFF0LL);
            v45 = 0;
            v46 = (__int64 *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v46 )
              goto LABEL_29;
            goto LABEL_30;
          }
          v46 = (__int64 *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v46 )
          {
            v44 = 0;
LABEL_29:
            v45 = *v46;
LABEL_30:
            if ( v45 != v44 )
              goto LABEL_31;
          }
        }
        if ( *((_QWORD *)v41 + 3) == v66 && *((_QWORD *)v41 + 4) == v59 )
        {
          v12 = 0;
          v67 = *((_QWORD *)v41 + 5) != v60;
LABEL_8:
          v13 = v11 + 1;
          if ( v11 == v64 )
            goto LABEL_32;
          goto LABEL_9;
        }
LABEL_31:
        v67 = 1;
        v13 = v11 + 1;
        if ( v11 == v64 )
        {
LABEL_32:
          v47 = (void **)ptr;
          v48 = 1;
          if ( v12 )
            goto LABEL_33;
          goto LABEL_40;
        }
LABEL_9:
        v11 = v13;
      }
    }
    v47 = (void **)ptr;
  }
  else
  {
    v50 = *a1;
    v47 = (void **)v76;
    v67 = *(_DWORD *)(v50 + 12632) != 0;
  }
LABEL_40:
  v48 = a2;
  if ( v67 )
  {
    v51 = sub_1B45670(
            *(__int64 **)(*a1 + 760),
            nullptr,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            *(_DWORD *)(a2 + 24),
            a3,
            a4,
            (__int64)v47,
            (__int64)v47,
            (unsigned int)v75);
    v48 = v51;
    if ( v51 > 1 && v68 )
    {
      v61 = v51;
      v52 = 0;
      v53 = v51 & 0xFFFFFFFFFFFFFFFELL;
      v54 = v68;
      do
      {
        v55 = sub_C03D50(v53, v52);
        v56 = v52++;
        v70 = v55;
        v57 = sub_C03D50(a2, v56);
        sub_1DC2D70(a1, a1 + 4, v57, &v70, 1);
      }
      while ( v52 != v54 );
      v48 = v61;
    }
    v47 = (void **)ptr;
  }
LABEL_33:
  if ( v47 != p_ptr + 2 )
    free(v47);
  return v48;
}
