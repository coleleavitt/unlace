_WORD *__fastcall sub_1A116B0(
        _BYTE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        unsigned __int64 a8)
{
  __int64 v12; // rdx
  _WORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v19; // [rsp+0h] [rbp-40h]

  if ( a5 )
  {
    v12 = *(_QWORD *)(a5 + 16);
    if ( a6 < (unsigned int)((*(_QWORD *)(a5 + 24) - v12) >> 3) )
    {
      v13 = *(_WORD **)(v12 + 8LL * a6);
      if ( v13 )
      {
        if ( (*v13 & 0x1FF) == 0x35 )
          return v13;
        sub_1A11410(a1, (unsigned __int64)v13, a8, 0, 1u, a7);
      }
    }
    v14 = *(_QWORD *)(a2 + 16);
    LODWORD(v15) = 0;
    v16 = (*(_QWORD *)(a2 + 24) - v14) >> 3;
    if ( (unsigned int)v16 > a3 )
    {
      v17 = *(_QWORD *)(v14 + 8LL * a3);
      if ( v17 && (*(_WORD *)v17 & 0x1FF) == 0x35 )
        v15 = (__int64)(*(_QWORD *)(v17 + 24) - *(_QWORD *)(v17 + 16)) >> 3;
      else
        LODWORD(v15) = v16 - a3;
    }
    v19 = sub_1A0DE10((__int64)a1, a4, a8, v15);
    sub_C0B210(a5, *(_QWORD **)(*(_QWORD *)a1 + 248LL), a6, v19);
    return v19;
  }
  return nullptr;
}
