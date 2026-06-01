__int64 __fastcall sub_177D0F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rax
  __int64 v9; // r12
  __int64 v10; // rax

  v7 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 16), a3, a7, a4, a5, a6);
  if ( v7 == 1 )
    return 1;
  v9 = v7;
  v10 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 8));
  if ( !v10 )
    return 1;
  if ( v10 == *(_QWORD *)(a2 + 8) )
    *(_QWORD *)(v10 + 48) = 0;
  return sub_1C3E300(*a1, *(unsigned int *)(a2 + 4), v10, 0, v9 & 0xFFFFFFFFFFFFFFFELL);
}
