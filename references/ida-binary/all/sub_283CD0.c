void __fastcall sub_283CD0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax

  v1 = a1[52];
  v2 = a1[48];
  v3 = a1[45];
  v4 = 0xF0F0F0F0F0F0F0F1LL * ((a1[47] - v3) >> 4);
  v5 = (v1 == 0) + v4 + ((v1 - v2) >> 3) - 0xF0F0F0F0F0F0F0FLL * ((__int64)(a1[49] - a1[50]) >> 4) - 1;
  if ( (v1 == 0) + v4 + ((v1 - v2) >> 3) - 0xF0F0F0F0F0F0F0FLL * ((__int64)(a1[49] - a1[50]) >> 4) != 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v9 = v7 - 0xF0F0F0F0F0F0F0FLL * ((v3 - a1[46]) >> 4);
      if ( v9 >= 0 && v7 == 0xF0F0F0F0F0F0F0FLL * ((v3 - a1[46]) >> 4) )
        v8 = v3 + 272 * v7;
      else
        v8 = *(_QWORD *)(v2 + 8 * v9);
      ++v7;
      sub_174A20(v8 + 48);
      if ( v7 == v5 )
        break;
      v3 = a1[45];
      v2 = a1[48];
    }
  }
}
