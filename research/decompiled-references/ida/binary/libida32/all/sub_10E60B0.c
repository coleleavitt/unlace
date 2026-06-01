void __fastcall sub_10E60B0(__int64 a1, __int64 a2, const char *a3, unsigned __int8 a4, _QWORD *a5)
{
  void *v6; // rdx
  unsigned __int8 v7; // [rsp+4h] [rbp-24h]
  _QWORD *v8; // [rsp+8h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 513) )
  {
    v6 = *(void **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v6 > 0xDu )
    {
      qmemcpy(v6, " (in-process)\n", 14);
      *(_QWORD *)(a2 + 32) += 14LL;
    }
    else
    {
      v7 = a4;
      v8 = a5;
      sub_22581D0(a2, " (in-process)\n", 14);
      a4 = v7;
      a5 = v8;
    }
  }
  sub_10E4570(a1, a2, a3, a4, a5);
}

