__int64 __fastcall sub_21FD230(__int64 *a1)
{
  __int64 result; // rax
  int v3; // eax
  _QWORD *v4; // rdi

  result = *a1;
  if ( *(_DWORD *)(*a1 + 16) != 1 )
  {
    v3 = *(_DWORD *)(result + 8);
    v4 = a1 + 1;
    if ( (unsigned int)(v3 + 64) > 0x7F )
      v4 = (_QWORD *)a1[1];
    return sub_2209800(v4, (unsigned int)(v3 - 2));
  }
  return result;
}
