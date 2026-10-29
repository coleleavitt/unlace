_QWORD *__fastcall sub_868B50(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 80);
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned __int64)(v3 + a2) <= 0xFF0 )
  {
    *(_QWORD *)(v2 + 8) = v3 + a2;
    return (_QWORD *)(v2 + v3 + 16);
  }
  else
  {
    result = (_QWORD *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                         4096,
                         *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
    if ( result )
    {
      *result = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = result;
      result += 2;
      *(result - 1) = a2;
    }
    else
    {
      *(_DWORD *)a1 = 2;
    }
  }
  return result;
}
