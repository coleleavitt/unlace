void __fastcall sub_16EB510(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128i a7,
        unsigned int a8)
{
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax

  v12 = *(_QWORD *)(a1 + 248);
  v13 = ~*(char *)(a6 + 19);
  v16 = sub_B987D0(a2, (__int64)a2);
  v17 = (v13 >> 31) + 3;
  v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
    && (v18 = sub_F63050(v18, v16, v14, v15)) != 0 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v18 + 32);
      if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v19 = v16 & 0xFFFFFFFFFFFFFFF0LL;
        v18 = *(_QWORD *)v19;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43 <= 1 )
          break;
        v20 = sub_F63050(v18, v19, v14, v15);
        v16 = *(_QWORD *)(v20 + 32);
        if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  v21 = sub_A70010(v12, v16);
  v22 = sub_A70010(*(_QWORD *)(a1 + 248), a3);
  sub_16D4620(a1, a8, (__int64)a2, (__int64)"'this'", 6, v22, v21);
  sub_16E9510(a1, (__int64)a2, a6, 0, a4, a5, a7, 1u, a8, 0, v17);
}
