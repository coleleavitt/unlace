__int64 __fastcall try_get_decompiler_call_info(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a2 + 8) == 57 && *(_QWORD *)a2 == *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 72) = a2;
    return 1;
  }
  return result;
}
