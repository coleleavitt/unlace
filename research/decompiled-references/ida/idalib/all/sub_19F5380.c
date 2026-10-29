__int64 __fastcall sub_19F5380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // r12
  __int64 i; // r10
  _QWORD *v8; // r10
  __int64 *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 *v12; // r10
  __int64 v13; // r10
  _QWORD *v14; // r11
  __int64 v15; // rbx
  unsigned int j; // ebp
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  double v20[6]; // [rsp+0h] [rbp-30h] BYREF

  result = a3 - 1;
  v6 = (a3 - 1) / 2;
  if ( a2 < v6 )
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v9 = (__int64 *)(a1 + 32 * (i + 1));
      v11 = v9[1];
      if ( 4 * (*(_DWORD *)(v11 + 44) + 4 * *(_DWORD *)(v11 + 40)) < (unsigned int)(4
                                                                                  * (*(_DWORD *)(*(v9 - 1) + 44)
                                                                                   + 4 * *(_DWORD *)(*(v9 - 1) + 40))) )
      {
        --result;
        v8 = (_QWORD *)(a1 + 16 * i);
        v9 = (__int64 *)(a1 + 16 * result);
        v10 = *v9;
        v8[1] = v9[1];
        *v8 = v10;
        if ( result >= v6 )
          goto LABEL_7;
      }
      else
      {
        v12 = (__int64 *)(a1 + 16 * i);
        *v12 = *v9;
        v12[1] = v11;
        if ( result >= v6 )
        {
LABEL_7:
          if ( (a3 & 1) != 0 )
            goto LABEL_8;
          goto LABEL_16;
        }
      }
    }
  }
  v9 = (__int64 *)(a1 + 16 * a2);
  if ( (a3 & 1) == 0 )
  {
    result = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == result )
    {
      v19 = result + 1;
      result = 2 * (result + 1) - 1;
      *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)(a1 + 32 * v19 - 16));
      v9 = (__int64 *)(a1 + 16 * result);
    }
LABEL_8:
    v13 = (result - 1) / 2;
    if ( result > a2 )
    {
      v14 = (_QWORD *)(a1 + 16 * v13);
      v15 = v14[1];
      for ( j = 4 * (*(_DWORD *)(a5 + 44) + 4 * *(_DWORD *)(a5 + 40));
            4 * (*(_DWORD *)(v15 + 44) + 4 * *(_DWORD *)(v15 + 40)) < j;
            v15 = v14[1] )
      {
        v17 = (_QWORD *)(a1 + 16 * result);
        *v17 = *v14;
        v9 = (__int64 *)(a1 + 16 * v13);
        v17[1] = v15;
        result = v13 - 1;
        v18 = (v13 - 1) / 2;
        if ( a2 >= v13 )
          break;
        result = v13;
        v13 = (v13 - 1) / 2;
        v14 = (_QWORD *)(a1 + 16 * v18);
      }
    }
  }
  *(_QWORD *)&v20[0] = a5;
  *(__m128 *)v9 = _mm_loadh_ps(v20);
  return result;
}
