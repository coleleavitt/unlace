__int64 __fastcall sub_14108B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  if ( *(_DWORD *)(a2 + 8) )
    sub_14078B0(a1, a2);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  result = *(unsigned __int8 *)(a2 + 100);
  *(_BYTE *)(a1 + 100) = result;
  return result;
}
