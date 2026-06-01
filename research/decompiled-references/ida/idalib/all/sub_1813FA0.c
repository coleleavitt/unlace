void __fastcall sub_1813FA0(__int64 a1, __int64 *a2, const __m128i *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  char v10; // al
  void *v11; // r8
  _QWORD *v12; // rdi
  __int64 v13; // r9
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __m128i *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+4h] [rbp-104h]
  void *v30; // [rsp+8h] [rbp-100h]
  int v31; // [rsp+18h] [rbp-F0h] BYREF
  int v32; // [rsp+1Ch] [rbp-ECh] BYREF
  void *ptr; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-E0h]
  _BYTE v35[16]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v36[200]; // [rsp+40h] [rbp-C8h] BYREF

  ptr = v35;
  v34 = 0x200000000LL;
  if ( !(unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) )
    goto LABEL_2;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 8LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  switch ( v10 )
  {
    case 13:
      if ( (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
        break;
LABEL_14:
      sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC53u, 0);
      v26 = sub_15DD120((__int64)v36, (__int64)a3);
      v31 = 1;
      v27 = sub_1587D10(v26, &v31);
      v32 = 0;
      sub_180A710(v27, &v32);
      sub_15F7200(v36);
      goto LABEL_2;
    case 47:
      v21 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              a1,
              v5,
              v6,
              v7,
              v8);
      if ( (*((_BYTE *)v21 + 74) & 1) == 0 && (v21[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
        || *((char *)sub_F60F10(v9, a1, v22, v23, v24, v25) + 76) < 0 )
      {
        goto LABEL_14;
      }
      break;
    case 10:
      break;
    default:
      goto LABEL_14;
  }
  sub_18134D0(a1, a2, (__int64)a3, (unsigned __int64)&ptr, 1u, 0);
  v11 = ptr;
  v12 = *(_QWORD **)(a1 + 248);
  v13 = (unsigned int)v34;
  v14 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v15 = v12[294];
  v12[304] += 80LL;
  v16 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v12[295] >= (unsigned __int64)&v16[5] && v15 )
  {
    v12[294] = v16 + 5;
  }
  else
  {
    v30 = v11;
    v29 = v13;
    v28 = sub_986170((__int64)(v12 + 294), 80, 80, 3, (__int64)v11, v13);
    v11 = v30;
    LODWORD(v13) = v29;
    v16 = (__m128i *)v28;
  }
  sub_B30300(v16, *(_QWORD *)(a1 + 248), a3, v14, v11, v13);
  sub_B8CC60((__int64)a2, (__int64)v16, v17, v18, v19, v20);
LABEL_2:
  if ( ptr != v35 )
    free(ptr);
}
