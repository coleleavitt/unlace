__int64 __fastcall sub_15F2350(__int64 *a1, _BYTE *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( (a2[8] & 7) != 0 )
  {
    --*(_DWORD *)(result + 84);
    if ( (a2[8] & 7) != 0 )
      return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 8LL))(a2);
    result = *a1;
  }
  if ( *(_QWORD *)(result + 24) )
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(result + 24) = a2;
  return result;
}
