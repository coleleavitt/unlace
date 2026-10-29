__int64 __fastcall sub_1479960(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 2944) + a2;
  if ( v2 >= *(unsigned int *)(a1 + 2912) )
    return sub_14180A0(a1, a2 + 1);
  else
    return *(_QWORD *)(a1 + 2904) + 24 * v2;
}
