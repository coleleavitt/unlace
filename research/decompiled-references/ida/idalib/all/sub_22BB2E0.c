__m128i *__fastcall sub_22BB2E0(__m128i *a1, __int64 a2)
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
LABEL_13:
    memcpy(v2, v3, v4);
    v2 = (__m128i *)a1->m128i_i64[0];
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    a1[1].m128i_i8[0] = *v3;
    goto LABEL_6;
  }
  if ( v4 )
    goto LABEL_13;
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
    case 7LL:
    case 8LL:
    case 9LL:
    case 20LL:
    case 26LL:
    case 32LL:
    case 59LL:
      v41 = sub_22B5FC0(0, 0);
      sub_22BAF00(a1, (__int64)v41, v42);
      break;
    case 3LL:
      v37 = sub_22B5FC0(1, 0);
      sub_22BAF00(a1, (__int64)v37, v38);
      break;
    case 4LL:
      v35 = sub_22B5FC0(2, 0);
      sub_22BAF00(a1, (__int64)v35, v36);
      break;
    case 14LL:
      v33 = sub_22B5FC0(13, 0);
      sub_22BAF00(a1, (__int64)v33, v34);
      break;
    case 18LL:
      v31 = sub_22B5FC0(16, *(unsigned int *)(a2 + 36));
      sub_22BAF00(a1, (__int64)v31, v32);
      break;
    case 19LL:
      v29 = sub_22B5FC0(17, *(unsigned int *)(a2 + 36));
      sub_22BAF00(a1, (__int64)v29, v30);
      break;
    case 23LL:
      v27 = sub_22B5FC0(21, 0);
      sub_22BAF00(a1, (__int64)v27, v28);
      break;
    case 24LL:
      v25 = sub_22B5FC0(22, 0);
      sub_22BAF00(a1, (__int64)v25, v26);
      break;
    case 28LL:
      v23 = sub_22B5FC0(27, 0);
      sub_22BAF00(a1, (__int64)v23, v24);
      break;
    case 30LL:
      v21 = sub_22B5FC0(29, 0);
      sub_22BAF00(a1, (__int64)v21, v22);
      break;
    case 38LL:
      v6 = sub_22B5FC0(37, 0);
      sub_22BAF00(a1, (__int64)v6, v7);
      break;
    case 42LL:
      v19 = sub_22B5FC0(41, 0);
      sub_22BAF00(a1, (__int64)v19, v20);
      break;
    case 44LL:
      v17 = sub_22B5FC0(43, 0);
      sub_22BAF00(a1, (__int64)v17, v18);
      break;
    case 46LL:
      v15 = sub_22B5FC0(45, 0);
      sub_22BAF00(a1, (__int64)v15, v16);
      break;
    case 48LL:
      v13 = sub_22B5FC0(47, 0);
      sub_22BAF00(a1, (__int64)v13, v14);
      break;
    case 49LL:
    case 51LL:
      v11 = sub_22B5FC0(50, *(unsigned int *)(a2 + 36));
      sub_22BAF00(a1, (__int64)v11, v12);
      break;
    case 56LL:
      v9 = sub_22B5FC0(55, 0);
      sub_22BAF00(a1, (__int64)v9, v10);
      break;
    case 58LL:
      v39 = sub_22B5FC0(57, 0);
      sub_22BAF00(a1, (__int64)v39, v40);
      break;
    default:
      return a1;
  }
  return a1;
}
