__int64 __fastcall sub_E2B320(__int64 *a1, __int64 a2, const void *a3, size_t a4, __int64 a5)
{
  const __m128i *v5; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = *(const __m128i **)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  switch ( v5[1].m128i_i8[0] )
  {
    case 0xF:
    case 0x27:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
      goto LABEL_3;
    case 0x14:
      sub_E15750(a1[1], v5[2].m128i_i64[1]);
      return 0;
    case 0x16:
      v14 = sub_A5CE20(*(_QWORD *)(*a1 + 8), v5 + 2);
      v15 = v5[2].m128i_u64[1];
      v16 = v14;
      if ( v15 >= 0xFFFFFFFFFFFFFFD3LL )
        v15 = 0;
      sub_E15750(a1[1], v15);
      sub_E2AF60(a1, v16, (__int64)v5[3].m128i_i64, v5[1].m128i_u32[1]);
      return 0;
    case 0x18:
      v17 = v5[2].m128i_i64[1];
      return sub_E2B320(a1, v17, a3, a4);
    case 0x1D:
      v18 = sub_F3D720(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
      sub_E17680((__int64)a1, v18);
      return 0;
    case 0x2D:
      sub_971800(a1[1], "_SUBSTPACK_");
      return 0;
    case 0x2E:
      v19 = v5[2].m128i_i64[0];
      if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 68 <= 6 && sub_B99E90(v19) )
      {
        if ( (v5[1].m128i_i8[2] & 8) != 0 )
          v17 = v5[3].m128i_i64[0];
        else
          v17 = v5->m128i_i64[1];
        return sub_E2B320(a1, v17, a3, a4);
      }
      else
      {
LABEL_3:
        sub_9717A0(a1[1], a3, a4);
        sub_E1BE40((__int64)a1, a2, v10, v11, v12);
        return 1;
      }
    case 0x2F:
    case 0x30:
      v20 = sub_F3D1D0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
      sub_E17680((__int64)a1, v20);
      return 0;
    case 0x31:
      v23[0] = v5[2].m128i_i64[0];
      switch ( sub_EFEE00(v23) )
      {
        case 0LL:
        case 3LL:
          v9 = sub_EFEE90(v23, 0);
          if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x44 )
            goto LABEL_3;
          goto LABEL_22;
        case 5LL:
          v22 = sub_EFF190(v23);
          sub_E19FF0(a1, *(_QWORD *)(v22 + 16));
          break;
        case 6LL:
          sub_971800(a1[1], "_SUBSTPACK_");
          break;
        case 7LL:
          v9 = sub_EFEE90(v23, 0);
LABEL_22:
          sub_E17680((__int64)a1, v9);
          break;
        default:
          break;
      }
      sub_E2AF60(a1, 0, (__int64)v5[3].m128i_i64, v5[1].m128i_u32[1]);
      return 0;
    case 0x35:
      sub_E17680((__int64)a1, v5[2].m128i_i64[0]);
      return 0;
    case 0x37:
      sub_E17680((__int64)a1, v5[1].m128i_i64[1]);
      return 0;
    case 0x38:
      v21 = sub_F39EB0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
      return sub_E2B320(a1, v21, a3, a4);
    default:
      return 0;
  }
}

