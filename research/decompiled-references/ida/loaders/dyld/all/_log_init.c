__int64 __fastcall log_init(__int64 a1)
{
  __int64 result; // x0

  __g = a1;
  dword_A81B4 = *(_DWORD *)(a1 + 32);
  result = _open_console();
  dword_A81B0 = result;
  qword_A81B8 = *(_QWORD *)(a1 + 16);
  return result;
}
