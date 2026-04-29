__int64 __fastcall _flush_reset(_QWORD *a1)
{
  __int64 result; // x0

  result = _flush(a1);
  a1[1] = *a1;
  return result;
}
