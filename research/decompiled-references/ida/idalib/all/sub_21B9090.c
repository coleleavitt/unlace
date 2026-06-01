__int64 __fastcall sub_21B9090(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r12
  _DWORD *v11; // r14
  size_t v12; // r8
  const char *v13; // r12
  size_t v14; // rax
  signed __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rsi
  int *v18; // r12
  int v19; // ecx
  __int64 v20; // r14
  unsigned __int64 v21; // r8
  const char *v22; // r12
  size_t v23; // rax
  size_t v24; // r15
  const char *v25; // r12
  const char *v26; // r8
  size_t v27; // rax
  void **p_ptr; // r12
  const char *v29; // r14
  size_t v30; // r8
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // rcx
  void *v38; // rsi
  __int64 v39; // rax
  void *v40; // rbp
  const char *v42; // rdi
  unsigned int v43; // eax
  const char *v44; // rdi
  unsigned int v45; // eax
  unsigned __int64 v46; // rbp
  __int64 v47; // rdi
  __int64 v48; // [rsp+8h] [rbp-1B0h]
  int v49; // [rsp+8h] [rbp-1B0h]
  void *v50; // [rsp+8h] [rbp-1B0h]
  __int64 v51; // [rsp+8h] [rbp-1B0h]
  size_t v53; // [rsp+18h] [rbp-1A0h]
  int v54; // [rsp+18h] [rbp-1A0h]
  __int64 v55; // [rsp+18h] [rbp-1A0h]
  int v56; // [rsp+18h] [rbp-1A0h]
  const char *v57; // [rsp+18h] [rbp-1A0h]
  unsigned __int64 v58; // [rsp+20h] [rbp-198h]
  _QWORD v59[4]; // [rsp+30h] [rbp-188h] BYREF
  __int16 v60; // [rsp+50h] [rbp-168h]
  void *ptr; // [rsp+60h] [rbp-158h] BYREF
  __m128i si128; // [rsp+68h] [rbp-150h]
  _BYTE v63[320]; // [rsp+78h] [rbp-140h] BYREF

  v7 = *(_DWORD *)(a3 + 40);
  v8 = (__int64 *)a4[1];
  v9 = *(_QWORD *)(a1 + 176);
  v10 = *v8;
  v11 = (_DWORD *)(a4[4] + 80LL * (unsigned int)(v7 - 1));
  if ( *v11 )
  {
    v12 = 0;
    v44 = (const char *)(v10 + *(unsigned int *)(a4[2] + 4LL * (unsigned int)(*v11 + 1)));
    if ( v44 )
    {
      v51 = v9;
      v45 = strlen(v44);
      v9 = v51;
      v12 = v45;
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
    v53 = v12;
    v48 = v9;
    v14 = strlen(v13);
    v12 = v53;
    v9 = v48;
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
  v16 = sub_21B6910(v9, (__int8 *)&v13[v14], v15);
  v17 = a4[2];
  v49 = v16;
  v18 = (int *)(a4[4] + 80LL * (unsigned int)(*(_DWORD *)(a3 + 40) - 1));
  v19 = *v18;
  v20 = *(_QWORD *)a4[1];
  if ( !*v18 )
  {
    v21 = 0;
    v22 = (const char *)(v20 + (unsigned int)v18[1]);
    if ( !v22 )
    {
      v21 = 0;
      v23 = 0;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v21 = 0;
  v42 = (const char *)(v20 + *(unsigned int *)(v17 + 4LL * (unsigned int)(v19 + 1)));
  if ( v42 )
  {
    v56 = *v18;
    v43 = strlen(v42);
    v19 = v56;
    v21 = v43;
  }
  v23 = 0;
  v22 = (const char *)(v20 + (unsigned int)v18[1]);
  if ( v22 )
  {
LABEL_8:
    v58 = v21;
    v54 = v19;
    v23 = strlen(v22);
    v21 = v58;
    v19 = v54;
  }
  v24 = 0;
  if ( v23 >= v21 )
  {
LABEL_10:
    v24 = v23 - v21;
    v23 = v21;
  }
  v25 = &v22[v23];
  v26 = nullptr;
  v27 = 0;
  if ( v19 )
  {
    v26 = (const char *)(v20 + *(unsigned int *)(v17 + 4LL * (unsigned int)(v19 + 1)));
    if ( v26 )
    {
      v57 = (const char *)(v20 + *(unsigned int *)(v17 + 4LL * (unsigned int)(v19 + 1)));
      v27 = strlen(v26);
      v26 = v57;
    }
  }
  v59[2] = v25;
  p_ptr = &ptr;
  v59[3] = v24;
  v59[0] = v26;
  v59[1] = v27;
  v60 = 1285;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v63;
  sub_22538C0(v59, &ptr);
  v29 = (const char *)(*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 176) + 16LL))(
                        *(_QWORD *)(a1 + 176),
                        ptr,
                        si128.m128i_i64[0]);
  if ( ptr != v63 )
    free(ptr);
  v30 = 0;
  if ( v29 )
    v30 = strlen(v29);
  v55 = v30;
  v31 = operator new(0x58u);
  v32 = v49;
  v50 = (void *)v31;
  sub_21B58D0(v31, a3, (__int64)a4, (__int64)v29, v55, v32, a2);
  v33 = *(unsigned int *)(a1 + 192);
  v34 = *(unsigned int *)(a1 + 196);
  v35 = v33 + 1;
  ptr = v50;
  v36 = v33;
  if ( v33 + 1 > v34 )
  {
    v46 = *(_QWORD *)(a1 + 184);
    v47 = a1 + 184;
    if ( v46 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v46 + 8 * v33 )
    {
      sub_21B8920(v47, v35);
      v33 = *(unsigned int *)(a1 + 192);
      v37 = *(_QWORD *)(a1 + 184);
      v36 = *(_DWORD *)(a1 + 192);
    }
    else
    {
      sub_21B8920(v47, v35);
      v37 = *(_QWORD *)(a1 + 184);
      v33 = *(unsigned int *)(a1 + 192);
      p_ptr = (void **)((char *)&ptr + v37 - v46);
      v36 = *(_DWORD *)(a1 + 192);
    }
  }
  else
  {
    v37 = *(_QWORD *)(a1 + 184);
  }
  v38 = *p_ptr;
  *p_ptr = nullptr;
  v39 = (unsigned int)(v36 + 1);
  *(_QWORD *)(v37 + 8 * v33) = v38;
  v40 = ptr;
  *(_DWORD *)(a1 + 192) = v39;
  if ( v40 )
  {
    sub_21B59C0((__int64)v40);
    operator delete(v40, 0x58u);
    v39 = *(unsigned int *)(a1 + 192);
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v39 - 8);
}
