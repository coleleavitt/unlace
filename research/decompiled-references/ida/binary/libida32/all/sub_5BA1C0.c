__int64 __fastcall sub_5BA1C0(__m128i *a1, unsigned int *a2, double a3, double a4)
{
  unsigned int v4; // r12d
  unsigned int *v5; // r13
  unsigned int *v8; // rax
  unsigned int v9; // ebx
  __int16 v11; // r14
  unsigned int v12; // esi
  unsigned int *v13; // r15
  unsigned int *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned int *v17; // rdi
  unsigned int *v18; // rax
  unsigned int *v19; // r14
  unsigned int v20; // r15d
  unsigned int *v21; // r12
  unsigned int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned int v24; // ecx
  char *v25; // rax
  char i; // al
  unsigned int *v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  int *v30; // rax
  int v31; // r15d
  __int16 v32; // ax
  const char *v33; // rdx
  unsigned int *v34; // rax
  int v35; // [rsp+0h] [rbp-158h]
  __m128i *v36; // [rsp+8h] [rbp-150h]
  __int64 v37; // [rsp+10h] [rbp-148h] BYREF
  int v38; // [rsp+18h] [rbp-140h]
  void *ptr; // [rsp+20h] [rbp-138h] BYREF
  __int128 v40; // [rsp+28h] [rbp-130h]
  int v41; // [rsp+38h] [rbp-120h]
  int v42[2]; // [rsp+40h] [rbp-118h] BYREF
  int v43[2]; // [rsp+48h] [rbp-110h]
  int v44[2]; // [rsp+50h] [rbp-108h]
  int v45[6]; // [rsp+58h] [rbp-100h] BYREF
  __int64 v46; // [rsp+70h] [rbp-E8h]
  int v47[2]; // [rsp+118h] [rbp-40h] BYREF

  *(_QWORD *)v47 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *a2;
  v5 = &a1[101].m128i_u32[2];
  v8 = sub_4EE820((__int64)&a1[101].m128i_i64[1], *a2);
  if ( v8 )
  {
    if ( *((char *)v8 + 9) >= 0 || sub_4EE820((__int64)v5, v8[4]) )
      return 0;
  }
  v11 = sub_3B9AA0((__int64)a1, v4, 4);
  if ( (get_merge_state(a1, v4) & 2) != 0 )
    goto LABEL_8;
  v28 = v11 & 0x600;
  if ( (unsigned __int8)sub_614FB0(a1->m128i_i64[0], 9) )
  {
    if ( (unsigned __int8)is_spec_ea(v4) )
    {
      a2[1] = v4 + (unsigned __int8)sub_614FB0(a1->m128i_i64[0], 9);
      if ( v28 != 1536 )
      {
        sub_55E700(a1, v4, nullptr);
        v11 = sub_3B9AA0((__int64)a1, v4, 4);
        v28 = v11 & 0x600;
      }
    }
  }
  v29 = *((_QWORD *)a2 + 1);
  if ( (v29 & 4) == 0 )
  {
    if ( (get_aflags(*a2) & 0x400) == 0 )
      goto LABEL_39;
    v29 = *((_QWORD *)a2 + 1);
  }
  *((_QWORD *)a2 + 1) = v29 | 4;
  if ( (sub_614FB0(a1->m128i_i64[0], 10) & 0x4000000) != 0 )
    *((_QWORD *)a2 + 1) |= 0x40uLL;
LABEL_39:
  v12 = a2[1];
  if ( v12 == -1 )
  {
    if ( v28 == 1536 )
    {
      a2[1] = sub_3BCF60((__int64)a1, v4);
    }
    else
    {
      *(_QWORD *)v42 = -1;
      *(_QWORD *)v44 = 0;
      *(_QWORD *)v43 = 0xFFFFFFFFLL;
      v30 = v45;
      do
      {
        *(_WORD *)v30 = 0;
        v30 += 6;
        *((_WORD *)v30 - 11) = 0;
        *((_WORD *)v30 - 10) = 0;
        *(v30 - 1) = 0;
        *((_WORD *)v30 - 9) = 0;
        *((_QWORD *)v30 - 2) = 0;
        *(v30 - 2) = 0;
      }
      while ( v30 != v47 );
      v31 = sub_55E700(a1, v4, v42);
      if ( !v31 )
        return 0;
      v32 = sub_3B9AA0((__int64)a1, v4, 4);
      a2[1] = v4 + v31;
      v11 = v32;
    }
    if ( (unsigned int)sub_5AC9C0(a1, a2, nullptr) == -1 && (unsigned int)sub_5ADB00(a1, a2, 1) != 1 )
      return 0;
LABEL_8:
    v12 = a2[1];
    if ( v12 == -1 )
      goto LABEL_9;
    goto LABEL_43;
  }
  if ( v28 == 1536 )
  {
    if ( (unsigned int)sub_5AC9C0(a1, a2, nullptr) == -1 )
      sub_5ADB00(a1, a2, 4);
    goto LABEL_8;
  }
LABEL_43:
  if ( (sub_3B9AA0((__int64)a1, v12, 4) & 0x600) == 0x200 )
    a2[1] = sub_3BCF60((__int64)a1, a2[1]);
LABEL_9:
  v36 = a1 + 97;
  v13 = sub_4EE820((__int64)a1[97].m128i_i64, v4);
  v14 = sub_4EE820((__int64)a1[97].m128i_i64, a2[1] - 1);
  if ( !v13 )
    return 0;
  if ( v14 != v13 )
    return 0;
  if ( (~v11 & 0x600) != 0 )
    return 0;
  v9 = sub_4EE3F0((__int64)v5, a2, a3, a4);
  if ( !(_BYTE)v9 )
    return 0;
  sub_3CA5A0(a1->m128i_i64[0], v4, 0x10000000);
  sub_5ABB20(*(_QWORD *)(a1->m128i_i64[0] + 1424), v4, v15);
  v16 = v4;
  v17 = &a1[101].m128i_u32[2];
  v18 = sub_4EE820((__int64)v5, v4);
  v19 = v18;
  if ( v18 )
  {
    if ( *((char *)v18 + 9) < 0 )
    {
      v16 = v18[4];
      v17 = v5;
      v19 = sub_4EE820((__int64)v5, v16);
      if ( (get_merge_state(v5, v16) & 2) != 0 )
        goto LABEL_60;
    }
    else if ( (get_merge_state(v5, v4) & 2) != 0 )
    {
      goto LABEL_16;
    }
  }
  else if ( (get_merge_state(v5, v4) & 2) != 0 )
  {
    return 0;
  }
  lock_func_range(v19, 1);
  if ( !(unsigned int)sub_5B5800(a1->m128i_i64, (__int64)v19, nullptr) )
    sub_4C2750(
      (int)a1,
      v35,
      v36,
      v37,
      v38,
      (int)ptr,
      v40,
      SDWORD2(v40),
      v41,
      v42[0],
      v43[0],
      v44[0],
      v45[0],
      v45[2],
      v45[4],
      v46);
  sub_5AF5A0(a1->m128i_i64[0], v19, 0xFFFFFFFF, nullptr);
  v40 = 0;
  ptr = nullptr;
  if ( sub_3BE050((__int64)a1, (__int64)&ptr, v4, 1) > 0 )
  {
    v33 = haystack;
    if ( (_QWORD)v40 )
      v33 = (const char *)ptr;
    sub_4F0D50(v5, v19, v33, 1u);
    sub_3CB5F0(a1, v4, &byte_22CD811, 1u);
  }
  sub_4B9860(a1, v19);
  lock_func_range(v19, 1);
  sub_375980(0x3Bu, v19);
  lock_func_range(v19, 0);
  if ( ptr )
  {
    *(_QWORD *)&v40 = 0;
    qfree(ptr);
  }
  lock_func_range(v19, 0);
  v16 = v4;
  v17 = v5;
  v34 = sub_4EE820((__int64)v5, v4);
  v19 = v34;
  if ( !v34 )
    return 0;
  if ( *((char *)v34 + 9) < 0 )
  {
    v16 = v34[4];
    v17 = v5;
    v19 = sub_4EE820((__int64)v5, v16);
LABEL_60:
    if ( v19 )
      goto LABEL_16;
    return 0;
  }
LABEL_16:
  if ( (get_merge_state(v17, v16) & 2) == 0 )
  {
    lock_func_range(v19, 1);
    v20 = v19[1];
    auto_mark_range(v4, v20, 38);
    auto_mark_range(v4, v20, 40);
    ptr = nullptr;
    v40 = 0;
    if ( sub_5AE710((__int64)a1, (__int64)&ptr, v4) > 0 )
    {
      v21 = (unsigned int *)sub_41FEF0((__int64)a1, 1u);
      if ( v21 )
      {
        v22 = sub_3B90A0(a1, *v19);
        v23 = v40;
        v24 = v22;
        v25 = (char *)haystack;
        if ( (_QWORD)v40 )
        {
          v25 = (char *)ptr;
          v23 = v40 - 1;
        }
        sub_5B9D30(v21, v23, v25, v24);
      }
    }
    sub_396090(0x20u, v19);
    if ( v19[7] || (*((_BYTE *)v19 + 9) & 0x40) != 0 )
    {
      for ( i = xrefblk_t_first_to((char *)&v37 + 4, *v19, 1); i; i = xrefblk_t_next_to((char *)&v37 + 4) )
      {
        v27 = sub_4EE820((__int64)v5, HIDWORD(v37));
        if ( v27 )
        {
          if ( *((char *)v27 + 9) >= 0 || (v27 = sub_4EE820((__int64)v5, v27[4])) != nullptr )
            sub_5B5800(a1->m128i_i64, (__int64)v27, nullptr);
        }
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v40 = 0;
      qfree(ptr);
    }
    lock_func_range(v19, 0);
  }
  sub_4CA070(a1->m128i_i64[0], *v19);
  sub_514A50(1u, 1, *v19);
  sub_635350(a1, 0x4000000008000008LL, 0, 1);
  return v9;
}

