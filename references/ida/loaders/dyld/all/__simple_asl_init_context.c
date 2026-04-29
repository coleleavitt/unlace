__int64 __fastcall _simple_asl_init_context(__int64 result)
{
  *(_QWORD *)(result + 8) = "unknown";
  *(_DWORD *)(result + 16) = -1;
  return result;
}
