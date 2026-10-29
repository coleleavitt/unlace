void __fastcall sub_12E9CC0(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  volatile signed __int32 *v3; // rbx
  int v4; // eax
  signed __int32 v5; // eax

  v2 = _mm_loadu_si128(a2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  *a2 = 0;
  *(__m128i *)(a1 + 96) = v2;
  if ( v3 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) != 1 )
        return;
    }
    else
    {
      v4 = *((_DWORD *)v3 + 2);
      *((_DWORD *)v3 + 2) = v4 - 1;
      if ( v4 != 1 )
        return;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    if ( &_pthread_key_create )
    {
      v5 = _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    }
    else
    {
      v5 = *((_DWORD *)v3 + 3);
      *((_DWORD *)v3 + 3) = v5 - 1;
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
  }
}
