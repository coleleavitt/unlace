__int64 __fastcall sub_10ADF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 *v6; // r14
  __int64 v8; // rdi
  double v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(__int64 **)(a1 + 16);
  result = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 64) = a2;
  *(_QWORD *)&v11[0] = a4;
  v6 = &v4[result];
  *(__m128 *)(a1 + 72) = _mm_loadh_ps(v11);
  if ( v4 != v6 )
  {
    v8 = *v4;
    result = *(unsigned int *)(*v4 + 8);
    if ( (_DWORD)result == 2 )
      goto LABEL_5;
    while ( 1 )
    {
      if ( (_DWORD)result != 17 )
        result = sub_10ADF20(v8, a2, a3, a4);
LABEL_5:
      if ( v6 == ++v4 )
        break;
      while ( 1 )
      {
        v8 = *v4;
        a2 = *(unsigned int *)(a1 + 64);
        result = *(unsigned int *)(*v4 + 8);
        if ( (_DWORD)result != 2 )
          break;
        if ( v6 == ++v4 )
          return result;
      }
    }
  }
  return result;
}

