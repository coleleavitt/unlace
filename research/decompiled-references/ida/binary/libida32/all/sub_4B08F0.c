__int64 __fastcall sub_4B08F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 1480);
  v5 = *(_QWORD *)(v4 + 2336);
  v6 = v5 - 1;
  result = v5 + 1;
  if ( !a3 )
    result = v6;
  *(_QWORD *)(v4 + 2336) = result;
  return result;
}

