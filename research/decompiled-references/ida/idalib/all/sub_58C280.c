__int64 __fastcall sub_58C280(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbx
  int v9; // edx
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rax
  int v13; // ebx
  signed int v14; // r8d
  char v15; // r14
  __int64 v16; // rsi
  unsigned int v17; // r15d
  unsigned int *v18; // r15
  void *v19; // rcx
  int v20; // r10d
  int *v21; // r14
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // edi
  __int64 v26; // rbx
  __int64 v27; // rbx
  unsigned __int16 v28; // ax
  size_t v29; // r15
  void *v30; // rdi
  size_t v31; // rdx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rdi
  unsigned int v34; // r11d
  unsigned __int64 dtype_size; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  int v42; // edi
  __int64 v43; // rdi
  int v44; // r13d
  __int64 i; // rbx
  char tinfo_property; // al
  char *v47; // rdi
  void *v48; // r14
  void *v49; // r13
  char *v50; // rbx
  void *v51; // rdi
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  int v57; // [rsp+18h] [rbp-D8h]
  int v58; // [rsp+18h] [rbp-D8h]
  int v59; // [rsp+18h] [rbp-D8h]
  unsigned __int64 v60; // [rsp+18h] [rbp-D8h]
  unsigned __int64 v61; // [rsp+18h] [rbp-D8h]
  unsigned __int8 v62; // [rsp+20h] [rbp-D0h]
  int v63; // [rsp+20h] [rbp-D0h]
  int v64; // [rsp+20h] [rbp-D0h]
  signed int v65; // [rsp+24h] [rbp-CCh]
  char v66; // [rsp+37h] [rbp-B9h] BYREF
  void *v67; // [rsp+38h] [rbp-B8h] BYREF
  __int128 v68; // [rsp+40h] [rbp-B0h]
  void *v69; // [rsp+58h] [rbp-98h] BYREF
  __int128 v70; // [rsp+60h] [rbp-90h]
  void *ptr[3]; // [rsp+78h] [rbp-78h] BYREF
  __int128 v72; // [rsp+90h] [rbp-60h]
  __int64 v73; // [rsp+A0h] [rbp-50h]
  int v74; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v75; // [rsp+B0h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v68 = 0;
  ptr[2] = a1;
  v67 = nullptr;
  *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B2ED68, (__m128i)(unsigned __int64)&v67);
  v6 = 0;
  if ( (unsigned int)for_all_arglocs(ptr, a4, *(unsigned int *)(a4 + 32), 0) )
    goto LABEL_2;
  v8 = v68;
  v69 = nullptr;
  v70 = 0;
  if ( !(_QWORD)v68 )
  {
    v6 = 1;
    if ( !*(_DWORD *)(a4 + 16) )
      goto LABEL_2;
    goto LABEL_7;
  }
  v69 = (void *)qvector_reserve(&v69, 0, v68, 1);
  v40 = v70;
  if ( (unsigned __int64)v70 < v8 )
  {
    *((_BYTE *)v69 + v70) = 0;
    v41 = v40 + 1;
    if ( v41 < v8 )
    {
      do
        *((_BYTE *)v69 + v41++) = 0;
      while ( v8 != v41 );
    }
  }
  v42 = *(_DWORD *)(a4 + 16);
  *(_QWORD *)&v70 = v8;
  if ( v42 )
  {
LABEL_7:
    if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(a4 + 48), 2) & 0xF) - 10) > 1u )
    {
      if ( (get_tinfo_property(*(_QWORD *)(a4 + 48), 2) & 0x2F) == 0xD )
      {
        v43 = *(_QWORD *)(a4 + 48);
        memset(ptr, 0, sizeof(ptr));
        v73 = 0;
        v74 = 1;
        v72 = 0;
        get_tinfo_details(v43, 141, ptr);
        v44 = 0;
        for ( i = 0; v44 < (unsigned __int64)v70; i = v44 )
        {
          tinfo_property = get_tinfo_property(*((_QWORD *)ptr[0] + 18 * i + 8), 2);
          *((_BYTE *)v69 + i) = (unsigned __int8)((tinfo_property & 0xF) - 10) <= 1u;
          ++v44;
        }
        v47 = (char *)ptr[0];
        if ( ptr[0] )
        {
          v48 = ptr[1];
          v49 = nullptr;
          if ( ptr[1] )
          {
            do
            {
              v50 = &v47[144 * (_QWORD)v49];
              clear_tinfo_t(v50 + 64);
              v51 = *((void **)v50 + 5);
              if ( v51 )
              {
                *((_QWORD *)v50 + 6) = 0;
                qfree(v51);
              }
              v52 = *((void **)v50 + 2);
              if ( v52 )
              {
                *((_QWORD *)v50 + 3) = 0;
                qfree(v52);
              }
              v49 = (char *)v49 + 1;
              v47 = (char *)ptr[0];
            }
            while ( v48 != v49 );
          }
          ptr[1] = nullptr;
          qfree(v47);
        }
      }
    }
    else if ( (_QWORD)v70 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        ++v9;
        *((_BYTE *)v69 + v10) = 1;
        v10 = v9;
      }
      while ( v9 < (unsigned __int64)v70 );
    }
  }
  if ( (_QWORD)v68 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v18 = (unsigned int *)((char *)v67 + 20 * v12);
        v19 = v69;
        v6 = *((unsigned __int8 *)v18 + 16);
        if ( (_BYTE)v6 )
          break;
        if ( !a3 )
          goto LABEL_34;
        v13 = v18[1];
        v14 = *v18;
        v15 = *((_BYTE *)v69 + v12);
        v16 = (int)v18[3];
        if ( a3[1] < (unsigned __int64)(int)(v13 + *v18) )
        {
          if ( !under_debugger )
            interr(693);
LABEL_82:
          BUG();
        }
        if ( *(_QWORD *)(a4 + 32) < (unsigned __int64)((int)v16 + v13) )
        {
          if ( !under_debugger )
            interr(694);
          goto LABEL_82;
        }
        v17 = *v18;
        memcpy((void *)(v14 + *a3), (const void *)(*(_QWORD *)(a4 + 24) + v16), v13);
        if ( v15 )
          sub_589D20(a3, v17, v13);
LABEL_18:
        v12 = ++v11;
        if ( v11 >= (unsigned __int64)v68 )
          goto LABEL_33;
      }
      v20 = v18[3];
      v21 = (int *)(v18 + 2);
      v22 = (int)*v18;
      v23 = a2[1];
      v24 = *a2;
      if ( v23 )
      {
        v25 = 0;
        v26 = 0;
        while ( 1 )
        {
          v27 = v24 + 32 * v26;
          if ( (_DWORD)v22 == *(_DWORD *)v27 )
            break;
          v26 = ++v25;
          if ( v25 >= v23 )
            goto LABEL_38;
        }
        if ( v27 )
          goto LABEL_25;
LABEL_38:
        v33 = v23 + 1;
      }
      else
      {
        v33 = 1;
      }
      v34 = *((unsigned __int8 *)v69 + v12);
      if ( a2[2] < v33 )
      {
        v65 = *v18;
        v62 = *((_BYTE *)v69 + v12);
        v59 = v18[3];
        v39 = qvector_reserve(a2, v24, v33, 32);
        v23 = a2[1];
        v22 = v65;
        *a2 = v39;
        v24 = v39;
        v34 = v62;
        v20 = v59;
      }
      v27 = v24 + 32 * v23;
      v58 = v20;
      *(_OWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 8) = 0;
      ++a2[1];
      *(_QWORD *)v27 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v34)).m128i_u64[0];
      dtype_size = (int)get_dtype_size(*(unsigned __int8 *)(*(_QWORD *)(a1[78] + 56LL) + 32 * v22 + 13));
      v36 = *(_QWORD *)(v27 + 16);
      v66 = 0;
      v20 = v58;
      if ( dtype_size >= v36 )
      {
        if ( v36 >= dtype_size )
          goto LABEL_25;
        v37 = *(_QWORD *)(v27 + 8);
        v38 = *(_QWORD *)(v27 + 24);
        if ( (unsigned __int64)&v66 < v37 || (unsigned __int64)&v66 >= v37 + v38 )
        {
          if ( v38 >= dtype_size
            || (v63 = v58,
                v60 = dtype_size,
                v53 = qvector_reserve(v27 + 8, v37, dtype_size, 1),
                *(_QWORD *)(v27 + 8) = v53,
                dtype_size = v60,
                v37 = v53,
                v36 = *(_QWORD *)(v27 + 16),
                v20 = v63,
                v36 < v60) )
          {
            while ( 1 )
            {
              *(_BYTE *)(v37 + v36++) = v66;
              if ( dtype_size == v36 )
                break;
              v37 = *(_QWORD *)(v27 + 8);
            }
          }
        }
        else if ( v38 >= dtype_size
               || (v64 = v58,
                   v61 = dtype_size,
                   v54 = qvector_reserve(v27 + 8, v37, dtype_size, 1),
                   *(_QWORD *)(v27 + 8) = v54,
                   dtype_size = v61,
                   v37 = v54,
                   v36 = *(_QWORD *)(v27 + 16),
                   v20 = v64,
                   v36 < v61) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v37 + v36++) = 0;
            if ( dtype_size == v36 )
              break;
            v37 = *(_QWORD *)(v27 + 8);
          }
        }
      }
      *(_QWORD *)(v27 + 16) = dtype_size;
LABEL_25:
      memset(ptr, 0, sizeof(ptr));
      v28 = *((_WORD *)v18 + 5);
      if ( v28 )
      {
        v29 = (v28 + 7) >> 3;
      }
      else
      {
        v29 = *(int *)(v27 + 16);
        if ( !*(_DWORD *)(v27 + 16) )
        {
          v30 = nullptr;
          goto LABEL_28;
        }
      }
      v57 = v20;
      ptr[0] = (void *)qvector_reserve(ptr, 0, v29, 1);
      memset((char *)ptr[0] + (unsigned __int64)ptr[1], 0, v29 - (unsigned __int64)ptr[1]);
      ptr[1] = (void *)v29;
      v20 = v57;
      v30 = ptr[0];
LABEL_28:
      v31 = *(_QWORD *)(a4 + 32) - v20;
      if ( v31 > v29 )
        v31 = v29;
      memcpy(v30, (const void *)(*(_QWORD *)(a4 + 24) + v20), v31);
      v32 = getinf_flag(3, 32);
      if ( !(unsigned __int8)bitrange_t_inject_using_bitrange(
                               v21,
                               *(_QWORD *)(v27 + 8),
                               *(_QWORD *)(v27 + 16),
                               ptr[0],
                               ptr[1],
                               v32) )
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
    while ( v11 < (unsigned __int64)v68 );
  }
LABEL_33:
  v19 = v69;
  v6 = 1;
LABEL_34:
  if ( v19 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v19);
  }
LABEL_2:
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  return v6;
}
