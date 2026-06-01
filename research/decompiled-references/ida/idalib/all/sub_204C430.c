bool __fastcall sub_204C430(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 80LL);
  if ( v1 )
    v1 -= 24;
  return a1 == v1;
}
