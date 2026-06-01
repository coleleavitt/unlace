_DWORD *__fastcall sub_786880(__int64 a1)
{
  _DWORD *result; // rax
  __int64 (__fastcall *v2)(); // rdx

  result = *(_DWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *(__int64 (__fastcall **)())(*(_QWORD *)result + 80LL);
    if ( v2 == sub_7885F0 )
      ++result[74];
    else
      return (_DWORD *)((__int64 (__fastcall *)(_QWORD))v2)(*(_QWORD *)a1);
  }
  else
  {
    ++*(_DWORD *)(a1 + 8);
  }
  return result;
}

