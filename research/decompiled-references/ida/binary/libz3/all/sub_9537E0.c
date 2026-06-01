__int64 __fastcall sub_9537E0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)a1 + 1184LL);
  if ( result )
    result += 8LL * *(unsigned int *)(result - 4);
  return result;
}

