__int64 __fastcall sub_690D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int128 a7)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __m128i v17; // [rsp+0h] [rbp-38h]

  v8 = (unsigned int)a7;
  if ( (unsigned int)clang_isInvalid((unsigned int)a7) )
    return -1;
  v17 = _mm_loadu_si128((const __m128i *)&a7);
  v13 = sub_63A250(v8, a2, v9, v10, v11, v12, v17.m128i_i32[0], v17.m128i_i64[1]);
  if ( !v13 || (*(_BYTE *)(v13 + 28) & 0x7Fu) - 56 > 3 || *(char *)(v13 + 28) < 0 )
    return -1;
  v14 = sub_78B3D0(v13);
  if ( !v14 )
    return -2;
  if ( *(char *)(v14 + 28) < 0 )
    return -1;
  v15 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)sub_B19120(*v15, 0) )
    return -2;
  if ( (*(_BYTE *)(*v15 + 17LL) & 4) != 0 )
    return -3;
  else
    return sub_690AE0();
}

