_QWORD *__fastcall get_server_connection2(int a1)
{
  int v1; // esi
  void **v2; // rbx
  _QWORD *result; // rax

  v1 = a1 & 0x7FFFFFFF;
  if ( (a1 & 0x7FFFFFFF) == 2 )
  {
    v2 = &qword_2CAA8C8;
  }
  else if ( (a1 & 0x7FFFFFFFu) > 2 )
  {
    result = nullptr;
    v2 = &qword_2CAA8D8;
    if ( v1 != 3 )
      return result;
  }
  else
  {
    v2 = &qword_2CAA8E0;
    if ( v1 )
      v2 = &qword_2CAA8D0;
  }
  result = *v2;
  if ( !*v2 && a1 >= 0 )
  {
    sub_7B3600((_QWORD **)v2, v1, nullptr);
    return *v2;
  }
  return result;
}

