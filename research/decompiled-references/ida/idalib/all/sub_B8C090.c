bool __fastcall sub_B8C090(_BYTE *a1)
{
  _BYTE *v1; // rbx
  bool result; // al

  v1 = a1;
  while ( (a1[29] & 8) == 0 )
  {
    a1 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 40LL))(a1);
    result = a1 != nullptr && v1 != a1;
    if ( !result )
      return result;
  }
  return 1;
}
