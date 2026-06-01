__int64 __fastcall sub_ECA3F0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( result )
    return *(_QWORD *)(result + 8);
  return result;
}

