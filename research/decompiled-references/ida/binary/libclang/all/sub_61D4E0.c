__int64 __fastcall sub_61D4E0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // [rsp+20h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a3 + 16;
  v5 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
  result = sub_61B330(a1, *(_QWORD *)(a2 + 32), v5 * ((v4 != 0) + (v4 - (unsigned __int64)(v4 != 0)) / v5));
  if ( !(_BYTE)result )
  {
    v7 = *(_QWORD *)(a3 + 8);
    if ( v7 )
    {
      sub_639270(&v12, v7, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
      return sub_619180(
               (__int64)a1,
               v7,
               v8,
               v9,
               v10,
               v11,
               (__int128)_mm_load_si128(&v12),
               (__int128)_mm_load_si128(v13));
    }
  }
  return result;
}

