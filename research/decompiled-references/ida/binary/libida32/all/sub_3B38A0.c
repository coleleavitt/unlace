_BYTE *__fastcall sub_3B38A0(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  _BYTE *v8; // rax

  v5 = pack_dd(a2, a3, *a1);
  v6 = pack_dd(v5, a3, a1[1] - *a1);
  v7 = *((_QWORD *)a1 + 1);
  if ( !v7 )
  {
    if ( !under_debugger )
      interr(2506);
    BUG();
  }
  v8 = (_BYTE *)qstpncpy(v6, v7, a3 - v6);
  if ( (unsigned __int64)v8 < a3 )
    *v8++ = 0;
  return &v8[-a2];
}

