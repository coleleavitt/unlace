__int64 __fastcall sub_367620(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = **(char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}
