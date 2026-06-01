__int64 __fastcall sub_E4F060(__int64 *a1, __int64 a2, const void *a3, size_t a4, __int64 a5)
{
  const __m128i *v5; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD v20[8]; // [rsp+8h] [rbp-40h] BYREF

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
      sub_E39490(a1[1], v5[2].m128i_i64[1]);
      return 0;
    case 0x16:
      v11 = sub_A80B60(*(_QWORD *)(*a1 + 8), v5 + 2);
      v12 = v5[2].m128i_u64[1];
      v13 = v11;
      if ( v12 >= 0xFFFFFFFFFFFFFFD3LL )
        v12 = 0;
      sub_E39490(a1[1], v12);
      sub_E4ECA0(a1, v13, (__int64)v5[3].m128i_i64, v5[1].m128i_u32[1]);
      return 0;
    case 0x18:
      v14 = v5[2].m128i_i64[1];
      return sub_E4F060(a1, v14, a3, a4);
    case 0x1D:
      v15 = sub_F61460(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
      sub_E3B3C0((__int64)a1, v15);
      return 0;
    case 0x2D:
      sub_995540(a1[1], "_SUBSTPACK_");
      return 0;
    case 0x2E:
      v16 = v5[2].m128i_i64[0];
      if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 68 <= 6 && sub_BBDBD0(v16) )
      {
        if ( (v5[1].m128i_i8[2] & 8) != 0 )
          v14 = v5[3].m128i_i64[0];
        else
          v14 = v5->m128i_i64[1];
        return sub_E4F060(a1, v14, a3, a4);
      }
      else
      {
LABEL_3:
        sub_9954E0(a1[1], a3, a4);
        sub_E3FB80(a1, a2);
        return 1;
      }
    case 0x2F:
    case 0x30:
      v17 = sub_F60F10(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
      sub_E3B3C0((__int64)a1, v17);
      return 0;
    case 0x31:
      v20[0] = v5[2].m128i_i64[0];
      switch ( sub_F22B40(v20) )
      {
        case 0LL:
        case 3LL:
          v9 = sub_F22BD0(v20, 0);
          if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x44 )
            goto LABEL_3;
          goto LABEL_22;
        case 5LL:
          v19 = sub_F22ED0(v20);
          sub_E3DD30(a1, *(_QWORD *)(v19 + 16));
          break;
        case 6LL:
          sub_995540(a1[1], "_SUBSTPACK_");
          break;
        case 7LL:
          v9 = sub_F22BD0(v20, 0);
LABEL_22:
          sub_E3B3C0((__int64)a1, v9);
          break;
        default:
          break;
      }
      sub_E4ECA0(a1, 0, (__int64)v5[3].m128i_i64, v5[1].m128i_u32[1]);
      return 0;
    case 0x35:
      sub_E3B3C0((__int64)a1, v5[2].m128i_i64[0]);
      return 0;
    case 0x37:
      sub_E3B3C0((__int64)a1, v5[1].m128i_i64[1]);
      return 0;
    case 0x38:
      v18 = sub_F5DBF0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
      return sub_E4F060(a1, v18, a3, a4);
    default:
      return 0;
  }
}
