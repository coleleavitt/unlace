__int64 __fastcall sub_19B4F60(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r12
  _DWORD *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v2 = sub_19A27D0(a1);
  if ( (unsigned __int8)sub_19A92A0(a1, a2, v2) )
    return 1;
  v4 = (_DWORD *)sub_C95530(*(_QWORD *)(a1 + 248), a2, v2, 0);
  v8 = sub_C00A40((unsigned __int64)v4, a2, v5, v6, v7);
  sub_19B4460(a1, (const __m128i *)v8, 0, 1u, nullptr, 0);
  if ( (*v4 & 0x10000) == 0 )
    sub_19A11A0(a1, (__int64)v4, v9, v10, v11, v12);
  return (__int64)v4;
}
