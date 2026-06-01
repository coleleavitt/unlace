__int64 __fastcall sub_E12A30(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  _QWORD *exception; // rbx

  result = a1[3];
  if ( result )
  {
    if ( a1[4] == result )
    {
      result = *a3;
      if ( *a3 == a1[5] )
      {
        *(_DWORD *)(a2 + 268) = 0;
      }
      else if ( result == a1[6] )
      {
        *(_DWORD *)(a2 + 268) = 1;
      }
      else
      {
        if ( result != a1[7] )
        {
          exception = __cxa_allocate_exception(0x30u);
          sub_305660(exception, "invalid ':status' attribute");
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        *(_DWORD *)(a2 + 268) = 2;
      }
    }
  }
  else
  {
    result = *a3;
    a1[3] = *a3;
  }
  return result;
}

