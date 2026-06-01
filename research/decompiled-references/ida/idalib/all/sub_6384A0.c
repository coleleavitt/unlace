__int64 __fastcall sub_6384A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  char v10; // r12
  __int64 v11; // r14
  _QWORD *v12; // rax
  const char *v13; // r12
  size_t v14; // rax
  size_t v15; // r13
  size_t v16; // rbp
  void *v17; // rax
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 (*v20)(); // rax
  __int64 v21; // rdx
  int v22; // eax
  size_t v23; // r14
  char *v24; // r15
  __int64 v25; // rbp
  size_t v26; // r12
  _BYTE *v27; // rsi
  __int64 *v28; // rdi
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // r13
  _BYTE *v33; // rdi
  __int64 v34; // rbp
  char *v35; // rax
  __int64 v36; // r12
  char *v37; // r12
  int v38; // ebp
  int v39; // r14d
  char *v40; // r13
  __m128 v41; // xmm0
  __m128i v42; // xmm0
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rsi
  _DWORD *v47; // rax
  unsigned __int64 v48; // r13
  void *v49; // [rsp+0h] [rbp-98h] BYREF
  __m128i v50; // [rsp+8h] [rbp-90h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v52; // [rsp+28h] [rbp-70h]
  __m128i v53; // [rsp+40h] [rbp-58h] BYREF
  __int64 v54; // [rsp+50h] [rbp-48h]
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 56);
  v55 = __readfsqword(0x28u);
  if ( (v7 & 0x30) != 0 )
  {
    sub_633CD0(a1, a2, a3, a4, a5, a6);
    return a1;
  }
  v49 = nullptr;
  v10 = a4;
  v50 = 0;
  if ( (v7 & 0x4070) == 0 || (v7 & 0x4000) != 0 )
  {
    v11 = sub_633C30(a2, a3, 1, a4, a5, a6);
    if ( !v10 )
      goto LABEL_13;
    v12 = *(_QWORD **)(a3 + 40);
    if ( v12 )
    {
      v13 = (const char *)v12[1];
      if ( !v13 )
      {
LABEL_13:
        if ( !*(_QWORD *)(a2 + 64)
          || (switch_dbctx(*(int *)(a2 + 8)),
              v19 = *(_QWORD *)(a2 + 64),
              v20 = *(__int64 (**)())(*(_QWORD *)v19 + 48LL),
              v20 == sub_47C690)
          || !((unsigned __int8 (__fastcall *)(__int64, void **, __int64, __int64))v20)(v19, &v49, a3, v11) )
        {
          if ( (*(_DWORD *)(a3 + 56) & 0x4000) != 0 || (v21 = *(_QWORD *)(a3 + 24)) != 0 && (v21 & (v21 - 1)) == 0 )
          {
            v22 = *(_DWORD *)(a3 + 56) & 0x8000;
            if ( v11 )
            {
              v23 = 4;
              v24 = "true";
              if ( v22 )
              {
                v23 = 2;
                v24 = "on";
              }
            }
            else
            {
              v23 = 5;
              v24 = "false";
              if ( v22 )
              {
                v23 = 3;
                v24 = (char *)"off";
              }
            }
            v25 = v50.m128i_i64[0];
            v26 = v23;
            if ( v50.m128i_i64[0] )
            {
              v25 = v50.m128i_i64[0] - 1;
              v26 = v23 + v50.m128i_i64[0] - 1;
            }
            v27 = v49;
            if ( v50.m128i_i64[1] < v26 + 1 )
            {
              v49 = (void *)qvector_reserve(&v49, v49, v26 + 1, 1);
              v27 = v49;
            }
            v50.m128i_i64[0] = v26 + 1;
            v27[v26] = 0;
            memmove((char *)v49 + v25, v24, v23);
          }
          else
          {
            sub_35A790((char **)&v49);
          }
        }
        *(_QWORD *)a1 = v49;
        *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v50);
        return a1;
      }
      while ( *v12 != v11 )
      {
        v13 = (const char *)v12[3];
        v12 += 2;
        if ( !v13 )
          goto LABEL_13;
      }
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v14 = strlen(v13);
      v15 = v14 + 1;
      v16 = v14;
      v17 = (void *)qvector_reserve(a1, 0, v14 + 1, 1);
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = v15;
      memmove(v17, v13, v16);
      *(_BYTE *)(*(_QWORD *)a1 + v16) = 0;
      v18 = v49;
    }
    else
    {
      if ( *(_QWORD *)(a3 + 16) != 8 || (*(_WORD *)(a3 + 56) & 0x180) != 0 || v11 != -1 )
        goto LABEL_13;
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v47 = (_DWORD *)qvector_reserve(a1, 0, 8, 1);
      *(_QWORD *)a1 = v47;
      *(_QWORD *)(a1 + 8) = 8;
      *v47 = 1094992194;
      *(_DWORD *)((char *)v47 + 3) = 1380205633;
      *(_BYTE *)(*(_QWORD *)a1 + 7LL) = 0;
      v18 = v49;
    }
    goto LABEL_36;
  }
  ptr = nullptr;
  v53.m128i_i64[0] = 0;
  v53.m128i_i64[1] = -1;
  v52 = 0;
  if ( (v7 & 0x1000) != 0 )
  {
    v42 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v44 = *(_QWORD *)(a2 + 64);
    v45 = *(unsigned int *)(a2 + 12);
    v54 = *(_QWORD *)(a2 + 56);
    v46 = *(_QWORD *)(a2 + 32);
    v53 = v42;
    v54 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v44 + 32LL))(v44, v46, v45, a3);
    v28 = (__int64 *)&v53;
  }
  else
  {
    v54 = 0;
    v28 = (__int64 *)(a2 + 40);
  }
  sub_631050(v28, a3, &ptr, a4, a5);
  v31 = v50.m128i_i64[0];
  v32 = v52;
  v33 = v49;
  v34 = v50.m128i_i64[0] - 1;
  if ( !v50.m128i_i64[0] )
    v34 = 0;
  v35 = (char *)v49;
  v36 = v34 + 2 * v52;
  if ( v36 )
  {
    v48 = v36 + 1;
    if ( v50.m128i_i64[0] < (unsigned __int64)(v36 + 1) )
    {
      if ( v50.m128i_i64[1] < v48 )
      {
        v35 = (char *)qvector_reserve(&v49, v49, v36 + 1, 1);
        v49 = v35;
        v31 = v50.m128i_i64[0];
      }
      memset(&v35[v31], 0, v48 - v31);
      v50.m128i_i64[0] = v36 + 1;
      v33 = v49;
    }
    else if ( v50.m128i_i64[0] != v36 + 1 )
    {
      v50.m128i_i64[0] = v36 + 1;
    }
    v33[v36] = 0;
    v35 = (char *)v49;
    LODWORD(v31) = v50.m128i_i32[0];
    v32 = v52;
  }
  v37 = (char *)ptr;
  v38 = (_DWORD)v35 + v34;
  v39 = (_DWORD)v35 + v31;
  v40 = (char *)ptr + v32;
  if ( ptr != v40 )
  {
    do
    {
      qsnprintf(v38, v39 - v38, (unsigned int)"%02X", (unsigned __int8)*v37++, v29, v30);
      v38 += 2;
    }
    while ( v40 != v37 );
    v40 = (char *)ptr;
    v35 = (char *)v49;
  }
  *(_QWORD *)a1 = v35;
  v41 = _mm_loadh_ps((const double *)&v50.m128i_i64[1]);
  v49 = nullptr;
  *(__m128 *)(a1 + 8) = v41;
  v50 = 0;
  if ( v40 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v40);
    v18 = v49;
LABEL_36:
    if ( v18 )
    {
      v50.m128i_i64[0] = 0;
      qfree(v18);
    }
  }
  return a1;
}
