__int64 __fastcall sub_1C153F0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = *a1;
  if ( a3 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 96) + 8LL * (unsigned int)(a3 - 1));
  else
    return *(_QWORD *)(v3 + 88);
}
