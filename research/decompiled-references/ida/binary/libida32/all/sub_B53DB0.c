unsigned __int64 __fastcall sub_B53DB0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 && ((v1 >> 1) & 3) == 2 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 )
      return *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  }
  return result;
}

