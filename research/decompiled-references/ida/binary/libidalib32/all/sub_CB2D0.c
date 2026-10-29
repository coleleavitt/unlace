__m128i *__fastcall sub_CB2D0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __m128i *result; // rax
  TMenuItem *v3; // rbx
  TMenuItem *v4; // r12
  TMenuItem *v5; // r13
  TMenuItem *v6; // r15
  __m128i v7[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 140) )
    return nullptr;
  v1 = *(int *)(a1 + 128);
  if ( (v1 & 0x80000000) != 0LL || v1 >= (unsigned __int64)xmmword_251378 )
    return nullptr;
  result = (__m128i *)(qword_251370 + 56 * v1);
  if ( !result )
    return result;
  if ( (result[2].m128i_i8[4] & 2) != 0 )
    return nullptr;
  if ( result[2].m128i_i8[0] != -1 && (unsigned int)sub_C5EC0((__int64)result) == 1 )
  {
    v3 = (TMenuItem *)operator new(0x28u);
    TMenuItem::TMenuItem(v3, "~T~oggle", 0x1390u, 0, 0, nullptr, nullptr);
  }
  else
  {
    v3 = (TMenuItem *)operator new(0x28u);
    v4 = (TMenuItem *)operator new(0x28u);
    v5 = (TMenuItem *)operator new(0x28u);
    v6 = (TMenuItem *)operator new(0x28u);
    TMenuItem::TMenuItem(v6, "~C~hange...", 0x1391u, 0, 0, nullptr, nullptr);
    TMenuItem::TMenuItem(v5, "~D~ecrement", 0x1393u, 0, 0, nullptr, v6);
    TMenuItem::TMenuItem(v4, "~I~ncrement", 0x1392u, 0, 0, nullptr, v5);
    TMenuItem::TMenuItem(v3, "~Z~ero", 0x138Fu, 0, 0, nullptr, v4);
  }
  v7[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
  result = (__m128i *)operator new(0x10u);
  *result = _mm_load_si128(v7);
  return result;
}

