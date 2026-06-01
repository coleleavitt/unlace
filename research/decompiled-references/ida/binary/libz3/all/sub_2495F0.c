__int64 __fastcall sub_2495F0(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1C4C9C8;
  result = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)result )
    result = sub_18296D0(*(_QWORD *)(a1 + 64));
  if ( *(_BYTE *)(a1 + 57) )
    sub_1829760(*(_QWORD *)(a1 + 64));
  return result;
}

