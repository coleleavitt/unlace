__int64 __fastcall sub_16C30(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  _QWORD v19[5]; // [rsp+0h] [rbp-28h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( a2 > 7u )
  {
    if ( a2 != 8 )
    {
      if ( !byte_1671A1 )
        sub_96F80(2614);
      BUG();
    }
    *(_QWORD *)(a1 + 16) += a3;
    sub_93D20(a1 + 40, 8);
    *(_BYTE *)(a1 + 48) = 0;
  }
  else if ( a2 > 1u )
  {
    *(_BYTE *)(a1 + 24) = a2;
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)(a1 + 8) = 0;
    sub_93D20(a1 + 40, 8);
    *(_BYTE *)(a1 + 48) = 0;
  }
  else if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 8) += a3;
      v11 = sub_972B0();
      v12 = (unsigned int)v11 / 0x186A0uLL + 10 * HIDWORD(v11);
      if ( *(_QWORD *)(a1 + 32) != v12 )
      {
        *(_QWORD *)(a1 + 32) = v12;
        sub_93D20(v19, 8);
        if ( strcmp((const char *)v19, (const char *)(a1 + 48)) )
        {
          *(_QWORD *)(a1 + 48) = v19[0];
          sub_16B60((int)"%s/%s  \r", a1 + 48, a1 + 40, v13, v14, v15, a4, a5, a6, a7, v16, v17, a10, a11, v19[0]);
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return 0;
}

