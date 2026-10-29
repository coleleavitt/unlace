__int64 __fastcall sub_2277300(__int64 a1, _BYTE *a2)
{
  const __m128i **v4; // rdx
  const __m128i *v5; // rsi
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rdi
  int v11; // ecx
  __int64 ***v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // [rsp+0h] [rbp-58h] BYREF
  __int16 v17; // [rsp+20h] [rbp-38h]

  v4 = *(const __m128i ***)(a1 + 672);
  *(_DWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 608) = 0;
  v5 = *v4;
  if ( (*v4)[2].m128i_i32[0] == 5 )
  {
    v6 = ((char *)v4[2] - (char *)v4[1]) >> 3;
    *(_DWORD *)(a1 + 664) = v6;
    v7 = (unsigned int)(v6 + 63) >> 6;
    v8 = v7;
    if ( v7 )
    {
      v9 = v7;
      v10 = 0;
      if ( *(_DWORD *)(a1 + 612) < v7 )
      {
        sub_2237220(a1 + 600, (const void *)(a1 + 616), v7, 8);
        v15 = *(unsigned int *)(a1 + 608);
        v10 = 8 * v15;
        v8 += v15;
      }
      memset((void *)(*(_QWORD *)(a1 + 600) + v10), 0, 8 * v9);
      *(_DWORD *)(a1 + 608) = v8;
      v6 = *(_DWORD *)(a1 + 664);
    }
    v11 = v6 & 0x3F;
    if ( v11 )
      *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL * v8 - 8) &= ~(-1LL << v11);
  }
  else
  {
    v13 = *(__int64 ****)(a1 + 80);
    v16 = "expected sequence of bit values";
    v17 = 259;
    sub_226EEF0(v13, v5, (__int64)&v16, 0);
    v14 = std::_V2::generic_category((std::_V2 *)v13);
    *(_DWORD *)(a1 + 96) = 22;
    *(_QWORD *)(a1 + 104) = v14;
  }
  *a2 = 1;
  return 1;
}
