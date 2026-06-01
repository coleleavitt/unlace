__int64 __fastcall sub_B77A0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = -1;
  if ( a2 < *(_QWORD *)(a1 + 232) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 224) + 32 * a2);
  return result;
}

