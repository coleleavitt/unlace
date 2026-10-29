__int64 __fastcall sub_483310(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v8; // rax
  __m128i v9; // xmm0
  unsigned int v10; // ebp
  unsigned __int8 v12; // [rsp+7h] [rbp-59h] BYREF
  __int128 v13; // [rsp+8h] [rbp-58h] BYREF
  __m128i v14; // [rsp+18h] [rbp-48h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v12 = 1;
  v13 = 0;
  v8 = operator new(0x20u);
  *(_DWORD *)(v8 + 12) = a4;
  *(_QWORD *)(v8 + 24) = &v12;
  v9 = _mm_loadl_epi64((const __m128i *)&off_2B02BF8);
  *(_QWORD *)v8 = a1;
  *(_DWORD *)(v8 + 8) = a3;
  *(_BYTE *)(v8 + 16) = a5;
  *(_QWORD *)&v13 = v8;
  v14 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_48E8B0);
  v10 = sub_633A00(a2, 0, &v13);
  if ( v14.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v14.m128i_i64[0])(&v13, &v13, 3);
  if ( !a5 )
    return v12;
  return v10;
}

