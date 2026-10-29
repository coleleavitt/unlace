_BYTE *__fastcall Z3_set_error(__int64 a1, unsigned int a2)
{
  _BYTE *result; // rax

  *(_DWORD *)(a1 + 1520) = a2;
  if ( a2 )
  {
    result = *(_BYTE **)(a1 + 1536);
    *(_QWORD *)(a1 + 1544) = 0;
    *result = 0;
    if ( *(_QWORD *)(a1 + 1528) )
    {
      sub_2BC170();
      return (_BYTE *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 1528))(a1, a2);
    }
  }
  return result;
}

