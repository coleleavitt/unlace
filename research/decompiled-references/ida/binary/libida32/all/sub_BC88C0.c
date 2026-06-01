__int64 __fastcall sub_BC88C0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  unsigned int v5; // r12d
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // r13
  _QWORD *v10; // rbx
  _QWORD *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 *v15; // [rsp+8h] [rbp-80h] BYREF
  __m128i v16; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+20h] [rbp-68h]
  __m128i v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-38h]

  v15 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v15, a2) )
    return 0;
  v2 = v15;
  v3 = *v15;
  v4 = *(__int64 (**)())(*v15 + 4000);
  if ( v4 != sub_BA2350 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v15, a2) )
      return 0;
    v2 = v15;
    v3 = *v15;
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v3 + 56))(v2, *(_QWORD *)(a2 + 24));
  if ( (_BYTE)v5 )
  {
    v6 = (_QWORD *)(a2 + 48);
    v7 = 8LL * *(unsigned int *)(a2 + 16);
    v8 = (_QWORD *)(a2 + 48 + v7);
    if ( (_QWORD *)(a2 + 48) != v8 )
    {
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v15 + 56))(v15, *v6) )
          return 0;
        ++v6;
      }
      while ( v8 != v6 );
      v7 = 8LL * *(unsigned int *)(a2 + 16);
    }
    v10 = (_QWORD *)(a2 + v7 + 48);
    v11 = &v10[*(unsigned int *)(a2 + 20)];
    if ( v10 == v11 )
    {
LABEL_18:
      sub_EC6110(&v18, a2);
      v12 = v20;
      v13 = v21;
      v16 = _mm_load_si128(&v18);
      v17 = v19;
      while ( 1 )
      {
        v14 = (_QWORD *)v16.m128i_i64[0];
        if ( v12 != v16.m128i_i64[0] )
          break;
        if ( v13 == v16.m128i_i64[1] )
          return v5;
        if ( (v16.m128i_i8[8] & 3) != 0 )
          goto LABEL_25;
LABEL_20:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v15 + 96))(v15, *v14) )
          return 0;
        sub_BC8020(&v16);
      }
      if ( (v16.m128i_i8[8] & 3) == 0 )
        goto LABEL_20;
LABEL_25:
      v14 = (_QWORD *)sub_ECEDF0(&v16);
      goto LABEL_20;
    }
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v15 + 160))(v15, *v10) )
    {
      if ( v11 == ++v10 )
        goto LABEL_18;
    }
  }
  return 0;
}

