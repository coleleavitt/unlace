__int64 __fastcall sub_6BF020(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 2096) )
  {
    v2 = *(_QWORD *)(a1 + 2104);
    result = a2 | *(_QWORD *)(v2 + 48) & 7LL;
    *(_QWORD *)(v2 + 48) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 2096) = a2;
  }
  *(_QWORD *)(a1 + 2104) = a2;
  return result;
}

