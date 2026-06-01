__int64 __fastcall sub_2AE7C0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 440);
  result = 0;
  if ( (unsigned __int64)a2 < *(_QWORD *)(v2 + 24) )
    return *(unsigned int *)(*(_QWORD *)(v2 + 16) + 24LL * a2 + 8);
  return result;
}
