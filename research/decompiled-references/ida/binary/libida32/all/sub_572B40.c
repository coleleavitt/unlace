__int64 __fastcall sub_572B40(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbx
  int v9; // edx
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rsi
  signed int v15; // r15d
  char v16; // r14
  signed int *v17; // r15
  void *v18; // rcx
  int v19; // r10d
  int *v20; // r14
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // edi
  __int64 v25; // rbx
  __int64 v26; // rbx
  unsigned __int16 v27; // ax
  size_t v28; // r15
  void *v29; // rdi
  size_t v30; // rdx
  unsigned __int8 v31; // al
  unsigned __int64 v32; // rdi
  unsigned int v33; // r11d
  unsigned __int64 dtype_size; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rdi
  int v43; // r13d
  __int64 i; // rbx
  char tinfo_property; // al
  char *v46; // rdi
  void *v47; // r14
  void *v48; // r13
  char *v49; // rbx
  void *v50; // rdi
  void *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  int v56; // [rsp+18h] [rbp-D8h]
  int v57; // [rsp+18h] [rbp-D8h]
  int v58; // [rsp+18h] [rbp-D8h]
  unsigned __int64 v59; // [rsp+18h] [rbp-D8h]
  unsigned __int64 v60; // [rsp+18h] [rbp-D8h]
  unsigned __int8 v61; // [rsp+20h] [rbp-D0h]
  int v62; // [rsp+20h] [rbp-D0h]
  int v63; // [rsp+20h] [rbp-D0h]
  signed int v64; // [rsp+24h] [rbp-CCh]
  char v65; // [rsp+37h] [rbp-B9h] BYREF
  void *v66; // [rsp+38h] [rbp-B8h] BYREF
  __int128 v67; // [rsp+40h] [rbp-B0h]
  void *v68; // [rsp+58h] [rbp-98h] BYREF
  __int128 v69; // [rsp+60h] [rbp-90h]
  void *ptr[3]; // [rsp+78h] [rbp-78h] BYREF
  __int128 v71; // [rsp+90h] [rbp-60h]
  __int64 v72; // [rsp+A0h] [rbp-50h]
  int v73; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v67 = 0;
  ptr[2] = a1;
  v66 = nullptr;
  *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B04DA8, (__m128i)(unsigned __int64)&v66);
  v6 = 0;
  if ( (unsigned int)for_all_arglocs(ptr, a4, *(unsigned int *)(a4 + 32), 0) )
    goto LABEL_2;
  v8 = v67;
  v68 = nullptr;
  v69 = 0;
  if ( !(_QWORD)v67 )
  {
    v6 = 1;
    if ( !*(_DWORD *)(a4 + 16) )
      goto LABEL_2;
    goto LABEL_7;
  }
  v68 = (void *)qvector_reserve(&v68, 0, v67, 1);
  v39 = v69;
  if ( (unsigned __int64)v69 < v8 )
  {
    *((_BYTE *)v68 + v69) = 0;
    v40 = v39 + 1;
    if ( v40 < v8 )
    {
      do
        *((_BYTE *)v68 + v40++) = 0;
      while ( v8 != v40 );
    }
  }
  v41 = *(_DWORD *)(a4 + 16);
  *(_QWORD *)&v69 = v8;
  if ( v41 )
  {
LABEL_7:
    if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(a4 + 48), 2) & 0xF) - 10) > 1u )
    {
      if ( (get_tinfo_property(*(_QWORD *)(a4 + 48), 2) & 0x2F) == 0xD )
      {
        v42 = *(_QWORD *)(a4 + 48);
        memset(ptr, 0, sizeof(ptr));
        v72 = 0;
        v73 = 1;
        v71 = 0;
        get_tinfo_details(v42, 141, ptr);
        v43 = 0;
        for ( i = 0; v43 < (unsigned __int64)v69; i = v43 )
        {
          tinfo_property = get_tinfo_property(*((_QWORD *)ptr[0] + 16 * i + 8), 2);
          *((_BYTE *)v68 + i) = (unsigned __int8)((tinfo_property & 0xF) - 10) <= 1u;
          ++v43;
        }
        v46 = (char *)ptr[0];
        if ( ptr[0] )
        {
          v47 = ptr[1];
          v48 = nullptr;
          if ( ptr[1] )
          {
            do
            {
              v49 = &v46[128 * (_QWORD)v48];
              clear_tinfo_t(v49 + 64);
              v50 = *((void **)v49 + 5);
              if ( v50 )
              {
                *((_QWORD *)v49 + 6) = 0;
                qfree(v50);
              }
              v51 = *((void **)v49 + 2);
              if ( v51 )
              {
                *((_QWORD *)v49 + 3) = 0;
                qfree(v51);
              }
              v48 = (char *)v48 + 1;
              v46 = (char *)ptr[0];
            }
            while ( v47 != v48 );
          }
          ptr[1] = nullptr;
          qfree(v46);
        }
      }
    }
    else if ( (_QWORD)v69 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        ++v9;
        *((_BYTE *)v68 + v10) = 1;
        v10 = v9;
      }
      while ( v9 < (unsigned __int64)v69 );
    }
  }
  if ( (_QWORD)v67 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v17 = (signed int *)((char *)v66 + 20 * v12);
        v18 = v68;
        v6 = *((unsigned __int8 *)v17 + 16);
        if ( (_BYTE)v6 )
          break;
        if ( !a3 )
          goto LABEL_34;
        v13 = v17[1];
        v14 = v17[3];
        v15 = *v17;
        v16 = *((_BYTE *)v68 + v12);
        if ( a3[1] < (unsigned __int64)(v13 + v15) )
        {
          if ( !under_debugger )
            interr(693);
LABEL_82:
          BUG();
        }
        if ( *(_QWORD *)(a4 + 32) < (unsigned __int64)((int)v14 + v13) )
        {
          if ( !under_debugger )
            interr(694);
          goto LABEL_82;
        }
        memcpy((void *)(*a3 + v15), (const void *)(*(_QWORD *)(a4 + 24) + v14), v13);
        if ( v16 )
          sub_570620(a3, v15, v13);
LABEL_18:
        v12 = ++v11;
        if ( v11 >= (unsigned __int64)v67 )
          goto LABEL_33;
      }
      v19 = v17[3];
      v20 = v17 + 2;
      v21 = *v17;
      v22 = a2[1];
      v23 = *a2;
      if ( v22 )
      {
        v24 = 0;
        v25 = 0;
        while ( 1 )
        {
          v26 = v23 + 32 * v25;
          if ( (_DWORD)v21 == *(_DWORD *)v26 )
            break;
          v25 = ++v24;
          if ( v24 >= v22 )
            goto LABEL_38;
        }
        if ( v26 )
          goto LABEL_25;
LABEL_38:
        v32 = v22 + 1;
      }
      else
      {
        v32 = 1;
      }
      v33 = *((unsigned __int8 *)v68 + v12);
      if ( a2[2] < v32 )
      {
        v64 = *v17;
        v61 = *((_BYTE *)v68 + v12);
        v58 = v17[3];
        v38 = qvector_reserve(a2, v23, v32, 32);
        v22 = a2[1];
        v21 = v64;
        *a2 = v38;
        v23 = v38;
        v33 = v61;
        v19 = v58;
      }
      v26 = v23 + 32 * v22;
      v57 = v19;
      *(_OWORD *)(v26 + 16) = 0;
      *(_QWORD *)(v26 + 8) = 0;
      ++a2[1];
      *(_QWORD *)v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v33)).m128i_u64[0];
      dtype_size = (int)get_dtype_size(*(unsigned __int8 *)(*(_QWORD *)(a1[67] + 56LL) + 32 * v21 + 13));
      v35 = *(_QWORD *)(v26 + 16);
      v65 = 0;
      v19 = v57;
      if ( dtype_size >= v35 )
      {
        if ( v35 >= dtype_size )
          goto LABEL_25;
        v36 = *(_QWORD *)(v26 + 8);
        v37 = *(_QWORD *)(v26 + 24);
        if ( (unsigned __int64)&v65 < v36 || (unsigned __int64)&v65 >= v36 + v37 )
        {
          if ( v37 >= dtype_size
            || (v62 = v57,
                v59 = dtype_size,
                v52 = qvector_reserve(v26 + 8, v36, dtype_size, 1),
                *(_QWORD *)(v26 + 8) = v52,
                dtype_size = v59,
                v36 = v52,
                v35 = *(_QWORD *)(v26 + 16),
                v19 = v62,
                v35 < v59) )
          {
            while ( 1 )
            {
              *(_BYTE *)(v36 + v35++) = v65;
              if ( dtype_size == v35 )
                break;
              v36 = *(_QWORD *)(v26 + 8);
            }
          }
        }
        else if ( v37 >= dtype_size
               || (v63 = v57,
                   v60 = dtype_size,
                   v53 = qvector_reserve(v26 + 8, v36, dtype_size, 1),
                   *(_QWORD *)(v26 + 8) = v53,
                   dtype_size = v60,
                   v36 = v53,
                   v35 = *(_QWORD *)(v26 + 16),
                   v19 = v63,
                   v35 < v60) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v36 + v35++) = 0;
            if ( dtype_size == v35 )
              break;
            v36 = *(_QWORD *)(v26 + 8);
          }
        }
      }
      *(_QWORD *)(v26 + 16) = dtype_size;
LABEL_25:
      memset(ptr, 0, sizeof(ptr));
      v27 = *((_WORD *)v17 + 5);
      if ( v27 )
      {
        v28 = (v27 + 7) >> 3;
      }
      else
      {
        v28 = *(int *)(v26 + 16);
        if ( !*(_DWORD *)(v26 + 16) )
        {
          v29 = nullptr;
          goto LABEL_28;
        }
      }
      v56 = v19;
      ptr[0] = (void *)qvector_reserve(ptr, 0, v28, 1);
      memset((char *)ptr[0] + (unsigned __int64)ptr[1], 0, v28 - (unsigned __int64)ptr[1]);
      ptr[1] = (void *)v28;
      v19 = v56;
      v29 = ptr[0];
LABEL_28:
      v30 = *(_QWORD *)(a4 + 32) - v19;
      if ( v30 > v28 )
        v30 = v28;
      memcpy(v29, (const void *)(*(_QWORD *)(a4 + 24) + v19), v30);
      v31 = getinf_flag(3, 32);
      if ( !(unsigned __int8)bitrange_t_inject_using_bitrange(
                               v20,
                               *(_QWORD *)(v26 + 8),
                               *(_QWORD *)(v26 + 16),
                               ptr[0],
                               ptr[1],
                               v31) )
      {
        if ( !under_debugger )
          interr(1110);
        goto LABEL_82;
      }
      if ( !ptr[0] )
        goto LABEL_18;
      ptr[1] = nullptr;
      ++v11;
      qfree(ptr[0]);
      v12 = v11;
    }
    while ( v11 < (unsigned __int64)v67 );
  }
LABEL_33:
  v18 = v68;
  v6 = 1;
LABEL_34:
  if ( v18 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v18);
  }
LABEL_2:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  return v6;
}

