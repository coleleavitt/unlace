_QWORD *__fastcall sub_6BC950(__int64 *a1, unsigned __int64 a2, char a3)
{
  _QWORD *result; // rax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx

  sub_6BBC80(a1, a2, 0, a3 ^ 1);
  result = sub_5310F0(*(_QWORD *)(*a1 + 1872), a2);
  if ( result )
  {
    v5 = *((_DWORD *)result + 7);
    v6 = v5 | 8;
    v7 = v5 & 0xFFFFFFF7;
    if ( a3 )
      v6 = v7;
    *((_DWORD *)result + 7) = v6;
  }
  return result;
}
