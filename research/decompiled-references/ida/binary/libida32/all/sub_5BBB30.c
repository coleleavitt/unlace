unsigned __int64 __fastcall sub_5BBB30(__int64 a1, double a2, double a3)
{
  _QWORD *v3; // rbx
  unsigned int *v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // r12
  unsigned int v8; // ebp
  unsigned __int128 i; // kr00_16
  unsigned int *v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rax
  int v13; // eax
  bool v14; // cf
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __m128i *v25; // [rsp+0h] [rbp-10B8h]
  __int64 v26; // [rsp+8h] [rbp-10B0h]
  int v27; // [rsp+10h] [rbp-10A8h]
  unsigned int v28; // [rsp+14h] [rbp-10A4h]
  _QWORD *v29; // [rsp+18h] [rbp-10A0h]
  __m128i v30; // [rsp+20h] [rbp-1098h] BYREF
  void *v31; // [rsp+30h] [rbp-1088h] BYREF
  __int128 v32; // [rsp+38h] [rbp-1080h]
  int v33; // [rsp+48h] [rbp-1070h]
  void *ptr; // [rsp+50h] [rbp-1068h] BYREF
  __int128 v35; // [rsp+58h] [rbp-1060h]
  char s[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v37; // [rsp+1078h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  get_root_filename(s);
  sub_4EFFD0(*(_QWORD *)(a1 + 1480) + 1624LL, (__int64)s, (__int64)"$ funcs", 120);
  *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 1672LL) = sub_5A9920;
  *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 1680LL) = sub_5A97C0;
  *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 1688LL) = sub_5AA780;
  sub_4F0B10(
    *(_QWORD **)(*(_QWORD *)(a1 + 1480) + 1664LL),
    (__m128i *)(*(_QWORD *)(a1 + 1480) + 1624LL),
    s,
    (__int64)"$ funcs",
    120,
    a2,
    a3);
  v3 = *(_QWORD **)(a1 + 1424);
  sub_79BC40(v3 + 1, *v3, "$ nullsubs", 0);
  sub_79BC40((char *)v3 + 12, *v3, "$ funcords", 0);
  v4 = (unsigned int *)sub_41FEF0(*(_QWORD *)(a1 + 1480), 1u);
  v5 = netnode_altval(*((unsigned int *)v3 + 3), 0, 65);
  if ( !v5 )
    goto LABEL_29;
  v6 = v5;
  if ( v4 )
    sub_5B6580((__int64)v4, v5);
  v31 = nullptr;
  v32 = 0;
  if ( sub_79BAE0((char *)v3 + 12, a1, &v31, 1, 0, 83) <= 0 )
    goto LABEL_27;
  v7 = 0;
  v26 = v6;
  v8 = 0;
  v25 = &v30;
  v29 = v3 + 2;
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)((unsigned __int64)v31 + v32));
  for ( i = __PAIR128__((unsigned __int64)v31 + v32, (unsigned __int64)v31); ; i = (unsigned __int128)v30 )
  {
    if ( (unsigned __int64)i >= *((_QWORD *)&i + 1) )
    {
      sub_82BC50(
        "incorrect number of function entries\n",
        (__int64)v25,
        v26,
        v27,
        (int)v29,
        v30.m128i_i32[0],
        v30.m128i_i32[2],
        (int)v31,
        v32,
        SDWORD2(v32),
        v33,
        (__int64)ptr);
      goto LABEL_26;
    }
    v13 = unpack_dd(v25);
    if ( !v13 && v7 )
    {
      sub_82BC50(
        "two functions with the same address\n",
        (__int64)v25,
        v26,
        v27,
        (int)v29,
        v30.m128i_i32[0],
        v30.m128i_i32[2],
        (int)v31,
        v32,
        SDWORD2(v32),
        v33,
        (__int64)ptr);
      goto LABEL_15;
    }
    v14 = __CFADD__(v13, v8);
    v8 += v13;
    if ( v14 )
      break;
    ptr = (void *)v8;
    v22 = v3[3];
    v21 = v3[2];
    v15 = v3[4];
    v16 = v22 + 1;
    if ( (unsigned __int64)&ptr < v21 || (unsigned __int64)&ptr >= v21 + 8 * v15 )
    {
      if ( v15 < v16 )
      {
        v19 = qvector_reserve(v29, v21, v22 + 1, 8);
        v3[2] = v19;
        v21 = v19;
        v22 = v3[3];
      }
      *(_QWORD *)(v21 + 8 * v22) = ptr;
    }
    else
    {
      if ( v15 < v16 )
      {
        v20 = qvector_reserve(v29, v21, v22 + 1, 8);
        v3[2] = v20;
        v21 = v20;
        v22 = v3[3];
      }
      v10 = (unsigned int *)(v21 + 8 * v22);
      *v10 = v8;
      v10[1] = 0;
    }
    ++v3[3];
    if ( v4 )
    {
      v28 = ea2node(v8);
      ptr = nullptr;
      v35 = 0;
      get_ea_name(&ptr, v8, 0, 0);
      v11 = v35;
      v12 = (char *)haystack;
      if ( (_QWORD)v35 )
      {
        v12 = (char *)ptr;
        v11 = v35 - 1;
      }
      sub_5B9D30(v4, v11, v12, v28);
      if ( ptr )
      {
        *(_QWORD *)&v35 = 0;
        qfree(ptr);
      }
    }
LABEL_15:
    if ( ++v7 == v26 )
      goto LABEL_26;
  }
  sub_82BC50(
    "wrong order of function entries\n",
    (__int64)v25,
    v26,
    v27,
    (int)v29,
    v30.m128i_i32[0],
    v30.m128i_i32[2],
    (int)v31,
    v32,
    SDWORD2(v32),
    v33,
    (__int64)ptr);
LABEL_26:
  v17 = v3[3];
  if ( v17 < v3[4] )
  {
    v23 = v3[2];
    if ( v17 )
    {
      if ( v23 )
      {
        v24 = qrealloc(v23);
        if ( v24 )
        {
          v3[2] = v24;
          v3[4] = v17;
        }
      }
    }
  }
LABEL_27:
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
LABEL_29:
  register_undo_handler(*((unsigned int *)v3 + 10), sub_5AC040, 0, 1);
  return v37 - __readfsqword(0x28u);
}

