char __fastcall sub_1A5DB10(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v9 = *(_QWORD *)(a4 + 8);
  if ( !v9 || (unsigned int)sub_E90000(*(_QWORD *)(a4 + 8)) != 5 )
    return sub_1A5C990(a1, a2, a3, a4, a7, a8, a5, a6);
  v11 = sub_E900C0(v9);
  return sub_1A5CFC0(a1, a2, v11, v12, v13, v14);
}
