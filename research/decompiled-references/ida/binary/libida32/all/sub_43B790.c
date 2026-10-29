unsigned __int64 __fastcall sub_43B790(__m128i *a1, unsigned int a2, __int64 a3)
{
  bool v5; // zf
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // esi
  int v15; // eax
  int v17; // ebx
  int v18; // ebx
  int v19; // edx
  int v20; // esi
  int v21; // edx
  int v22; // eax
  unsigned int v23; // r14d
  unsigned int v24; // r12d
  unsigned int v25; // esi
  __int64 v26; // rsi
  char *v27; // rsi
  const char *v28; // rdi
  unsigned int v29; // r13d
  unsigned int v30; // r15d
  unsigned int v31; // esi
  const char *v32; // rdx
  unsigned int v33; // r14d
  void *ptr; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v35; // [rsp+8h] [rbp-E0h]
  int v36; // [rsp+18h] [rbp-D0h]
  char *s2; // [rsp+20h] [rbp-C8h] BYREF
  void *v38[2]; // [rsp+28h] [rbp-C0h]
  int v39; // [rsp+38h] [rbp-B0h]
  void *v40; // [rsp+40h] [rbp-A8h] BYREF
  void *v41[2]; // [rsp+48h] [rbp-A0h]
  int v42; // [rsp+58h] [rbp-90h]
  __int64 (__fastcall **v43)(); // [rsp+60h] [rbp-88h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-80h]
  __m128i v45; // [rsp+70h] [rbp-78h]
  __int128 v46; // [rsp+80h] [rbp-68h] BYREF
  void (__fastcall *v47)(__int128 *, __int128 *, __int64, double); // [rsp+90h] [rbp-58h]
  __int64 v48; // [rsp+98h] [rbp-50h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-40h]

  v5 = a1[6].m128i_i8[0] == 0;
  v49 = __readfsqword(0x28u);
  ptr = nullptr;
  v35 = 0;
  if ( v5 )
    goto LABEL_2;
  sub_43ADF0((__int64)a1, (__int64)&ptr, a2, 0, nullptr);
  sub_3CB5F0(a1, *(unsigned int *)(a3 + 20), &byte_22CD811, 0);
  sub_3CB5F0(a1, a2, &byte_22CD811, 0);
  v31 = *(_DWORD *)(a3 + 16);
  if ( v31 != -1 )
  {
    v32 = haystack;
    if ( (_QWORD)v35 )
      v32 = (const char *)ptr;
    sub_437DE0(a1, v31, v32, 1, nullptr);
  }
  if ( !a1[6].m128i_i8[0] )
  {
LABEL_2:
    v7 = 0;
  }
  else
  {
    v7 = (__m128i)(unsigned __int64)haystack;
    if ( (_QWORD)v35 )
      v7 = _mm_loadl_epi64((const __m128i *)&ptr);
  }
  v8 = _mm_loadl_epi64(a1);
  v9 = *(unsigned int *)(a3 + 8);
  v44 = -1;
  v43 = &off_2AFEA38;
  v45 = _mm_unpacklo_epi64(v8, v7);
  if ( sub_3B8910((__int64)a1, v9) )
  {
    sub_43A340(a1, a2, a3, (__int64)&v43, 1);
  }
  else
  {
    v44 = a2;
    LODWORD(v40) = -1;
    BYTE4(v40) = 0;
    sub_3DD450(a1, (__int64)&v40, a2);
    while ( 1 )
    {
      v11 = (unsigned int)v40;
      if ( (_DWORD)v40 == -1 )
        break;
      if ( BYTE4(v40) == 19 )
      {
        v10 = ea2node((unsigned int)v40);
        netnode_supdel(v10, 1, 65);
        if ( v45.m128i_i64[1] )
          sub_437DE0(*(_QWORD **)(v45.m128i_i64[0] + 1480), v11, (const char *)v45.m128i_i64[1], 1, nullptr);
      }
      sub_3DD610(a1, (__int64)&v40, a2);
    }
  }
  if ( a1[6].m128i_i8[0] )
  {
    v12 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x4000) != 0 )
    {
      if ( (v12 & 0x80000) == 0 )
        goto LABEL_18;
      if ( (v12 & 1) == 0 )
        goto LABEL_16;
    }
    else if ( (v12 & 1) == 0 )
    {
      goto LABEL_16;
    }
    v13 = *(unsigned int *)(a3 + 12);
    if ( (*(_DWORD *)a3 & 0x802) == 2 && (v12 & 8) != 0 )
    {
      v33 = v13 + 2 * *(unsigned __int16 *)(a3 + 4);
      sub_3CB5F0(a1, v13, &byte_22CD811, 0);
      sub_3CB5F0(a1, v33, &byte_22CD811, 0);
    }
    else
    {
      sub_3CB5F0(a1, v13, &byte_22CD811, 0);
    }
    v12 = *(_DWORD *)a3;
LABEL_16:
    if ( (v12 & 0x400000) == 0 )
      sub_3CB5F0(a1, *(unsigned int *)(a3 + 8), &byte_22CD811, 0);
  }
LABEL_18:
  v14 = *(_DWORD *)(a3 + 16);
  if ( v14 == -1 || (sub_3B9AA0((__int64)a1, v14, 4) & 0x4000) == 0 )
    goto LABEL_20;
  *(_OWORD *)v38 = 0;
  s2 = nullptr;
  sub_3573A0(&s2);
  v26 = *(unsigned int *)(a3 + 16);
  *(_OWORD *)v41 = 0;
  v40 = nullptr;
  if ( get_ea_name(&v40, v26, 0, 0) > 0 )
  {
    if ( v38[0] )
    {
      v27 = s2;
      v28 = haystack;
      if ( !v41[0] )
        goto LABEL_54;
    }
    else
    {
      v27 = (char *)haystack;
      if ( !v41[0] )
        goto LABEL_78;
    }
    v28 = (const char *)v40;
LABEL_54:
    if ( strcmp(v28, v27) )
      goto LABEL_55;
LABEL_78:
    sub_4C0DE0(
      (int)a1,
      *(_DWORD *)(a3 + 16),
      (void *)&byte_22CD811,
      (int)ptr,
      v35,
      SDWORD2(v35),
      v36,
      (int)s2,
      v38[0],
      (__int64)v38[1],
      v39,
      (int)v40,
      v41[0],
      (__int64)v41[1],
      v42,
      (int)v43,
      v44,
      v45.m128i_i32[0],
      v45.m128i_i64[1],
      v46,
      SDWORD2(v46),
      (__int64)v47);
  }
LABEL_55:
  if ( v40 )
  {
    v41[0] = nullptr;
    qfree(v40);
  }
  if ( s2 )
  {
    v38[0] = nullptr;
    qfree(s2);
  }
LABEL_20:
  if ( (unsigned int)sub_4393D0(*(unsigned int *)(a3 + 8)) )
    sub_4C0DE0(
      (int)a1,
      *(_DWORD *)(a3 + 8),
      (void *)&byte_22CD811,
      (int)ptr,
      v35,
      SDWORD2(v35),
      v36,
      (int)s2,
      v38[0],
      (__int64)v38[1],
      v39,
      (int)v40,
      v41[0],
      (__int64)v41[1],
      v42,
      (int)v43,
      v44,
      v45.m128i_i32[0],
      v45.m128i_i64[1],
      v46,
      SDWORD2(v46),
      (__int64)v47);
  v15 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x4000) == 0 || (v15 & 0x80000) != 0 )
  {
    if ( (v15 & 0x10000) != 0 )
      v17 = *(_DWORD *)(a3 + 24);
    else
      v17 = *(unsigned __int16 *)(a3 + 4);
    v18 = v17 - (((*(_DWORD *)a3 & 0x20) == 0) - 1);
    v19 = *(_DWORD *)a3 & 0x404;
    if ( (v15 & 0x404) != 0 )
    {
      if ( v19 == 4 )
      {
        v18 *= 4;
      }
      else if ( v19 != 1024 )
      {
        v18 *= 8;
      }
    }
    else
    {
      v18 *= 2;
    }
    v20 = v15 & 0x400000;
    if ( (v15 & 1) != 0 )
    {
      v21 = 2;
      v22 = *(_DWORD *)a3 & 0x802;
      if ( v22 )
      {
        if ( v22 == 2 )
        {
          v21 = 4;
        }
        else
        {
          v21 = 1;
          if ( v22 != 2048 )
            v21 = 8;
        }
      }
      v23 = *(_DWORD *)(a3 + 12);
      v24 = v23 + v21 * *(unsigned __int16 *)(a3 + 4);
      if ( v20 )
        goto LABEL_39;
      v29 = *(_DWORD *)(a3 + 8);
      v30 = v29 + v18;
      if ( v29 >= v29 + v18 )
        goto LABEL_39;
    }
    else
    {
      if ( v20 )
        goto LABEL_24;
      v29 = *(_DWORD *)(a3 + 8);
      v30 = v18 + v29;
      if ( v29 >= v18 + v29 )
        goto LABEL_24;
      v24 = 0;
      v23 = 0;
    }
    if ( (sub_3B9AA0((__int64)a1, v29, 4) & 0x200) == 0 )
    {
      sub_3BC980(a1, v29, v30, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_39AFB0, nullptr);
      v47 = nullptr;
      v48 = 0;
      v46 = 0;
      sub_3CC010((_DWORD)a1, v29, 8);
      if ( v47 )
        v47(&v46, &v46, 3, 0.0);
    }
LABEL_39:
    if ( v23 < v24 )
    {
      v25 = v23;
      if ( (sub_3B9AA0((__int64)a1, v23, 4) & 0x600) == 0x200 )
        v25 = sub_3BD5D0((__int64)a1, v23);
      if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v25, 4) >> 8) & 6) != 0
        && (unsigned int)sub_3BC980(
                           a1,
                           v23,
                           v24,
                           (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_39AFB0,
                           nullptr) == -1 )
      {
        v47 = nullptr;
        v48 = 0;
        v46 = 0;
        sub_3CC010((_DWORD)a1, v23, 0);
        if ( v47 )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v47)(&v46, &v46, 3);
      }
    }
  }
LABEL_24:
  if ( ptr )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr);
  }
  return v49 - __readfsqword(0x28u);
}

