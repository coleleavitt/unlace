__m128i *__fastcall sub_22BB610(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rax
  __int8 *v3; // r13
  signed __int64 v4; // rbp
  __int64 v5; // rax
  char *v6; // rax
  __int64 v7; // rdx
  char *v9; // rax
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rdx
  char *v17; // rax
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rdx
  char *v21; // rax
  __int64 v22; // rdx
  char *v23; // rax
  __int64 v24; // rdx
  char *v25; // rax
  __int64 v26; // rdx
  char *v27; // rax
  __int64 v28; // rdx
  char *v29; // rax
  __int64 v30; // rdx
  char *v31; // rax
  __int64 v32; // rdx
  char *v33; // rax
  __int64 v34; // rdx
  char *v35; // rax
  __int64 v36; // rdx
  char *v37; // rax
  __int64 v38; // rdx
  char *v39; // rax
  __int64 v40; // rdx
  char *v41; // rax
  __int64 v42; // rdx

  v2 = a1 + 1;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  v3 = *(__int8 **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 + *(_QWORD *)a2 && !v3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v4 > 0xF )
  {
    if ( v4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v2 = (__m128i *)operator new(v4 + 1);
    a1[1].m128i_i64[0] = v4;
    a1->m128i_i64[0] = (__int64)v2;
    goto LABEL_13;
  }
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_6;
LABEL_13:
    memcpy(v2, v3, v4);
    v2 = (__m128i *)a1->m128i_i64[0];
    goto LABEL_6;
  }
  a1[1].m128i_i8[0] = *v3;
LABEL_6:
  a1->m128i_i64[1] = v4;
  v2->m128i_i8[v4] = 0;
  v5 = *(unsigned int *)(a2 + 32);
  a1[2] = _mm_loadu_si128((const __m128i *)(a2 + 32));
  a1[3].m128i_i32[0] = *(_DWORD *)(a2 + 48);
  a1[3].m128i_i32[1] = *(_DWORD *)(a2 + 52);
  switch ( v5 )
  {
    case 0LL:
    case 6LL:
    case 7LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 15LL:
    case 20LL:
    case 25LL:
    case 31LL:
    case 33LL:
    case 34LL:
    case 39LL:
    case 40LL:
    case 52LL:
    case 53LL:
    case 54LL:
      v33 = sub_22B5FC0(0, 0);
      sub_22BAF00(a1, (__int64)v33, v34);
      return a1;
    case 1LL:
    case 5LL:
    case 35LL:
      v9 = sub_22B5FC0(3, 0);
      sub_22BAF00(a1, (__int64)v9, v10);
      return a1;
    case 2LL:
    case 36LL:
      v11 = sub_22B5FC0(4, 0);
      sub_22BAF00(a1, (__int64)v11, v12);
      return a1;
    case 13LL:
      v23 = sub_22B5FC0(14, 0);
      sub_22BAF00(a1, (__int64)v23, v24);
      return a1;
    case 16LL:
      v25 = sub_22B5FC0(18, *(unsigned int *)(a2 + 36));
      sub_22BAF00(a1, (__int64)v25, v26);
      return a1;
    case 17LL:
      v27 = sub_22B5FC0(19, *(unsigned int *)(a2 + 36));
      sub_22BAF00(a1, (__int64)v27, v28);
      return a1;
    case 21LL:
      v29 = sub_22B5FC0(23, 0);
      sub_22BAF00(a1, (__int64)v29, v30);
      return a1;
    case 22LL:
      v41 = sub_22B5FC0(24, 0);
      sub_22BAF00(a1, (__int64)v41, v42);
      return a1;
    case 27LL:
      v13 = sub_22B5FC0(28, 0);
      sub_22BAF00(a1, (__int64)v13, v14);
      return a1;
    case 29LL:
      v39 = sub_22B5FC0(30, 0);
      sub_22BAF00(a1, (__int64)v39, v40);
      return a1;
    case 37LL:
      v6 = sub_22B5FC0(38, 0);
      sub_22BAF00(a1, (__int64)v6, v7);
      return a1;
    case 41LL:
      v35 = sub_22B5FC0(42, 0);
      sub_22BAF00(a1, (__int64)v35, v36);
      return a1;
    case 43LL:
      v37 = sub_22B5FC0(44, 0);
      sub_22BAF00(a1, (__int64)v37, v38);
      return a1;
    case 45LL:
      v31 = sub_22B5FC0(46, 0);
      sub_22BAF00(a1, (__int64)v31, v32);
      return a1;
    case 47LL:
      v21 = sub_22B5FC0(48, 0);
      sub_22BAF00(a1, (__int64)v21, v22);
      return a1;
    case 49LL:
    case 50LL:
      v17 = sub_22B5FC0(51, *(unsigned int *)(a2 + 36));
      sub_22BAF00(a1, (__int64)v17, v18);
      return a1;
    case 55LL:
      v15 = sub_22B5FC0(56, 0);
      sub_22BAF00(a1, (__int64)v15, v16);
      return a1;
    case 57LL:
      v19 = sub_22B5FC0(58, 0);
      sub_22BAF00(a1, (__int64)v19, v20);
      return a1;
    default:
      return a1;
  }
}
