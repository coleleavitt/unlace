__int64 __fastcall sub_872170(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 32LL);
  *(_QWORD *)(v1 + 8) = result;
  if ( result )
    *(_QWORD *)(result + 40) = 0;
  return result;
}

