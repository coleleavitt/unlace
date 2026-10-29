__int64 __fastcall sub_7F0DA0(__int64 a1, char a2)
{
  _BYTE *v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 8) = a2;
  v2 = *(_BYTE **)a1;
  result = *(_QWORD *)(*(_QWORD *)v2 + 440LL);
  if ( (__int64 (__fastcall *)(__int64))result == sub_79F010 )
  {
    v2[1929] = a2 ^ 1;
  }
  else
  {
    result = ((__int64 (*)(void))result)();
    *(_BYTE *)(result + 337) = a2 ^ 1;
  }
  return result;
}

