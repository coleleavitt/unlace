__int64 __fastcall sub_18E0620(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        double a7)
{
  unsigned int v11; // eax
  __int64 v12; // rbp
  char v14; // cl
  __int64 v15; // rsi
  unsigned int v17; // [rsp+Ch] [rbp-CCh]
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( a4 <= 0x1F )
  {
    if ( ((1LL << a4) & 0xE5800000) == 0 )
    {
      if ( ((1LL << a4) & 0x200000) == 0 )
        goto LABEL_4;
      sub_18E0200(a1, a5, a6, a3, 0, a7);
    }
    sub_18CD1B0(a5, a6, a3, a1, a5);
  }
LABEL_4:
  ptr[0] = v19;
  ptr[1] = (void *)0x1000000000LL;
  v11 = sub_BFAD70(a4);
  if ( v11 && v11 != 15 )
  {
    v17 = v11;
    sub_1A5B910(a1, v11, a2, ptr);
    v11 = v17;
    if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
      goto LABEL_7;
  }
  else if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
  {
    goto LABEL_7;
  }
  v14 = v11 - 16;
  if ( v11 - 16 <= 0x11 )
  {
    if ( ((1LL << v14) & 0x30003) != 0 )
    {
      v15 = 34;
    }
    else
    {
      v15 = 30;
      if ( (((unsigned __int16)(1LL << v14) >> 8) & 0x80u) == 0 )
        goto LABEL_7;
    }
    sub_1A5B910(a1, v15, a2, ptr);
  }
LABEL_7:
  v12 = sub_1C07820(a1, a3, a4, (unsigned int)ptr, a5, a6, 1, 1, 0);
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v12;
}
