__int64 __fastcall sub_10AE130(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 *v8; // r8
  __int64 *v9; // r10
  __int64 v10; // rdi
  double v11[2]; // [rsp+0h] [rbp-10h] BYREF

  result = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)result != 2 && (_DWORD)result != 17 )
  {
    v5 = a1;
    v6 = a3;
    v8 = *(__int64 **)(a1 + 16);
    result = *(unsigned int *)(a1 + 24);
    *(_DWORD *)(a1 + 64) = a2;
    *(_QWORD *)&v11[0] = a4;
    v9 = &v8[result];
    *(__m128 *)(a1 + 72) = _mm_loadh_ps(v11);
    if ( v8 != v9 )
    {
      v10 = *v8;
      result = *(unsigned int *)(*v8 + 8);
      if ( (_DWORD)result == 2 )
        goto LABEL_7;
      while ( 1 )
      {
        if ( (_DWORD)result != 17 )
          result = sub_10ADF20(v10, a2, v6, a4);
LABEL_7:
        if ( v9 == ++v8 )
          break;
        while ( 1 )
        {
          v10 = *v8;
          a2 = *(unsigned int *)(v5 + 64);
          result = *(unsigned int *)(*v8 + 8);
          if ( (_DWORD)result != 2 )
            break;
          if ( v9 == ++v8 )
            return result;
        }
      }
    }
  }
  return result;
}

