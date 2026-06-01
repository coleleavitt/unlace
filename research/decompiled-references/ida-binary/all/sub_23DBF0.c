__int64 __fastcall sub_23DBF0(_QWORD *a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v5; // rdx
  __int64 result; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // [rsp+Ch] [rbp-Ch]

  if ( dword_8CC5F0 <= 0 )
  {
    if ( (_DWORD)dword_8CC428 )
    {
      v7 = (_DWORD *)qword_8CC430;
      v8 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
      if ( qword_8CC430 != v8 )
      {
        do
        {
          if ( (_DWORD)dword_8CC428 == *v7 )
            break;
          v7 += 64;
        }
        while ( (_DWORD *)v8 != v7 );
      }
    }
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    return 1;
  }
  else
  {
    v5 = qword_8CC108;
    result = 1;
    if ( qword_8CC108 )
    {
LABEL_3:
      a1[1] = v5;
      qword_8CC108 = (__int64)a1;
      return result;
    }
    result = sub_23D480((__int64)qword_8CC600, 12, 0, a5, a2);
    if ( (int)result > 0 )
    {
      v5 = qword_8CC108;
      goto LABEL_3;
    }
    if ( a1 )
    {
      v9 = result;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
      return v9;
    }
  }
  return result;
}
