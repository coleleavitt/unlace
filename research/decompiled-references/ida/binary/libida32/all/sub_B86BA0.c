__int64 __fastcall sub_B86BA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // r12
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx

  v6 = a1[5] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a1[5] & 7) != 0 )
    v6 = 0;
  result = (__int64)a1;
  if ( a2 == v6 )
    return result;
  v8 = a1[13];
  if ( v8 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v9 )
      return 0;
    goto LABEL_6;
  }
  sub_A55AE0((__int64 *)(a1[12] + 88LL), a1[12], v6, a4, a5, a6);
  v9 = a1[13] & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
  {
LABEL_6:
    v10 = *(__int64 **)(v9 + 8);
    v11 = &v10[*(unsigned int *)(v9 + 16)];
    goto LABEL_7;
  }
  if ( a1[13] )
    return 0;
  sub_A55AE0((__int64 *)(a1[12] + 88LL), a1[12], 0, v13, a5, a6);
  if ( (a1[13] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v10 = *(__int64 **)((a1[13] & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v11 = nullptr;
LABEL_7:
  if ( v11 == v10 )
    return 0;
  while ( 1 )
  {
    result = *v10;
    v12 = *(_QWORD *)(*v10 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*v10 + 40) & 7) != 0 )
      v12 = 0;
    if ( a2 == v12 )
      break;
    result = sub_B86AE0(*v10, a2, v12, *(_QWORD *)(*v10 + 40) & 7LL, a5, a6);
    if ( result )
      break;
    if ( v11 == ++v10 )
      return 0;
  }
  return result;
}

