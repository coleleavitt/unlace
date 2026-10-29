unsigned __int64 __fastcall sub_5D6D80(unsigned __int64 a1, double a2, double a3)
{
  _QWORD *v4; // rbx
  unsigned int *v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  const char *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  __m128i v12; // rax
  __int64 v13; // rax
  unsigned __int128 v14; // rax
  char v15; // al
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-10B8h]
  __int64 v27; // [rsp+8h] [rbp-10B0h]
  int v28[2]; // [rsp+10h] [rbp-10A8h]
  const char *v29; // [rsp+18h] [rbp-10A0h]
  __m128i i; // [rsp+20h] [rbp-1098h] BYREF
  void *v31; // [rsp+30h] [rbp-1088h] BYREF
  __int128 v32; // [rsp+38h] [rbp-1080h]
  int v33; // [rsp+48h] [rbp-1070h]
  __m128i ptr[2]; // [rsp+50h] [rbp-1068h] BYREF
  char s[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v36; // [rsp+1078h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  get_root_filename(s);
  sub_5075C0(*(_QWORD *)(a1 + 1672) + 1704LL, (__int64)s, (__int64)"$ funcs", 144);
  *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 1760LL) = sub_5C5760;
  *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 1768LL) = sub_5C4040;
  *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 1776LL) = sub_5C4D10;
  sub_508110(
    *(_QWORD **)(*(_QWORD *)(a1 + 1672) + 1752LL),
    *(_QWORD *)(a1 + 1672) + 1704LL,
    s,
    (__int64)"$ funcs",
    144,
    a2,
    a3);
  v4 = *(_QWORD **)(a1 + 1616);
  sub_7BF040(v4 + 1, *v4, "$ nullsubs", 0);
  sub_7BF040(v4 + 2, *v4, "$ funcords", 0);
  v5 = (unsigned int *)sub_433DB0(*(_QWORD *)(a1 + 1672), 1u);
  v6 = netnode_altval(v4[2], 0, 65);
  if ( !v6 )
    goto LABEL_31;
  v7 = v6;
  if ( v5 )
    sub_5D1690((__int64)v5, v6);
  v8 = a1;
  v9 = (const char *)(v4 + 2);
  v31 = nullptr;
  v32 = 0;
  if ( sub_7BEED0(v4 + 2, a1, &v31, 1, 0, 83) <= 0 )
    goto LABEL_29;
  v12.m128i_i64[0] = (__int64)v31;
  v10 = 0;
  v29 = (const char *)(v4 + 3);
  v11 = 0;
  v12.m128i_i64[1] = (__int64)v31 + v32;
  for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)((unsigned __int64)v31 + v32));
        ;
        v12 = i )
  {
    if ( v12.m128i_i64[0] >= (unsigned __int64)v12.m128i_i64[1] )
    {
      sub_84F5B0(
        "incorrect number of function entries\n",
        v26,
        v27,
        v28[0],
        (int)v29,
        i.m128i_i32[0],
        i.m128i_i32[2],
        (int)v31,
        v32,
        SDWORD2(v32),
        v33,
        ptr[0].m128i_i64[0]);
      goto LABEL_28;
    }
    v15 = is_cvt64(v9, v8, v12.m128i_i64[1]);
    v8 = i.m128i_u64[1];
    if ( v15 )
    {
      v16 = (unsigned int)unpack_dd(&i);
      if ( (unsigned int)v16 == 0xFFFFFFFFLL )
      {
        v16 = -1;
        goto LABEL_22;
      }
    }
    else
    {
      v16 = unpack_dq(&i);
    }
    if ( !v16 && v11 )
    {
      v9 = "two functions with the same address\n";
      sub_84F5B0(
        "two functions with the same address\n",
        v26,
        v27,
        v28[0],
        (int)v29,
        i.m128i_i32[0],
        i.m128i_i32[2],
        (int)v31,
        v32,
        SDWORD2(v32),
        v33,
        ptr[0].m128i_i64[0]);
      goto LABEL_15;
    }
LABEL_22:
    v22 = v16 + v10;
    if ( __CFADD__(v16, v10) )
      break;
    ptr[0].m128i_i64[0] = v16 + v10;
    v10 += v16;
    ptr[0].m128i_i32[2] = 0;
    v23 = v4[4];
    v8 = v4[3];
    v17 = v4[5];
    v9 = (const char *)(v23 + 1);
    if ( (unsigned __int64)ptr < v8 || (unsigned __int64)ptr >= v8 + 16 * v17 )
    {
      if ( v17 < (unsigned __int64)v9 )
      {
        v9 = v29;
        v27 = v22;
        v20 = qvector_reserve(v29, v8, v23 + 1, 16);
        v4[3] = v20;
        v8 = v20;
        v22 = v27;
        v23 = v4[4];
      }
      *(__m128i *)(v8 + 16 * v23) = _mm_load_si128(ptr);
    }
    else
    {
      if ( v17 < (unsigned __int64)v9 )
      {
        v9 = v29;
        v27 = v22;
        v21 = qvector_reserve(v29, v8, v23 + 1, 16);
        v4[3] = v21;
        v8 = v21;
        v22 = v27;
        v23 = v4[4];
      }
      v13 = v8 + 16 * v23;
      *(_QWORD *)v13 = v22;
      *(_DWORD *)(v13 + 8) = 0;
    }
    ++v4[4];
    if ( v5 )
    {
      *(_QWORD *)v28 = v22;
      v27 = ea2node(v22);
      memset(ptr, 0, 24);
      get_ea_name(ptr, *(_QWORD *)v28, 0, 0);
      *((_QWORD *)&v14 + 1) = ptr[0].m128i_i64[1];
      *(_QWORD *)&v14 = haystack;
      if ( ptr[0].m128i_i64[1] )
        v14 = *(_OWORD *)ptr + __PAIR128__(-1, 0);
      v8 = *((_QWORD *)&v14 + 1);
      sub_5D4EA0(v5, *((unsigned __int64 *)&v14 + 1), (char *)v14, v27);
      v9 = (const char *)ptr[0].m128i_i64[0];
      if ( ptr[0].m128i_i64[0] )
      {
        ptr[0].m128i_i64[1] = 0;
        qfree((void *)ptr[0].m128i_i64[0]);
      }
    }
LABEL_15:
    if ( ++v11 == v7 )
      goto LABEL_28;
  }
  sub_84F5B0(
    "wrong order of function entries\n",
    v26,
    v27,
    v28[0],
    (int)v29,
    i.m128i_i32[0],
    i.m128i_i32[2],
    (int)v31,
    v32,
    SDWORD2(v32),
    v33,
    ptr[0].m128i_i64[0]);
LABEL_28:
  v18 = v4[4];
  if ( v18 < v4[5] )
  {
    v24 = v4[3];
    if ( v18 )
    {
      if ( v24 )
      {
        v25 = qrealloc(v24);
        if ( v25 )
        {
          v4[3] = v25;
          v4[5] = v18;
        }
      }
    }
  }
LABEL_29:
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
LABEL_31:
  register_undo_handler(*((unsigned int *)v4 + 12), sub_5C6AE0, 0, 1);
  return v36 - __readfsqword(0x28u);
}
