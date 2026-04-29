__int64 __fastcall sub_29F770(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rsi
  __int64 *v5; // r12
  __m128i *v7; // rax
  __int64 *v8; // rax

  if ( (unsigned int *)a1 != a2 )
  {
    sub_29EC30(a1);
    v2 = *a2;
    *(_DWORD *)a1 = v2;
    *(_DWORD *)(a1 + 4) = a2[1];
    switch ( v2 )
    {
      case 0LL:
        return a1;
      case 1LL:
        copy_tinfo_t(a1 + 8, a2 + 2);
        return a1;
      case 2LL:
      case 4LL:
        v3 = (__int64 *)operator new(0x10u);
        v4 = *((_QWORD *)a2 + 1);
        *(_DWORD *)v3 = 0;
        v5 = v3;
        sub_29F770(v3, v4);
        goto LABEL_4;
      case 3LL:
        v8 = (__int64 *)qalloc(16);
        v5 = v8;
        if ( !v8 )
          sub_4D462();
        sub_29F560(v8, *((_QWORD *)a2 + 1));
LABEL_4:
        *(_QWORD *)(a1 + 8) = v5;
        return a1;
      case 5LL:
        *(_DWORD *)(a1 + 8) = a2[2];
        return a1;
      case 6LL:
      case 7LL:
        *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
        return a1;
      case 8LL:
        v7 = (__m128i *)operator new(0x10u);
        *v7 = _mm_loadu_si128((const __m128i *)*((_QWORD *)a2 + 1));
        *(_QWORD *)(a1 + 8) = v7;
        return a1;
      default:
        if ( !under_debugger )
          sub_383060(50466);
        BUG();
    }
  }
  return a1;
}
