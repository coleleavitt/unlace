_DWORD *__fastcall sub_69BF00(__int64 *a1, unsigned int a2, char a3)
{
  _DWORD *result; // rax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx

  sub_69B2A0(a1, a2, 0, a3 ^ 1);
  result = sub_518BB0(*(_QWORD *)(*a1 + 1680), a2);
  if ( result )
  {
    v5 = result[5];
    v6 = v5 | 8;
    v7 = v5 & 0xFFFFFFF7;
    if ( a3 )
      v6 = v7;
    result[5] = v6;
  }
  return result;
}

