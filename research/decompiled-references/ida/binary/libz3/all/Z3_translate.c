__int64 __fastcall Z3_translate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  _OWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __m128i v14; // [rsp+0h] [rbp-98h] BYREF
  __int128 v15; // [rsp+10h] [rbp-88h]
  __int64 v16; // [rsp+20h] [rbp-78h]
  void *ptr; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  int v19; // [rsp+38h] [rbp-60h]
  __int128 v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+50h] [rbp-48h]

  v4 = a2;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29B380();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
LABEL_17:
      v4 = 0;
LABEL_18:
      byte_1C7EBA0 = 1;
      return v4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
    if ( !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  if ( a1 == a3 )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( v5 )
    {
      sub_2BB620(0);
      goto LABEL_17;
    }
    return 0;
  }
  v6 = *(_QWORD *)(a3 + 232);
  v7 = *(_QWORD *)(a1 + 232);
  v16 = 0;
  v14 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v6);
  v15 = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  ptr = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v18 = 8;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  if ( v6 != v7 )
  {
    sub_15DA640(
      v14.m128i_i32[2],
      v14.m128i_i32[0],
      v9,
      v10,
      v11,
      v12,
      v14.m128i_i32[0],
      v14.m128i_i32[2],
      v15,
      *((__int64 *)&v15 + 1),
      v16,
      (__int64)ptr);
    sub_15D2280(v14.m128i_i64[1], v14.m128i_i64[0]);
  }
  if ( v14.m128i_i64[1] != v14.m128i_i64[0] )
    v4 = sub_15CFF50(&v14, a2);
  sub_251FD0(a3, v4);
  if ( v5 )
  {
    sub_2BB620(v4);
    sub_15CE760(&v14);
    goto LABEL_18;
  }
  sub_15CE760(&v14);
  return v4;
}

