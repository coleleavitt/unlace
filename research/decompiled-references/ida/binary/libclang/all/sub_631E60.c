void __fastcall sub_631E60(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 v10[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( a2 && (a2 & 4) != 0 && (a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( a3 != 1 )
      a1[5] = a1[6];
    v5 = a1[1];
    v6 = operator new(0x48u);
    v7 = a1[5];
    *(_OWORD *)(v6 + 16) = 0;
    v8 = v6;
    *(_QWORD *)(v6 + 32) = 0;
    *(_BYTE *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    *(__m128i *)v6 = _mm_unpacklo_epi64(
                       (__m128i)(unsigned __int64)&off_47D0298,
                       (__m128i)(unsigned __int64)&off_47CFF88);
    *(__m128i *)(v6 + 56) = _mm_unpacklo_epi64((__m128i)(a2 & 0xFFFFFFFFFFFFFFF8LL), (__m128i)v5);
    v9 = *(__int64 **)(v7 + 16);
    if ( v9 == *(__int64 **)(v7 + 24) )
    {
      v10[0] = v8;
      sub_631D40(v7 + 8, v10);
      if ( v10[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10[0] + 8LL))(v10[0]);
    }
    else
    {
      *v9 = v8;
      *(_QWORD *)(v7 + 16) += 8LL;
    }
    if ( a3 != 1 )
      a1[5] = v8 + 8;
  }
}

