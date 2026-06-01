__int64 __fastcall sub_1FA9F0(__m128i *a1, __int64 a2, double a3)
{
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r12
  __int64 v8; // rax
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  int v10[2]; // [rsp+18h] [rbp-20h]

  *(_QWORD *)v10 = __readfsqword(0x28u);
  v3 = strchr((const char *)a2, 58);
  if ( v3 )
  {
    v6 = v3 + 1;
    if ( *(_BYTE *)a2 == 114 && *(_BYTE *)(a2 + 1) == 101 && *(_BYTE *)(a2 + 2) == 103 )
    {
      if ( !v3[1] )
      {
        if ( !under_debugger )
          interr(1716, 58, v4, v5, a3);
        BUG();
      }
      v9 = 0;
      qstrncpy(&v9, v3 + 1, 16);
      *a1 = _mm_load_si128(&v9);
      return 1;
    }
    if ( strncmp((const char *)a2, "view", 4u) )
      return 1;
    v8 = sub_1FA850(v6);
    if ( v8 )
    {
      v9.m128i_i64[0] = 0;
      v9.m128i_i64[1] = v8;
      *a1 = _mm_load_si128(&v9);
      return 1;
    }
  }
  return 0;
}
