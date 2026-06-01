__int64 __fastcall sub_C29460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // r12d
  __int64 v16; // rdi
  char v17; // al
  char v19; // al
  __int64 v20; // rsi
  void *v21; // rdi
  char v22; // al
  __int64 v23; // rax
  void *v24; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int32 v25; // [rsp+8h] [rbp-F0h]
  __int8 v26; // [rsp+Ch] [rbp-ECh]
  __m128i v27; // [rsp+10h] [rbp-E8h] BYREF
  char v28; // [rsp+20h] [rbp-D8h]
  _QWORD v29[3]; // [rsp+30h] [rbp-C8h] BYREF
  char v30; // [rsp+48h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A0h]
  void *ptr; // [rsp+60h] [rbp-98h]
  __int64 v33; // [rsp+68h] [rbp-90h]
  _BYTE v34[136]; // [rsp+70h] [rbp-88h] BYREF

  v9 = 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + v9 + 32) + 8LL);
  v15 = sub_C23610(*(_QWORD *)(a1 + v9 + 40), v10, a2, a4, a5, a6);
  if ( (_BYTE)v15 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(_BYTE *)(v16 + 16);
    switch ( v17 )
    {
      case 42:
        memset(v29, 0, sizeof(v29));
        v33 = 0x800000000LL;
        v19 = *(_BYTE *)(a1 + 2);
        v30 |= 1u;
        ptr = v34;
        v34[65] = 0;
        v20 = *(_QWORD *)(a1 + 8 * (((v19 & 8) != 0) + 1LL) + 32);
        v27.m128i_i64[0] = a2;
        v31 = 0;
        v27.m128i_i64[1] = (__int64)v29;
        v28 = 0;
        v15 = sub_C24FB0(&v27, v20, v11, v12, v13, v14);
        if ( (_BYTE)v15 )
        {
          sub_BEBB50((__int64)v29, a3);
          v21 = ptr;
          if ( ptr == v34 )
            return v15;
        }
        else
        {
          v21 = ptr;
          if ( ptr == v34 )
            return v15;
        }
        free(v21);
        return v15;
      case 13:
        if ( (((*(_WORD *)(v16 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        {
LABEL_5:
          v15 = 0;
          sub_E0FED0(a2, *(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32), 108, 0);
          return v15;
        }
        break;
      case 47:
        v23 = sub_F3D1D0(v16, v10, v11, v12, v13);
        if ( (*(_BYTE *)(v23 + 74) & 1) == 0 && (*(_QWORD *)(v23 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_5;
        break;
      case 10:
        break;
      default:
        goto LABEL_5;
    }
    v22 = *(_BYTE *)(a1 + 2);
    v26 = 0;
    v25 = 1;
    v24 = nullptr;
    v15 = sub_C23520(*(_QWORD *)(a1 + 8 * (((v22 & 8) != 0) + 1LL) + 32), (__int64)&v24, a2, v12, v13, v14);
    if ( (_BYTE)v15 )
    {
      v27.m128i_i32[2] = v25;
      if ( v25 > 0x40 )
        sub_21E17D0(&v27);
      else
        v27.m128i_i64[0] = (__int64)v24;
      v27.m128i_i8[12] = v26;
      sub_B72A30((__int64)v29, v27.m128i_i64);
      sub_A2BFE0(a3, (__int64)v29);
      if ( LODWORD(v29[0]) > 1 )
        sub_A2BBA0((int *)v29);
      if ( v27.m128i_i32[2] > 0x40u && v27.m128i_i64[0] )
        operator delete[]((void *)v27.m128i_i64[0]);
    }
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
  }
  return v15;
}

