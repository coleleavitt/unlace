__int64 __fastcall sub_1B10FC0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        __m128 a6,
        __m128 a7)
{
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rsi
  unsigned int v17; // r15d
  bool v18; // al
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdi
  __m128i *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  bool v29; // al
  __int64 v30; // rax
  _QWORD *v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rcx
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // rdi
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  int v51; // [rsp+14h] [rbp-104h] BYREF
  __int64 v52; // [rsp+18h] [rbp-100h] BYREF
  void *v53; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v54; // [rsp+28h] [rbp-F0h]
  unsigned __int8 v55; // [rsp+2Ch] [rbp-ECh]
  __m128i v56; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-D8h] BYREF
  _UNKNOWN **v58; // [rsp+50h] [rbp-C8h] BYREF
  char v59; // [rsp+58h] [rbp-C0h]

  v11 = (__int64 *)*a1;
  v54 = 1;
  v53 = nullptr;
  v55 = 0;
  if ( a5 )
  {
    v59 = 1;
    v58 = &off_2C66D60;
    v14 = sub_1914D50(v11, a2, (__int64)&v53, (_BOOL4 *)&v58, 1, a6, a7);
  }
  else
  {
    v14 = sub_1915F20(v11, a2, (__int64)&v53, 1, a6, a7);
  }
  if ( v14 == 1 )
  {
LABEL_14:
    v17 = v54;
    goto LABEL_15;
  }
  v16 = v55;
  if ( a4 )
  {
    v17 = v54;
    if ( v55 )
    {
      if ( v54 > 0x40 )
      {
LABEL_7:
        v16 = v55;
        v18 = (unsigned int)sub_2206780(&v53) == v17;
        goto LABEL_8;
      }
      v34 = v53;
    }
    else
    {
      v13 = v54 - 1;
      v34 = v53;
      v35 = 1LL << ((unsigned __int8)v54 - 1);
      if ( v54 > 0x40 )
      {
        v13 = (unsigned int)v13 >> 6;
        if ( (v35 & *((_QWORD *)v53 + v13)) != 0 )
          goto LABEL_9;
        goto LABEL_7;
      }
      if ( (v35 & (unsigned __int64)v53) != 0 )
        goto LABEL_9;
    }
    v18 = v34 == nullptr;
LABEL_8:
    if ( v18 )
    {
LABEL_9:
      v19 = sub_C00A40(a2, v16, v12, v13, v15);
      sub_168B9F0((__int64)&v58, a1, v19, 0x11CAu, 0);
      sub_1AF81E0(&v56, a3);
      v20 = sub_1682AF0((__int64)&v58, (__int64)&v56);
      v21 = 1;
      v22 = v20;
LABEL_10:
      v23 = (__m128i *)&v51;
      v51 = v21;
      v24 = sub_1587D10(v22, &v51);
LABEL_11:
      v25 = v24;
      v52 = sub_EEC8C0(a2, (__int64)v23, *(double *)a6.m128_u64);
      sub_1587DB0(v25, &v52);
      if ( (__int64 *)v56.m128i_i64[0] != &v57 )
        operator delete((void *)v56.m128i_i64[0]);
      v14 = 1;
      sub_15F7200(&v58);
      goto LABEL_14;
    }
    if ( a3 - 5 > 2 )
    {
      if ( !(_BYTE)v16 )
        goto LABEL_42;
LABEL_21:
      if ( v17 <= 0x40 )
      {
        v27 = (unsigned __int64)v53;
        goto LABEL_23;
      }
LABEL_59:
      v16 = (unsigned __int8)v16;
      v12 = v17 - (unsigned int)sub_2206780(&v53);
      v29 = (unsigned int)v12 <= 0x3F;
      goto LABEL_25;
    }
LABEL_49:
    if ( v17 > 0x40 )
    {
      v16 = (unsigned __int8)v16;
      if ( (unsigned int)sub_22069E0(&v53) == 1 )
      {
        if ( !(_BYTE)v16 )
        {
          v39 = v17 - 1;
          v40 = (unsigned __int64)v53;
          v41 = 1LL << ((unsigned __int8)v17 - 1);
          goto LABEL_61;
        }
        goto LABEL_59;
      }
    }
    else
    {
      v40 = (unsigned __int64)v53;
      v27 = (unsigned __int64)v53;
      if ( v53 && ((unsigned __int64)v53 & ((unsigned __int64)v53 - 1)) == 0 )
      {
        if ( !(_BYTE)v16 )
        {
          v15 = v17 + 1;
          if ( _bittest64((const __int64 *)&v40, v17 - 1) )
            goto LABEL_44;
LABEL_76:
          _BitScanReverse64(&v50, v40);
          v28 = v50 ^ 0x3F;
          v29 = (unsigned int)(65 - v28) <= 0x40;
          goto LABEL_25;
        }
LABEL_23:
        if ( !v27 )
          goto LABEL_26;
        _BitScanReverse64(&v27, v27);
        v28 = v27 ^ 0x3F;
        v29 = (unsigned int)(64 - v28) <= 0x3F;
        goto LABEL_25;
      }
    }
    v44 = sub_C00A40(a2, v16, v12, v27, v15);
    sub_168B9F0((__int64)&v58, a1, v44, 0x1C2Au, 0);
    v56.m128i_i64[0] = sub_EEC8C0(a2, (__int64)a1, *(double *)a6.m128_u64);
    sub_1587DB0((__int64)&v58, v56.m128i_i64);
    v14 = 1;
    sub_15F7200(&v58);
    v17 = v54;
    goto LABEL_15;
  }
  if ( v55 )
  {
    v17 = v54;
    if ( a3 - 5 > 2 )
      goto LABEL_21;
    goto LABEL_49;
  }
  if ( sub_1AE7A00((__int64 *)&v53) )
  {
    v37 = sub_C00A40(a2, v16, v12, v36, v15);
    sub_168B9F0((__int64)&v58, a1, v37, 0x11CAu, 0);
    sub_1AF81E0(&v56, a3);
    v38 = sub_1682AF0((__int64)&v58, (__int64)&v56);
    v21 = 0;
    v22 = v38;
    goto LABEL_10;
  }
  v16 = 0;
  v17 = v54;
  if ( a3 - 5 <= 2 )
    goto LABEL_49;
LABEL_42:
  v39 = v17 - 1;
  v40 = (unsigned __int64)v53;
  v41 = 1LL << ((unsigned __int8)v17 - 1);
  if ( v17 <= 0x40 )
  {
    v15 = v17 + 1;
    if ( (v41 & (unsigned __int64)v53) != 0 )
    {
LABEL_44:
      if ( !v17 )
        goto LABEL_26;
      v28 = 64;
      v42 = ~(v40 << (64 - (unsigned __int8)v17));
      if ( v42 )
      {
        _BitScanReverse64(&v43, v42);
        v28 = (unsigned int)v43 ^ 0x3F;
      }
      v15 = (unsigned int)(v15 - v28);
      v29 = (unsigned int)v15 <= 0x40;
      goto LABEL_25;
    }
    if ( !v53 )
      goto LABEL_26;
    goto LABEL_76;
  }
LABEL_61:
  if ( (v41 & *(_QWORD *)(v40 + 8LL * (v39 >> 6))) != 0 )
    v46 = sub_2206800(&v53);
  else
    v46 = sub_2206780(&v53);
  v16 = (unsigned __int8)v16;
  v12 = v17 + 1 - v46;
  v29 = (unsigned int)v12 <= 0x40;
LABEL_25:
  if ( !v29 )
  {
    v45 = sub_C00A40(a2, v16, v12, v28, v15);
    sub_168B9F0((__int64)&v58, a1, v45, 0x11B2u, 0);
    sub_1AF81E0(&v56, a3);
    v23 = &v56;
    v24 = sub_1682AF0((__int64)&v58, (__int64)&v56);
    goto LABEL_11;
  }
LABEL_26:
  if ( a3 != 15 )
  {
    if ( a3 != 77 )
      goto LABEL_15;
    v30 = sub_1AE5FF0(a1[1]);
    if ( (_BYTE)v16 )
    {
      if ( v17 > 0x40 )
        v31 = (_QWORD *)*v31;
      LODWORD(v33) = (_DWORD)v31;
      goto LABEL_32;
    }
    if ( v17 > 0x40 )
    {
      v33 = (_QWORD *)*v31;
LABEL_32:
      *(_DWORD *)(v30 + 1084) = (_DWORD)v33;
      if ( (unsigned int)v33 > 1 )
        *(_BYTE *)(sub_1AE5FF0(v32) + 1088) = 1;
      goto LABEL_15;
    }
    if ( v17 )
    {
      LODWORD(v33) = (__int64)((_QWORD)v31 << (64 - (unsigned __int8)v17)) >> (64 - (unsigned __int8)v17);
      goto LABEL_32;
    }
LABEL_85:
    *(_DWORD *)(v30 + 1084) = 0;
    goto LABEL_15;
  }
  v30 = sub_1AE5FF0(a1[1]);
  if ( !v30 || *(_DWORD *)(v30 + 1084) != 1 )
    goto LABEL_15;
  LODWORD(v48) = (_DWORD)v53;
  if ( (_BYTE)v16 )
  {
    if ( v17 > 0x40 )
      v48 = *(_QWORD *)v53;
    LODWORD(v49) = v48;
  }
  else if ( v17 > 0x40 )
  {
    v49 = *(_QWORD *)v53;
  }
  else
  {
    if ( !v17 )
      goto LABEL_85;
    LODWORD(v49) = (__int64)((_QWORD)v53 << (64 - (unsigned __int8)v17)) >> (64 - (unsigned __int8)v17);
  }
  *(_DWORD *)(v30 + 1084) = v49;
  if ( (unsigned int)v49 > 1 )
    *(_BYTE *)(sub_1AE5FF0(v47) + 1088) = 1;
LABEL_15:
  if ( v17 > 0x40 && v53 )
    operator delete[](v53);
  return v14;
}
