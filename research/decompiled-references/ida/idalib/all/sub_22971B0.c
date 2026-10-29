__int64 sub_22971B0()
{
  __int64 v0; // rax
  const __m128i *v1; // rbp
  __m128i v2; // xmm0
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int128 v18; // rdi
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  int v23; // eax
  int v24; // eax
  __cpu_mask v25; // rax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // r12d
  __int64 v29; // rbp
  __int64 *v30; // rax
  void *v31; // rdx
  __int64 *v32; // rbx
  __int64 *v33; // rax
  void *v34; // rdx
  __int64 *v35; // rax
  _BYTE *v36; // rdx
  const __m128i *v37; // [rsp+8h] [rbp-260h]
  int v38; // [rsp+20h] [rbp-248h]
  int v39; // [rsp+24h] [rbp-244h]
  int v40; // [rsp+38h] [rbp-230h]
  int v41; // [rsp+3Ch] [rbp-22Ch]
  __m128i v42; // [rsp+40h] [rbp-228h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-218h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-210h]
  __int64 v45[2]; // [rsp+60h] [rbp-208h] BYREF
  char v46; // [rsp+70h] [rbp-1F8h]
  __m128i v47; // [rsp+80h] [rbp-1E8h] BYREF
  unsigned __int64 v48; // [rsp+90h] [rbp-1D8h] BYREF
  unsigned __int64 v49; // [rsp+98h] [rbp-1D0h]
  cpu_set_t cpuset; // [rsp+A0h] [rbp-1C8h] BYREF
  cpu_set_t v51; // [rsp+120h] [rbp-148h] BYREF
  void *ptr; // [rsp+1A0h] [rbp-C8h] BYREF
  size_t v53; // [rsp+1A8h] [rbp-C0h]
  _WORD v54[92]; // [rsp+1B0h] [rbp-B8h] BYREF

  if ( sched_getaffinity(0, 0x80u, &cpuset) )
    return (unsigned int)-1;
  v54[8] = 259;
  memset(&v51, 0, sizeof(v51));
  ptr = "/proc/cpuinfo";
  sub_22308F0((__int64)v45, (const void ***)&ptr);
  if ( (v46 & 1) == 0 || (v28 = v45[0]) == 0 )
  {
    ptr = v54;
    v53 = 0x800000000LL;
    v0 = *(_QWORD *)(v45[0] + 16);
    v47.m128i_i64[0] = *(_QWORD *)(v45[0] + 8);
    v47.m128i_i64[1] = v0 - v47.m128i_i64[0];
    sub_22471D0((char **)&v47, (__int64)&ptr, "\n", 1u, -1, 0);
    v1 = (const __m128i *)ptr;
    v37 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v53);
    if ( ptr == v37 )
    {
LABEL_34:
      v21 = __sched_cpucount(0x80u, &v51);
      if ( ptr != v54 )
        free(ptr);
      goto LABEL_36;
    }
    v41 = -1;
    v40 = -1;
    v39 = -1;
    v38 = -1;
    while ( 1 )
    {
      v2 = _mm_loadu_si128(v1);
      LOBYTE(v43) = 58;
      v42 = v2;
      v3 = sub_2246AB0(v42.m128i_i64, &v43, 1u, 0);
      if ( v3 == -1 )
      {
        v48 = 0;
        v49 = 0;
        v47 = v42;
      }
      else
      {
        v4 = v3 + 1;
        if ( v3 + 1 > v42.m128i_i64[1] )
        {
          v4 = v42.m128i_u64[1];
          v5 = 0;
        }
        else
        {
          v5 = v42.m128i_i64[1] - v4;
        }
        v49 = v5;
        if ( v3 > v42.m128i_i64[1] )
          v3 = v42.m128i_u64[1];
        v47.m128i_i64[0] = v42.m128i_i64[0];
        v47.m128i_i64[1] = v3;
        v48 = v4 + v42.m128i_i64[0];
      }
      v6 = 0;
      v7 = sub_2246FB0(v47.m128i_i64, asc_22E1692, 6, 0);
      v8 = v47.m128i_u64[1];
      if ( v7 < v47.m128i_i64[1] )
      {
        v6 = v47.m128i_i64[1] - v7;
        v8 = v7;
      }
      v43 = v47.m128i_i64[0] + v8;
      v44 = v6;
      v9 = sub_2247130(&v43, asc_22E1692, 6, 0xFFFFFFFFFFFFFFFFLL) + 1;
      if ( v9 > v44 )
        v9 = v44;
      v10 = v9;
      v11 = v44 - v6;
      v12 = v43;
      v13 = v11 + v10;
      if ( v13 > v44 )
        v13 = v44;
      v14 = sub_2246FB0((__int64 *)&v48, asc_22E1692, 6, 0);
      v15 = v49;
      v16 = 0;
      if ( v14 < v49 )
      {
        v16 = v49 - v14;
        v15 = v14;
      }
      v43 = v48 + v15;
      v44 = v16;
      v17 = sub_2247130(&v43, asc_22E1692, 6, 0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)&v18 = v43;
      v19 = v17 + 1;
      if ( v19 > v44 )
        v19 = v44;
      *((_QWORD *)&v18 + 1) = v19 + v44 - v16;
      if ( *((_QWORD *)&v18 + 1) > v44 )
        *((_QWORD *)&v18 + 1) = v44;
      if ( v13 == 9 )
      {
        if ( *(_QWORD *)v12 == 0x6F737365636F7270LL
          && *(_BYTE *)(v12 + 8) == 114
          && !sub_2247A50(v18, 0xAu, (__int64 *)&v43) )
        {
          v27 = v43;
          if ( v43 != (int)v43 )
            v27 = v38;
          v38 = v27;
        }
        goto LABEL_6;
      }
      if ( v13 != 11 )
        break;
      if ( *(_QWORD *)v12 == 0x6C61636973796870LL
        && *(_WORD *)(v12 + 8) == 26912
        && *(_BYTE *)(v12 + 10) == 100
        && !sub_2247A50(v18, 0xAu, (__int64 *)&v43) )
      {
        v20 = v43;
        if ( v43 != (int)v43 )
          v20 = v39;
        ++v1;
        v39 = v20;
        if ( v37 == v1 )
          goto LABEL_34;
      }
      else
      {
LABEL_6:
        if ( v37 == ++v1 )
          goto LABEL_34;
      }
    }
    if ( v13 == 8 )
    {
      if ( *(_QWORD *)v12 == 0x73676E696C626973LL && !sub_2247A50(v18, 0xAu, (__int64 *)&v43) )
      {
        v23 = v43;
        if ( v43 != (int)v43 )
          v23 = v40;
        v40 = v23;
      }
    }
    else if ( v13 == 7 && *(_DWORD *)v12 == 1701998435 && *(_WORD *)(v12 + 4) == 26912 && *(_BYTE *)(v12 + 6) == 100 )
    {
      if ( !sub_2247A50(v18, 0xAu, (__int64 *)&v43) )
      {
        v24 = v43;
        if ( v43 != (int)v43 )
          v24 = v41;
        v41 = v24;
      }
      if ( (unsigned __int64)v38 <= 0x3FF )
      {
        v25 = cpuset.__bits[(unsigned __int64)v38 >> 6];
        if ( _bittest64((const __int64 *)&v25, v38) )
        {
          v26 = v41 + v39 * v40;
          if ( (unsigned __int64)v26 <= 0x3FF )
            v51.__bits[(unsigned __int64)v26 >> 6] |= 1LL << v26;
        }
      }
    }
    goto LABEL_6;
  }
  v29 = v45[1];
  v30 = (__int64 *)sub_227D6D0();
  v31 = (void *)v30[4];
  v32 = v30;
  if ( (unsigned __int64)(v30[3] - (_QWORD)v31) > 0xA )
  {
    qmemcpy(v31, "Can't read ", 11);
    v34 = (void *)(v30[4] + 11);
    v30[4] = (__int64)v34;
  }
  else
  {
    v33 = sub_227BF10(v30, "Can't read ", 0xBu);
    v34 = (void *)v33[4];
    v32 = v33;
  }
  if ( (unsigned __int64)(v32[3] - (_QWORD)v34) > 0xE )
  {
    qmemcpy(v34, "/proc/cpuinfo: ", 15);
    v32[4] += 15;
  }
  else
  {
    v32 = sub_227BF10(v32, "/proc/cpuinfo: ", 0xFu);
  }
  (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v29 + 32LL))(&ptr, v29, v28);
  v35 = sub_227BF10(v32, (unsigned __int8 *)ptr, v53);
  v36 = (_BYTE *)v35[4];
  if ( (_BYTE *)v35[3] == v36 )
  {
    sub_227BF10(v35, (unsigned __int8 *)"\n", 1u);
  }
  else
  {
    *v36 = 10;
    ++v35[4];
  }
  if ( ptr != v54 )
    operator delete(ptr);
  v21 = -1;
LABEL_36:
  sub_FC2AF0(v45);
  return v21;
}
