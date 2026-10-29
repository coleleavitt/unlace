char __fastcall Z3_del_config(_QWORD *ptr)
{
  char v2; // bp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  char result; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_294AC0();
    if ( !ptr )
    {
LABEL_12:
      result = byte_1C7EBA0;
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else if ( !ptr )
  {
    return result;
  }
  v3 = (_QWORD *)ptr[11];
  if ( v3 != ptr + 13 )
    operator delete(v3, ptr[13] + 1LL);
  v4 = (_QWORD *)ptr[5];
  if ( v4 != ptr + 7 )
    operator delete(v4, ptr[7] + 1LL);
  v5 = (_QWORD *)ptr[1];
  if ( v5 != ptr + 3 )
    operator delete(v5, ptr[3] + 1LL);
  result = sub_186B220(ptr);
  if ( v2 )
    goto LABEL_12;
  return result;
}

