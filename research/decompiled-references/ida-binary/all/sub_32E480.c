char __fastcall sub_32E480(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  char result; // al

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v2 + 1;
  if ( v2 > 0x3E7 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    result = sub_541EF0(a1, a2, v2 + 1);
    *(_BYTE *)a2 = result;
  }
  else
  {
    result = *(_BYTE *)a2;
  }
  if ( !result && (a1 & 0x400) != 0 )
  {
    result = 1;
    if ( (~(_WORD)a1 & 0x600) != 0 )
      return (((unsigned int)a1 ^ *(_DWORD *)(a2 + 16)) & 0xF0000000) != 0;
  }
  return result;
}
