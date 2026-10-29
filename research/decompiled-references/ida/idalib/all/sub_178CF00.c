__int64 __fastcall sub_178CF00(unsigned __int64 a1, __int64 a2, unsigned __int32 a3, __m128i a4)
{
  size_t v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rax

  if ( !(unsigned __int8)sub_1789140(a1, a3, "co_yield", 8)
    || !(unsigned __int8)sub_178C980(a1, a2, a3, "co_yield", 8, a4) )
  {
    return 1;
  }
  v6 = j__strlen("yield_value");
  v8 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v8 )
    BUG();
  v9 = sub_17840A0(
         a1,
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v8 - 8) + 184LL),
         a3,
         "yield_value",
         v6,
         v7,
         a4);
  if ( v9 == 1 )
    return 1;
  v10 = sub_1783A50((_QWORD *)a1, a2, a3);
  if ( v10 == 1 )
    return 1;
  v11 = sub_1783580(a1, a3, v9 & 0xFFFFFFFFFFFFFFFELL, v10 & 0xFFFFFFFFFFFFFFFELL);
  if ( v11 == 1 )
    return 1;
  else
    return sub_178CC60(a1, a3, v11 & 0xFFFFFFFFFFFFFFFELL, a4);
}
