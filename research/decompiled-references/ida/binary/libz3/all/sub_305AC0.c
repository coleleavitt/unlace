__int64 __fastcall sub_305AC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *exception; // rbx

  sub_DFBCB0(a2);
  result = sub_15D2CB0(*(_QWORD *)(a2 + 296), a3);
  if ( !(_BYTE)result )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "Invalid type for expression. Expected Boolean type.");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  ++*(_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = a3;
  return result;
}

