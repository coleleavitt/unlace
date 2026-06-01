__int64 __fastcall sub_2130D40(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rsi
  int v10; // r13d
  char v11; // [rsp+10h] [rbp-98h]
  __int64 v12[2]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v13; // [rsp+40h] [rbp-68h] BYREF
  char v14; // [rsp+50h] [rbp-58h]
  __m128i v15; // [rsp+60h] [rbp-48h] BYREF
  __int64 v16; // [rsp+70h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(unsigned __int8 *)(v1 + 1777);
  if ( !(_BYTE)v2 || *(_DWORD *)(v1 + 1780) )
    return *(unsigned __int8 *)(v1 + 1777);
  v4 = *(_QWORD *)(v1 + 1728);
  v13.m128i_i32[0] = 0;
  if ( v4 )
  {
    while ( *(_QWORD *)(v4 + 16) )
      v4 = *(_QWORD *)(v4 + 16);
    if ( v1 + 1720 != v4 && !*(_DWORD *)(v4 + 32) )
      goto LABEL_11;
  }
  else
  {
    v4 = v1 + 1720;
  }
  v15.m128i_i64[0] = (__int64)&v13;
  v4 = sub_2130A30((_QWORD *)(v1 + 1712), v4, &v15);
  v1 = *(_QWORD *)(a1 + 16);
LABEL_11:
  v5 = *(_QWORD *)(v1 + 1520);
  v6 = *(_QWORD *)(v1 + 1512);
  v7 = *(_QWORD *)(v4 + 472);
  v8 = *(_QWORD *)(v4 + 480);
  v13 = _mm_loadu_si128((const __m128i *)(v4 + 508));
  v9 = *(_QWORD *)(a1 + 24);
  v14 = *(_BYTE *)(v4 + 524);
  v15 = _mm_loadu_si128((const __m128i *)(v4 + 528));
  v16 = *(_QWORD *)(v4 + 544);
  v11 = v14;
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, char, __int64, __int64, __int64))(*(_QWORD *)v9 + 656LL))(
    v12,
    v9,
    0,
    v6,
    v5,
    0,
    v7,
    v8,
    v13.m128i_i64[0],
    v13.m128i_i64[1],
    v11,
    v15.m128i_i64[0],
    v15.m128i_i64[1],
    v16);
  v10 = v12[0];
  sub_A0AE90(v12);
  *(_DWORD *)(v1 + 1780) = v10;
  return v2;
}
