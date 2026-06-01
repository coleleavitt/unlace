__int64 __fastcall sub_61B620(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  __m128i v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3 + 4;
  v4 = sub_B1AFD0(*(_QWORD *)(a2 + 40));
  result = sub_61B330(a1, *(_QWORD *)(a2 + 40), v4 * ((v3 != 0) + (v3 - (unsigned __int64)(v3 != 0)) / v4));
  if ( !(_BYTE)result )
  {
    v6 = *(_QWORD *)(a2 + 48);
    sub_639270(&v11, v6, a1[6], *a1, 0);
    return sub_619180((__int64)a1, v6, v7, v8, v9, v10, (__int128)_mm_load_si128(&v11), (__int128)_mm_load_si128(v12));
  }
  return result;
}

