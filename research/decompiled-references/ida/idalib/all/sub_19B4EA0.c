__int64 __fastcall sub_19B4EA0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = sub_C00A40((unsigned __int64)a2, (__int64)a2, a3, a4, a5);
  result = sub_19B4460(a1, (const __m128i *)v5, 0, 1u, nullptr, 0);
  if ( (*a2 & 0x10000) == 0 )
    return sub_19A11A0(a1, (__int64)a2, v7, v8, v9, v10);
  return result;
}
