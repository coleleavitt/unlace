__int64 __fastcall sub_1410940(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x200000000LL;
  result = (unsigned int)a2[4];
  if ( (_DWORD)result )
    return sub_14078B0(a1 + 8, (__int64)(a2 + 2));
  return result;
}
