__int64 __fastcall sub_177D420(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax

  v7 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a5, a6, a7);
  if ( v7 == 1 )
    return 1;
  else
    return sub_1C39E40(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v7 & 0xFFFFFFFFFFFFFFFELL, 0);
}
