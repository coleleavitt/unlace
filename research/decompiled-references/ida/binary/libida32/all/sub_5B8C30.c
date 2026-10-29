unsigned __int64 __fastcall sub_5B8C30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rsi
  int v7; // r8d
  int v8; // r9d
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 *v15; // rdi
  __m128i v16; // xmm0
  __int64 v18; // rax
  void *v19; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v20; // [rsp+8h] [rbp-F0h]
  void *ptr; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+28h] [rbp-D0h]
  __int128 v23; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+50h] [rbp-A8h]
  _BYTE v25[88]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1424);
  v5 = *(_QWORD **)(a2 + 1480);
  v26 = __readfsqword(0x28u);
  sub_419620((__int64)v25, v5);
  v19 = nullptr;
  v20 = 0;
  sub_79BD30(v4 + 8, a2, &v19);
  sub_419660((__int64)v25, *(_DWORD *)(v4 + 8), nullptr, 1, v7, v8);
  sub_357520((__int64 *)&v19);
  v22 = 0;
  ptr = nullptr;
  sub_79BD30(v4 + 12, a2, &ptr);
  sub_419660((__int64)v25, *(_DWORD *)(v4 + 12), nullptr, 1, v9, v10);
  sub_357520((__int64 *)&ptr);
  v11 = a3[1];
  v12 = *a3;
  if ( a3[2] < (unsigned __int64)(v11 + 1) )
  {
    v18 = qvector_reserve(a3, v12, v11 + 1, 24);
    *a3 = v18;
    v11 = a3[1];
    v12 = v18;
  }
  v13 = v12 + 24 * v11;
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  ++a3[1];
  sub_3573A0((char **)v13);
  v24 = 0u;
  v23 = 0;
  v14 = (_QWORD *)operator new(0x18u);
  v14[2] = a3;
  v15 = *(__int64 **)(a2 + 1480);
  v16 = _mm_loadl_epi64((const __m128i *)&off_2B05C48);
  *v14 = a2;
  v14[1] = v25;
  *(_QWORD *)&v23 = v14;
  v24 = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)sub_5B6380);
  sub_5AF890(v15, (__int64)&v23);
  if ( v24.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v24.m128i_i64[0])(&v23, &v23, 3);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return v26 - __readfsqword(0x28u);
}

