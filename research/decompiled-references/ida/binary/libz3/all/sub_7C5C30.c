__int64 __fastcall sub_7C5C30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int128 a7, __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __m128i v11; // xmm0
  int v12; // edx
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]
  __m128i v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 80) )
    return sub_11AC5A0(*(_QWORD *)(a1 + 80), a2);
  v9 = *(_QWORD *)(a1 - 56);
  v13.m128i_i64[1] = *((_QWORD *)&a7 + 1);
  v10 = *(_QWORD *)(v9 + 3288);
  v13.m128i_i32[0] = a7;
  LODWORD(v14) = a8;
  result = *(unsigned int *)(v10 + 4LL * (unsigned int)a2);
  switch ( (_DWORD)result )
  {
    case 0:
      return sub_11C3360(v9, a2, a7, v10, a5, a6, (__int128)_mm_load_si128(&v13), v14);
    case 1:
      v11 = _mm_load_si128(&v13);
      result = v14;
      v15 = v11;
      v16 = v14;
      if ( !(_DWORD)a7 && !*(_BYTE *)(v9 + 3832) )
      {
        result = *(_QWORD *)(v9 + 3296) + 24LL * ((unsigned int)a2 >> 1);
        if ( *(_DWORD *)result )
        {
          v12 = v16;
          *(__m128i *)result = v11;
          *(_DWORD *)(result + 16) = v12;
        }
      }
      break;
    case 0xFFFFFFFF:
      return sub_11B4C90(v9, (unsigned int)a2 ^ 1, a7, v10, a5, a6, (__int128)_mm_load_si128(&v13), v14);
  }
  return result;
}

