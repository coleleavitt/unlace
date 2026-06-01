void __fastcall sub_13724F0(__int64 a1, int a2, int a3, int a4)
{
  __m128i *v6; // rbp
  unsigned int v7; // eax
  _BYTE *v8; // rdx
  unsigned int v9; // r12d
  int v10; // eax
  int v11; // eax
  size_t v12; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF

  sub_1022900((__int64)&s, *(__int64 **)(a1 + 8), a2, 1);
  v6 = (__m128i *)s;
  if ( s )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v10 = *(_DWORD *)(a1 + 32);
        if ( v10 )
        {
          v11 = v10 - 1;
          *(_DWORD *)(a1 + 32) = v11;
          if ( v11 == 1 && !*(_BYTE *)(a1 + 36) )
            *(_BYTE *)(a1 + 36) = 1;
        }
      }
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 32);
      v8 = *(_BYTE **)(a1 + 24);
      v9 = v7 + 1;
      *(_DWORD *)(a1 + 32) = v7 + 1;
      if ( (*v8 & 1) != 0 || !a4 || a4 == 3 )
      {
        if ( !*(_BYTE *)(a1 + 36) )
        {
          if ( !*(_BYTE *)(a1 + 38) || v9 <= 2 )
            return;
          v9 = v7;
        }
        v12 = strlen(v6->m128i_i8);
        if ( v12 != 14
          || v6->m128i_i64[0] != 0x646E616D6D6F633CLL
          || v6->m128i_i32[2] != 1852402720
          || v6->m128i_i16[6] != 15973 )
        {
          sub_1371C80(*(_QWORD *)(a1 + 16), v6, v12, *(_BYTE *)(a1 + 39), v9, *(_BYTE *)(a1 + 40));
        }
      }
    }
  }
}
