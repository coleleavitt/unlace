__m128i *__fastcall sub_1A03930(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v6; // r14d
  __int32 v7; // r13d
  __int32 v8; // r12d
  unsigned int ***v10; // rax
  unsigned int **v11; // rdx
  unsigned __int64 v12; // rax
  unsigned int **v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  __m128i *result; // rax
  unsigned int *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // rax
  __m128i *v25; // [rsp+8h] [rbp-E0h]
  __int64 v26; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v27[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v29; // [rsp+40h] [rbp-A8h] BYREF
  char v30; // [rsp+98h] [rbp-50h]
  unsigned int v31; // [rsp+A0h] [rbp-48h]
  char v32; // [rsp+A4h] [rbp-44h]

  v6 = a6;
  v7 = a5;
  v8 = a4;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  v10 = (unsigned int ***)sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v11 = *v10;
  v12 = (unsigned __int64)&(*v10)[*((unsigned int *)v10 + 2)];
  if ( (unsigned __int64)v11 >= v12 )
  {
    if ( v11 != (unsigned int **)v12 )
    {
      while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 225 )
      {
        v12 += 8LL;
        if ( v11 == (unsigned int **)v12 )
          goto LABEL_6;
      }
      v17 = *v11;
      if ( *((_WORD *)*v11 + 18) != 225 )
        goto LABEL_12;
      goto LABEL_14;
    }
LABEL_6:
    v14 = sub_168B6C0((__int64)a1);
    v15 = sub_168B6C0((__int64)a1);
    v25 = (__m128i *)sub_19F7E40((__int64 *)(v15 + 2352), 56, 3u);
    sub_B134C0(v25, v14, a3, v8, v7, v6);
    return v25;
  }
  v13 = v11;
  while ( *((_WORD *)*v13 + 18) != 225 )
  {
    if ( (unsigned int **)v12 == ++v13 )
      goto LABEL_6;
  }
  if ( (unsigned int **)v12 == v13 )
    goto LABEL_6;
  while ( 1 )
  {
    v17 = *v11;
    if ( *((_WORD *)*v11 + 18) == 225 )
      break;
LABEL_12:
    ++v11;
  }
LABEL_14:
  if ( v8 != v17[10] || v7 != v17[11] || (result = nullptr, v6 != v17[12]) )
  {
    sub_168B9F0((__int64)v27, a1, v17[6], 0xF30u, 0);
    if ( v30 )
    {
      sub_AE9DF0(&v29, (__int64)a3, 0x10u);
    }
    else if ( v32 )
    {
      v22 = sub_168B9E0(v27);
      v23 = v28;
      if ( v28 )
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
      v26 = v23;
      v24 = sub_1587BC0(v22, &v26, v18, v19, v20, v21);
      sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v31 + 8), (__int64)a3, 0x10u);
    }
    sub_15F7200(v27);
    sub_168B9F0((__int64)v27, a1, a3[1].m128i_u32[2], 0x16CFu, 0);
    sub_15F7200(v27);
    return nullptr;
  }
  return result;
}
