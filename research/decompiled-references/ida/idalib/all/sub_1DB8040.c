void __fastcall sub_1DB8040(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  char v11; // al
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-38h]

  if ( (a7 & 0x7FFFFFFF) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 11280LL);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 120);
        if ( v9 )
          break;
        if ( *(_BYTE *)(v8 + 113) )
        {
          v8 = *(_QWORD *)(v8 + 104);
          if ( v8 )
            continue;
        }
        return;
      }
      v10 = *a2;
      v11 = *(_BYTE *)(v9 + 28) & 0x7F;
      if ( v11 == 67 )
      {
        v12 = sub_BBE5B0(v9);
        v13 = sub_BBE590(v9);
      }
      else if ( v11 == 47 )
      {
        v12 = *(_WORD *)(v9 + 70) >> 4;
        v13 = *(_DWORD *)(v9 + 68) & 0xFFFFF;
      }
      else
      {
        v12 = *(_WORD *)(v9 + 66) >> 4;
        v13 = *(_DWORD *)(v9 + 64) & 0xFFFFF;
      }
      v15 = _mm_loadu_si128((const __m128i *)&a7);
      v14 = *(_QWORD *)(*(_QWORD *)v10
                      + 24LL * (unsigned int)(*(_DWORD *)(v10 + 8) + *(_DWORD *)(v10 + 112) - 1 - v13)
                      + 8)
          + 24LL * v12;
      *(_QWORD *)(v14 + 16) = a8;
      *(__m128i *)v14 = v15;
    }
  }
}
