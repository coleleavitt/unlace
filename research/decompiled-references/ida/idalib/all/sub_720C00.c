__int64 __fastcall sub_720C00(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 *v12; // r13
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 v16; // al
  __int64 v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rdx
  __int64 v26; // r13

  v11 = *(_QWORD *)(a2 + 88);
  v12 = *(__int64 **)(v11 + 23264);
  v13 = *(__int64 **)(v11 + 23256);
  if ( (char *)v12 - (char *)v13 != 8 || (*(_BYTE *)(*v13 + 28) & 0x7F) != 0 )
  {
    while ( v12 != v13 )
    {
      v15 = *v13;
      v16 = *(_BYTE *)(*v13 + 28) & 0x7F;
      if ( ((v16 + 121) & 0x7Fu) > 1 )
      {
        if ( (unsigned int)v16 - 59 <= 2 )
        {
          if ( v15 )
          {
            v14 = *(_QWORD *)(v15 + 128);
            if ( (!v14 || (*(_BYTE *)(v14 + 10) & 0x20) == 0)
              && !(unsigned __int8)sub_709840(a1, v15, a3, a4, a5, a6, a7, a8, a9, a10) )
            {
              return 0;
            }
          }
        }
        else if ( v15 && !(unsigned __int8)sub_709840(a1, v15, a3, a4, a5, a6, a7, a8, a9, a10) )
        {
          return 0;
        }
      }
      ++v13;
    }
  }
  else
  {
    v18 = a2 + 40;
    if ( !a2 )
      v18 = 0;
    if ( !(unsigned __int8)sub_70A970(a1, v18, a3, a4, a5, a6, a7, a8, a9, a10) )
      return 0;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v19 = nullptr;
    v20 = sub_B8C3D0(a2);
    v25 = *(unsigned int *)(v20 + 8);
    v26 = *(_QWORD *)v20 + 8 * v25;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v19 = *(__int64 **)sub_B8C3D0(a2);
    if ( v19 != (__int64 *)v26 )
    {
      while ( (unsigned __int8)sub_71D160(a1, *v19, a3, a4, a5, a6, v23, v24, a9, a10, v25, v21, v22) )
      {
        if ( (__int64 *)v26 == ++v19 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
