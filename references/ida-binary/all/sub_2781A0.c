__int64 __fastcall sub_2781A0(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 112);
  if ( result )
  {
    v2 = *(_QWORD *)(a1 + 120);
    if ( v2 >= *(_QWORD *)(result + 104) )
      return 0;
    else
      return *(_QWORD *)(result + 96) + 32 * v2;
  }
  return result;
}
