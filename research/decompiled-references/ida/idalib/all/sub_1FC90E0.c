__int64 __fastcall sub_1FC90E0(_DWORD *a1, __int64 a2)
{
  int v2; // ecx
  __int64 result; // rax

  sub_1FC8DF0((__int64)a1, a2);
  v2 = a1[59];
  a1[58] |= ((*(_QWORD *)a2 >> 26) & 1) << v2;
  a1[59] = v2 + 1;
  result = *(unsigned int *)(a2 + 4);
  if ( !(_DWORD)result )
  {
    result = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0x8000000) == 0 )
    {
      result = *(unsigned int *)(*(_QWORD *)a1 + 3560LL);
      a1[57] = result;
    }
  }
  a1[56] = 191;
  return result;
}
