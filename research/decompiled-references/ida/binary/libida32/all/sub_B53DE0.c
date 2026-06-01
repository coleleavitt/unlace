unsigned __int64 __fastcall sub_B53DE0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( ((*(__int64 *)(a1 + 152) >> 1) & 3) == 2 )
      return v3;
  }
  return result;
}

