__int64 __fastcall sub_CC7A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d
  unsigned int v7; // r11d
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // ebp
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(__int64, __int64, __int64); // r8
  unsigned int v14; // [rsp+0h] [rbp-44h]

  v4 = *(_DWORD *)(a4 + 20);
  if ( v4 != -1 )
  {
    v7 = *(_DWORD *)(a4 + 16);
    v8 = *(_QWORD *)(a4 + 40);
    v14 = v4 / v7;
    result = *(unsigned int *)(v8 + 28);
    v10 = result + 16;
    if ( v4 >= v7 )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        result = v12;
        v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v8 + 80);
        *(__m128i *)(a3 + v12) = _mm_loadu_si128((const __m128i *)(a2 + v12));
        if ( v13 )
          result = v13(a1, a2 + v12 + 16LL, a3 + v12 + 16LL);
        ++v11;
        v12 += v10;
        if ( v11 >= v14 )
          break;
        v8 = *(_QWORD *)(a4 + 40);
      }
    }
  }
  return result;
}

