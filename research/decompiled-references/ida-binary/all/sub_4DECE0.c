__int64 __fastcall sub_4DECE0(_DWORD *a1)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)a1 + 1680LL) &= ~a1[2];
  result = (unsigned int)(a1[2] & a1[3]);
  *(_DWORD *)(*(_QWORD *)a1 + 1680LL) |= result;
  return result;
}
