unsigned __int64 __fastcall sub_B77C50(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (((unsigned __int8)*(_QWORD *)(a1 + 152) ^ 6) & 6) == 0 )
      return v3;
  }
  return result;
}
