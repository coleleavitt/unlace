unsigned __int64 __fastcall sub_79A330(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(sub_79A2E0(a1) + 16);
  result = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    return *(_QWORD *)result;
  return result;
}

