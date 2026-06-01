_QWORD *__fastcall sub_D21D0(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rbp
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdi

  nullsub_99();
  v2 = dword_245174;
  v3 = *(_QWORD *)(a1 + 32LL * dword_245174 + 8);
  result = (_QWORD *)dbg;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v6 = qword_252758;
      if ( qword_252758 )
      {
        *(_QWORD *)qword_252758 = v3;
        v6[1] = a1;
        *((_DWORD *)v6 + 4) = v2;
        result = (_QWORD *)sub_CDCF0((__int64)v6, 11);
        if ( (_DWORD)result != 1 )
        {
          qword_245188 = -1;
          goto LABEL_6;
        }
        result = qword_252758;
        v3 = *(_QWORD *)qword_252758;
      }
    }
  }
  qword_245188 = v3;
  if ( v3 != -1 )
  {
    if ( getseg() || (sub_D1B30(1), result = (_QWORD *)is_mapped(), (_BYTE)result) )
      result = (_QWORD *)sub_C4700(v3);
  }
LABEL_6:
  if ( dword_252588 )
  {
    result = (_QWORD *)qword_252590;
    v5 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( qword_252590 != v5 )
    {
      while ( dword_252588 != *(_DWORD *)result )
      {
        result += 32;
        if ( (_QWORD *)v5 == result )
          return result;
      }
      if ( result )
      {
        result = (_QWORD *)sub_D1F80(result[5], 0);
        qword_245178 = (__int64)result;
      }
    }
  }
  return result;
}

