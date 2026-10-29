__int64 __fastcall sub_647B0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_QWORD *)(a1 + 80) )
    return *(unsigned int *)(*(_QWORD *)(a1 + 72) + 24LL * a2 + 8);
  return result;
}
