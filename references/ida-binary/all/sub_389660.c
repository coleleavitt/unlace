__int64 __fastcall sub_389660(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a2 + 24);
  LOBYTE(a4) = v4 < v5;
  if ( v4 == v5 )
    LOBYTE(a4) = *(_QWORD *)(a1 + 40) < *(_QWORD *)(a2 + 40);
  return a4;
}
