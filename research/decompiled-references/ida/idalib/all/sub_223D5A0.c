__int64 __fastcall sub_223D5A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // eax
  int v13; // eax
  __int64 *v14; // rsi
  __int64 *v15; // r12
  __int64 v16; // r15
  unsigned int v17; // eax
  int v18; // eax
  __int64 *v19; // rbp
  _QWORD *v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v27[8]; // [rsp+18h] [rbp-40h] BYREF

  v12 = sub_2244B30(a3, a4);
  v13 = sub_2244E60(a2, a3, a4, v12);
  if ( v13 == -1 )
    v14 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
  else
    v14 = (__int64 *)(*(_QWORD *)a2 + 8LL * v13);
  sub_FCF0E0(v27, v14, 1);
  v15 = v27[0];
  sub_FCF0E0(v27, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
  if ( v27[0] == v15 )
    return 0;
  v16 = *v15;
  v17 = sub_2244B30(a7, a8);
  v18 = sub_2244E60(v16 + 8, a7, a8, v17);
  if ( v18 == -1 )
    sub_FCF120(v27, (__int64 *)(*(_QWORD *)(v16 + 8) + 8LL * *(unsigned int *)(v16 + 16)), 1);
  else
    sub_FCF120(v27, (__int64 *)(*(_QWORD *)(v16 + 8) + 8LL * v18), 1);
  v19 = v27[0];
  sub_FCF120(v27, (__int64 *)(*(_QWORD *)(*v15 + 8) + 8LL * *(unsigned int *)(*v15 + 16)), 1);
  if ( v27[0] == v19 )
    return 0;
  v20 = (_QWORD *)*v19;
  v21 = *(_QWORD *)(*v19 + 8);
  v22 = v20[2];
  if ( v21 == v22 )
  {
LABEL_15:
    v24 = v20[4];
    v25 = v20[5];
    if ( v24 != v25 )
    {
      while ( !(unsigned __int8)sub_2233DC0(*(_QWORD *)(v25 - 16), a5, a6, 0, nullptr) )
      {
        v25 -= 16;
        if ( v24 == v25 )
          return 0;
      }
      return *(unsigned int *)(v25 - 8);
    }
    return 0;
  }
  while ( !sub_22244B0(*(_QWORD *)(v22 - 8) + 40LL, a5, a6) )
  {
    v22 -= 8;
    if ( v21 == v22 )
      goto LABEL_15;
  }
  return *(unsigned int *)(*(_QWORD *)(v22 - 8) + 32LL);
}
