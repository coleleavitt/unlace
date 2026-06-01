__int64 __fastcall sub_2265140(__int64 a1, __int64 a2, const char **a3)
{
  int v4; // eax
  __int64 v6; // r14
  __m128i *v7; // rax
  __m128i *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v12; // [rsp+10h] [rbp-E8h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+B8h] [rbp-40h]
  char v16; // [rsp+C0h] [rbp-38h]

  sub_2264B90((__int64)ptr, a2, a3, 1, 0);
  if ( (v16 & 1) != 0 )
  {
    v4 = (int)ptr[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v4;
    *(void **)(a1 + 8) = ptr[1];
    return a1;
  }
  v6 = v15;
  if ( *(_DWORD *)(v15 + 8) )
  {
    v10 = std::_V2::generic_category((std::_V2 *)ptr);
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = 22;
    *(_QWORD *)(a1 + 8) = v10;
LABEL_8:
    if ( ptr[0] != &v14 )
      free(ptr[0]);
    return a1;
  }
  sub_2253560(v11, (_QWORD **)a3);
  v7 = (__m128i *)operator new(0x30u);
  v7->m128i_i64[0] = (__int64)&off_2BEB950;
  v7[1].m128i_i64[0] = (__int64)v7[2].m128i_i64;
  v8 = (__m128i *)v11[0];
  v7->m128i_i64[1] = v6;
  if ( v8 == &v12 )
  {
    v7[2] = _mm_load_si128(&v12);
  }
  else
  {
    v7[1].m128i_i64[0] = (__int64)v8;
    v7[2].m128i_i64[0] = v12.m128i_i64[0];
  }
  v9 = v11[1];
  *(_BYTE *)(a1 + 16) &= ~1u;
  *(_QWORD *)a1 = v7;
  v7[1].m128i_i64[1] = v9;
  if ( (v16 & 1) == 0 )
    goto LABEL_8;
  return a1;
}
