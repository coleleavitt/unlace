__int64 (__fastcall *__fastcall sub_1418D30(__int64 a1, char a2))(__int64 a1, __m128i *a2)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 *v6; // rsi
  __int64 (__fastcall *result)(__int64, __m128i *); // rax
  char *v8; // rsi
  __int64 v9; // r8
  char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 2944);
  v5 = a2 == 0;
  v6 = *(__int64 **)(a1 + 2960);
  if ( !v5 )
    v4 = ~*(_QWORD *)(a1 + 2944);
  v16[0] = v4;
  if ( v6 == *(__int64 **)(a1 + 2968) )
  {
    sub_1418840(a1 + 2952, v6, v16);
  }
  else
  {
    *v6 = v4;
    *(_QWORD *)(a1 + 2960) = v6 + 1;
  }
  if ( a2 )
  {
    v15 = *(_QWORD *)(a1 + 2984);
    v16[0] = *(unsigned int *)(a1 + 2912);
    if ( v15 == *(_QWORD *)(a1 + 2992) )
    {
      sub_1418A70(a1 + 2976, (void **)v15, a1 + 2904, v16);
    }
    else
    {
      *(_QWORD *)v15 = v15 + 16;
      *(_QWORD *)(v15 + 8) = 0x100000000LL;
      if ( *(_DWORD *)(a1 + 2912) )
        sub_1418990((void **)v15, (char **)(a1 + 2904));
      *(_QWORD *)(v15 + 40) = v16[0];
      *(_QWORD *)(a1 + 2984) += 48LL;
    }
  }
  result = *(__int64 (__fastcall **)(__int64, __m128i *))(a1 + 1120);
  v8 = *(char **)(a1 + 1176);
  if ( result || *(_QWORD *)(a1 + 1144) || v8 == *(char **)(a1 + 1168) )
  {
    if ( v8 == *(char **)(a1 + 1184) )
    {
      sub_1417C50(
        a1 + 1168,
        v8,
        (_QWORD *)(a1 + 1152),
        (_QWORD *)(a1 + 1160),
        (_QWORD *)(a1 + 1112),
        (_QWORD *)(a1 + 1120),
        (__int64 *)(a1 + 1144),
        (__int64 *)(a1 + 1128));
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 1152);
      v10 = v8 + 56;
      v11 = *(_QWORD *)(a1 + 1128);
      v12 = *(_QWORD *)(a1 + 1136);
      *((_QWORD *)v10 - 6) = *(_QWORD *)(a1 + 1160);
      v13 = *(_QWORD *)(a1 + 1112);
      *((_QWORD *)v10 - 7) = v9;
      *(_QWORD *)(a1 + 1112) = 0;
      *((_QWORD *)v10 - 4) = result;
      v14 = *(_QWORD *)(a1 + 1144);
      *((_QWORD *)v10 - 5) = v13;
      *(_QWORD *)(a1 + 1144) = 0;
      *((_QWORD *)v10 - 3) = v14;
      *((_QWORD *)v10 - 2) = v11;
      *((_QWORD *)v10 - 1) = v12;
      *(_QWORD *)(a1 + 1176) = v10;
    }
    result = sub_1418450;
    *(_QWORD *)(a1 + 1120) = 0;
    *(_QWORD *)(a1 + 1152) = sub_1418450;
  }
  return result;
}
