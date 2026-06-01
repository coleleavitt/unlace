__int64 __fastcall sub_213C1D0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  _BOOL4 v6; // ebp
  size_t v8; // rax
  __m128 s1; // [rsp+0h] [rbp-58h] BYREF
  const char *v10; // [rsp+10h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]

  v1 = *(_BYTE *)(a1 + 288) == 0;
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 272);
  if ( v1 )
    *(_BYTE *)(a1 + 288) = 1;
  s1 = 0u;
  if ( !(unsigned __int8)sub_2154640(a1, 9) )
  {
    v6 = 1;
    v10 = "unexpected token";
    v11 = 259;
    if ( !(unsigned __int8)sub_213B1B0(a1, &s1, v2, v3, v4, v5) )
    {
      v8 = j__strlen("simple");
      if ( s1.m128_u64[1] == v8 )
      {
        v6 = 0;
        if ( s1.m128_u64[1] )
          v6 = memcmp((const void *)s1.m128_u64[0], "simple", s1.m128_u64[1]) != 0;
      }
    }
    if ( (unsigned __int8)sub_2154470(a1, v6, &v10) || (unsigned __int8)sub_21544B0(a1) )
      return 1;
  }
  sub_211EF30(*(_QWORD *)(a1 + 24), s1.m128_u64[1] != 0, *(_QWORD *)(a1 + 184));
  return 0;
}
