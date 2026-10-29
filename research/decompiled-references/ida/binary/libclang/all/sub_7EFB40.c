__int64 __fastcall sub_7EFB40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // r9
  __int64 v8; // rax
  unsigned int **v9; // rbp
  unsigned int **v10; // r13
  char v11; // al
  unsigned int *v12; // r12
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r12
  __m128i v19; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // [rsp+17h] [rbp-91h]
  __m128i v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+30h] [rbp-78h]
  __m128i v25; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  __int64 v28; // [rsp+60h] [rbp-48h]

  v3 = *a1;
  v25.m128i_i64[0] = *(_QWORD *)(a2 + 24);
  v21 = sub_7E09C0((__int64)a1, v25.m128i_i64[0], v25.m128i_i64[0], v25.m128i_i64, a1, v3);
  if ( !v21 )
    return 0;
  v4 = a2 + 48 + 8LL * *(unsigned int *)(a2 + 16);
  if ( a2 + 48 == v4 )
  {
    v8 = 0;
  }
  else
  {
    v5 = (__int64 *)(a2 + 48);
    do
    {
      v6 = *a1;
      v25.m128i_i64[0] = *v5;
      if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v25.m128i_i64[0], v25.m128i_i64[0], v25.m128i_i64, a1, v6) )
        return 0;
      ++v5;
    }
    while ( (__int64 *)v4 != v5 );
    v8 = 8LL * *(unsigned int *)(a2 + 16);
  }
  v9 = (unsigned int **)(a2 + v8 + 48);
  v10 = &v9[*(unsigned int *)(a2 + 20)];
  while ( v10 != v9 )
  {
    v12 = *v9;
    v13 = **v9;
    if ( v13 > 2 )
    {
      if ( !*((_BYTE *)v12 + 24) )
      {
        v11 = sub_7EBA80(a1, *((_QWORD *)v12 + 1));
LABEL_13:
        if ( !v11 )
          return 0;
      }
    }
    else if ( v13 )
    {
      if ( v12[10] != 1 && !(unsigned __int8)sub_7EBA80(a1, *((_QWORD *)v12 + 1) & 0xFFFFFFFFFFFFFFFCLL)
        || (*((_QWORD *)v12 + 3) & 0xFFFFFFFFFFFFFFFCLL) > 7
        && (v12[6] & 4) == 0
        && !(unsigned __int8)sub_7ECC20(a1, *((_QWORD *)v12 + 3) & 0xFFFFFFFFFFFFFFF8LL) )
      {
        return 0;
      }
    }
    else if ( v12[4] != 1 )
    {
      v11 = sub_7EEDC0(
              (__int64)a1,
              *(_QWORD *)(*((_QWORD *)v12 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              (*((_QWORD *)v12 + 1) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      goto LABEL_13;
    }
    ++v9;
  }
  sub_AC4830(&v25);
  v17 = v27;
  v18 = v28;
  v24 = v26;
  v19 = _mm_load_si128(&v25);
  v23 = v19;
LABEL_26:
  if ( v17 == v19.m128i_i64[0] )
  {
LABEL_32:
    if ( v18 == v19.m128i_i64[1] )
      return v21;
  }
  v20 = v19.m128i_i8[8] & 3;
  if ( (_DWORD)v20 )
    v19.m128i_i64[0] = sub_ACE280(&v23, a2, v20, v14, v15, v16);
  while ( 1 )
  {
    a2 = *(_QWORD *)v19.m128i_i64[0];
    if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v19.m128i_i64[0], a3) )
      return 0;
    v19.m128i_i64[1] = v23.m128i_i64[1];
    if ( (v23.m128i_i8[8] & 3) != 0 )
    {
      if ( v23.m128i_i64[1] <= 3uLL )
      {
        a2 = 1;
        sub_ACE0F0(&v23, 1);
      }
      else
      {
        sub_ACE150(&v23);
      }
      v19 = v23;
      goto LABEL_26;
    }
    v19.m128i_i64[0] = v23.m128i_i64[0] + 8;
    v23.m128i_i64[0] = v19.m128i_i64[0];
    if ( v17 == v19.m128i_i64[0] )
      goto LABEL_32;
  }
}

