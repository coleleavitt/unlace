__int64 __fastcall sub_14F63C0(__int64 a1, unsigned int a2, __m128i a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int16 v6[13]; // [rsp+Eh] [rbp-1Ah] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 63 )
  {
    v4 = 0;
    goto LABEL_4;
  }
  v3 = sub_14BFC10((const __m128i *)a1, 0, a3);
  if ( v3 != 1 )
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFFELL;
LABEL_4:
    sub_1569A00(a1, 63, 15, "@throw", 6);
    return sub_1A8A720(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v4, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
  }
  v6[0] = 63;
  sub_15680D0(a1, v6, 1, 0);
  return 1;
}
