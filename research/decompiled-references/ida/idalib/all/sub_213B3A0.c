__int64 __fastcall sub_213B3A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  size_t v9; // rax
  _BOOL8 v10; // rsi
  __m128 s1; // [rsp+0h] [rbp-88h] BYREF
  const char *v12; // [rsp+10h] [rbp-78h] BYREF
  __int16 v13; // [rsp+30h] [rbp-58h]
  const char *v14; // [rsp+40h] [rbp-48h] BYREF
  __int16 v15; // [rsp+60h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 861) || (result = sub_2129170(a1), !(_BYTE)result) )
  {
    s1 = 0u;
    v2 = sub_2153C00(a1);
    v3 = sub_2124B50(v2);
    v7 = 0;
    if ( (unsigned __int8)sub_2154640(a1, 9) )
      goto LABEL_4;
    v13 = 259;
    v12 = "invalid option for '.bundle_lock' directive";
    v8 = sub_213B1B0(a1, &s1, 259, v4, v5, v6);
    if ( (unsigned __int8)sub_2154450(a1, v8, v3, &v12) )
      return 1;
    v14 = "invalid option for '.bundle_lock' directive";
    v15 = 259;
    v9 = j__strlen("align_to_end");
    v10 = 1;
    if ( s1.m128_u64[1] == v9 )
    {
      v10 = 0;
      if ( s1.m128_u64[1] )
        v10 = memcmp((const void *)s1.m128_u64[0], "align_to_end", s1.m128_u64[1]) != 0;
    }
    if ( (unsigned __int8)sub_2154450(a1, v10, v3, &v14) )
      return 1;
    v7 = 1;
    if ( (unsigned __int8)sub_21544B0(a1) )
    {
      return 1;
    }
    else
    {
LABEL_4:
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 1256LL))(*(_QWORD *)(a1 + 24), v7);
      return 0;
    }
  }
  return result;
}
