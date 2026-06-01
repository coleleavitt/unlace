__m128i *__fastcall sub_1A06310(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v6; // r12d
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __m128i *result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v25; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+88h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp-38h]
  char v28; // [rsp+94h] [rbp-34h]

  v6 = a4;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  v8 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v9 = *v8;
  v10 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( v9 >= v10 )
  {
    if ( v9 != v10 )
    {
      while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 227 )
      {
        v10 += 8LL;
        if ( v9 == v10 )
          goto LABEL_6;
      }
      v14 = *(_QWORD *)v9;
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 227 )
        goto LABEL_13;
      goto LABEL_15;
    }
LABEL_6:
    v12 = sub_168B6C0((__int64)a1);
    return sub_B26570(v12, v6, a3);
  }
  v11 = v9;
  while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 227 )
  {
    v11 += 8LL;
    if ( v10 == v11 )
      goto LABEL_6;
  }
  if ( v10 == v11 )
    goto LABEL_6;
  while ( 1 )
  {
    v14 = *(_QWORD *)v9;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 227 )
      break;
LABEL_13:
    v9 += 8LL;
  }
LABEL_15:
  result = nullptr;
  if ( v6 != *(_DWORD *)(v14 + 40) )
  {
    sub_168B9F0((__int64)v23, a1, *(_DWORD *)(v14 + 24), 0xF30u, 0);
    if ( v26 )
    {
      sub_AE9DF0(&v25, (__int64)a3, 0x10u);
    }
    else if ( v28 )
    {
      v19 = sub_168B9E0(v23);
      v20 = v24;
      if ( v24 )
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
      v22 = v20;
      v21 = sub_1587BC0(v19, &v22, v15, v16, v17, v18);
      sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v27 + 8), (__int64)a3, 0x10u);
    }
    sub_15F7200(v23);
    sub_168B9F0((__int64)v23, a1, a3[1].m128i_u32[2], 0x16CFu, 0);
    sub_15F7200(v23);
    return nullptr;
  }
  return result;
}
