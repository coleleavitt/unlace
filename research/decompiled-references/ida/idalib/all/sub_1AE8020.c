__int64 __fastcall sub_1AE8020(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r12

  v3 = 16 * a3;
  v4 = a2 + v3;
  if ( a2 == a2 + v3 )
    return 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 - 8) + 32LL))(*(_QWORD *)(v4 - 8));
  if ( v5 != (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1) )
    return 0;
  *(_QWORD *)a1[1] = *(_QWORD *)(v4 - 16) & 0xFFFFFFFFFFFFFFFCLL;
  return 1;
}
