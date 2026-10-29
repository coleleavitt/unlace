__int64 __fastcall sub_9C6740(__int64 a1, __int64 a2, _BYTE *a3, double a4)
{
  __int64 result; // rax

  sub_1591740(a2);
  while ( 1 )
  {
    result = *(unsigned int *)(*(_QWORD *)(a1 + 336) + 124LL);
    if ( *(_DWORD *)(a2 + 224) >= (unsigned int)result )
      break;
    result = sub_8E6FA0(*(_QWORD *)(a1 + 16));
    if ( (_BYTE)result )
      break;
    result = sub_1598CB0(a2);
    if ( (_BYTE)result )
      return result;
  }
  if ( !*a3 )
  {
    result = sub_9C6560(a1, a2, a4);
    *a3 = 1;
  }
  return result;
}

