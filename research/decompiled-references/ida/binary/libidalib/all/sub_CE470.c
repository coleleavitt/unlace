__int64 __fastcall sub_CE470(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _DWORD *v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // [rsp+Ch] [rbp-Ch]

  if ( dword_25274C <= 0 )
  {
    if ( dword_252588 )
    {
      v3 = (_DWORD *)qword_252590;
      v4 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
      if ( qword_252590 != v4 )
      {
        do
        {
          if ( dword_252588 == *v3 )
            break;
          v3 += 64;
        }
        while ( (_DWORD *)v4 != v3 );
      }
    }
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    return 1;
  }
  else
  {
    v1 = qword_252278;
    result = 1;
    if ( qword_252278 )
    {
LABEL_3:
      a1[1] = v1;
      qword_252278 = (__int64)a1;
      return result;
    }
    result = sub_CDCF0((__int64)qword_252758, 12);
    if ( (int)result > 0 )
    {
      v1 = qword_252278;
      goto LABEL_3;
    }
    if ( a1 )
    {
      v5 = result;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
      return v5;
    }
  }
  return result;
}

