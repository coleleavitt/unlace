__int64 __fastcall sub_1747590(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( v2 )
    return sub_18C3650(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v2);
  else
    return 1;
}
