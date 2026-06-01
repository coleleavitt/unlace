__int64 __fastcall sub_619380(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v31; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v32; // [rsp+40h] [rbp-98h] BYREF
  __m128i v33; // [rsp+50h] [rbp-88h] BYREF
  __m128i v34; // [rsp+60h] [rbp-78h] BYREF
  __m128i v35; // [rsp+70h] [rbp-68h] BYREF
  __m128i v36; // [rsp+80h] [rbp-58h] BYREF
  __m128i v37; // [rsp+90h] [rbp-48h] BYREF
  __m128i v38[3]; // [rsp+A0h] [rbp-38h] BYREF

  v30 = a2;
  switch ( (unsigned int)sub_B03960(&v30) )
  {
    case 0u:
    case 3u:
    case 7u:
      v4 = *a1;
      v5 = sub_B03A00(&v30, 0);
      sub_639D40(&v31, v5, a3, v4);
      result = sub_619180(
                 (__int64)a1,
                 v5,
                 v6,
                 v7,
                 v8,
                 v9,
                 (__int128)_mm_load_si128(&v31),
                 (__int128)_mm_load_si128(&v32));
      break;
    case 1u:
      v11 = v30;
      sub_63A1D0(&v33, v30, a3, *a1);
      result = sub_619180(
                 (__int64)a1,
                 v11,
                 v12,
                 v13,
                 v14,
                 v15,
                 (__int128)_mm_load_si128(&v33),
                 (__int128)_mm_load_si128(&v34));
      break;
    case 2u:
    case 4u:
      result = 0;
      break;
    case 5u:
      v23 = *a1;
      v24 = sub_B03E00(&v30);
      v25 = sub_B03230(v24);
      sub_639D40(&v35, v25, a3, v23);
      result = sub_619180(
                 (__int64)a1,
                 v25,
                 v26,
                 v27,
                 v28,
                 v29,
                 (__int128)_mm_load_si128(&v35),
                 (__int128)_mm_load_si128(&v36));
      break;
    case 6u:
      v16 = *a1;
      v17 = sub_B03E40(&v30);
      v18 = sub_B03200(v17);
      sub_639D40(&v37, v18, a3, v16);
      result = sub_619180(
                 (__int64)a1,
                 v18,
                 v19,
                 v20,
                 v21,
                 v22,
                 (__int128)_mm_load_si128(&v37),
                 (__int128)_mm_load_si128(v38));
      break;
  }
  return result;
}

