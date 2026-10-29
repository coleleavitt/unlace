unsigned __int64 __fastcall sub_B734D0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 136);
  result = 0;
  if ( v1 )
  {
    if ( (v1 & 4) != 0 )
      return v1 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return result;
}

