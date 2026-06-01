__int64 __fastcall sub_CCEC0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _DWORD *v3; // rsi
  _DWORD *v4; // rax
  unsigned int v5; // [rsp+Ch] [rbp-Ch]

  if ( dword_2515A4 <= 0 )
  {
    if ( dword_251408 )
    {
      v3 = (_DWORD *)qword_251410;
      v4 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
      if ( (_DWORD *)qword_251410 != v4 )
      {
        do
        {
          if ( dword_251408 == *v3 )
            break;
          v3 += 58;
        }
        while ( v4 != v3 );
      }
    }
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    return 1;
  }
  else
  {
    v1 = qword_251198;
    result = 1;
    if ( qword_251198 )
    {
LABEL_3:
      a1[1] = v1;
      qword_251198 = (__int64)a1;
      return result;
    }
    result = sub_CC780((__int64)qword_2515B0, 12);
    if ( (int)result > 0 )
    {
      v1 = qword_251198;
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

