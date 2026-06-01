__int64 __fastcall ClpMatrixBase::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 (__fastcall *v4)(ClpPackedMatrix *); // rax
  __int64 v5; // rax
  int v6; // eax
  const void *v7; // r13
  int v8; // eax
  __int64 v9; // xmm0_8
  int v10; // eax
  unsigned __int64 v12; // r12
  void *v13; // rax

  if ( a1 != a2 )
  {
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      operator delete[](v3);
    v4 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)a2 + 32LL);
    if ( v4 == ClpPackedMatrix::getNumRows )
    {
      v5 = *(_QWORD *)(a2 + 88);
      if ( *(_BYTE *)(v5 + 8) )
        v6 = *(_DWORD *)(v5 + 68);
      else
        v6 = *(_DWORD *)(v5 + 64);
    }
    else
    {
      v6 = v4((ClpPackedMatrix *)a2);
    }
    v7 = *(const void **)(a2 + 8);
    if ( v7 && v6 )
    {
      if ( (unsigned __int64)v6 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v12 = 8LL * v6;
      v13 = (void *)operator new[](v12);
      *(_QWORD *)(a1 + 8) = memcpy(v13, v7, v12);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    v8 = *(_DWORD *)(a2 + 40);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 40) = v8;
    v10 = *(_DWORD *)(a2 + 44);
    *(_QWORD *)(a1 + 32) = v9;
    *(_DWORD *)(a1 + 44) = v10;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(a2 + 80);
  }
  return a1;
}

