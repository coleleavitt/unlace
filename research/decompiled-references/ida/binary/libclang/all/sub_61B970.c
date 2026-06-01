__int64 __fastcall sub_61B970(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  __m128i v11[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 56);
  if ( !v3 || (result = sub_61B740(a1, v3, *(_QWORD *)(a2 + 64)), !(_BYTE)result) )
  {
    v5 = *(_QWORD *)(a2 + 72);
    sub_639D90(&v10, v5, *(unsigned int *)(a2 + 24), *a1);
    return sub_619180((__int64)a1, v5, v6, v7, v8, v9, (__int128)_mm_load_si128(&v10), (__int128)_mm_load_si128(v11));
  }
  return result;
}

