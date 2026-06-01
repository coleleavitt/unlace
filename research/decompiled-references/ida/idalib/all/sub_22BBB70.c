__m128i *__fastcall sub_22BBB70(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rax
  __int8 *v3; // r13
  signed __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  char *v12; // rax
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rdx
  char *v16; // rax
  __int64 v17; // rdx
  char *v18; // rax
  __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // rdx
  char *v22; // rax
  __int64 v23; // rdx
  char *v24; // rax
  __int64 v25; // rdx

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
LABEL_14:
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
    goto LABEL_14;
LABEL_6:
  a1->m128i_i64[1] = v4;
  v2->m128i_i8[v4] = 0;
  v5 = *(unsigned int *)(a2 + 32);
  a1[2] = _mm_loadu_si128((const __m128i *)(a2 + 32));
  a1[3].m128i_i32[0] = *(_DWORD *)(a2 + 48);
  a1[3].m128i_i32[1] = *(_DWORD *)(a2 + 52);
  v6 = 0xFBFFFEC9F5A7DAALL;
  if ( !_bittest64(&v6, v5) )
  {
    switch ( v5 )
    {
      case 0uLL:
      case 1uLL:
      case 2uLL:
      case 3uLL:
      case 5uLL:
      case 6uLL:
      case 7uLL:
      case 8uLL:
      case 0xAuLL:
      case 0xBuLL:
      case 0xCuLL:
      case 0xDuLL:
      case 0xEuLL:
      case 0xFuLL:
      case 0x11uLL:
      case 0x13uLL:
      case 0x14uLL:
      case 0x16uLL:
      case 0x18uLL:
      case 0x19uLL:
      case 0x1AuLL:
      case 0x1BuLL:
      case 0x1CuLL:
      case 0x1EuLL:
      case 0x1FuLL:
      case 0x20uLL:
      case 0x22uLL:
      case 0x23uLL:
      case 0x24uLL:
      case 0x25uLL:
      case 0x26uLL:
      case 0x27uLL:
      case 0x28uLL:
      case 0x29uLL:
      case 0x2AuLL:
      case 0x2BuLL:
      case 0x2CuLL:
      case 0x2DuLL:
      case 0x2EuLL:
      case 0x2FuLL:
      case 0x30uLL:
      case 0x31uLL:
      case 0x32uLL:
      case 0x33uLL:
      case 0x34uLL:
      case 0x35uLL:
      case 0x36uLL:
        v24 = sub_22B5FC0(0, 0);
        sub_22BAF00(a1, (__int64)v24, v25);
        break;
      case 4uLL:
        v22 = sub_22B5FC0(3, 0);
        sub_22BAF00(a1, (__int64)v22, v23);
        break;
      case 9uLL:
        v20 = sub_22B5FC0(8, 0);
        sub_22BAF00(a1, (__int64)v20, v21);
        break;
      case 0x10uLL:
        v18 = sub_22B5FC0(17, *(unsigned int *)(a2 + 36));
        sub_22BAF00(a1, (__int64)v18, v19);
        break;
      case 0x12uLL:
        v16 = sub_22B5FC0(19, *(unsigned int *)(a2 + 36));
        sub_22BAF00(a1, (__int64)v16, v17);
        break;
      case 0x15uLL:
        v14 = sub_22B5FC0(22, 0);
        sub_22BAF00(a1, (__int64)v14, v15);
        break;
      case 0x17uLL:
        v12 = sub_22B5FC0(24, 0);
        sub_22BAF00(a1, (__int64)v12, v13);
        break;
      case 0x1DuLL:
        v10 = sub_22B5FC0(31, 0);
        sub_22BAF00(a1, (__int64)v10, v11);
        break;
      case 0x21uLL:
        v7 = sub_22B5FC0(34, 0);
        sub_22BAF00(a1, (__int64)v7, v8);
        break;
    }
  }
  return a1;
}
