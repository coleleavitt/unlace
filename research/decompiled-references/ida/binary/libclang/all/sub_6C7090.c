unsigned __int64 __fastcall sub_6C7090(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rcx

  result = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  if ( (byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v3 = (_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_DWORD *)((_BYTE *)&qword_18 + (_QWORD)v3) & 0x1C0) != 0 )
    {
      if ( (*(__int64 *)((char *)&qword_18 + (result & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFE3FLL | result & 7) > 7 )
        return sub_6C3980(
                 a1,
                 *v3 & 0xFFFFFFFFFFFFFFF0LL,
                 *(__int64 *)((char *)&qword_18 + (result & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFE3FLL | result & 7);
      else
        return *(_DWORD *)((_BYTE *)&qword_18 + (result & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE3F
             | result & 7
             | *v3 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  return result;
}

