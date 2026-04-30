__int64 __fastcall sub_3CFD50(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 128);
  result = -1;
  if ( (unsigned __int64)a2 < *(_QWORD *)(v2 + 272) )
    return *(_QWORD *)(*(_QWORD *)(v2 + 264) + 16LL * a2 + 8);
  return result;
}
