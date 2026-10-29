__int64 __fastcall sub_533780(__int64 a1, void **a2, unsigned __int64 *a3, const char *a4)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 32) && ((*(_BYTE *)(a1 + 69) & 0x40) == 0 || *(_DWORD *)(a1 + 16) == -1) )
  {
    if ( !under_debugger )
      interr(3047);
    BUG();
  }
  result = sub_521820(a2, a3, nullptr, 0, nullptr, 1029, (__int64)a4);
  if ( !(_DWORD)result )
  {
    sub_52C720((__int64)a2, a4);
    return 0;
  }
  return result;
}

