__int64 __fastcall sub_1FE050(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  double v15; // xmm0_8
  __int64 v16; // rdi
  double v17; // xmm0_8
  __int64 v18; // rdi
  double v19; // xmm4_8
  double v20; // xmm5_8

  result = QT::QGuiApplication::keyboardModifiers((QT::QGuiApplication *)a1);
  if ( (result & 0x2000000) == 0 )
  {
    result = QT::QGuiApplication::mouseButtons((QT::QGuiApplication *)a1);
    if ( (result & 1) == 0 )
    {
      if ( *(_BYTE *)(a1 + 240) )
      {
        v12 = *(_QWORD *)(a1 + 600);
        if ( v12 )
        {
          result = *(_QWORD *)(a1 + 592);
          v13 = result + 80 * v12;
          if ( result != v13 )
          {
            while ( (*(_BYTE *)(result + 72) & 4) != 0 )
            {
              result += 80;
              if ( v13 == result )
                return result;
            }
            if ( result && *(_QWORD *)(result + 16) > 1u )
            {
              v14 = *(_QWORD *)(a1 + 224);
              if ( v14 )
              {
                v15 = qfree(v14, a2);
                v16 = *(_QWORD *)(a1 + 248);
                *(_QWORD *)(a1 + 224) = 0;
                *(_DWORD *)(a1 + 232) = 0;
                v17 = qfree(v16, a2, v15);
                v18 = *(_QWORD *)(a1 + 216);
                *(_QWORD *)(a1 + 248) = 0;
                *(_DWORD *)(a1 + 256) = 0;
                return sub_1FD320(v18, v17, a4, a5, a6, v19, v20, a9, a10);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
