__int64 *__fastcall sub_1E0C890(
        __m128 *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  unsigned __int64 v11; // r13
  __int32 v12; // esi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  __int32 v15; // eax
  __int32 v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 *v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v28; // rax
  unsigned int *v29; // r14
  unsigned int *v30; // r12
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rbp
  _QWORD *v35; // rdi
  void *v36; // rdi
  void **v37; // rbp
  void **v38; // rax
  void *v39; // rdi
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned int *v42; // rbx
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int32 v52; // [rsp+8h] [rbp-200h]
  _QWORD *v53; // [rsp+8h] [rbp-200h]
  void **v54; // [rsp+8h] [rbp-200h]
  __int64 v56; // [rsp+28h] [rbp-1E0h] BYREF
  _QWORD v57[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-1C8h]
  unsigned __int8 *v59; // [rsp+50h] [rbp-1B8h] BYREF
  char v60; // [rsp+A8h] [rbp-160h]
  unsigned int v61; // [rsp+B0h] [rbp-158h]
  char v62; // [rsp+B4h] [rbp-154h]
  unsigned int *v63; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-140h]
  __int64 v65; // [rsp+D0h] [rbp-138h] BYREF
  unsigned __int64 v66; // [rsp+D8h] [rbp-130h]

  v7 = a5 + 72;
  v11 = a1[34].m128_u64[0];
  v12 = a1[164].m128_i32[2];
  if ( !a5 )
    v7 = 0;
  v13 = a1[32].m128_u64[0];
  v14 = a1[621].m128_u64[1];
  v52 = a1[5].m128_i32[0];
  a1[32].m128_u64[0] = 0;
  a1[34].m128_u64[0] = v7;
  v15 = a1[2].m128_i32[2];
  a1[621].m128_u64[1] = 0;
  a1[5].m128_i32[0] = v15;
  v16 = a1[230].m128_i32[2];
  v66 = v14;
  a1[164].m128_i32[2] = v16;
  sub_18C74E0((__int64)a1, 4, 0, 4);
  v20 = sub_1DF2070((__int64)a1, (unsigned __int64)a4, a2, v17, v18, v19, a6, a7);
  if ( v20 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    sub_190D5E0((__int64)a1, a6);
    if ( v11 )
    {
      v41 = v66;
      a1[34].m128_u64[0] = v11;
      a1[32].m128_u64[0] = v13;
      a1[621].m128_u64[1] = v41;
      a1[5].m128_i32[0] = v52;
      a1[164].m128_i32[2] = v12;
    }
    return nullptr;
  }
  v21 = (__int64 *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL);
  sub_190D5E0((__int64)a1, a6);
  if ( v11 )
  {
    v26 = v66;
    a1[34].m128_u64[0] = v11;
    a1[32].m128_u64[0] = v13;
    a1[621].m128_u64[1] = v26;
    a1[5].m128_i32[0] = v52;
    a1[164].m128_i32[2] = v12;
  }
  if ( (*(_DWORD *)v21 & 0x10000) == 0 )
  {
    v28 = sub_1C02150(a1, v21, v22, v23, v24, v25, a6, a7);
    if ( v28 != 1 )
    {
      v21 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_7;
    }
    return nullptr;
  }
LABEL_7:
  v63 = (unsigned int *)&v65;
  v64 = 0x800000000LL;
  if ( (*a4 & 0x20000) == 0 || (*(_DWORD *)v21 & 0x20000) != 0 )
    return v21;
  if ( (unsigned __int8)sub_C44650((unsigned __int64)v21, a5, (__int64)&v63) )
    goto LABEL_13;
  sub_168B9F0((__int64)v57, &a1->m128_i64[1], *(_DWORD *)(a3 + 24), 0xC47u, 0);
  if ( v60 )
  {
    sub_AE9DF0(&v59, a3, 0xEu);
  }
  else if ( v62 )
  {
    v47 = sub_168B9E0(v57);
    v50 = v58;
    if ( v58 )
      v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58);
    v56 = v50;
    v51 = sub_1587BC0(v47, &v56, v45, v46, v48, v49);
    sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v61 + 8), a3, 0xEu);
  }
  sub_15F7200(v57);
  v42 = v63;
  v30 = &v63[8 * (unsigned int)v64];
  if ( v63 != v30 )
  {
    do
    {
      v43 = *v42;
      v44 = (__int64)(v42 + 2);
      v42 += 8;
      sub_168CDE0((__int64)v57, &a1->m128_i64[1], v43, v44, 0);
      sub_15F7200(v57);
    }
    while ( v30 != v42 );
    v21 = nullptr;
LABEL_13:
    v29 = v63;
    v30 = &v63[8 * (unsigned int)v64];
    if ( v63 != v30 )
    {
      do
      {
        v30 -= 8;
        v31 = *((_QWORD *)v30 + 1);
        if ( v31 )
        {
          v32 = *((_QWORD *)v30 + 2);
          if ( v32 )
          {
            if ( v31 < v32 || v31 > v32 + 14848 )
            {
              v33 = *(_QWORD **)(v31 + 528);
              v34 = &v33[8 * (unsigned __int64)*(unsigned int *)(v31 + 536)];
              if ( v33 != v34 )
              {
                do
                {
                  while ( 1 )
                  {
                    v34 -= 8;
                    v35 = (_QWORD *)v34[3];
                    if ( v35 == v34 + 5 )
                      break;
                    v53 = v33;
                    operator delete(v35);
                    v33 = v53;
                    if ( v53 == v34 )
                      goto LABEL_20;
                  }
                }
                while ( v33 != v34 );
LABEL_20:
                v34 = *(_QWORD **)(v31 + 528);
              }
              if ( v34 != (_QWORD *)(v31 + 544) )
                free(v34);
              v36 = *(void **)(v31 + 416);
              if ( v36 != (void *)(v31 + 432) )
                free(v36);
              v37 = (void **)(v31 + 384);
              v38 = (void **)(v31 + 64);
              do
              {
                while ( 1 )
                {
                  v39 = *v37;
                  if ( *v37 == v37 + 2 )
                    break;
                  v54 = v38;
                  v37 -= 4;
                  operator delete(v39);
                  v38 = v54;
                  if ( v54 == v37 )
                    goto LABEL_28;
                }
                v37 -= 4;
              }
              while ( v38 != v37 );
LABEL_28:
              operator delete((void *)v31, 0x3A0u);
            }
            else
            {
              v40 = *(unsigned int *)(v32 + 14976);
              *(_DWORD *)(v32 + 14976) = v40 + 1;
              *(_QWORD *)(v32 + 8 * v40 + 14848) = v31;
            }
          }
        }
      }
      while ( v29 != v30 );
      v30 = v63;
    }
    goto LABEL_31;
  }
  v21 = nullptr;
LABEL_31:
  if ( v30 != (unsigned int *)&v65 )
    free(v30);
  return v21;
}
