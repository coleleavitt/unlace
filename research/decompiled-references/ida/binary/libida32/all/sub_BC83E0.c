__int64 __fastcall sub_BC83E0(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rax
  int v16; // esi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // r13
  _QWORD *v25; // rax
  __int64 *v26; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v27; // [rsp+10h] [rbp-98h] BYREF
  __int64 v28; // [rsp+20h] [rbp-88h]
  __m128i v29; // [rsp+30h] [rbp-78h] BYREF
  __int64 v30; // [rsp+40h] [rbp-68h]
  __m128i v31; // [rsp+50h] [rbp-58h] BYREF
  __int64 v32; // [rsp+60h] [rbp-48h]
  __int64 v33; // [rsp+68h] [rbp-40h]
  __int64 v34; // [rsp+70h] [rbp-38h]

  v26 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v26, a2) )
    return 0;
  v3 = v26;
  v4 = *v26;
  v5 = *(__int64 (**)())(*v26 + 4464);
  if ( v5 != sub_BA26F0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v26, a2) )
      return 0;
    v3 = v26;
    v4 = *v26;
  }
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 32);
    v7 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(v4 + 88))(v3, v6, v7) )
    return 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  v11 = *(_QWORD *)(a2 + 24);
  v29.m128i_i32[2] = *(_DWORD *)(a2 + 4);
  v29.m128i_i64[0] = v10;
  v12 = _mm_load_si128(&v29);
  v30 = v11;
  v32 = v11;
  v13 = *v26;
  v31 = v12;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))(v13 + 64))(
          v26,
          v6,
          v29.m128i_u32[2],
          v10,
          v8,
          v9,
          v12.m128i_i64[0],
          v12.m128i_i64[1],
          v32);
  if ( !(_BYTE)v14 )
    return 0;
  v15 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0
    && (v22 = a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0),
        *(_DWORD *)(v22 + 32)) )
  {
    v16 = *(_DWORD *)(v22 + 44);
  }
  else
  {
    if ( (v15 & 0x100000) == 0 )
    {
LABEL_23:
      sub_EC6110(&v31, a2);
      v23 = v33;
      v24 = v34;
      v27 = _mm_load_si128(&v31);
      v28 = v32;
      while ( 1 )
      {
        v25 = (_QWORD *)v27.m128i_i64[0];
        if ( v23 != v27.m128i_i64[0] )
          break;
        if ( v24 == v27.m128i_i64[1] )
          return v14;
        if ( (v27.m128i_i8[8] & 3) != 0 )
          goto LABEL_30;
LABEL_25:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v26 + 96))(v26, *v25) )
          return 0;
        sub_BC8020(&v27);
      }
      if ( (v27.m128i_i8[8] & 3) == 0 )
        goto LABEL_25;
LABEL_30:
      v25 = (_QWORD *)sub_ECEDF0(&v27);
      goto LABEL_25;
    }
    v16 = 0;
  }
  v17 = v15 >> 16;
  v18 = 8LL * ((v17 & 0x20) != 0);
  if ( *(_DWORD *)(a2 + v18 + 16LL * ((v17 & 8) != 0) + 32) )
    v19 = a2 + v18 + 16 * (((v17 & 8) != 0) + (unsigned __int64)((v17 & 0x10) != 0)) + 32;
  else
    v19 = 0;
  if ( !v16 )
    goto LABEL_23;
  v20 = v19 + 32LL * (unsigned int)(v16 - 1) + 32;
  while ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*v26 + 112))(v26, v19) )
  {
    v19 += 32LL;
    if ( v20 == v19 )
      goto LABEL_23;
  }
  return 0;
}

