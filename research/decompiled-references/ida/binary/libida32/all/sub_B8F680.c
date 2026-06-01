__int64 __fastcall sub_B8F680(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 *v5; // rbp
  __int64 v6; // rdi
  char v7; // al
  __m128i *v8; // rdx
  __int64 v9; // rdi
  _WORD *v10; // rdx
  void *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  void *v18[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF

  sub_971800(*a1, "<");
  v3 = a2 + 8LL * *(unsigned int *)(a2 + 8) + 16;
  if ( v3 != a2 + 16 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    v5 = (__int64 *)(a2 + 24);
    v6 = *a1;
    v7 = *(_BYTE *)(v4 + 89) >> 6;
    if ( v7 == 1 )
      goto LABEL_12;
    while ( 1 )
    {
      if ( v7 == 2 )
      {
        v8 = *(__m128i **)(v6 + 32);
        if ( *(_QWORD *)(v6 + 24) - (_QWORD)v8 > 0xFu )
        {
          *v8 = _mm_load_si128((const __m128i *)&xmmword_2384E00);
          *(_QWORD *)(v6 + 32) += 16LL;
        }
        else
        {
          sub_22581D0(v6, "__contravariant ", 16);
        }
        goto LABEL_6;
      }
      while ( 1 )
      {
        sub_B62620(v6, *(_QWORD *)(v4 + 40));
        if ( !*(_DWORD *)(v4 + 96)
          || ((v12 = *a1, v13 = *(_QWORD *)(*a1 + 32), (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v13) > 2)
            ? (*(_BYTE *)(v13 + 2) = 32, *(_WORD *)v13 = 14880, *(_QWORD *)(v12 + 32) += 3LL)
            : (v12 = sub_22581D0(*a1, " : ", 3)),
              (v14 = (__int64 *)(*(_QWORD *)(v4 + 80) & 0xFFFFFFFFFFFFFFF8LL), (*(_QWORD *)(v4 + 80) & 4) != 0)
            ? (v15 = v14[1])
            : (v15 = *v14),
              v17 = v15,
              sub_F54860(v18, &v17, a1 + 1),
              sub_22581D0(v12, v18[0], v18[1]),
              v18[0] == &v19) )
        {
          v9 = *a1;
          if ( (__int64 *)v3 == v5 )
            return sub_971800(v9, ">");
        }
        else
        {
          operator delete(v18[0]);
          v9 = *a1;
          if ( (__int64 *)v3 == v5 )
            return sub_971800(v9, ">");
        }
        v10 = *(_WORD **)(v9 + 32);
        v4 = *v5;
        if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 > 1u )
        {
          *v10 = 8236;
          *(_QWORD *)(v9 + 32) += 2LL;
        }
        else
        {
          sub_22581D0(v9, ", ", 2);
        }
        ++v5;
        v6 = *a1;
        v7 = *(_BYTE *)(v4 + 89) >> 6;
        if ( v7 != 1 )
          break;
LABEL_12:
        v11 = *(void **)(v6 + 32);
        if ( *(_QWORD *)(v6 + 24) - (_QWORD)v11 > 0xBu )
        {
          qmemcpy(v11, "__covariant ", 12);
          *(_QWORD *)(v6 + 32) += 12LL;
        }
        else
        {
          sub_22581D0(v6, "__covariant ", 12);
        }
LABEL_6:
        v6 = *a1;
      }
    }
  }
  v9 = *a1;
  return sub_971800(v9, ">");
}

