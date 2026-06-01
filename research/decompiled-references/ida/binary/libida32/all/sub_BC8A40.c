__int64 __fastcall sub_BC8A40(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rax
  _QWORD *v6; // rbx
  __int64 v7; // r12
  unsigned int v8; // ebx
  __int64 v10; // r12
  __int64 v11; // r13
  _QWORD *v12; // rax
  _QWORD *v13; // [rsp+8h] [rbp-80h] BYREF
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h]
  __m128i v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]

  v2 = (_QWORD *)*a1;
  v13 = a1;
  v3 = (unsigned __int8 (*)(void))v2[28];
  if ( (char *)v3 != (char *)sub_BA1BB0 )
  {
    if ( !v3() )
      return 0;
    a1 = v13;
    v2 = (_QWORD *)*v13;
  }
  v4 = (__int64 (*)())v2[633];
  if ( v4 != sub_BA2BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
      return 0;
    a1 = v13;
    v2 = (_QWORD *)*v13;
  }
  v5 = (__int64 (*)())v2[634];
  if ( v5 != sub_BA2BB0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2)
    || *(_QWORD *)(a2 + 56) && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v13 + 96LL))(v13) )
  {
    return 0;
  }
  v6 = (_QWORD *)(a2 + 64);
  v7 = a2 + 64 + 8LL * *(unsigned int *)(a2 + 52) - 8;
  if ( a2 + 64 == v7 )
  {
LABEL_7:
    v8 = sub_BAC8F0(&v13, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
    if ( !(_BYTE)v8 )
      return 0;
    sub_EC6110(&v16, a2);
    v10 = v18;
    v11 = v19;
    v14 = _mm_load_si128(&v16);
    v15 = v17;
    while ( 1 )
    {
      v12 = (_QWORD *)v14.m128i_i64[0];
      if ( v10 != v14.m128i_i64[0] )
        break;
      if ( v11 == v14.m128i_i64[1] )
        return v8;
      if ( (v14.m128i_i8[8] & 3) != 0 )
        goto LABEL_22;
LABEL_17:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v13 + 96LL))(v13, *v12) )
        return 0;
      sub_BC8020(&v14);
    }
    if ( (v14.m128i_i8[8] & 3) == 0 )
      goto LABEL_17;
LABEL_22:
    v12 = (_QWORD *)sub_ECEDF0(&v14);
    goto LABEL_17;
  }
  while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v13 + 96LL))(v13, *v6) )
  {
    if ( (_QWORD *)v7 == ++v6 )
      goto LABEL_7;
  }
  return 0;
}

