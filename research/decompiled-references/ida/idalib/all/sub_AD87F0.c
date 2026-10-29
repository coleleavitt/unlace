void __fastcall sub_AD87F0(__int64 a1)
{
  size_t v1; // r9
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r9
  __int64 v5; // rbp
  const __m128i *v6; // rbx
  const __m128i *v7; // r12
  const __m128i *v8; // rsi

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)a1 + 8LL;
  if ( v2 )
    v1 = j__strlen(*(const char **)(a1 + 48));
  sub_F4F420(v3, a1 + 8, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v2, v1);
  v5 = *(_QWORD *)a1;
  switch ( *(_DWORD *)(a1 + 8) & 0x7FFFFFFF )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return;
    case 1:
      sub_AD8780(*(_QWORD *)a1, *(_QWORD *)(a1 + 16));
      break;
    case 8:
      sub_AD2220(v5 + 8, 0, 0, *(_QWORD *)(a1 + 16), *(_QWORD *)a1, v4);
      break;
    case 9:
      v6 = *(const __m128i **)(a1 + 16);
      v7 = (const __m128i *)((char *)v6 + 24 * *(unsigned int *)(a1 + 12));
      while ( v7 != v6 )
      {
        v8 = v6;
        v6 = (const __m128i *)((char *)v6 + 24);
        sub_AD68F0(v5, v8, 0);
      }
      break;
  }
}
