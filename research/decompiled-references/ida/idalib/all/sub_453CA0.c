__int64 __fastcall sub_453CA0(__int64 a1, int a2, _QWORD *a3, unsigned __int8 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(result + 12) & 1) != 0 )
    return sub_508600((int)a1 + 2520, a2, *a3, (unsigned int)a3[1] - (unsigned int)*a3, a4, 0, 0);
  return result;
}
