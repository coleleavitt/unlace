unsigned __int64 __fastcall sub_1FAD30(
        __m128i *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double a7,
        __m128 a8,
        double a9,
        double a10)
{
  __int64 v12; // rbp
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 (__fastcall **v21)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int128 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+40h] [rbp-28h]
  unsigned __int64 v29; // [rsp+48h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  if ( (a1->m128i_i8[2] & 8) != 0 || a1[19].m128i_i32[2] > 7 )
    return v29 - __readfsqword(0x28u);
  v12 = a1[58].m128i_i64[1];
  v13 = *(_QWORD *)(v12 + 24);
  if ( v13 )
  {
    *(_QWORD *)(v12 + 32) = 0;
    qfree(v13);
    *(_QWORD *)(v12 + 24) = 0;
    *(_QWORD *)(v12 + 40) = 0;
  }
  *(_DWORD *)(v12 + 48) = -1;
  if ( (unsigned int)sub_1FAB30(a1, a7, a8, a9, a10, a2, a3, a4, a5, a6) )
  {
    if ( !under_debugger )
      sub_383060(0xC4B4u, a7);
    BUG();
  }
  if ( !a1[20].m128i_i8[0] )
  {
    sub_37E500((__int64)a1);
    sub_372D00((__int64)a1);
    a7 = 0.0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v21 = off_4DE3D8;
    v26 = 0;
    v28 = 0;
    v27 = 0;
    sub_31B5F0((__int64)a1, (__int64)&v21);
    sub_1F1600((__int64)a1);
    v21 = off_4DE3D8;
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
  }
  sub_FF080(a1);
  a1->m128i_i32[0] |= 0x80000u;
  sub_1F3950((__int64)a1);
  sub_13C740((__int64)a1);
  sub_213420((__int64)a1);
  sub_213650((__int64)a1);
  sub_213790((__int64)a1);
  sub_219BD0((__int64)a1, a7, *(double *)a8.m128_u64);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v21 = &off_4DEB90;
  sub_11F9E0((__int64)a1, (__int64 *)&v21);
  sub_21A2C0((__int64)a1);
  sub_2139A0(a1);
  LOBYTE(v26) = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v21 = &off_4DEC58;
  sub_11FBB0((__int64)a1, (__int64)&v21);
  sub_1F1240((__int64)a1);
  sub_21B2A0((__int64)a1);
  v14 = a1[4].m128i_u32[2];
  if ( v14 <= 0x10 )
    v14 = getinf();
  if ( v14 != 176 && v14 != 256 )
  {
    v15 = a1[27].m128i_i64[0];
    v16 = v15 + 104 * a1[27].m128i_i64[1];
    if ( v16 != v15 )
    {
      while ( (*(_BYTE *)(v15 + 25) & 1) == 0 || (get_tinfo_property() & 0xF) != 0xB )
      {
        v15 += 104;
        if ( v16 == v15 )
          goto LABEL_20;
      }
      sub_3311F0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x15u);
    }
  }
LABEL_20:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[58].m128i_i64[1] + 64LL))(a1[58].m128i_i64[1]);
  sub_330F20((__int64)a1, 8, v17, v18, v19, v20);
  sub_66FA0((__int64)a1, 0, (__int64)"after alloc_lvar");
  return sub_321ED0((__int64)a1, 1, a7, a8);
}
