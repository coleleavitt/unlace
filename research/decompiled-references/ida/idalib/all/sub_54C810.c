__int64 __fastcall sub_54C810(__int64 a1, void **a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 32) && ((*(_BYTE *)(a1 + 69) & 0x40) == 0 || *(_QWORD *)(a1 + 16) == -1) )
  {
    if ( !under_debugger )
      interr(3047);
    BUG();
  }
  result = sub_53A4F0(a2, a3, nullptr, 0, nullptr, 1029, a4);
  if ( !(_DWORD)result )
  {
    sub_5455F0((__int64)a2, a4);
    return 0;
  }
  return result;
}
