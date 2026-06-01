__int64 __fastcall sub_61C470(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r12d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28; // [rsp+20h] [rbp-A8h]
  __m128i v29; // [rsp+30h] [rbp-98h] BYREF
  __m128i v30; // [rsp+40h] [rbp-88h] BYREF
  __m128i v31; // [rsp+50h] [rbp-78h] BYREF
  __m128i v32; // [rsp+60h] [rbp-68h] BYREF
  __m128i v33; // [rsp+70h] [rbp-58h] BYREF
  __m128i v34; // [rsp+80h] [rbp-48h] BYREF
  __m128i v35; // [rsp+90h] [rbp-38h] BYREF
  __m128i v36[2]; // [rsp+A0h] [rbp-28h] BYREF

  switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
  {
    case 0:
    case 4:
    case 9:
      result = 0;
      break;
    case 1:
      result = 0;
      if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        result = sub_61B330(
                   a1,
                   *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL),
                   (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) + 8);
      break;
    case 2:
      v4 = *(_QWORD *)(a2 + 24);
      result = 0;
      if ( v4 > 3 )
      {
        v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
        sub_639270(&v29, v5, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
        result = sub_619180(
                   (__int64)a1,
                   v5,
                   v6,
                   v7,
                   v8,
                   v9,
                   (__int128)_mm_load_si128(&v29),
                   (__int128)_mm_load_si128(&v30));
      }
      break;
    case 3:
      v10 = *(_QWORD *)(a2 + 24);
      result = 0;
      if ( v10 > 3 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        sub_639270(&v33, v11, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
        result = sub_619180(
                   (__int64)a1,
                   v11,
                   v12,
                   v13,
                   v14,
                   v15,
                   (__int128)_mm_load_si128(&v33),
                   (__int128)_mm_load_si128(&v34));
      }
      break;
    case 5:
      v16 = *(_QWORD *)(a2 + 24);
      result = 0;
      if ( v16 > 3 )
      {
        v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        sub_639270(&v31, v17, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
        result = sub_619180(
                   (__int64)a1,
                   v17,
                   v18,
                   v19,
                   v20,
                   v21,
                   (__int128)_mm_load_si128(&v31),
                   (__int128)_mm_load_si128(&v32));
      }
      break;
    case 6:
    case 7:
      v28 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL));
      result = sub_61B740(a1, v28.m128i_u64[0], v28.m128i_u64[1]);
      if ( !(_BYTE)result )
      {
        v3 = 0;
        if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) - 6 <= 1 )
          v3 = *(_DWORD *)((*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) + 16);
        sub_B03900(&v35, *(_QWORD *)(a2 + 8));
        result = sub_619380(a1, v35.m128i_i64[0], v3);
      }
      break;
    case 8:
      v22 = *(_QWORD *)(a2 + 24);
      result = 0;
      if ( v22 > 3 )
      {
        v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
        sub_639270(&v35, v23, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
        result = sub_619180(
                   (__int64)a1,
                   v23,
                   v24,
                   v25,
                   v26,
                   v27,
                   (__int128)_mm_load_si128(&v35),
                   (__int128)_mm_load_si128(v36));
      }
      break;
  }
  return result;
}

