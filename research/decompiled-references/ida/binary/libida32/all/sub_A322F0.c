__int64 __fastcall sub_A322F0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result == *(_QWORD *)(a1 + 32) )
    return 0;
  return result;
}

