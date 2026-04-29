__int64 __fastcall sub_1502B0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_BYTE *)(a1 + 48) == 2 )
  {
    *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 16LL);
    return 1;
  }
  return result;
}
