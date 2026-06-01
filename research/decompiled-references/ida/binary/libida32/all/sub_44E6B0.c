__int64 __fastcall sub_44E6B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( a3 >= *(_QWORD *)(a2 + 48) || (v4 = *(__int64 **)(*(_QWORD *)(a2 + 40) + 8 * a3)) == nullptr )
  {
    if ( !under_debugger )
      interr(2662);
    BUG();
  }
  v5 = sub_44E340(*(unsigned int *)(a1 + 8), (const char *)*(unsigned int *)(a2 + 8), v4);
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 8 * a3) = v5;
  return result;
}

