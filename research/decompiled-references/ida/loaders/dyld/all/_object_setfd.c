__int64 __fastcall object_setfd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x21
  __int64 result; // x0

  v5 = a2 + 16LL * *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)v5 )
    closefd(v5 + 8, "object");
  *(_QWORD *)v5 = a1;
  result = xferfd(a3);
  *(_DWORD *)(v5 + 8) = result;
  return result;
}
