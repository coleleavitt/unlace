unsigned __int64 __fastcall sub_9CADB0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  char v8; // dl
  unsigned __int64 v9; // rbx

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  result = *(_QWORD *)a1 + (v3 << 6);
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    if ( v4 > a2 || result <= a2 )
    {
      sub_9CAC70(a1, v5);
      result = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
    }
    else
    {
      v9 = a2 - v4;
      sub_9CAC70(a1, v5);
      a2 = *(_QWORD *)a1 + v9;
      result = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
    }
  }
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(result + 12) = *(_QWORD *)(a2 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(result + 24) = result + 40;
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 == a2 + 40 )
  {
    *(__m128i *)(result + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
  }
  else
  {
    *(_QWORD *)(result + 24) = v7;
    *(_QWORD *)(result + 40) = *(_QWORD *)(a2 + 40);
  }
  *(_QWORD *)(result + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = a2 + 40;
  v8 = *(_BYTE *)(a2 + 56);
  *(_QWORD *)(a2 + 32) = 0;
  *(_BYTE *)(a2 + 40) = 0;
  *(_BYTE *)(result + 56) = v8;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

