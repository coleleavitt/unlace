__int64 __fastcall sub_112B4F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_12CCD10(a2, a3);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) == 4 && (_DWORD)result == 41 )
    return 40;
  return result;
}
