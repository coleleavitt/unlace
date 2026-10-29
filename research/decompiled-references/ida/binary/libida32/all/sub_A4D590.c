unsigned __int64 __fastcall sub_A4D590(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  if ( (byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
    && (*(_DWORD *)((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) != 0 )
  {
    return sub_A4D1E0(
             a1,
             *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL,
             *(__int64 *)((char *)&qword_18 + (result & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFE3FLL | result & 7);
  }
  return result;
}

