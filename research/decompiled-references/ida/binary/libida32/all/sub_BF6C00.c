__int64 __fastcall sub_BF6C00(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // r15d
  char v9; // al
  __int8 v10; // bp
  bool v11; // cc
  void *v12; // rax
  char v13; // al
  unsigned int v14; // edx
  unsigned __int8 **v16; // rbx
  int v17; // eax
  unsigned int v18; // ebp
  char v19; // [rsp+1Fh] [rbp-79h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i si128; // [rsp+28h] [rbp-70h]
  _BYTE v22[96]; // [rsp+38h] [rbp-60h] BYREF

  v8 = sub_A884B0(*(_QWORD *)(a1 + 16), a4, (__int64)a3, a4, a5);
  v9 = sub_F41500(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  si128.m128i_i32[0] = v8;
  v10 = v9 ^ 1;
  if ( v8 > 0x40 )
    sub_21E1730(&ptr, 0, 0);
  else
    ptr = nullptr;
  v11 = *(_DWORD *)(a5 + 8) <= 0x40u;
  si128.m128i_i8[4] = v10;
  if ( !v11 && *(_QWORD *)a5 )
  {
    operator delete[](*(void **)a5);
    v10 = si128.m128i_i8[4];
  }
  v12 = ptr;
  *(_BYTE *)(a5 + 12) = v10;
  *(_QWORD *)a5 = v12;
  *(_DWORD *)(a5 + 8) = si128.m128i_i32[0];
  v13 = sub_21DEE60(a3, a5, 0, &v19);
  v14 = 1;
  if ( (v13 & 1) != 0 )
  {
    v16 = (unsigned __int8 **)sub_E0FF50(a1, a2, 2464, 0);
    if ( v16 )
    {
      v17 = sub_21D53C0(*a3);
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
      ptr = v22;
      v18 = (59 * v17 + 195) / 0xC4u;
      if ( *a3 == sub_21D5390() )
        sub_21E10C0(a3, &ptr, v18, 3, 1);
      else
        sub_21E0160(a3, &ptr, v18, 3, 1);
      sub_AC84E0(v16, ptr, si128.m128i_i64[0]);
      if ( ptr != v22 )
        free(ptr);
      sub_AC60B0(v16, a4, 8u);
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
    v14 = *(unsigned __int8 *)(a1 + 915);
    if ( *(_DWORD *)(a1 + 916) > 1u )
      return 1;
  }
  return v14;
}

