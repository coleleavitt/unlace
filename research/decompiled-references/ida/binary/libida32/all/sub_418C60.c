unsigned __int64 __fastcall sub_418C60(__int64 a1, _DWORD *a2, const __m128i *a3)
{
  unsigned int v4; // r12d
  void (__fastcall *v5)(__int128 *, const __m128i *, __int64); // rax
  _QWORD *v6; // r13
  char i; // al
  int v8; // r8d
  __int64 v9; // rax
  char v10; // r9
  char *v11; // rcx
  char *v12; // rax
  int v13; // r13d
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int *v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // r13d
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r10
  bool v29; // cf
  int v30; // r12d
  unsigned int v32; // eax
  unsigned int v33; // r12d
  void (__fastcall *v34)(__int128 *, const __m128i *, __int64); // rax
  _QWORD *v35; // r13
  char j; // al
  unsigned int v37; // r8d
  __int64 v38; // rax
  char v39; // r9
  char *v40; // rcx
  char *v41; // rax
  void (__fastcall *v42)(__int128 *, __int128 *, __int64); // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r10
  _QWORD *v49; // [rsp+8h] [rbp-100h]
  unsigned int *v50; // [rsp+8h] [rbp-100h]
  int v53; // [rsp+20h] [rbp-E8h]
  unsigned int v54; // [rsp+20h] [rbp-E8h]
  char v55; // [rsp+27h] [rbp-E1h]
  char v56; // [rsp+27h] [rbp-E1h]
  __int64 v57; // [rsp+28h] [rbp-E0h]
  __int64 v58; // [rsp+28h] [rbp-E0h]
  char *v59; // [rsp+30h] [rbp-D8h]
  char *v60; // [rsp+30h] [rbp-D8h]
  unsigned int *v61; // [rsp+38h] [rbp-D0h]
  unsigned int v62; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v63; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v64; // [rsp+58h] [rbp-B0h] BYREF
  char v65; // [rsp+5Ch] [rbp-ACh]
  void *v66; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v67; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-88h] BYREF
  __int128 v69; // [rsp+88h] [rbp-80h]
  __int128 v70; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v71; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v72; // [rsp+C8h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  if ( !a3[1].m128i_i64[0] )
    return v72 - __readfsqword(0x28u);
  v49 = *(_QWORD **)(a1 + 1480);
  v4 = sub_614FB0(*v49, 19);
  while ( v4 < (unsigned int)sub_614FB0(*v49, 20) )
  {
    v71 = 0u;
    v5 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
    v70 = 0;
    if ( v5 )
    {
      v5(&v70, a3, 2);
      v71 = _mm_loadu_si128(a3 + 1);
    }
    LODWORD(v66) = -1;
    v6 = *(_QWORD **)(a1 + 1480);
    BYTE4(v66) = 0;
    ptr = nullptr;
    v69 = 0;
    for ( i = sub_3FC530(v6, (__int64)&v66, v4); i; i = sub_3FD4E0(v6, (unsigned int *)&v66, v4) )
    {
      v8 = (int)v66;
      if ( (unsigned int)v66 >= *a2 && (unsigned int)v66 < a2[1] )
      {
        v9 = v69;
        v10 = BYTE4(v66);
        if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
        {
          v57 = *((_QWORD *)&v69 + 1);
          v55 = BYTE4(v66);
          v53 = (int)v66;
          v23 = qvector_reserve(&ptr, 0, v69 + 1, 8);
          v24 = *((_QWORD *)&v69 + 1);
          v25 = (__int64 *)ptr;
          v26 = v69 - 1;
          *((_QWORD *)&v69 + 1) = v57;
          if ( (__int64)v69 - 1 >= 0 )
          {
            v27 = v23;
            do
            {
              v28 = *v25;
              v27 += 8;
              ++v25;
              *(_QWORD *)(v27 - 8) = v28;
              v29 = v26-- == 0;
            }
            while ( !v29 );
            v25 = (__int64 *)ptr;
          }
          v59 = (char *)v23;
          qfree(v25);
          v11 = v59;
          v9 = v69;
          v10 = v55;
          ptr = v59;
          v8 = v53;
          *((_QWORD *)&v69 + 1) = v24;
        }
        else
        {
          v11 = (char *)ptr;
        }
        v12 = &v11[8 * v9];
        *(_DWORD *)v12 = v8;
        v12[4] = v10;
        *(_QWORD *)&v69 = v69 + 1;
      }
    }
    v13 = 0;
    if ( (_QWORD)v69 )
    {
      v64 = v4;
      if ( !v71.m128i_i64[0] )
        std::__throw_bad_function_call();
      v13 = ((__int64 (__fastcall *)(__int128 *, __int64, unsigned int *, void **))v71.m128i_i64[1])(
              &v70,
              a1,
              &v64,
              &ptr);
    }
    if ( ptr )
    {
      *(_QWORD *)&v69 = 0;
      qfree(ptr);
    }
    if ( v71.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v71.m128i_i64[0])(&v70, &v70, 3);
    v14 = sub_614FB0(*v49, 20);
    v4 = sub_3BC980(v49, v4, v14, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3B3450, nullptr);
    if ( v13 )
      goto LABEL_20;
  }
  v13 = 0;
LABEL_20:
  v63 = 0;
  sub_6141A0(*v49, 26, &v63, 8);
  v66 = nullptr;
  v67 = 0;
  v15 = *(_QWORD *)(a1 + 1480);
  if ( *(_BYTE *)(v15 + 2233) )
  {
    v16 = *(unsigned int **)(v15 + 1776);
    v17 = v15 + 1768;
    if ( !v16 )
      return v72 - __readfsqword(0x28u);
    v18 = v15 + 1768;
    do
    {
      while ( 1 )
      {
        v19 = *((_QWORD *)v16 + 2);
        v20 = *((_QWORD *)v16 + 3);
        if ( v16[8] < (unsigned int)v63 )
          break;
        v18 = (__int64)v16;
        v16 = *((unsigned int **)v16 + 2);
        if ( !v19 )
          goto LABEL_26;
      }
      v16 = *((unsigned int **)v16 + 3);
    }
    while ( v20 );
LABEL_26:
    if ( v18 == v17 || v13 )
      return v72 - __readfsqword(0x28u);
    v21 = 0;
    do
    {
      v22 = *(_DWORD *)(v18 + 32);
      if ( v22 >= HIDWORD(v63) )
        break;
      if ( !v21 || v22 != v16[v21 - 1] )
      {
        if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v21 + 1) )
        {
          v66 = (void *)qvector_reserve(&v66, v16, v21 + 1, 4);
          v21 = v67;
          v16 = (unsigned int *)v66;
        }
        v16[v21] = v22;
        v16 = (unsigned int *)v66;
        v21 = v67 + 1;
        *(_QWORD *)&v67 = v67 + 1;
      }
      v18 = std::_Rb_tree_increment();
    }
    while ( v18 != v17 );
  }
  else
  {
    *(_QWORD *)&v69 = &v66;
    ptr = v49;
    DWORD2(v69) = sub_3B90A0(v49, SHIDWORD(v63));
    v32 = sub_3B90A0(v49, v63);
    sub_78FE10(a1, v32, sub_417C60, &ptr);
    v16 = (unsigned int *)v66;
    v21 = v67;
  }
  v61 = &v16[v21];
  if ( v61 == v16 )
    goto LABEL_50;
  v50 = v16;
  while ( 1 )
  {
    v33 = *v50;
    v34 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
    v70 = 0;
    v71 = 0u;
    if ( v34 )
    {
      v34(&v70, a3, 2);
      v71 = _mm_loadu_si128(a3 + 1);
    }
    v64 = -1;
    v35 = *(_QWORD **)(a1 + 1480);
    v65 = 0;
    ptr = nullptr;
    v69 = 0;
    for ( j = sub_3FC530(v35, (__int64)&v64, v33); j; j = sub_3FD4E0(v35, &v64, v33) )
    {
      v37 = v64;
      if ( v64 >= *a2 && v64 < a2[1] )
      {
        v38 = v69;
        v39 = v65;
        if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
        {
          v58 = *((_QWORD *)&v69 + 1);
          v56 = v65;
          v54 = v64;
          v43 = qvector_reserve(&ptr, 0, v69 + 1, 8);
          v44 = *((_QWORD *)&v69 + 1);
          v45 = (__int64 *)ptr;
          v46 = v69 - 1;
          *((_QWORD *)&v69 + 1) = v58;
          if ( (__int64)v69 - 1 >= 0 )
          {
            v47 = v43;
            do
            {
              v48 = *v45;
              v47 += 8;
              ++v45;
              *(_QWORD *)(v47 - 8) = v48;
              v29 = v46-- == 0;
            }
            while ( !v29 );
            v45 = (__int64 *)ptr;
          }
          v60 = (char *)v43;
          qfree(v45);
          v40 = v60;
          v38 = v69;
          v39 = v56;
          ptr = v60;
          v37 = v54;
          *((_QWORD *)&v69 + 1) = v44;
        }
        else
        {
          v40 = (char *)ptr;
        }
        v41 = &v40[8 * v38];
        *(_DWORD *)v41 = v37;
        v41[4] = v39;
        *(_QWORD *)&v69 = v69 + 1;
      }
    }
    if ( (_QWORD)v69 )
      break;
    if ( !ptr )
    {
      v42 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v71.m128i_i64[0];
      if ( !v71.m128i_i64[0] )
        goto LABEL_70;
LABEL_69:
      v42(&v70, &v70, 3);
      goto LABEL_70;
    }
    qfree(ptr);
    v42 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v71.m128i_i64[0];
    if ( v71.m128i_i64[0] )
      goto LABEL_69;
LABEL_70:
    if ( v61 == ++v50 )
      goto LABEL_49;
  }
  v62 = v33;
  if ( !v71.m128i_i64[0] )
    std::__throw_bad_function_call();
  v30 = ((__int64 (__fastcall *)(__int128 *, __int64, unsigned int *, void **))v71.m128i_i64[1])(&v70, a1, &v62, &ptr);
  if ( ptr )
  {
    *(_QWORD *)&v69 = 0;
    qfree(ptr);
  }
  if ( v71.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v71.m128i_i64[0])(&v70, &v70, 3);
  if ( !v30 )
    goto LABEL_70;
LABEL_49:
  v16 = (unsigned int *)v66;
LABEL_50:
  if ( v16 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v16);
  }
  return v72 - __readfsqword(0x28u);
}

