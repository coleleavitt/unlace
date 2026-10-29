__int64 __fastcall get_sreg_range(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // r9
  unsigned __int64 *v6; // rax
  __int64 v7; // r10
  _QWORD *v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // ecx

  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1768LL);
  if ( !*(_BYTE *)(v3 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v4 = a3 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL);
  if ( v4 >= *(_QWORD *)(v3 + 40) )
    sub_5144F0();
  v5 = v4 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v5 + 56) = a3;
  v6 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v3 + 32) + v5), a2);
  v9 = *v8 + 33LL * v8[1];
  v10 = 0;
  if ( v6 != (unsigned __int64 *)v9 && a2 >= *v6 && a2 < v6[1] )
  {
    LOBYTE(v10) = v6 != nullptr && v7 != 0;
    if ( (_BYTE)v10 )
    {
      *(__m128i *)v7 = _mm_loadu_si128((const __m128i *)v6);
      *(__m128i *)(v7 + 9) = _mm_loadu_si128((const __m128i *)((char *)v6 + 9));
    }
    else
    {
      LOBYTE(v9) = v6 != nullptr;
      return (unsigned int)v9;
    }
  }
  return v10;
}
