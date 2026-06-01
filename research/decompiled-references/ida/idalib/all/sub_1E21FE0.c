__int64 __fastcall sub_1E21FE0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
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
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx
  char *v34; // rdx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  char *v38; // rbx
  bool v39; // zf
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 *v43; // rax
  void **v44; // rdi
  __int64 v45; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r15
  unsigned int v50; // ebx
  unsigned __int64 v51; // r12
  __int64 v52; // rax
  unsigned int v53; // esi
  __int64 v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // r9
  _QWORD *v59; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v60; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v61; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v62; // [rsp+10h] [rbp-1B8h]
  __int64 v63; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v64; // [rsp+20h] [rbp-1A8h]
  __int64 v65; // [rsp+28h] [rbp-1A0h]
  unsigned __int16 **v66; // [rsp+30h] [rbp-198h]
  unsigned __int16 *v67; // [rsp+38h] [rbp-190h]
  bool v68; // [rsp+43h] [rbp-185h]
  int v69; // [rsp+44h] [rbp-184h]
  void **p_ptr; // [rsp+48h] [rbp-180h]
  __int64 v71; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int16 *v72; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int16 *v73; // [rsp+68h] [rbp-160h]
  unsigned __int16 *v74; // [rsp+70h] [rbp-158h]
  void *ptr; // [rsp+80h] [rbp-148h] BYREF
  __int64 v76; // [rsp+88h] [rbp-140h]
  _BYTE v77[312]; // [rsp+90h] [rbp-138h] BYREF

  v6 = *(unsigned int *)(a2 + 28);
  v7 = v77;
  p_ptr = &ptr;
  v69 = v6;
  ptr = v77;
  v76 = 0x400000000LL;
  if ( v6 )
  {
    v8 = v77;
    if ( v6 > 4 )
    {
      sub_2237220(p_ptr, v77, v6, 64);
      v8 = ptr;
      v7 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v76;
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
    LODWORD(v76) = v69;
    v68 = v10 != 0;
    if ( v69 )
    {
      v11 = 0;
      v12 = 0;
      v65 = (unsigned int)(v69 - 1);
      v66 = &v72;
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
        if ( *(_DWORD *)(v16 + 24) != (unsigned int)sub_B73090(v17) )
        {
          v20 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
            v20 = *(_QWORD *)(v20 + 32);
          v59 = sub_1E1F330(a1, v20, a3, (__m128)0LL);
          v21 = sub_1E1F4E0(a1, *(_QWORD *)(v16 + 48), a3, (__m128)0LL);
          v22 = sub_1E61050(*a1, v21, v59, *(double *)a3.m128_u64, 0.0);
          *(_QWORD *)((char *)ptr + v19 + 16) = v22;
        }
        sub_C03D60(v66, a2, v11);
        v62 = v74;
        v60 = v73;
        v67 = v72;
        v64 = sub_1E11560(a1, v72, a3, (__m128)0LL, v23, (unsigned __int64)v73, v24);
        v63 = sub_1E11560(a1, v60, a3, (__m128)0LL, v25, v26, v27);
        v31 = sub_1E11560(a1, v62, a3, (__m128)0LL, v28, v29, v30);
        if ( v12 )
          goto LABEL_8;
        v32 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
          v32 = *(_QWORD *)(v32 + 32);
        if ( v32 )
        {
          v12 = 1;
          v33 = *(_QWORD *)((char *)ptr + v19 + 16);
          if ( !v33 || (v33 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_8;
        }
        v12 = v31 == 1 || v63 == 1 || v64 == 1;
        if ( v12 )
          goto LABEL_8;
        v34 = (char *)ptr + v19;
        a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v63), (__m128i)xmmword_23AA750);
        *((_QWORD *)v34 + 5) = v31 & 0xFFFFFFFFFFFFFFFELL;
        *(__m128 *)(v34 + 24) = a3;
        v35 = sub_C03DA0(a2, v11);
        *(_DWORD *)((char *)ptr + v19 + 48) = v35;
        v36 = sub_C03DC0(a2, v11);
        *(_DWORD *)((char *)ptr + v19 + 52) = v36;
        v37 = sub_C03DE0(a2, v11);
        v38 = (char *)ptr + v19;
        v39 = !v68;
        *((_DWORD *)v38 + 14) = v37;
        if ( !v39 )
          goto LABEL_31;
        v40 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
          v40 = *(_QWORD *)(v40 + 32);
        if ( v40 )
        {
          if ( (*((_QWORD *)v38 + 2) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v41 = *(_QWORD *)(*((_QWORD *)v38 + 2) & 0xFFFFFFFFFFFFFFF0LL);
            v42 = 0;
            v43 = (__int64 *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v43 )
              goto LABEL_29;
            goto LABEL_30;
          }
          v43 = (__int64 *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v43 )
          {
            v41 = 0;
LABEL_29:
            v42 = *v43;
LABEL_30:
            if ( v42 != v41 )
              goto LABEL_31;
          }
        }
        if ( *((unsigned __int16 **)v38 + 3) == v67 && *((unsigned __int16 **)v38 + 4) == v60 )
        {
          v12 = 0;
          v68 = *((_QWORD *)v38 + 5) != (_QWORD)v62;
LABEL_8:
          v13 = v11 + 1;
          if ( v11 == v65 )
            goto LABEL_32;
          goto LABEL_9;
        }
LABEL_31:
        v68 = 1;
        v13 = v11 + 1;
        if ( v11 == v65 )
        {
LABEL_32:
          v44 = (void **)ptr;
          v45 = 1;
          if ( v12 )
            goto LABEL_33;
          goto LABEL_40;
        }
LABEL_9:
        v11 = v13;
      }
    }
    v44 = (void **)ptr;
  }
  else
  {
    v47 = *a1;
    v44 = (void **)v77;
    v68 = *(_DWORD *)(v47 + 12632) != 0;
  }
LABEL_40:
  v45 = a2;
  if ( v68 )
  {
    v48 = sub_1B45670(
            *(__int64 **)(*a1 + 760),
            nullptr,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            *(_DWORD *)(a2 + 24),
            a3,
            a4,
            (__int64)v44,
            (__int64)v44,
            (unsigned int)v76);
    v45 = v48;
    if ( v48 > 1 && v69 )
    {
      v61 = v48;
      v49 = (__int64)(a1 + 1);
      v50 = 0;
      v51 = v48 & 0xFFFFFFFFFFFFFFFELL;
      do
      {
        v52 = sub_C03D50(v51, v50);
        v53 = v50++;
        v54 = v52;
        v71 = sub_C03D50(a2, v53);
        *sub_1742A40(v49, &v71, v55, v56, v57, v58) = v54;
      }
      while ( v50 != v69 );
      v45 = v61;
    }
    v44 = (void **)ptr;
  }
LABEL_33:
  if ( v44 != p_ptr + 2 )
    free(v44);
  return v45;
}
