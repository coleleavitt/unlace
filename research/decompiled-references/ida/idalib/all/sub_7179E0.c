__int64 __fastcall sub_7179E0(
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
  unsigned int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 *v13; // rbx
  unsigned int v14; // r13d
  __int64 *v15; // r14
  __int64 *v17; // rbx
  __int64 *v18; // r14
  __int64 *v19; // rbx
  __int64 *v20; // r12

  v10 = sub_70DBE0(a1, *(_QWORD *)(a2 + 40), 0, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( (_BYTE)v10 )
  {
    v13 = *(__int64 **)(a2 + 64);
    v14 = v10;
    v15 = &v13[*(unsigned int *)(a2 + 56)];
    if ( v15 == v13 )
    {
LABEL_8:
      v17 = *(__int64 **)(a2 + 80);
      v18 = &v17[*(unsigned int *)(a2 + 72)];
      if ( v17 == v18 )
      {
LABEL_13:
        v19 = *(__int64 **)(a2 + 96);
        v20 = &v19[*(unsigned int *)(a2 + 88)];
        if ( v20 == v19 )
          return v14;
        while ( (unsigned __int8)sub_70DBE0(a1, *v19, 0, a3, a4, a5, a6, v11, v12, a9, a10) )
        {
          if ( ++v19 == v20 )
            return v14;
        }
      }
      else
      {
        while ( (unsigned __int8)sub_70DBE0(a1, *v17, 0, a3, a4, a5, a6, v11, v12, a9, a10) )
        {
          if ( v18 == ++v17 )
            goto LABEL_13;
        }
      }
    }
    else
    {
      while ( (unsigned __int8)sub_70DBE0(a1, *v13, 0, a3, a4, a5, a6, v11, v12, a9, a10) )
      {
        if ( v15 == ++v13 )
          goto LABEL_8;
      }
    }
  }
  return 0;
}
