__int64 __fastcall sub_176CE80(__int64 *a1, _DWORD *a2, __m128 a3)
{
  unsigned __int64 v5; // rbx
  char *v6; // rsi
  _BYTE *v7; // rcx
  char *i; // rax
  int v9; // edi
  __int64 v10; // r14
  bool v11; // bp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  void **v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  char *v25; // rdx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char *v29; // rbx
  bool v30; // zf
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 *v34; // rax
  void **v35; // rdi
  __int64 v36; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // r15
  unsigned int v41; // ebx
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  unsigned int v44; // esi
  __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 *v49; // r9
  void **v50; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v51; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v52; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v53; // [rsp+10h] [rbp-1B8h]
  __int64 v54; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v55; // [rsp+20h] [rbp-1A8h]
  __int64 v56; // [rsp+28h] [rbp-1A0h]
  unsigned __int16 **v57; // [rsp+30h] [rbp-198h]
  unsigned __int16 *v58; // [rsp+38h] [rbp-190h]
  bool v59; // [rsp+43h] [rbp-185h]
  int v60; // [rsp+44h] [rbp-184h]
  void **p_ptr; // [rsp+48h] [rbp-180h]
  __int64 v62; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int16 *v63[4]; // [rsp+60h] [rbp-168h] BYREF
  void *ptr; // [rsp+80h] [rbp-148h] BYREF
  __int64 v65; // [rsp+88h] [rbp-140h]
  _BYTE v66[312]; // [rsp+90h] [rbp-138h] BYREF

  v5 = (unsigned int)a2[7];
  v6 = v66;
  p_ptr = &ptr;
  v60 = v5;
  ptr = v66;
  v65 = 0x400000000LL;
  if ( v5 )
  {
    v7 = v66;
    if ( v5 > 4 )
    {
      sub_2237220(p_ptr, v66, v5, 64);
      v7 = ptr;
      v6 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v65;
    }
    for ( i = &v7[64 * v5]; i != v6; *((_DWORD *)v6 - 2) = 0 )
    {
      a3 = 0;
      *((_OWORD *)v6 + 1) = 0;
      v6 += 64;
      *((_OWORD *)v6 - 4) = 0;
      *((_OWORD *)v6 - 1) = 0;
      *((_DWORD *)v6 - 14) = 0;
      *((_OWORD *)v6 - 2) = 0;
    }
    v9 = *(_DWORD *)(*a1 + 12632);
    LODWORD(v65) = v60;
    v59 = v9 != 0;
    if ( v60 )
    {
      v10 = 0;
      v11 = 0;
      v56 = (unsigned int)(v60 - 1);
      v57 = v63;
      while ( 1 )
      {
        v13 = sub_C03D50((__int64)a2, v10);
        v14 = *(_QWORD *)(v13 + 40);
        v15 = v13;
        v16 = v13;
        v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v14 & 7) != 0 )
          v17 = 0;
        v18 = v10 << 6;
        *(_QWORD *)((char *)ptr + v18) = v17;
        *(_DWORD *)((char *)ptr + v18 + 8) = *(_DWORD *)(v15 + 24);
        if ( *(_DWORD *)(v15 + 24) != (unsigned int)sub_B73090(v16) )
        {
          v19 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
            v19 = *(_QWORD *)(v19 + 32);
          v50 = sub_176A140(a1, (void **)v19, a3);
          v20 = sub_176A2F0(a1, *(_QWORD *)(v15 + 48), a3);
          v21 = sub_1E61050(*a1, v20, v50, *(double *)a3.m128_u64, 0.0);
          *(_QWORD *)((char *)ptr + v18 + 16) = v21;
        }
        sub_C03D60(v57, (__int64)a2, v10);
        v53 = v63[2];
        v51 = v63[1];
        v58 = v63[0];
        v55 = sub_175B800(a1, v63[0]);
        v54 = sub_175B800(a1, v51);
        v22 = sub_175B800(a1, v53);
        if ( v11 )
          goto LABEL_8;
        v23 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
          v23 = *(_QWORD *)(v23 + 32);
        if ( v23 )
        {
          v11 = 1;
          v24 = *(_QWORD *)((char *)ptr + v18 + 16);
          if ( !v24 || (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_8;
        }
        v11 = v22 == 1 || v54 == 1 || v55 == 1;
        if ( v11 )
          goto LABEL_8;
        v25 = (char *)ptr + v18;
        a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v54), (__m128i)xmmword_23AA750);
        *((_QWORD *)v25 + 5) = v22 & 0xFFFFFFFFFFFFFFFELL;
        *(__m128 *)(v25 + 24) = a3;
        v26 = sub_C03DA0((__int64)a2, v10);
        *(_DWORD *)((char *)ptr + v18 + 48) = v26;
        v27 = sub_C03DC0((__int64)a2, v10);
        *(_DWORD *)((char *)ptr + v18 + 52) = v27;
        v28 = sub_C03DE0((__int64)a2, v10);
        v29 = (char *)ptr + v18;
        v30 = !v59;
        *((_DWORD *)v29 + 14) = v28;
        if ( !v30 )
          goto LABEL_31;
        v31 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
          v31 = *(_QWORD *)(v31 + 32);
        if ( v31 )
        {
          if ( (*((_QWORD *)v29 + 2) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v32 = *(_QWORD *)(*((_QWORD *)v29 + 2) & 0xFFFFFFFFFFFFFFF0LL);
            v33 = 0;
            v34 = (__int64 *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v34 )
              goto LABEL_29;
            goto LABEL_30;
          }
          v34 = (__int64 *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v34 )
          {
            v32 = 0;
LABEL_29:
            v33 = *v34;
LABEL_30:
            if ( v33 != v32 )
              goto LABEL_31;
          }
        }
        if ( *((unsigned __int16 **)v29 + 3) == v58 && *((unsigned __int16 **)v29 + 4) == v51 )
        {
          v11 = 0;
          v59 = *((_QWORD *)v29 + 5) != (_QWORD)v53;
LABEL_8:
          v12 = v10 + 1;
          if ( v10 == v56 )
            goto LABEL_32;
          goto LABEL_9;
        }
LABEL_31:
        v59 = 1;
        v12 = v10 + 1;
        if ( v10 == v56 )
        {
LABEL_32:
          v35 = (void **)ptr;
          v36 = 1;
          if ( v11 )
            goto LABEL_33;
          goto LABEL_40;
        }
LABEL_9:
        v10 = v12;
      }
    }
    v35 = (void **)ptr;
  }
  else
  {
    v38 = *a1;
    v35 = (void **)v66;
    v59 = *(_DWORD *)(v38 + 12632) != 0;
  }
LABEL_40:
  v36 = (__int64)a2;
  if ( v59 )
  {
    v39 = sub_1B45670(*(_QWORD *)(*a1 + 760), 0, a2[4], a2[5], a2[6], (_DWORD)v35, (__int64)v35, (unsigned int)v65);
    v36 = v39;
    if ( v39 > 1 && v60 )
    {
      v52 = v39;
      v40 = (__int64)(a1 + 1);
      v41 = 0;
      v42 = v39 & 0xFFFFFFFFFFFFFFFELL;
      do
      {
        v43 = sub_C03D50(v42, v41);
        v44 = v41++;
        v45 = v43;
        v62 = sub_C03D50((__int64)a2, v44);
        *sub_1742A40(v40, &v62, v46, v47, v48, v49) = v45;
      }
      while ( v41 != v60 );
      v36 = v52;
    }
    v35 = (void **)ptr;
  }
LABEL_33:
  if ( v35 != p_ptr + 2 )
    free(v35);
  return v36;
}
