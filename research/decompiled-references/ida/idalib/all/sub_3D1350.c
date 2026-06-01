__int64 __fastcall sub_3D1350(__m128i *a1, unsigned __int64 a2, char a3)
{
  void *v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  char v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdi
  _QWORD *v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // r15d
  __int64 v16; // rax
  bool v17; // al
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // r14
  unsigned __int64 head; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-138h]
  unsigned __int64 v23; // [rsp+8h] [rbp-130h]
  _QWORD *v24; // [rsp+10h] [rbp-128h]
  __int64 *v25; // [rsp+18h] [rbp-120h]
  __int64 v26; // [rsp+20h] [rbp-118h]
  __int128 *v27; // [rsp+28h] [rbp-110h]
  __int64 v28; // [rsp+30h] [rbp-108h]
  int v29; // [rsp+38h] [rbp-100h]
  __int64 v30; // [rsp+40h] [rbp-F8h] BYREF
  void *v31; // [rsp+48h] [rbp-F0h]
  __int64 v32; // [rsp+50h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-E0h]
  __int128 v34; // [rsp+68h] [rbp-D0h]
  __int64 v35; // [rsp+78h] [rbp-C0h]
  __int64 v36; // [rsp+80h] [rbp-B8h]
  __int64 v37; // [rsp+88h] [rbp-B0h]
  __int64 v38; // [rsp+90h] [rbp-A8h]
  __int64 v39; // [rsp+98h] [rbp-A0h]
  __int64 v40; // [rsp+A0h] [rbp-98h]
  __int64 v41; // [rsp+A8h] [rbp-90h]
  void *ptr; // [rsp+B0h] [rbp-88h]
  __int128 v43; // [rsp+B8h] [rbp-80h]
  __int128 v44; // [rsp+D0h] [rbp-68h] BYREF
  void (__fastcall *v45)(__int128 *, __int128 *, __int64); // [rsp+E0h] [rbp-58h]
  __int64 v46; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+F8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v6 = (void *)a2;
  if ( (sub_3BE900(a1, a2, 4) & 0x600) == 0x200 )
    v6 = (void *)sub_3C2650(a1, a2);
  v7 = sub_3BE900(a1, (unsigned __int64)v6, 4);
  if ( (v7 & 0x400) == 0 )
    return 0;
  v8 = v7 & 0x600;
  v23 = a1[64].m128i_u64[1];
  if ( v8 != 1536 )
  {
    sub_3792E0(0x1Cu, v6);
    v22 = sub_3C1F00(a1, (unsigned __int64)v6);
    if ( v8 == 1024 )
    {
      sub_3CA0B0(a1->m128i_i64, (unsigned __int64)v6, v7, 1);
      v18 = ea2node(v6);
      netnode_supdel(v18, 5, 83);
    }
    v9 = 0;
    goto LABEL_9;
  }
  v13 = (_QWORD *)sub_5CAA10(a1);
  v14 = (unsigned __int64)v6;
  v24 = v13;
  if ( v13 && (void *)*v13 == v6 )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v9 = 1;
      v22 = sub_3C1F00(a1, (unsigned __int64)v6);
      v17 = 1;
    }
    else
    {
      v15 = sub_3792E0(0x1Cu, v6);
      v16 = sub_3C1F00(a1, (unsigned __int64)v6);
      v14 = (unsigned __int64)v6;
      if ( !(unsigned __int8)sub_5D4180((int)a1, v16, v23, (int)v24, v25, v26, (int)v27, v28, v29, v30) )
        return 0;
      v24 = nullptr;
      v17 = v15 == 0;
      v9 = 0;
    }
  }
  else
  {
    v14 = (unsigned __int64)v6;
    v19 = sub_3792E0(0x1Cu, v6);
    v22 = sub_3C1F00(a1, (unsigned __int64)v6);
    v17 = v19 == 0;
    v9 = 0;
  }
  if ( (*(_BYTE *)(a1[1].m128i_i64[0] + 8) & 1) != 0 && v17 && (get_merge_state(a1, v14) & 2) == 0 )
  {
    v14 = v22;
    sub_51A980(a1, v22);
  }
  if ( (v7 & 0x80000000) != 0LL && (get_merge_state(a1, v14) & 2) == 0 )
  {
    if ( get_jumptable_info(&v30, v6) <= 0 )
    {
      v25 = &v32;
    }
    else
    {
      v32 = -1;
      si128.m128i_i8[0] = 0;
      v29 = (int)v31;
      v26 = v30;
      v25 = &v32;
      sub_4108F0(a1, &v32, v30);
      v27 = (__int128 *)v7;
      v28 = a2;
      while ( v32 != -1 )
      {
        if ( (void *)v32 != v6 )
          goto LABEL_48;
        sub_410A70(a1, &v32, v26);
      }
      v45 = nullptr;
      v27 = &v44;
      v46 = 0;
      v44 = 0;
      sub_3D19E0((_DWORD)a1, v26);
      if ( v45 )
        v45(&v44, &v44, 3);
LABEL_48:
      del_jumptable_info(v6);
    }
    v32 = (__int64)&loc_800000;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    v34 = -1;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0xFFFFFFFFLL;
    v39 = 0;
    v40 = 2;
    v41 = -1;
    ptr = nullptr;
    v43 = 0;
    if ( get_switch_info(&v32, v6) > 0 )
    {
      sub_44F630((_DWORD)a1);
      del_switch_info(v6, v6);
    }
    if ( ptr )
    {
      *(_QWORD *)&v43 = 0;
      qfree(ptr);
    }
  }
  sub_3E37A0(a1, v6, a3 & 1);
  if ( v24 && (get_merge_state(a1, v6) & 2) == 0 )
  {
    if ( (sub_631AD0(a1->m128i_i64[0], 10) & 0x10000) != 0
      && (a3 & 4) == 0
      && (v20 = v24[1], v20 == sub_3C1F00(a1, (unsigned __int64)v6)) )
    {
      head = prev_head(v6, *v24);
      sub_3C1F00(a1, head);
      sub_5CDC30((int)a1, v22, v23, (__int64)v24, (int)v25, v26, (int)v27, v28);
    }
    else
    {
      if ( v22 == -1 )
        v22 = sub_3C1F00(a1, (unsigned __int64)v6);
      sub_5BA580(a1, v24, v22);
      sub_5CCFA0(a1, v24);
    }
  }
  if ( a1[6].m128i_i8[8] && (v7 & 0x800) != 0 )
  {
    sub_3D0F60(a1, v6, &byte_22F0C30, 0);
    sub_3D0F60(a1, v6, &byte_22F0C30, 1u);
  }
  sub_60C640(v6);
LABEL_9:
  v10 = (unsigned __int16)v7 & 0xC000;
  if ( v10 == 49152 )
  {
    if ( (unsigned __int8)is_public_name(v6) )
      goto LABEL_11;
LABEL_22:
    sub_4D7EC0(
      (int)a1,
      (int)v6,
      (void *)&byte_22F0C30,
      v22,
      v23,
      (int)v24,
      (int)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      si128.m128i_i32[0],
      si128.m128i_i32[2],
      v34,
      SDWORD2(v34),
      v35,
      v36,
      v37,
      v38);
    goto LABEL_11;
  }
  if ( v10 == 0x8000 )
    goto LABEL_22;
LABEL_11:
  sub_3E34B0(a1, v6);
  sub_3D0D10(a1->m128i_i64, v6, 0xFFFFFFFF);
  sub_3D0E60((__int64)a1, v6, 162530048, 0);
  if ( !v9 )
    sub_3D0260((__int64)a1, (char *)v6, v23);
  if ( (void *)a2 != v6 )
    sub_3A61A0(a1, (unsigned __int64)v6, a2, 0xC8u);
  v11 = a1->m128i_i64[0];
  a1[99] = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  a1[100] = (__m128i)-1LL;
  sub_359AE0(v11, (unsigned __int64)v6, v22);
  return 1;
}
