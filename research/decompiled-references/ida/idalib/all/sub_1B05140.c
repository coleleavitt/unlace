__int64 __fastcall sub_1B05140(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __m128i v5; // xmm0
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx

  result = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      *a2 = 0;
      v4 = *(_QWORD *)result;
      result += 56;
      a2 += 7;
      *((_DWORD *)a2 - 10) = 0;
      v5 = _mm_loadu_si128((const __m128i *)(result - 24));
      *((_DWORD *)a2 - 11) = 0;
      *((_DWORD *)a2 - 12) = 0;
      *(a2 - 7) = v4;
      LODWORD(v4) = *(_DWORD *)(result - 48);
      *(_QWORD *)(result - 56) = 0;
      *((_DWORD *)a2 - 12) = v4;
      v6 = *(_DWORD *)(result - 44);
      *(_DWORD *)(result - 48) = 0;
      LODWORD(v4) = *((_DWORD *)a2 - 11);
      *((_DWORD *)a2 - 11) = v6;
      v7 = *(_DWORD *)(result - 40);
      *(_DWORD *)(result - 44) = v4;
      LODWORD(v4) = *((_DWORD *)a2 - 10);
      *((_DWORD *)a2 - 10) = v7;
      *(_DWORD *)(result - 40) = v4;
      *((_DWORD *)a2 - 8) = *(_DWORD *)(result - 32);
      LODWORD(v4) = *(_DWORD *)(result - 28);
      *(__m128i *)(a2 - 3) = v5;
      *((_DWORD *)a2 - 7) = v4;
      *((_DWORD *)a2 - 2) = *(_DWORD *)(result - 8);
    }
    while ( v3 != result );
    v8 = *(unsigned int *)(a1 + 8);
    v9 = *(_QWORD *)a1;
    result = 7 * v8;
    v10 = *(_QWORD *)a1 + 56 * v8;
    if ( *(_QWORD *)a1 != v10 )
    {
      do
      {
        v10 -= 56;
        result = operator delete(*(_QWORD *)v10, 16LL * *(unsigned int *)(v10 + 16), 8);
      }
      while ( v10 != v9 );
    }
  }
  return result;
}
