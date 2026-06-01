__int64 __fastcall sub_215E310(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(a2 + 12);
  if ( v2 )
  {
    result += *(unsigned int *)(v2 + 28);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
      result += *(_QWORD *)(v4 + 24);
  }
  return result;
}
