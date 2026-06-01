__int64 __fastcall sub_1944A80(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 *v9; // r12
  unsigned __int64 v12; // r15
  const char *v13; // rdi
  __int64 v14; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rbx
  unsigned __int8 v20; // al

  if ( !a2 )
    return 1;
  v9 = a2;
  v12 = *a2;
  if ( (*(_BYTE *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v13 = (const char *)sub_10CCE40(a4);
    v14 = (__int64)v13;
    if ( v13 )
    {
      strlen(v13);
      v14 = (__int64)v13;
    }
    if ( (unsigned __int8)sub_18ED660(a1, v12, a3, a5, a4, v14, v14) )
      return 1;
  }
  v16 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
  if ( *(_DWORD *)v16 <= 1u || *(_DWORD *)v16 == 3 )
  {
    if ( *(_BYTE *)(v16 + 600) )
    {
      if ( (a4 & 0xFFFFFFFD) == 0 && (*(_BYTE *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
      {
        v9 = sub_19449D0(a1, (__int64)a2, a6, a7);
        if ( !v9 )
          return 1;
      }
    }
  }
  v17 = HIDWORD(a5);
  v18 = sub_A63CE0(*(_QWORD **)(a1 + 248));
  v19 = sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 5;
  if ( unk_2CD7484 )
    sub_EE9B50(5);
  *(_WORD *)(v19 + 1) &= 0xF801u;
  *(_QWORD *)(v19 + 8) = v18;
  *(_DWORD *)(v19 + 24) = a3;
  *(_DWORD *)(v19 + 28) = v17;
  *(_BYTE *)(v19 + 2) = (8 * (a4 & 0xF)) | 0x80;
  *(_QWORD *)(v19 + 16) = v9;
  v20 = sub_B62710(v19);
  *(_BYTE *)(v19 + 1) = (v20 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
  *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v20 >> 2) & 7;
  return v19;
}
