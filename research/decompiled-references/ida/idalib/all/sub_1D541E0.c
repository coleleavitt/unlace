__int64 __fastcall sub_1D541E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rbx
  char *v7; // rsi
  _BYTE *v8; // rcx
  char *i; // rax
  int v10; // edi
  __int64 v11; // r13
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
  __int64 v45; // r13
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r12
  __int64 *v50; // r13
  unsigned int v51; // r15d
  int v52; // ebx
  __int64 v53; // r9
  unsigned int v54; // ecx
  _QWORD *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // esi
  int v63; // r11d
  int v64; // ecx
  _QWORD *v65; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v66; // [rsp+8h] [rbp-1C0h]
  __int64 *v67; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v68; // [rsp+10h] [rbp-1B8h]
  __int64 *v69; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v70; // [rsp+20h] [rbp-1A8h]
  __int64 v71; // [rsp+28h] [rbp-1A0h]
  unsigned __int16 **v72; // [rsp+30h] [rbp-198h]
  unsigned __int16 *v73; // [rsp+38h] [rbp-190h]
  bool v74; // [rsp+43h] [rbp-185h]
  int v75; // [rsp+44h] [rbp-184h]
  void **p_ptr; // [rsp+48h] [rbp-180h]
  __int64 v77; // [rsp+50h] [rbp-178h] BYREF
  _QWORD *v78; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int16 *v79; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int16 *v80; // [rsp+68h] [rbp-160h]
  unsigned __int16 *v81; // [rsp+70h] [rbp-158h]
  void *ptr; // [rsp+80h] [rbp-148h] BYREF
  __int64 v83; // [rsp+88h] [rbp-140h]
  _BYTE v84[312]; // [rsp+90h] [rbp-138h] BYREF

  v6 = *(unsigned int *)(a2 + 28);
  v7 = v84;
  p_ptr = &ptr;
  v75 = v6;
  ptr = v84;
  v83 = 0x400000000LL;
  if ( !v6 )
  {
    v47 = *a1;
    v44 = (void **)v84;
    v74 = *(_DWORD *)(v47 + 12632) != 0;
    goto LABEL_40;
  }
  v8 = v84;
  if ( v6 > 4 )
  {
    sub_2237220(p_ptr, v84, v6, 64);
    v8 = ptr;
    v7 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v83;
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
  LODWORD(v83) = v75;
  v74 = v10 != 0;
  if ( !v75 )
  {
    v44 = (void **)ptr;
    goto LABEL_40;
  }
  v11 = 0;
  v12 = 0;
  v71 = (unsigned int)(v75 - 1);
  v72 = &v79;
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
      v65 = sub_1D51480(a1, v20, a3, (__m128)0LL);
      v21 = sub_1D51630(a1, *(_QWORD *)(v16 + 48), a3, (__m128)0LL);
      v22 = sub_1E61050(*a1, v21, v65, *(double *)a3.m128_u64, 0.0);
      *(_QWORD *)((char *)ptr + v19 + 16) = v22;
    }
    sub_C03D60(v72, a2, v11);
    v68 = v81;
    v66 = v80;
    v73 = v79;
    v70 = sub_1D434A0(a1, v79, a3, (__m128)0LL, v23, (unsigned __int64)v80, v24);
    v69 = (__int64 *)sub_1D434A0(a1, v66, a3, (__m128)0LL, v25, v26, v27);
    v31 = sub_1D434A0(a1, v68, a3, (__m128)0LL, v28, v29, v30);
    if ( !v12 )
    {
      v32 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
        v32 = *(_QWORD *)(v32 + 32);
      if ( !v32 || (v12 = 1, (v33 = *(_QWORD *)((char *)ptr + v19 + 16)) != 0) && (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v12 = v31 == 1 || v69 == (__int64 *)((char *)&dword_0 + 1) || v70 == 1;
        if ( !v12 )
          break;
      }
    }
LABEL_8:
    v13 = v11 + 1;
    if ( v11 == v71 )
      goto LABEL_32;
LABEL_9:
    v11 = v13;
  }
  v34 = (char *)ptr + v19;
  a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v69), (__m128i)xmmword_23AA750);
  *((_QWORD *)v34 + 5) = v31 & 0xFFFFFFFFFFFFFFFELL;
  *(__m128 *)(v34 + 24) = a3;
  v35 = sub_C03DA0(a2, v11);
  *(_DWORD *)((char *)ptr + v19 + 48) = v35;
  v36 = sub_C03DC0(a2, v11);
  *(_DWORD *)((char *)ptr + v19 + 52) = v36;
  v37 = sub_C03DE0(a2, v11);
  v38 = (char *)ptr + v19;
  v39 = !v74;
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
      if ( !v43 )
        goto LABEL_30;
    }
    else
    {
      v43 = (__int64 *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v43 )
        goto LABEL_36;
      v41 = 0;
    }
    v42 = *v43;
LABEL_30:
    if ( v42 != v41 )
      goto LABEL_31;
  }
LABEL_36:
  if ( *((unsigned __int16 **)v38 + 3) == v73 && *((unsigned __int16 **)v38 + 4) == v66 )
  {
    v12 = 0;
    v74 = *((_QWORD *)v38 + 5) != (_QWORD)v68;
    goto LABEL_8;
  }
LABEL_31:
  v74 = 1;
  v13 = v11 + 1;
  if ( v11 != v71 )
    goto LABEL_9;
LABEL_32:
  v44 = (void **)ptr;
  v45 = 1;
  if ( v12 )
    goto LABEL_33;
LABEL_40:
  v45 = a2;
  if ( v74 )
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
            (unsigned int)v83);
    v45 = v48;
    if ( v48 > 1 )
    {
      v67 = a1 + 1;
      v49 = v48 & 0xFFFFFFFFFFFFFFFELL;
      v69 = &v77;
      if ( v75 )
      {
        v70 = v48;
        v50 = a1;
        v51 = 0;
        v52 = v75;
        while ( 1 )
        {
          v57 = sub_C03D50(v49, v51);
          v58 = sub_C03D50(a2, v51);
          v62 = *((_DWORD *)v50 + 6);
          v77 = v58;
          if ( !v62 )
            break;
          v53 = v50[1];
          v54 = (v62 - 1) & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
          v55 = (_QWORD *)(v53 + 16LL * v54);
          v56 = *v55;
          if ( v58 != *v55 )
          {
            v63 = 1;
            v60 = 0;
            if ( v56 != -4096 )
            {
              while ( 1 )
              {
                if ( v56 == -8192 && !v60 )
                  v60 = (__int64)v55;
                v54 = (v62 - 1) & (v63 + v54);
                LODWORD(v71) = v63 + 1;
                v55 = (_QWORD *)(v53 + 16LL * v54);
                v56 = *v55;
                if ( v58 == *v55 )
                  goto LABEL_48;
                if ( v56 == -4096 )
                {
                  if ( v60 )
                    v55 = (_QWORD *)v60;
                  break;
                }
                v63 = v71;
              }
            }
            v64 = *((_DWORD *)v50 + 4);
            v78 = v55;
            v59 = (unsigned int)(v64 + 1);
            v61 = (unsigned int)(4 * v59);
            if ( (unsigned int)v61 < 3 * v62 )
            {
              v61 = v62 >> 3;
              if ( v62 - *((_DWORD *)v50 + 5) - (unsigned int)v59 <= (unsigned int)v61 )
              {
LABEL_52:
                sub_1748150((__int64)v67, v62, (__int64)v55, v59, v60, v61);
                sub_1C740A0(v67, v69, &v78);
                v58 = v77;
                v55 = v78;
                LODWORD(v59) = *((_DWORD *)v50 + 4) + 1;
              }
              v39 = *v55 == -4096;
              *((_DWORD *)v50 + 4) = v59;
              if ( !v39 )
                --*((_DWORD *)v50 + 5);
              *v55 = v58;
              v55[1] = 0;
              goto LABEL_48;
            }
LABEL_51:
            v62 *= 2;
            goto LABEL_52;
          }
LABEL_48:
          ++v51;
          v55[1] = v57;
          if ( v51 == v52 )
          {
            v45 = v70;
            goto LABEL_42;
          }
        }
        v78 = nullptr;
        goto LABEL_51;
      }
    }
LABEL_42:
    v44 = (void **)ptr;
  }
LABEL_33:
  if ( v44 != p_ptr + 2 )
    free(v44);
  return v45;
}
