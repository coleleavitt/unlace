__int64 __fastcall sub_61E820(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rax
  __int64 result; // rax
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  __m128i v11[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (__int64 *)a2[12];
  if ( !v2 || (result = sub_61B330(a1, *v2, (__int64)(v2 + 1)), !(_BYTE)result) )
  {
    v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 64LL);
    if ( v4 == sub_5F7B90 )
      v5 = a2[11];
    else
      v5 = v4((__int64)a2);
    result = 0;
    if ( v5 )
    {
      sub_639270(&v10, v5, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
      return sub_619180((__int64)a1, v5, v6, v7, v8, v9, (__int128)_mm_load_si128(&v10), (__int128)_mm_load_si128(v11));
    }
  }
  return result;
}

