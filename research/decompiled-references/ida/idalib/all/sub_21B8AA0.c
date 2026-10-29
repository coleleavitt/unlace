__int64 __fastcall sub_21B8AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r15
  __int64 v10; // rbp
  _DWORD *v11; // r13
  size_t v12; // rdx
  const char *v13; // rbp
  size_t v14; // rax
  __int64 v15; // rcx
  void **p_ptr; // rbp
  __int64 v17; // r15
  __int64 *v18; // rax
  char *v19; // rdx
  int v20; // esi
  size_t v21; // rcx
  char *v22; // rdx
  size_t v23; // rax
  char *v24; // rcx
  size_t v25; // rax
  size_t v26; // r8
  size_t v27; // rax
  const char *v28; // r13
  size_t v29; // r8
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rcx
  void *v37; // rsi
  __int64 v38; // rax
  void *v39; // rbp
  __int64 v41; // r8
  const char *v42; // rdi
  size_t v43; // rax
  const char *v44; // rdi
  unsigned int v45; // eax
  const char *v46; // rdi
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned __int64 v49; // r12
  __int64 v50; // rdi
  size_t v51; // [rsp+8h] [rbp-1C0h]
  unsigned int v52; // [rsp+8h] [rbp-1C0h]
  void *v53; // [rsp+8h] [rbp-1C0h]
  __int64 v54; // [rsp+8h] [rbp-1C0h]
  __int64 v55; // [rsp+10h] [rbp-1B8h]
  __int64 v56; // [rsp+10h] [rbp-1B8h]
  char *v57; // [rsp+10h] [rbp-1B8h]
  __int64 v58; // [rsp+10h] [rbp-1B8h]
  __int64 v59; // [rsp+10h] [rbp-1B8h]
  __int64 v61; // [rsp+20h] [rbp-1A8h]
  __int64 v62; // [rsp+20h] [rbp-1A8h]
  size_t v63; // [rsp+20h] [rbp-1A8h]
  char *s; // [rsp+28h] [rbp-1A0h]
  char *sa; // [rsp+28h] [rbp-1A0h]
  char *sb; // [rsp+28h] [rbp-1A0h]
  char *sc; // [rsp+28h] [rbp-1A0h]
  char *v68; // [rsp+30h] [rbp-198h]
  size_t v69; // [rsp+38h] [rbp-190h]
  char *v70; // [rsp+38h] [rbp-190h]
  void *v71; // [rsp+40h] [rbp-188h] BYREF
  size_t v72; // [rsp+48h] [rbp-180h]
  _QWORD v73[2]; // [rsp+50h] [rbp-178h] BYREF
  __int16 v74; // [rsp+60h] [rbp-168h]
  void *ptr; // [rsp+70h] [rbp-158h] BYREF
  __m128i si128; // [rsp+78h] [rbp-150h]
  __int64 v77; // [rsp+88h] [rbp-140h] BYREF
  __int16 v78; // [rsp+90h] [rbp-138h]

  v9 = *(_QWORD *)(a1 + 176);
  v10 = **(_QWORD **)(a4 + 8);
  v11 = (_DWORD *)(*(_QWORD *)(a4 + 32) + 80LL * (unsigned int)(*(_DWORD *)(a3 + 40) - 1));
  if ( *v11 )
  {
    v12 = 0;
    v46 = (const char *)(v10 + *(unsigned int *)(*(_QWORD *)(a4 + 16) + 4LL * (unsigned int)(*v11 + 1)));
    if ( v46 )
    {
      v59 = a6;
      v54 = a5;
      v47 = strlen(v46);
      a6 = v59;
      a5 = v54;
      v12 = v47;
    }
    v14 = 0;
    v13 = (const char *)((unsigned int)v11[1] + v10);
    if ( !v13 )
    {
LABEL_4:
      v15 = 0;
      if ( v14 < v12 )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_3:
    v61 = a6;
    v55 = a5;
    v51 = v12;
    v14 = strlen(v13);
    a6 = v61;
    a5 = v55;
    v12 = v51;
    goto LABEL_4;
  }
  v12 = 0;
  v13 = (const char *)((unsigned int)v11[1] + v10);
  if ( v13 )
    goto LABEL_3;
  v12 = 0;
  v14 = 0;
LABEL_5:
  v15 = v14 - v12;
  v14 = v12;
LABEL_6:
  si128.m128i_i64[0] = v15;
  ptr = (void *)&v13[v14];
  p_ptr = &ptr;
  si128.m128i_i64[1] = a5;
  v77 = a6;
  v78 = 1285;
  sub_2253560(&v71, &ptr);
  v52 = sub_21B6910(v9, (__int8 *)v71, v72);
  if ( v71 != v73 )
    operator delete(v71);
  v62 = *(_QWORD *)(a4 + 16);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 176LL) + 8LL * v52);
  v18 = *(__int64 **)(a4 + 8);
  v19 = (char *)(*(_QWORD *)(a4 + 32) + 80LL * (unsigned int)(*(_DWORD *)(a3 + 40) - 1));
  v20 = *(_DWORD *)v19;
  if ( *(_DWORD *)v19 )
  {
    v41 = (unsigned int)(v20 + 1);
    v56 = *v18;
    v21 = 0;
    v44 = (const char *)(*v18 + *(unsigned int *)(v62 + 4 * v41));
    if ( v44 )
    {
      sc = (char *)(*(_QWORD *)(a4 + 32) + 80LL * (unsigned int)(*(_DWORD *)(a3 + 40) - 1));
      v45 = strlen(v44);
      v41 = (unsigned int)(v20 + 1);
      v19 = sc;
      v21 = v45;
    }
    v22 = (char *)(v56 + *((unsigned int *)v19 + 1));
    if ( !v22 )
    {
      v23 = 0;
      if ( v21 )
        goto LABEL_32;
      goto LABEL_11;
    }
  }
  else
  {
    v21 = 0;
    v56 = *v18;
    v22 = (char *)(*v18 + *((unsigned int *)v19 + 1));
    if ( !v22 )
    {
      v23 = 0;
      v21 = 0;
      goto LABEL_11;
    }
  }
  v69 = v21;
  s = v22;
  v23 = strlen(v22);
  v21 = v69;
  v22 = s;
  if ( v23 >= v69 )
LABEL_11:
    v17 += v23 - v21;
  if ( !v20 )
  {
    v24 = nullptr;
    if ( !v22 )
    {
      v26 = 0;
      v27 = 0;
      goto LABEL_20;
    }
    goto LABEL_14;
  }
  v41 = (unsigned int)(v20 + 1);
LABEL_32:
  v42 = (const char *)(v56 + *(unsigned int *)(v62 + 4 * v41));
  if ( !v42 )
  {
    v24 = nullptr;
    if ( !v22 )
    {
      v24 = nullptr;
      v25 = 0;
      goto LABEL_35;
    }
    goto LABEL_14;
  }
  v68 = v22;
  v48 = strlen(v42);
  v22 = v68;
  v24 = (char *)v48;
  v25 = 0;
  if ( v68 )
  {
LABEL_14:
    v70 = v24;
    sa = v22;
    v25 = strlen(v22);
    v24 = v70;
    v22 = sa;
  }
  if ( v25 < (unsigned __int64)v24 )
  {
    v24 = &v22[v25];
    v26 = 0;
    if ( v20 )
      goto LABEL_17;
LABEL_36:
    v27 = 0;
    v22 = nullptr;
    goto LABEL_20;
  }
LABEL_35:
  v43 = v25 - (_QWORD)v24;
  v24 = &v24[(_QWORD)v22];
  v26 = v43;
  if ( !v20 )
    goto LABEL_36;
LABEL_17:
  v27 = 0;
  v22 = (char *)(v56 + *(unsigned int *)(v62 + 4LL * (unsigned int)(v20 + 1)));
  if ( v22 )
  {
    sb = v24;
    v63 = v26;
    v57 = v22;
    v27 = strlen(v22);
    v22 = v57;
    v26 = v63;
    v24 = sb;
  }
LABEL_20:
  v73[0] = v24;
  v71 = v22;
  ptr = &v77;
  v72 = v27;
  v73[1] = v26;
  v74 = 1285;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  sub_22538C0(&v71, &ptr);
  v28 = (const char *)(*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 176) + 16LL))(
                        *(_QWORD *)(a1 + 176),
                        ptr,
                        si128.m128i_i64[0]);
  if ( ptr != &v77 )
    free(ptr);
  v29 = 0;
  if ( v28 )
    v29 = strlen(v28);
  v58 = v29;
  v30 = operator new(0x58u);
  v31 = v52;
  v53 = (void *)v30;
  sub_21B5910(v30, a3, a4, (__int64)v28, v58, v31, v17, a2);
  v32 = *(unsigned int *)(a1 + 192);
  v33 = *(unsigned int *)(a1 + 196);
  v34 = v32 + 1;
  ptr = v53;
  v35 = v32;
  if ( v32 + 1 > v33 )
  {
    v49 = *(_QWORD *)(a1 + 184);
    v50 = a1 + 184;
    if ( v49 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v49 + 8 * v32 )
    {
      sub_21B8920(v50, v34);
      v32 = *(unsigned int *)(a1 + 192);
      v36 = *(_QWORD *)(a1 + 184);
      v35 = *(_DWORD *)(a1 + 192);
    }
    else
    {
      sub_21B8920(v50, v34);
      v36 = *(_QWORD *)(a1 + 184);
      v32 = *(unsigned int *)(a1 + 192);
      p_ptr = (void **)((char *)&ptr + v36 - v49);
      v35 = *(_DWORD *)(a1 + 192);
    }
  }
  else
  {
    v36 = *(_QWORD *)(a1 + 184);
  }
  v37 = *p_ptr;
  *p_ptr = nullptr;
  v38 = (unsigned int)(v35 + 1);
  *(_QWORD *)(v36 + 8 * v32) = v37;
  v39 = ptr;
  *(_DWORD *)(a1 + 192) = v38;
  if ( v39 )
  {
    sub_21B59C0((__int64)v39);
    operator delete(v39, 0x58u);
    v38 = *(unsigned int *)(a1 + 192);
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v38 - 8);
}
