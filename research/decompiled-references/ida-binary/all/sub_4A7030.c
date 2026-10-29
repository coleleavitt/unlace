unsigned __int64 __fastcall sub_4A7030(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  void (*v11)(); // rax
  _BYTE *v13; // rdi
  void (*v14)(); // rax
  __int64 v15; // rsi
  const char *v16; // rsi
  __int64 *v17; // rdi
  __int64 *v18; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v9 = *(_QWORD *)a1;
  v20 = __readfsqword(0x28u);
  v11 = *(void (**)())(v9 + 672);
  if ( v11 != nullsub_263 )
    ((void (__fastcall *)(__int64))v11)(a1);
  if ( *(char *)(a1 + 1784) >= 0 && (*(_BYTE *)(a1 + 2008) & 0x20) == 0 )
  {
    v18 = nullptr;
    v19 = 0;
    if ( sub_4A6F30((__int64 *)a1, &v18, 0.0, a3, a4, a5, a6, a7, a8, a9) )
    {
      v13 = *(_BYTE **)(a1 + 2392);
      v14 = *(void (**)())(*(_QWORD *)v13 + 120LL);
      if ( (v13[12] & 4) == 0 )
      {
        v15 = -1;
        if ( (_QWORD)v19 )
          v15 = *v18;
        if ( v14 == nullsub_5 )
          goto LABEL_11;
        goto LABEL_17;
      }
      if ( v14 != nullsub_46 )
      {
        v15 = (__int64)&v18;
LABEL_17:
        ((void (__fastcall *)(_BYTE *, __int64))v14)(v13, v15);
      }
    }
LABEL_11:
    *(_DWORD *)(a1 + 2008) |= 0x40u;
    v16 = (_BYTE *)(&dword_0 + 1);
    sub_547F50(a1, 1);
    if ( (*(_BYTE *)(a1 + 1784) & 1) != 0 )
    {
      v16 = (const char *)a1;
      sub_531B30(6, a1, 0);
    }
    v17 = v18;
    *(_DWORD *)(a1 + 2008) &= ~0x40u;
    if ( v17 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v17, v16);
    }
  }
  return v20 - __readfsqword(0x28u);
}
