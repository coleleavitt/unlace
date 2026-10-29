__int64 __fastcall sub_21B9430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int8 *a5, signed __int64 a6)
{
  __int64 v10; // r12
  _DWORD *v11; // rdx
  __int64 v12; // r15
  size_t v13; // rcx
  const char *v14; // r15
  size_t v15; // rax
  signed __int64 v16; // rdx
  int v17; // r15d
  __int64 v18; // rsi
  int *v19; // r12
  int v20; // ecx
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  const char *v23; // r12
  size_t v24; // rax
  size_t v25; // rdx
  const char *v26; // r12
  const char *v27; // r8
  size_t v28; // rax
  void **p_ptr; // r12
  const char *v30; // r14
  size_t v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  void *v39; // rsi
  __int64 v40; // rax
  void *v41; // rbp
  const char *v43; // rdi
  unsigned int v44; // eax
  const char *v45; // rdi
  unsigned int v46; // eax
  unsigned __int64 v47; // rbp
  __int64 v48; // rdi
  int v50; // [rsp+8h] [rbp-1B0h]
  size_t v51; // [rsp+8h] [rbp-1B0h]
  void *v52; // [rsp+8h] [rbp-1B0h]
  int v53; // [rsp+8h] [rbp-1B0h]
  const char *v54; // [rsp+8h] [rbp-1B0h]
  size_t v55; // [rsp+10h] [rbp-1A8h]
  __int64 v56; // [rsp+10h] [rbp-1A8h]
  _DWORD *v57; // [rsp+10h] [rbp-1A8h]
  unsigned __int64 v59; // [rsp+20h] [rbp-198h]
  size_t v60; // [rsp+20h] [rbp-198h]
  _QWORD v61[4]; // [rsp+30h] [rbp-188h] BYREF
  __int16 v62; // [rsp+50h] [rbp-168h]
  void *ptr; // [rsp+60h] [rbp-158h] BYREF
  __m128i si128; // [rsp+68h] [rbp-150h]
  _BYTE v65[320]; // [rsp+78h] [rbp-140h] BYREF

  v10 = *(_QWORD *)(a1 + 176);
  v11 = (_DWORD *)(*(_QWORD *)(a4 + 32) + 80LL * (unsigned int)(*(_DWORD *)(a3 + 40) - 1));
  v12 = **(_QWORD **)(a4 + 8);
  if ( *v11 )
  {
    v13 = 0;
    v45 = (const char *)(v12 + *(unsigned int *)(*(_QWORD *)(a4 + 16) + 4LL * (unsigned int)(*v11 + 1)));
    if ( v45 )
    {
      v57 = v11;
      v46 = strlen(v45);
      v11 = v57;
      v13 = v46;
    }
    v15 = 0;
    v14 = (const char *)((unsigned int)v11[1] + v12);
    if ( !v14 )
    {
LABEL_4:
      v16 = 0;
      if ( v15 < v13 )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_3:
    v55 = v13;
    v15 = strlen(v14);
    v13 = v55;
    goto LABEL_4;
  }
  v13 = 0;
  v14 = (const char *)((unsigned int)v11[1] + v12);
  if ( v14 )
    goto LABEL_3;
  v13 = 0;
  v15 = 0;
LABEL_5:
  v16 = v15 - v13;
  v15 = v13;
LABEL_6:
  v17 = sub_21B6910(v10, (__int8 *)&v14[v15], v16);
  sub_21B6910(v10, a5, a6);
  v18 = *(_QWORD *)(a4 + 16);
  v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 176LL) + 8LL * (unsigned int)(v17 + 1));
  v19 = (int *)(*(_QWORD *)(a4 + 32) + 80LL * (unsigned int)(*(_DWORD *)(a3 + 40) - 1));
  v20 = *v19;
  v21 = **(_QWORD **)(a4 + 8);
  if ( !*v19 )
  {
    v22 = 0;
    v23 = (const char *)(v21 + (unsigned int)v19[1]);
    if ( !v23 )
    {
      v24 = 0;
      v22 = 0;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v22 = 0;
  v43 = (const char *)(v21 + *(unsigned int *)(v18 + 4LL * (unsigned int)(v20 + 1)));
  if ( v43 )
  {
    v53 = *v19;
    v44 = strlen(v43);
    v20 = v53;
    v22 = v44;
  }
  v24 = 0;
  v23 = (const char *)(v21 + (unsigned int)v19[1]);
  if ( v23 )
  {
LABEL_8:
    v59 = v22;
    v50 = v20;
    v24 = strlen(v23);
    v22 = v59;
    v20 = v50;
  }
  v25 = 0;
  if ( v24 >= v22 )
  {
LABEL_10:
    v25 = v24 - v22;
    v24 = v22;
  }
  v26 = &v23[v24];
  v27 = nullptr;
  v28 = 0;
  if ( v20 )
  {
    v27 = (const char *)(v21 + *(unsigned int *)(v18 + 4LL * (unsigned int)(v20 + 1)));
    if ( v27 )
    {
      v60 = v25;
      v54 = (const char *)(v21 + *(unsigned int *)(v18 + 4LL * (unsigned int)(v20 + 1)));
      v28 = strlen(v27);
      v25 = v60;
      v27 = v54;
    }
  }
  v61[2] = v26;
  p_ptr = &ptr;
  v61[0] = v27;
  ptr = v65;
  v61[1] = v28;
  v61[3] = v25;
  v62 = 1285;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  sub_22538C0(v61, &ptr);
  v30 = (const char *)(*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 176) + 16LL))(
                        *(_QWORD *)(a1 + 176),
                        ptr,
                        si128.m128i_i64[0]);
  if ( ptr != v65 )
    free(ptr);
  v31 = 0;
  if ( v30 )
    v31 = strlen(v30);
  v51 = v31;
  v32 = operator new(0x58u);
  v33 = v51;
  v52 = (void *)v32;
  sub_21B5910(v32, a3, a4, (__int64)v30, v33, v17, v56, a2);
  v34 = *(unsigned int *)(a1 + 192);
  v35 = *(unsigned int *)(a1 + 196);
  v36 = v34 + 1;
  ptr = v52;
  v37 = v34;
  if ( v34 + 1 > v35 )
  {
    v47 = *(_QWORD *)(a1 + 184);
    v48 = a1 + 184;
    if ( v47 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v47 + 8 * v34 )
    {
      sub_21B8920(v48, v36);
      v34 = *(unsigned int *)(a1 + 192);
      v38 = *(_QWORD *)(a1 + 184);
      v37 = *(_DWORD *)(a1 + 192);
    }
    else
    {
      sub_21B8920(v48, v36);
      v38 = *(_QWORD *)(a1 + 184);
      v34 = *(unsigned int *)(a1 + 192);
      p_ptr = (void **)((char *)&ptr + v38 - v47);
      v37 = *(_DWORD *)(a1 + 192);
    }
  }
  else
  {
    v38 = *(_QWORD *)(a1 + 184);
  }
  v39 = *p_ptr;
  *p_ptr = nullptr;
  v40 = (unsigned int)(v37 + 1);
  *(_QWORD *)(v38 + 8 * v34) = v39;
  v41 = ptr;
  *(_DWORD *)(a1 + 192) = v40;
  if ( v41 )
  {
    sub_21B59C0((__int64)v41);
    operator delete(v41, 0x58u);
    v40 = *(unsigned int *)(a1 + 192);
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v40 - 8);
}
