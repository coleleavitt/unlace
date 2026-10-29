unsigned __int64 __fastcall sub_647120(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned int v6; // eax
  _DWORD *v8; // rdx
  unsigned int v9; // ecx
  int v10; // eax
  unsigned __int64 result; // rax
  _DWORD *v12; // rdi

  if ( a3 <= 0xF )
  {
    if ( !under_debugger )
      interr(135);
LABEL_27:
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a2 - v4;
  if ( v5 >= *(unsigned int *)(a1 + 20) )
  {
    if ( !under_debugger )
      interr(136);
    goto LABEL_27;
  }
  v6 = *(_DWORD *)(a1 + 52);
  if ( v6 == 0x7FFFFFFF )
  {
    result = v4 + (int)v5;
    *(_DWORD *)result = 2147483646;
    *(_DWORD *)(result + 4) = a3;
    *(_DWORD *)(result + 8) = v5;
    *(_DWORD *)(result + 12) = v5;
    *(_DWORD *)(a1 + 52) = v5;
  }
  else
  {
    if ( v5 >= v6 )
    {
      while ( 1 )
      {
        v9 = v6;
        v8 = (_DWORD *)(v4 + (int)v6);
        v6 = v8[2];
        if ( v9 >= v6 )
          break;
        if ( v5 < v6 )
        {
LABEL_8:
          v10 = v8[1];
          if ( v10 + v9 == v5 )
            goto LABEL_15;
          goto LABEL_9;
        }
      }
      v10 = v8[1];
      if ( v10 + v9 != v5 )
        goto LABEL_9;
      goto LABEL_15;
    }
    v8 = (_DWORD *)(v4 + (int)v6);
    while ( 1 )
    {
      v9 = v8[3];
      if ( v9 >= v6 )
        break;
      v6 = v8[3];
      v8 = (_DWORD *)(v4 + (int)v9);
      if ( v5 >= v9 )
        goto LABEL_8;
    }
    v8 = (_DWORD *)(v4 + (int)v9);
    v10 = v8[1];
    if ( v10 + v9 == v5 )
    {
LABEL_15:
      result = (unsigned int)(a3 + v10);
      v8[1] = result;
      *(_DWORD *)(a1 + 52) = v9;
      --*(_DWORD *)(a1 + 12);
      return result;
    }
LABEL_9:
    result = v4 + (int)v5;
    *(_DWORD *)result = 2147483646;
    v12 = (_DWORD *)(*(_QWORD *)(a1 + 32) + (int)v8[2]);
    *(_DWORD *)(result + 12) = v9;
    if ( v8[2] == a3 + v5 )
    {
      *(_DWORD *)(result + 4) = v12[1] + a3;
      if ( v8[2] == v9 )
      {
        *(_QWORD *)(result + 8) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 224).m128i_u64[0];
      }
      else
      {
        *(_DWORD *)(result + 8) = v12[2];
        v8[2] = v5;
        result = *(int *)(result + 8);
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + result + 12) = v5;
      }
      --*(_DWORD *)(a1 + 12);
    }
    else
    {
      *(_QWORD *)(result + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), (__m128i)(unsigned int)v8[2]).m128i_u64[0];
      v8[2] = v5;
      v12[3] = v5;
    }
    *(_DWORD *)(a1 + 52) = v5;
  }
  return result;
}
