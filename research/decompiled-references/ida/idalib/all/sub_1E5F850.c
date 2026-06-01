unsigned __int64 __fastcall sub_1E5F850(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    return sub_A76250(*(_QWORD *)(a1 + 248), a2, *(_QWORD *)(a3 + 8), a4, a5);
  else
    return a4;
}
