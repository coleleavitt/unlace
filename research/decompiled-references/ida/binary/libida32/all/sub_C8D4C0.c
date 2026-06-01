__int64 __fastcall sub_C8D4C0(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 552); i; i = (_QWORD *)i[2] )
    result = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  return result;
}

