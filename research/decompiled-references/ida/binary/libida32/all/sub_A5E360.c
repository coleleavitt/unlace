unsigned __int64 __fastcall sub_A5E360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 result; // rax

  v6 = *(_QWORD *)(a2 + 104);
  if ( v6 )
    result = v6 & 0xFFFFFFFFFFFFFFF0LL;
  else
    result = sub_A5E200(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(a1 + 1600) = result;
  return result;
}

