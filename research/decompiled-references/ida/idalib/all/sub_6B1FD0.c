__int64 __fastcall sub_6B1FD0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  v2 = (unsigned int)(a2 - 7);
  result = 0;
  if ( v2 < *(_QWORD *)(a1 + 2776) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 2768) + 8LL * (int)v2);
  return result;
}
