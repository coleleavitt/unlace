/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A220
// Address: 0x000000014002A220

//----- (000000014002A220) ----------------------------------------------------
__int64 __fastcall sub_14002A220(__int64 a1)
{
  _BYTE *v3; // rax
  size_t v4; // rax
  _QWORD *v5; // rsi
  char v6; // al
  size_t v7; // r14
  void *v8; // rax
  struct __crt_locale_pointers Src[64]; // [rsp+30h] [rbp-418h] BYREF

  if ( !a1 )
    return sub_1400640B0(0x5FBu);
  while ( *(_BYTE *)a1 != 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 3:
        sub_1400675A0(Src, 1024, (__m128i *)(a1 + 8), 50);
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 24) = 0;
        v4 = strlen((const char *)Src);
        sub_140001810(a1 + 8, Src, v4);
        goto LABEL_14;
      case 7:
        return 0;
      case 9:
        LOBYTE(Src[0].locinfo) = *(_BYTE *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 24) = 0;
        v3 = sub_14005ABE0(a1 + 8, nullptr, 2u, 1u);
        *(_QWORD *)(a1 + 8) = v3;
        *(_QWORD *)(a1 + 16) = 2;
        *v3 = Src[0].locinfo;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 0;
        goto LABEL_14;
    }
    if ( *(_BYTE *)a1 != 10 )
      return sub_1400640B0(0x5FBu);
    if ( !sub_1400291D0((char *)a1, 2) )
      return sub_140063DE0();
  }
  v5 = (_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a1 + 8);
  LOBYTE(Src[0].locinfo) = v6;
  v7 = v6 != 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( v6 )
  {
    v8 = sub_14005ABE0(a1 + 8, nullptr, v7 + 1, 1u);
    *v5 = v8;
    *(_QWORD *)(a1 + 16) = v7 + 1;
    memcpy(v8, Src, v7);
    *(_BYTE *)(v7 + *v5) = 0;
  }
LABEL_14:
  *(_BYTE *)a1 = 7;
  return 0;
}
