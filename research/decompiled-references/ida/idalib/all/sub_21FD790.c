__int64 __fastcall sub_21FD790(_BYTE *a1, __int64 a2, char a3, char a4)
{
  __int64 result; // rax
  int v8; // eax

  result = sub_21FD640((__int64)a1, a2, a4);
  if ( (_DWORD)result == 2 )
  {
    v8 = sub_21FA1B0((__int64)a1, a2, a4);
    result = sub_21FAF10((__int64)a1, a3, v8);
  }
  if ( (a1[20] & 7) == 3 )
  {
    if ( (*(_BYTE *)(a2 + 20) & 7) != 3 || ((((unsigned __int8)(*(_BYTE *)(a2 + 20) ^ a1[20]) >> 3) ^ 1) & 1) == a4 )
      a1[20] = (8 * (a3 == 3)) | a1[20] & 0xF7;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 20LL) == 2 )
      a1[20] &= ~8u;
  }
  return result;
}
