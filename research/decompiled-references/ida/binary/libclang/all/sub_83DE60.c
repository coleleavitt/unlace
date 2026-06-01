bool __fastcall sub_83DE60(__int64 a1)
{
  __int64 v1; // rdi
  bool result; // al

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  result = 1;
  if ( (*(_BYTE *)(v1 + 82) & 0xC) == 0 )
    return (unsigned int)sub_7A5910(v1) != 0;
  return result;
}

