__int64 __fastcall sub_BC8060(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  unsigned int v6; // r13d
  int v7; // r14d
  int v8; // r12d
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r14
  _QWORD *v18; // rax
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+10h] [rbp-68h]
  __m128i v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+40h] [rbp-38h]

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 224);
  if ( (char *)v3 != (char *)sub_BA1BB0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6032);
  if ( v4 != sub_BA3330 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 6048);
  if ( v5 != sub_BA3350 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 96))(a1, *(_QWORD *)(a2 + 48));
  if ( !(_BYTE)v6 )
    return 0;
  v7 = *(_DWORD *)(a2 + 20);
  v8 = 0;
  if ( v7 )
  {
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v8))) )
    {
      if ( v7 == ++v8 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  v10 = *(_DWORD *)(a2 + 16);
  if ( v10 )
  {
    v11 = 0;
    v12 = 8LL * (unsigned int)(v10 - 1) + 8;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a2 + 56) + v11)) )
    {
      v11 += 8;
      if ( v12 == v11 )
        goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v13 = *(_DWORD *)(a2 + 24);
  if ( v13 )
  {
    v14 = 0;
    v15 = 8LL * (unsigned int)(v13 - 1) + 8;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a2 + 64) + v14)) )
    {
      v14 += 8;
      if ( v14 == v15 )
        goto LABEL_27;
    }
    return 0;
  }
LABEL_27:
  sub_EC6110(&v21, a2);
  v16 = v23;
  v17 = v24;
  v19 = _mm_load_si128(&v21);
  v20 = v22;
  while ( 1 )
  {
    v18 = (_QWORD *)v19.m128i_i64[0];
    if ( __PAIR128__(v17, v16) == *(_OWORD *)&v19 )
      break;
    if ( (v19.m128i_i8[8] & 3) != 0 )
      v18 = (_QWORD *)sub_ECEDF0(&v19);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v18) )
      return 0;
    sub_BC8020(&v19);
  }
  return v6;
}

