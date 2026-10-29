__int64 __fastcall sub_5D5340(__m128i *a1, unsigned __int64 *a2, __m128 a3, double a4)
{
  void *v4; // r12
  __int64 *v5; // r13
  unsigned __int64 *v8; // rax
  unsigned int v9; // ebx
  __int16 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // r15
  unsigned __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 *v18; // rdi
  unsigned __int64 *v19; // rax
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // r15
  unsigned int *v22; // r12
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  char *v26; // rax
  char i; // al
  unsigned __int64 *v28; // rax
  __int64 v29; // r15
  unsigned __int64 v30; // rax
  int *v31; // rax
  int v32; // r15d
  const char *v33; // rdx
  unsigned __int64 *v34; // rax
  int v35; // [rsp+0h] [rbp-1F8h]
  unsigned __int64 *v36; // [rsp+8h] [rbp-1F0h]
  void *v37; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 v38; // [rsp+18h] [rbp-1E0h]
  int v39; // [rsp+28h] [rbp-1D0h]
  void *ptr; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v41; // [rsp+38h] [rbp-1C0h]
  int v42; // [rsp+48h] [rbp-1B0h]
  int v43[4]; // [rsp+50h] [rbp-1A8h] BYREF
  int v44[2]; // [rsp+60h] [rbp-198h]
  int v45[2]; // [rsp+68h] [rbp-190h]
  int v46[2]; // [rsp+70h] [rbp-188h]
  char v47; // [rsp+78h] [rbp-180h] BYREF
  int v48[2]; // [rsp+1B8h] [rbp-40h] BYREF

  *(_QWORD *)v48 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = (void *)*a2;
  v5 = &a1[106].m128i_i64[1];
  v8 = sub_505D70((__int64)&a1[106].m128i_i64[1], *a2);
  if ( v8 )
  {
    if ( *((char *)v8 + 17) >= 0 || sub_505D70((__int64)v5, v8[3]) )
      return 0;
  }
  v11 = sub_3BE900(a1, (unsigned __int64)v4, 4);
  if ( (get_merge_state(a1, v4) & 2) != 0 )
    goto LABEL_8;
  v29 = v11 & 0x600;
  if ( (unsigned __int8)sub_631AD0(a1->m128i_i64[0], 9) )
  {
    if ( (unsigned __int8)is_spec_ea(v4) )
    {
      a2[1] = (unsigned __int64)v4 + (unsigned __int8)sub_631AD0(a1->m128i_i64[0], 9);
      if ( v29 != 1536 )
      {
        sub_577F80(a1, v4, nullptr);
        v11 = sub_3BE900(a1, (unsigned __int64)v4, 4);
        v29 = v11 & 0x600;
      }
    }
  }
  v30 = a2[2];
  if ( (v30 & 4) == 0 )
  {
    if ( (get_aflags(*a2) & 0x400) == 0 )
      goto LABEL_41;
    v30 = a2[2];
  }
  a2[2] = v30 | 4;
  if ( (sub_631AD0(a1->m128i_i64[0], 10) & 0x4000000) != 0 )
    a2[2] |= 0x40u;
LABEL_41:
  v12 = a2[1];
  if ( v12 == -1 )
  {
    if ( v29 == 1536 )
    {
      a2[1] = sub_3C1F00(a1, (unsigned __int64)v4);
    }
    else
    {
      *(_QWORD *)v44 = -1;
      v31 = (int *)&v47;
      *(_QWORD *)v45 = 0;
      *(_QWORD *)v46 = 0;
      *(_OWORD *)v43 = -1;
      a3 = 0;
      do
      {
        *(_WORD *)v31 = 0;
        v31 += 10;
        *((_WORD *)v31 - 19) = 0;
        *((_WORD *)v31 - 18) = 0;
        *(v31 - 2) = 0;
        *((_WORD *)v31 - 17) = 0;
        *((_OWORD *)v31 - 2) = 0;
        *((_QWORD *)v31 - 2) = 0;
      }
      while ( v31 != v48 );
      v32 = sub_577F80(a1, v4, (__int128 *)v43);
      if ( !v32 )
        return 0;
      v11 = sub_3BE900(a1, (unsigned __int64)v4, 4);
      a2[1] = (unsigned __int64)v4 + v32;
    }
    if ( sub_5C74D0(a1, (__int64)a2, nullptr) == -1 && (unsigned int)sub_5C8680(a1, a2, 1, a3) != 1 )
      return 0;
LABEL_8:
    v12 = a2[1];
    v13 = -1;
    if ( *(_DWORD *)(a1[1].m128i_i64[1] + 24) == 8 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v29 == 1536 )
  {
    if ( sub_5C74D0(a1, (__int64)a2, nullptr) == -1 )
      sub_5C8680(a1, a2, 4, a3);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a1[1].m128i_i64[1] + 24) != 8 )
  {
LABEL_9:
    v13 = 0x100000000LL;
LABEL_10:
    if ( v12 >= v13 )
      goto LABEL_11;
  }
  if ( (sub_3BE900(a1, v12, 4) & 0x600) == 0x200 )
    a2[1] = sub_3C1F00(a1, a2[1]);
LABEL_11:
  v36 = &a1[101].m128i_u64[1];
  v14 = sub_505D70((__int64)&a1[101].m128i_i64[1], (unsigned __int64)v4);
  v15 = sub_505D70((__int64)&a1[101].m128i_i64[1], a2[1] - 1);
  if ( !v14 )
    return 0;
  if ( v15 != v14 )
    return 0;
  if ( (~v11 & 0x600) != 0 )
    return 0;
  v9 = sub_505940((__int64)v5, a2, *(double *)a3.m128_u64, a4);
  if ( !(_BYTE)v9 )
    return 0;
  sub_3CFE80(a1->m128i_i64[0], v4, 0x10000000);
  sub_5C65A0(*(_QWORD *)(a1->m128i_i64[0] + 1616), (unsigned __int64)v4, v16);
  v17 = (unsigned __int64)v4;
  v18 = &a1[106].m128i_i64[1];
  v19 = sub_505D70((__int64)v5, (unsigned __int64)v4);
  v20 = v19;
  if ( v19 )
  {
    if ( *((char *)v19 + 17) < 0 )
    {
      v17 = v19[3];
      v18 = v5;
      v20 = sub_505D70((__int64)v5, v17);
      if ( (get_merge_state(v5, v17) & 2) != 0 )
        goto LABEL_63;
    }
    else if ( (get_merge_state(v5, v4) & 2) != 0 )
    {
      goto LABEL_18;
    }
  }
  else if ( (get_merge_state(v5, v4) & 2) != 0 )
  {
    return 0;
  }
  lock_func_range(v20, 1);
  if ( !(unsigned int)sub_5D08C0(a1->m128i_i64, v20, nullptr) )
    sub_4D9890(
      (int)a1,
      v35,
      v36,
      (__int64)v37,
      v38,
      SDWORD2(v38),
      v39,
      (int)ptr,
      v41,
      SDWORD2(v41),
      v42,
      v43[0],
      v43[2],
      v44[0],
      v45[0],
      *(__int64 *)v46);
  sub_5CA280(a1->m128i_i64[0], (__int64 *)v20, -1, nullptr);
  v41 = 0;
  ptr = nullptr;
  if ( sub_3C3140(a1, (__int64)&ptr, (unsigned __int64)v4, 1) > 0 )
  {
    v33 = haystack;
    if ( (_QWORD)v41 )
      v33 = (const char *)ptr;
    sub_5083D0(v5, v20, v33, 1u);
    sub_3D0F60(a1, v4, &byte_22F0C30, 1u);
  }
  sub_4D0690(a1, v20);
  lock_func_range(v20, 1);
  sub_3792E0(0x3Bu, v20);
  lock_func_range(v20, 0);
  if ( ptr )
  {
    *(_QWORD *)&v41 = 0;
    qfree(ptr);
  }
  lock_func_range(v20, 0);
  v17 = (unsigned __int64)v4;
  v18 = v5;
  v34 = sub_505D70((__int64)v5, (unsigned __int64)v4);
  v20 = v34;
  if ( !v34 )
    return 0;
  if ( *((char *)v34 + 17) < 0 )
  {
    v17 = v34[3];
    v18 = v5;
    v20 = sub_505D70((__int64)v5, v17);
LABEL_63:
    if ( v20 )
      goto LABEL_18;
    return 0;
  }
LABEL_18:
  if ( (get_merge_state(v18, v17) & 2) == 0 )
  {
    lock_func_range(v20, 1);
    v21 = v20[1];
    auto_mark_range(v4, v21, 38);
    auto_mark_range(v4, v21, 40);
    v37 = nullptr;
    v38 = 0;
    if ( sub_5C9340((__int64)a1, (__int64)&v37, (unsigned __int64)v4) > 0 )
    {
      v22 = (unsigned int *)sub_433DB0((__int64)a1, 1u);
      if ( v22 )
      {
        v23 = sub_3BDD60(a1, *v20);
        v24 = v38;
        v25 = v23;
        v26 = (char *)haystack;
        if ( (_QWORD)v38 )
        {
          v26 = (char *)v37;
          v24 = v38 - 1;
        }
        sub_5D4EA0(v22, v24, v26, v25);
      }
    }
    sub_39ADA0(0x20u, v20);
    if ( v20[6] || (*((_BYTE *)v20 + 17) & 0x40) != 0 )
    {
      for ( i = xrefblk_t_first_to(&ptr, *v20, 1); i; i = xrefblk_t_next_to(&ptr) )
      {
        v28 = sub_505D70((__int64)v5, (unsigned __int64)ptr);
        if ( v28 )
        {
          if ( *((char *)v28 + 17) >= 0 || (v28 = sub_505D70((__int64)v5, v28[3])) != nullptr )
            sub_5D08C0(a1->m128i_i64, v28, nullptr);
        }
      }
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    lock_func_range(v20, 0);
  }
  sub_4E15D0(a1->m128i_i64[0], *v20);
  sub_52CCE0(1u, 1, *v20);
  sub_652960(a1, 0x4000000008000008LL, 0, 1);
  return v9;
}
