__int64 __fastcall sub_4C64F0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 result; // rax

  if ( !*a2 )
  {
    sub_4CED80(a3, 0);
    return 1;
  }
  v4 = *(unsigned int *)(*a2 - 4LL);
  sub_4CED80(a3, v4);
  if ( !(_DWORD)v4 )
    return 1;
  v5 = 8 * v4;
  v6 = 0;
  while ( 1 )
  {
    result = sub_16256D0(*(_QWORD *)(a1 + 8) + 56LL, *(_QWORD *)(*a2 + v6), v6 + *a3);
    if ( !(_BYTE)result )
      break;
    v6 += 8;
    if ( v5 == v6 )
      return 1;
  }
  return result;
}

