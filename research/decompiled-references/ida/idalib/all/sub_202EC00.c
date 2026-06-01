__int64 __fastcall sub_202EC00(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 == *(_QWORD *)(a1 + 24) )
    return 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(v1 + 8);
  return 1;
}
