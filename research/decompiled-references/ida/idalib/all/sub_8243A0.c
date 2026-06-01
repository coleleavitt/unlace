unsigned __int64 __fastcall sub_8243A0(
        unsigned __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 result; // rax
  int v15; // edx
  __int64 v16; // rdx

  result = *a1;
  if ( (*(_BYTE *)*a1 & 4) == 0 )
  {
    v15 = *(_DWORD *)(a2 + 56);
    if ( *(_DWORD *)(result + 8) == 2 )
    {
      *(_DWORD *)(a2 + 56) = v15 | 0x40;
      result = *a1;
      v16 = *(unsigned int *)(*a1 + 4);
      if ( !(_DWORD)v16 )
        return result;
      return sub_823790(
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               (__int64)"xdelta3: secondary compression: %s\n",
               (__int64)"fgk",
               v16,
               a12,
               a13,
               a14);
    }
    *(_QWORD *)(a2 + 72) = 0;
    *(_QWORD *)(a2 + 104) = 0;
    *(_QWORD *)(a2 + 136) = 0;
    *(_DWORD *)(a2 + 56) = v15 | 0x20;
    result = *(unsigned int *)(*a1 + 4);
    if ( (_DWORD)result )
    {
      v16 = v15 & 0x40;
      if ( !(_DWORD)v16 )
        return sub_823790(
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 (__int64)"xdelta3: secondary compression: %s\n",
                 (__int64)"djw",
                 v16,
                 a12,
                 a13,
                 a14);
      return sub_823790(
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               (__int64)"xdelta3: secondary compression: %s\n",
               (__int64)"fgk",
               v16,
               a12,
               a13,
               a14);
    }
  }
  return result;
}
