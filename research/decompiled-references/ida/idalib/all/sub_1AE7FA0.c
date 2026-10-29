__int64 __fastcall sub_1AE7FA0(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rax

  v4 = *(_QWORD *)(a3 + 248);
  if ( (unsigned int)sub_A97D20(v4, *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)) >= a1 )
    return a2;
  v6 = sub_A64980(v4, a1, 1);
  return sub_1BFA490(a3, a2, v6, 3, 1);
}
