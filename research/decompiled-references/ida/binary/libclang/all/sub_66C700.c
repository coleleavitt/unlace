void __fastcall sub_66C700(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        __m128i a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9)
{
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r13
  __m128i si128; // xmm0
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v23; // [rsp+8h] [rbp-C0h]
  _BYTE v24[176]; // [rsp+18h] [rbp-B0h] BYREF

  v10 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v10 = (_QWORD *)*v10;
  if ( v10 )
  {
    v11 = sub_79A2E0(v10);
    sub_66C700(a1, v11);
  }
  switch ( (*(_BYTE *)(a2 + 28) + 111) & 0x7F )
  {
    case 0:
      sub_66B920(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 1:
      sub_66C060(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 2:
      v12 = *(_QWORD *)(a2 + 88);
      sub_66C060(a1, v12, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      ptr = v24;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      v23 = si128;
      sub_11240B0(v12, &ptr);
      v14 = sub_FC8D80(a1[1], ptr, v23.m128i_i64[0]);
      if ( v14 && *(_DWORD *)(v14 + 356) == 6 )
      {
        v15 = a2 + 48;
        v16 = sub_79C190(a2 + 48);
        if ( v16 )
        {
          while ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0x10 )
          {
            v17 = *(_QWORD *)(v16 + 8);
            v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v17 <= 7 )
            {
              v16 = 0;
              break;
            }
          }
        }
        sub_6696E0(a1, v16, *(double *)si128.m128i_i64, *(double *)a4.m128i_i64, a5, a6);
        v18 = sub_79C190(v15);
        if ( v18 )
        {
          while ( (*(_BYTE *)(v18 + 28) & 0x7F) != 0x49 )
          {
            v19 = *(_QWORD *)(v18 + 8);
            v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v19 <= 7 )
            {
              v18 = 0;
              break;
            }
          }
        }
        sub_667A20(a1, v18);
        v20 = sub_79C190(v15);
        if ( v20 )
        {
          while ( (*(_BYTE *)(v20 + 28) & 0x7F) != 0x30 )
          {
            v21 = *(_QWORD *)(v20 + 8);
            v20 = v21 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v21 <= 7 )
            {
              v20 = 0;
              break;
            }
          }
        }
        sub_64D440(a1, v20, 0);
      }
      if ( ptr != v24 )
        free(ptr);
      break;
    case 4:
      sub_66B300(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 5:
      sub_667300(a1, a2);
      break;
    case 0xF:
    case 0x14:
      sub_666710(a1, a2, a3, a4, *(double *)a5.m128i_i64, a6);
      break;
    case 0x10:
      sub_6650E0(a1, a2, a3, a4, *(double *)a5.m128i_i64, a6);
      break;
    case 0x11:
      sub_6650E0(a1, a2, a3, a4, *(double *)a5.m128i_i64, a6);
      sub_664010(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 0x12:
      sub_6650E0(a1, a2, a3, a4, *(double *)a5.m128i_i64, a6);
      sub_6630A0(a1, a2, a3, a4, *(double *)a5.m128i_i64, a6);
      break;
    case 0x13:
      sub_6650E0(a1, a2, a3, a4, *(double *)a5.m128i_i64, a6);
      sub_6627C0(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 0x15:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
      sub_661FA0(a1, a2);
      break;
    case 0x16:
      sub_661310(a1, a2);
      break;
    case 0x17:
      sub_65FC50(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 0x1E:
    case 0x1F:
    case 0x20:
      sub_653CE0(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, *(double *)a6.m128_u64, a7, a8, a9);
      break;
    case 0x27:
      sub_65E650(a1, a2);
      break;
    case 0x28:
      sub_658320(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 0x29:
      sub_6549D0(a1, a2);
      break;
    case 0x2A:
      sub_659510(a1, a2);
      break;
    case 0x2B:
      sub_655BA0(a1, a2);
      break;
    case 0x2D:
    case 0x2E:
    case 0x2F:
      sub_65A2A0(a1, a2);
      break;
    case 0x32:
      sub_65C9F0(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      break;
    case 0x34:
      sub_65BD90(a1, a2, a3, a4, *(double *)a5.m128i_i64, a6);
      break;
    case 0x36:
      sub_65AF40(a1, a2);
      break;
    default:
      return;
  }
}

