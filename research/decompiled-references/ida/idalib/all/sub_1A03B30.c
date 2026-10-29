__m128i *__fastcall sub_1A03B30(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int32 a7)
{
  __int32 v7; // r14d
  __int32 v8; // r13d
  __int32 v9; // r12d
  unsigned int ***v11; // rax
  unsigned int **v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int **v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  __m128i *result; // rax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rax
  __m128i *v26; // [rsp+8h] [rbp-E0h]
  __int64 v27; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v28[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v30; // [rsp+40h] [rbp-A8h] BYREF
  char v31; // [rsp+98h] [rbp-50h]
  unsigned int v32; // [rsp+A0h] [rbp-48h]
  char v33; // [rsp+A4h] [rbp-44h]

  v7 = a6;
  v8 = a5;
  v9 = a4;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  v11 = (unsigned int ***)sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v12 = *v11;
  v13 = (unsigned __int64)&(*v11)[*((unsigned int *)v11 + 2)];
  if ( (unsigned __int64)v12 >= v13 )
  {
    if ( v12 != (unsigned int **)v13 )
    {
      while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 230 )
      {
        v13 += 8LL;
        if ( v12 == (unsigned int **)v13 )
          goto LABEL_6;
      }
      v18 = *v12;
      if ( *((_WORD *)*v12 + 18) != 230 )
        goto LABEL_12;
      goto LABEL_14;
    }
LABEL_6:
    v15 = sub_168B6C0((__int64)a1);
    v16 = sub_168B6C0((__int64)a1);
    v26 = (__m128i *)sub_19F7E40((__int64 *)(v16 + 2352), 56, 3u);
    sub_B13BB0(v26, v15, a3, v9, v8, v7);
    v26[3].m128i_i32[1] = a7;
    return v26;
  }
  v14 = v12;
  while ( *((_WORD *)*v14 + 18) != 230 )
  {
    if ( (unsigned int **)v13 == ++v14 )
      goto LABEL_6;
  }
  if ( (unsigned int **)v13 == v14 )
    goto LABEL_6;
  while ( 1 )
  {
    v18 = *v12;
    if ( *((_WORD *)*v12 + 18) == 230 )
      break;
LABEL_12:
    ++v12;
  }
LABEL_14:
  if ( v9 != v18[10] || v8 != v18[11] || v7 != v18[12] || (result = nullptr, a7 != v18[13]) )
  {
    sub_168B9F0((__int64)v28, a1, v18[6], 0xF30u, 0);
    if ( v31 )
    {
      sub_AE9DF0(&v30, (__int64)a3, 0x10u);
    }
    else if ( v33 )
    {
      v23 = sub_168B9E0(v28);
      v24 = v29;
      if ( v29 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
      v27 = v24;
      v25 = sub_1587BC0(v23, &v27, v19, v20, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v32 + 8), (__int64)a3, 0x10u);
    }
    sub_15F7200(v28);
    sub_168B9F0((__int64)v28, a1, a3[1].m128i_u32[2], 0x16CFu, 0);
    sub_15F7200(v28);
    return nullptr;
  }
  return result;
}
