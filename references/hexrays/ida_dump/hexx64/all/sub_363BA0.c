__int64 __fastcall sub_363BA0(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // r14
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // r15
  __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  int v14; // ecx
  __int64 v15; // r13
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r13
  size_t v39; // r15
  __int32 v40; // r8d
  void *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rsi
  __m128i *v44; // rsi
  __int64 v45; // r13
  __int64 func; // rax
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rsi
  const char *v50; // rsi
  __int64 v51; // [rsp+0h] [rbp-F8h]
  unsigned int v52; // [rsp+0h] [rbp-F8h]
  __int32 v53; // [rsp+0h] [rbp-F8h]
  __int32 v54; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v55; // [rsp+8h] [rbp-F0h]
  unsigned int v56; // [rsp+10h] [rbp-E8h]
  int v57; // [rsp+1Ch] [rbp-DCh]
  unsigned __int64 v58; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v59; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v61; // [rsp+48h] [rbp-B0h]
  __int64 v62; // [rsp+60h] [rbp-98h] BYREF
  __int128 v63; // [rsp+68h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-78h] BYREF
  __int128 v65; // [rsp+88h] [rbp-70h]
  const char *v66; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+B8h] [rbp-40h]

  v1 = *a1;
  v68 = __readfsqword(0x28u);
  v61 = 0;
  v3 = *(_QWORD **)(v1 + 800);
  v60 = 0;
  v62 = 0;
  v4 = v3[27];
  v63 = 0;
  v64 = 0;
  v58 = v4;
  v65 = 0;
  if ( v4 )
  {
    v60 = qvector_reserve(&v60, 0, v4, 88);
    if ( *((_QWORD *)&v63 + 1) < v58 )
      v62 = qvector_reserve(&v62, v62, v58, 32);
    if ( *((_QWORD *)&v65 + 1) < v58 )
      v64 = qvector_reserve(&v64, v64, v58, 32);
    v34 = 0;
    do
    {
      v45 = *(_QWORD *)(v3[26] + 8 * v34);
      func = get_func(v45);
      v47 = v63;
      v48 = func;
      v49 = v62;
      if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v63 + 1) )
      {
        v62 = qvector_reserve(&v62, v62, v63 + 1, 32);
        v47 = v63;
        v49 = v62;
      }
      v35 = v49 + 32 * v47;
      *(_OWORD *)v35 = 0;
      v36 = v61;
      v37 = v60;
      *(_QWORD *)&v63 = v63 + 1;
      *(_QWORD *)(v35 + 16) = 0;
      *(_QWORD *)(v35 + 24) = v45;
      if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v36 + 1) )
      {
        v60 = qvector_reserve(&v60, v37, v36 + 1, 88);
        v36 = v61;
        v37 = v60;
      }
      v38 = v37 + 88 * v36;
      *(_QWORD *)v38 = 0;
      *(_QWORD *)(v38 + 24) = 0;
      *(_QWORD *)(v38 + 32) = 0;
      *(_QWORD *)(v38 + 56) = 0;
      *(_QWORD *)(v38 + 64) = 0;
      *(_OWORD *)(v38 + 8) = 0;
      *(_OWORD *)(v38 + 40) = 0;
      *(_OWORD *)(v38 + 72) = 0;
      *(_QWORD *)&v61 = v61 + 1;
      *(_QWORD *)(v35 + 16) = calc_func_metadata(v35, v38, v48, 0);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1[1] + 48LL))(a1[1], v38 + 56, v35);
      v39 = *(_QWORD *)(v38 + 72);
      v40 = *(_DWORD *)(v38 + 56);
      v41 = nullptr;
      if ( v39 )
      {
        v54 = *(_DWORD *)(v38 + 56);
        v41 = (void *)qalloc_or_throw(*(_QWORD *)(v38 + 72));
        memcpy(v41, *(const void **)(v38 + 64), v39);
        v40 = v54;
      }
      v42 = v65;
      v43 = v64;
      if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
      {
        v53 = v40;
        v64 = qvector_reserve(&v64, v64, v65 + 1, 32);
        v43 = v64;
        v40 = v53;
        v42 = v65;
      }
      ++v34;
      v44 = (__m128i *)(32 * v42 + v43);
      v44->m128i_i32[0] = v40;
      v44->m128i_i64[1] = (__int64)v41;
      v44[1] = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
      *(_QWORD *)&v65 = v65 + 1;
    }
    while ( v58 != v34 );
    v1 = *a1;
  }
  v5 = a1[1];
  v6 = *(_DWORD *)(v1 + 1336);
  v66 = nullptr;
  v67 = 0;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, const char **, _QWORD))(*(_QWORD *)v5 + 64LL))(
                    v5,
                    &v64,
                    &v66,
                    (v6 >> 10) & 2);
  if ( v10 )
  {
    a1[9] = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    if ( !v10[3] )
    {
LABEL_15:
      *((_DWORD *)a1 + 24) = v58;
      v18 = v3[26];
      if ( v18 )
      {
        v3[27] = 0;
        qfree(v18);
        v3[26] = 0;
        v3[28] = 0;
      }
      (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
      v19 = 1;
      a1[10] = a1[10] + get_nsec_stamp() - a1[8];
      a1[11] = time(nullptr);
      goto LABEL_18;
    }
    while ( 1 )
    {
      v59 = *(_QWORD *)(v3[26] + 8 * v12);
      v55 = v59;
      v17 = *(_DWORD *)(v10[2] + 4 * v12);
      if ( v17 != -2 )
        break;
      if ( *(_QWORD *)(v60 + v11 + 8) > 1u || (*(_BYTE *)(*a1 + 1337) & 0x10) != 0 )
      {
        sub_179D00(a1 + 2, &v59, v7, v8, v9);
        ++v12;
        v11 += 88;
        if ( v12 >= v10[3] )
          goto LABEL_15;
      }
      else
      {
LABEL_10:
        ++v12;
        v11 += 88;
        if ( v12 >= v10[3] )
          goto LABEL_15;
      }
    }
    if ( v17 )
    {
      if ( !under_debugger )
        sub_383060(51838);
      BUG();
    }
    v14 = v13 + 1;
    v15 = v10[5] + (v13 << 6);
    v57 = v14;
    v51 = v11 + v60;
    v56 = score_metadata(v11 + v60);
    v16 = score_metadata(v15);
    v8 = v56;
    if ( v16 < v56 )
    {
      if ( *(_QWORD *)(v51 + 8) > 1u || (*(_BYTE *)(*a1 + 1337) & 0x10) != 0 )
      {
        ++*((_DWORD *)a1 + 28);
        sub_179D00(a1 + 2, &v59, v7, v56, v9);
      }
    }
    else
    {
      v52 = v16;
      a1[9] += sub_3623A0(v3, v55, v15);
      if ( v56 < v52 )
      {
        ++*((_DWORD *)a1 + 26);
        apply_metadata(v55, v15, 0);
      }
      else
      {
        ++*((_DWORD *)a1 + 27);
      }
    }
    v13 = v57;
    goto LABEL_10;
  }
  v50 = s1;
  if ( (_QWORD)v67 )
    v50 = v66;
  sub_6D0A0((__int64)"lumina: %s\n", v50);
  v19 = 0;
LABEL_18:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  v20 = v64;
  if ( v64 )
  {
    v21 = v65;
    if ( (_QWORD)v65 )
    {
      v22 = 0;
      do
      {
        v23 = v20 + 32 * v22;
        v24 = *(_QWORD *)(v23 + 8);
        if ( v24 )
        {
          *(_QWORD *)(v23 + 16) = 0;
          qfree(v24);
          v20 = v64;
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v65 = 0;
    qfree(v20);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  v25 = v60;
  if ( v60 )
  {
    v26 = v61;
    if ( (_QWORD)v61 )
    {
      v27 = 0;
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v25 + v27);
        v30 = *(_QWORD *)(v25 + v27 + 64);
        if ( v30 )
        {
          v29[9] = 0;
          qfree(v30);
        }
        v31 = v29[4];
        if ( v31 )
        {
          v29[5] = 0;
          qfree(v31);
        }
        v32 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v32);
        }
        ++v28;
        v25 = v60;
        v27 += 88;
      }
      while ( v26 != v28 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v25);
  }
  return v19;
}
