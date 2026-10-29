__int64 __fastcall sub_20CFBF0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
    return a1;
  *(_BYTE *)(a1 + 32) = 1;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  *(_BYTE *)(a1 + 32) = 0;
  return result;
}
