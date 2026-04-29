__int64 __fastcall sub_13D090(_QWORD *a1, __int64 *a2, __int64 a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  __int64 v8; // r9
  char *v9; // rsi
  __int64 v10; // rbp
  __int128 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // rax
  __int64 v17; // rdi
  __int64 result; // rax
  char *v19; // rax
  __int64 v20; // rax
  const void *v21; // rbp
  size_t v22; // rax
  size_t v23; // rbx
  __int128 *v24; // rax
  __int16 flags; // ax
  __int64 v26; // rbx
  void *v27; // rdi
  size_t v28; // r12
  __int64 v29; // rax
  unsigned int v30; // [rsp+Ch] [rbp-BCh]
  __int64 *v31; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+18h] [rbp-B0h]
  __int64 v33; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+28h] [rbp-A0h]
  __int64 v35; // [rsp+38h] [rbp-90h]
  int v36; // [rsp+40h] [rbp-88h]
  __m128i v37; // [rsp+50h] [rbp-78h] BYREF
  __int64 v38; // [rsp+60h] [rbp-68h] BYREF
  int v39; // [rsp+68h] [rbp-60h]
  __int128 v40; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v31 = a2;
  v30 = a4;
  v32 = __PAIR64__(a6, a5);
  v41 = __readfsqword(0x28u);
  if ( (!(unsigned __int8)sub_33F6C0(&v37) || (unsigned int)(v37.m128i_i32[0] - 1) > 4)
    && (!(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                            100,
                            "LicenseManagerAutoSwitchDecompiler",
                            0,
                            0,
                            &callui,
                            v8)
     || !(unsigned __int8)sub_33F6C0(&v37)
     || (unsigned int)(v37.m128i_i32[0] - 1) > 4) )
  {
    v19 = *(char **)a3;
    if ( !*(_QWORD *)a3 )
      v19 = *(char **)(a3 + 8);
    a1[51] = *(_QWORD *)v19;
    v20 = a1[14];
    v21 = *(const void **)(v20 + 24);
    if ( v21 && (v22 = strlen(*(const char **)(v20 + 24)), (v23 = v22) != 0) )
    {
      v27 = (void *)a1[53];
      v28 = v22 + 1;
      if ( a1[55] < v22 + 1 )
      {
        v29 = qvector_reserve(a1 + 53, a1[53], v28, 1);
        a1[53] = v29;
        v27 = (void *)v29;
      }
      a1[54] = v28;
      memmove(v27, v21, v23);
      *(_BYTE *)(a1[53] + v23) = 0;
    }
    else
    {
      a1[54] = 0;
    }
    return 4294967273LL;
  }
  if ( !(unsigned __int8)sub_32A0D0(a1, 0) )
    return 4294967265LL;
  if ( !(unsigned __int8)sub_32A5D0(a1) )
    return 4294967280LL;
  v9 = *(char **)a3;
  v33 = 0;
  v35 = 0;
  v10 = a1[3];
  v36 = -1;
  v38 = 0;
  v39 = -1;
  v34 = 0;
  v37 = 0;
  v40 = 0;
  if ( !v9 )
  {
    v11 = *(__int128 **)(a3 + 8);
    v24 = &v11[*(_QWORD *)(a3 + 16)];
    v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v24);
    if ( v11 == v24 )
    {
LABEL_28:
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      return 4294967266LL;
    }
    goto LABEL_8;
  }
  if ( (unsigned __int8)func_tail_iterator_set(&v38, v9, -1) )
  {
    v11 = (__int128 *)v37.m128i_i64[0];
LABEL_8:
    if ( v11 )
      goto LABEL_13;
    v12 = v38;
    v11 = (__int128 *)v38;
    if ( !v38 )
    {
      v11 = &v40;
      goto LABEL_13;
    }
LABEL_10:
    if ( v39 >= 0 && v39 < *(_DWORD *)(v12 + 128) )
      v11 = (__int128 *)(*(_QWORD *)(v12 + 136) + 16LL * v39);
LABEL_13:
    while ( *(_QWORD *)v11 < *((_QWORD *)v11 + 1)
         && !(unsigned __int8)rangeset_t_has_common(&v33, v11, 0)
         && (unsigned __int8)rangeset_t_add(&v33, v11)
         && (get_flags_ex(*(_QWORD *)v11, 4) & 0x600) != 0x200 )
    {
      v13 = *((_QWORD *)v11 + 1);
      v14 = 0x100000000LL;
      if ( *(_DWORD *)(v10 + 24) == 8 )
        v14 = -1;
      if ( v13 != v14 && (get_flags_ex(v13, 4) & 0x600) == 0x200 )
        break;
      v15 = v37.m128i_i64[0];
      if ( !v37.m128i_i64[0] )
      {
        v12 = v38;
        if ( v38 && v39 + 1 < *(_DWORD *)(v38 + 128) )
        {
          ++v39;
          v11 = (__int128 *)v38;
          goto LABEL_10;
        }
        goto LABEL_23;
      }
      v11 = (__int128 *)(v37.m128i_i64[0] + 16);
      v37.m128i_i64[0] += 16;
      if ( v15 + 16 == v37.m128i_i64[1] )
        goto LABEL_23;
    }
    goto LABEL_25;
  }
LABEL_23:
  v16 = *(char **)a3;
  if ( !*(_QWORD *)a3 )
  {
    if ( (_QWORD)v34 )
    {
      v16 = *(char **)(a3 + 8);
      goto LABEL_48;
    }
LABEL_25:
    v17 = v38;
    goto LABEL_26;
  }
  if ( v16[17] < 0 || !(_QWORD)v34 )
    goto LABEL_25;
LABEL_48:
  flags = get_flags_ex(*(_QWORD *)v16, 4);
  v17 = v38;
  if ( (~flags & 0x600) != 0 )
  {
LABEL_26:
    if ( v17 )
      lock_func_range(v17, 0);
    goto LABEL_28;
  }
  if ( v38 )
    lock_func_range(v38, 0);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  v26 = j__qalloc_or_throw(1512);
  sub_337060(v26, a1);
  if ( v31 )
    *v31 = v26;
  *(_DWORD *)(v26 + 316) = v32;
  *(_DWORD *)(v26 + 72) = HIDWORD(v32);
  result = 0;
  if ( (v30 & 0x100) == 0 )
    return sub_13CE50(v26, a3, v30);
  return result;
}
