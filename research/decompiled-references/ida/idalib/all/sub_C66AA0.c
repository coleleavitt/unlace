char __fastcall sub_C66AA0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+4h] [rbp-24h] BYREF
  char v16; // [rsp+Ch] [rbp-1Ch]

  v7 = a1->m128i_i64[0];
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
    return sub_C5E0F0(v7, a2, a1->m128i_i64[1], 1u, a5, a6) != 0;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
  {
    sub_C3FAF0(v7, *(_QWORD *)(a2 + 16), a3, a4, a5);
    return sub_C5C820(a1, *(__m128i **)(a2 + 24), v11, v12, v13, v14);
  }
  else
  {
    v8 = (__int64 *)sub_E33C10(v7, a2, 108, 0);
    v9 = sub_EEC8C0(a2);
    if ( v8 )
    {
      v15 = v9;
      v16 = 1;
      sub_AEC610(v8, &v15);
    }
    return 0;
  }
}
