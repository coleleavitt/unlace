__int64 *__fastcall sub_2EB5F0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rsi
  void *v6; // rdi
  _BYTE *v7; // r12
  signed __int64 v8; // rbp
  __int64 v9; // rax

  if ( !(unsigned __int8)sub_18290A0(a2[1]) )
  {
    sub_2EB560(a1, (const char *)off_1C7E180);
    return a1;
  }
  v4 = a2[29];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64 *))(*(_QWORD *)v4 + 48LL))(a1);
    return a1;
  }
  v6 = a1 + 2;
  *a1 = (__int64)(a1 + 2);
  v7 = (_BYTE *)a2[97];
  v8 = a2[98];
  if ( (unsigned __int64)v8 > 0xF )
  {
    if ( v8 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v8 + 1 < 0 )
      std::__throw_bad_alloc();
    v9 = operator new(v8 + 1);
    a1[2] = v8;
    *a1 = v9;
    v6 = (void *)v9;
    goto LABEL_13;
  }
  if ( v8 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v7;
    goto LABEL_8;
  }
  if ( v8 )
  {
LABEL_13:
    memcpy(v6, v7, v8);
    v6 = (void *)*a1;
  }
LABEL_8:
  a1[1] = v8;
  *((_BYTE *)v6 + v8) = 0;
  return a1;
}

