unsigned __int64 __fastcall sub_44F630(__m128i *a1, void *a2, __int64 a3)
{
  bool v5; // zf
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rbx
  int v12; // eax
  void *v13; // rsi
  unsigned __int64 v14; // rsi
  int v15; // eax
  int v17; // edx
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  int v21; // ecx
  int v22; // eax
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  __int64 v26; // rsi
  char *v27; // rsi
  const char *v28; // rdi
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // r14
  void *v31; // rsi
  const char *v32; // rdx
  void *v33; // r14
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
  __int64 v44; // [rsp+68h] [rbp-80h]
  __m128i v45; // [rsp+70h] [rbp-78h]
  __int128 v46; // [rsp+80h] [rbp-68h] BYREF
  void (__fastcall *v47)(__int128 *, __int128 *, __int64, double); // [rsp+90h] [rbp-58h]
  __int64 v48; // [rsp+98h] [rbp-50h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-40h]

  v5 = a1[6].m128i_i8[8] == 0;
  v49 = __readfsqword(0x28u);
  ptr = nullptr;
  v35 = 0;
  if ( v5 )
    goto LABEL_2;
  sub_44EC70((__int64)a1, (__int64)&ptr, (__int64)a2, 0, nullptr);
  sub_3D0F60(a1, *(void **)(a3 + 32), &byte_22F0C30, 0);
  sub_3D0F60(a1, a2, &byte_22F0C30, 0);
  v31 = *(void **)(a3 + 24);
  if ( v31 != (void *)-1LL )
  {
    v32 = haystack;
    if ( (_QWORD)v35 )
      v32 = (const char *)ptr;
    sub_44BB70(a1, v31, v32, 1, nullptr);
  }
  if ( !a1[6].m128i_i8[8] )
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
  v9 = *(_QWORD *)(a3 + 8);
  v44 = -1;
  v43 = &off_2B289F8;
  v45 = _mm_unpacklo_epi64(v8, v7);
  if ( sub_3BD540((__int64)a1, v9) )
  {
    sub_44E140(a1->m128i_i64, (__int64)a2, a3, (__int64)&v43, 1);
  }
  else
  {
    v44 = (__int64)a2;
    LOBYTE(v41[0]) = 0;
    v40 = (void *)-1LL;
    sub_3E3030(a1, (__int64)&v40, (unsigned __int64)a2);
    while ( 1 )
    {
      v11 = v40;
      if ( v40 == (void *)-1LL )
        break;
      if ( LOBYTE(v41[0]) == 19 )
      {
        v10 = ea2node(v40);
        netnode_supdel(v10, 1, 65);
        if ( v45.m128i_i64[1] )
          sub_44BB70(*(_QWORD **)(v45.m128i_i64[0] + 1672), v11, (const char *)v45.m128i_i64[1], 1, nullptr);
      }
      sub_3E3220(a1, (__int64)&v40, (unsigned __int64)a2);
    }
  }
  if ( a1[6].m128i_i8[8] )
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
    v13 = *(void **)(a3 + 16);
    if ( (*(_DWORD *)a3 & 0x802) == 2 && (v12 & 8) != 0 )
    {
      v33 = (void *)(*(_QWORD *)(a1[1].m128i_i64[1] + 16) & ((unsigned __int64)v13 + 2 * *(unsigned __int16 *)(a3 + 4)));
      sub_3D0F60(a1, v13, &byte_22F0C30, 0);
      sub_3D0F60(a1, v33, &byte_22F0C30, 0);
    }
    else
    {
      sub_3D0F60(a1, v13, &byte_22F0C30, 0);
    }
    v12 = *(_DWORD *)a3;
LABEL_16:
    if ( (v12 & 0x400000) == 0 )
      sub_3D0F60(a1, *(void **)(a3 + 8), &byte_22F0C30, 0);
  }
LABEL_18:
  v14 = *(_QWORD *)(a3 + 24);
  if ( v14 == -1 || (sub_3BE900(a1, v14, 4) & 0x4000) == 0 )
    goto LABEL_20;
  *(_OWORD *)v38 = 0;
  s2 = nullptr;
  sub_35A790(&s2);
  v26 = *(_QWORD *)(a3 + 24);
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
    sub_4D7EC0(
      (int)a1,
      *(_QWORD *)(a3 + 24),
      (void *)&byte_22F0C30,
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
  if ( (unsigned int)sub_44D100(*(_QWORD *)(a3 + 8)) )
    sub_4D7EC0(
      (int)a1,
      *(_QWORD *)(a3 + 8),
      (void *)&byte_22F0C30,
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
      v17 = *(_DWORD *)(a3 + 40);
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
      v23 = *(_QWORD *)(a3 + 16);
      v24 = v23 + v21 * *(unsigned __int16 *)(a3 + 4);
      if ( v20 )
        goto LABEL_39;
      v29 = *(_QWORD *)(a3 + 8);
      v30 = v29 + v18;
      if ( v29 >= v30 )
        goto LABEL_39;
    }
    else
    {
      if ( v20 )
        goto LABEL_24;
      v29 = *(_QWORD *)(a3 + 8);
      v30 = v18 + v29;
      if ( v29 >= v30 )
        goto LABEL_24;
      v24 = 0;
      v23 = 0;
    }
    if ( (sub_3BE900(a1, v29, 4) & 0x200) == 0 )
    {
      sub_3C1900(a1, v29, v30, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10, nullptr);
      v47 = nullptr;
      v48 = 0;
      v46 = 0;
      sub_3D19E0((_DWORD)a1, v29);
      if ( v47 )
        v47(&v46, &v46, 3, 0.0);
    }
LABEL_39:
    if ( v23 < v24 )
    {
      v25 = v23;
      if ( (sub_3BE900(a1, v23, 4) & 0x600) == 0x200 )
        v25 = sub_3C2650(a1, v23);
      if ( (~((unsigned __int16)sub_3BE900(a1, v25, 4) >> 8) & 6) != 0
        && sub_3C1900(a1, v23, v24, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10, nullptr) == -1 )
      {
        v47 = nullptr;
        v48 = 0;
        v46 = 0;
        sub_3D19E0((_DWORD)a1, v23);
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
