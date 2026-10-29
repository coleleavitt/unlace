_QWORD *__fastcall sub_1A39F10(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 v5; // dl
  __int64 v6; // rdi
  unsigned __int8 v7; // cl
  bool v8; // zf
  char v9; // dl
  void **v10; // rdx
  void *v11; // rax
  _BYTE *v12; // r15
  signed __int64 v13; // r14
  __m128i v15; // [rsp+0h] [rbp-A8h] BYREF
  void *v16[2]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v17[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+30h] [rbp-78h] BYREF
  int v19; // [rsp+38h] [rbp-70h]
  __int128 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  char v22; // [rsp+58h] [rbp-50h]
  int v23; // [rsp+5Ch] [rbp-4Ch]
  void **v24; // [rsp+60h] [rbp-48h]

  if ( !a2[1] )
  {
    sub_B86A00((__int64)a1, a2);
    return a1;
  }
  v16[0] = v17;
  v20 = 0;
  v18 = &off_2BEBE68;
  v16[1] = nullptr;
  v17[0] = 0;
  v19 = 0;
  v22 = 0;
  v23 = 1;
  v21 = 0;
  v24 = v16;
  sub_227B8B0(&v18, 0, 0, 0);
  v5 = *(_BYTE *)(a3 + 1);
  v15.m128i_i64[1] = 0;
  v6 = a2[1];
  v15.m128i_i8[1] = (v5 >> 2) & 2 | v15.m128i_i8[1] & 0xFD;
  v7 = *(_BYTE *)(a3 + 3);
  v8 = (*(_WORD *)a3 & 0x1008) == 0;
  v15.m128i_i8[2] = (v7 >> 2 << 7) | v15.m128i_i8[2] & 0x7F;
  v15.m128i_i8[3] = ((((v5 >> 4) ^ 1) & 1) << 6)
                  | (8 * *(_BYTE *)a3) & 0x10
                  | (8 * ((v5 & 0x10) != 0)) & 0x8F
                  | (4 * (*(_BYTE *)a3 & 1)) & 0x8F
                  | (v5 >> 2) & 2
                  | !v8
                  | v15.m128i_i8[3] & 0x80
                  | (32 * (((v5 >> 3) ^ 1) & 1)) & 0xBF;
  v9 = *(_BYTE *)(a3 + 89) << 7;
  v15.m128i_i8[4] = (4 * ((*(_DWORD *)a3 & 0x10000080) == 128)) | (v7 >> 2) & 2 | v15.m128i_i8[4] & 0xF9;
  v15.m128i_i8[5] = v9 | v15.m128i_i8[5] & 0x7F;
  v15.m128i_i64[0] = v15.m128i_i64[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  sub_E90250(v6, (__int64)&v18, &v15, 0, 1);
  sub_B86360((__int64)&v18, *a2);
  v10 = v24;
  v11 = a1 + 2;
  *a1 = a1 + 2;
  v12 = *v10;
  v13 = (signed __int64)v10[1];
  if ( (char *)*v10 + v13 && !v12 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v13 > 0xF )
  {
    if ( v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v11 = (void *)operator new(v13 + 1);
    a1[2] = v13;
    *a1 = v11;
LABEL_12:
    memcpy(v11, v12, v13);
    v11 = (void *)*a1;
    goto LABEL_7;
  }
  if ( v13 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v12;
    goto LABEL_7;
  }
  if ( v13 )
    goto LABEL_12;
LABEL_7:
  a1[1] = v13;
  *((_BYTE *)v11 + v13) = 0;
  v18 = &off_2BEBE68;
  sub_227B7A0(&v18);
  if ( v16[0] != v17 )
    operator delete(v16[0]);
  return a1;
}
