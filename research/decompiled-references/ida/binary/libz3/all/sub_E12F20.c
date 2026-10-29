void __fastcall sub_E12F20(_QWORD *a1, __int64 a2, char *a3)
{
  __int64 v3; // rax
  _QWORD *exception; // rbx

  v3 = a1[26];
  if ( a1[15] == v3 )
  {
    sub_E04ED0(a2 + 336, a3);
  }
  else if ( v3 == a1[16] )
  {
    sub_E052D0(a2, a3);
  }
  else
  {
    if ( v3 == a1[5]
      || v3 == a1[6]
      || v3 == a1[7]
      || v3 == a1[8]
      || v3 == a1[9]
      || v3 == a1[10]
      || v3 == a1[11]
      || v3 == a1[12]
      || v3 == a1[13]
      || v3 == a1[17]
      || v3 == a1[18]
      || v3 == a1[19]
      || v3 == a1[20]
      || v3 == a1[14]
      || v3 == a1[24] )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "option value is not a string");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    sub_17FBCF0(a1 + 26, a3);
    sub_1808490();
    sub_DF7AE0(a2);
  }
}

