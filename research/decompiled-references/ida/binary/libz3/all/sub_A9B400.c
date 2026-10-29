__int64 __fastcall sub_A9B400(unsigned int **a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  bool v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // r15
  _DWORD *v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rdi
  unsigned int v22; // esi
  __m128i v23; // xmm0
  __int64 v24; // rax
  char v25; // cl
  __int64 v26; // rsi
  _DWORD *v27; // rcx
  bool v28; // zf
  __int64 v30; // [rsp+0h] [rbp-118h]
  __int64 v31; // [rsp+0h] [rbp-118h]
  void *v32; // [rsp+0h] [rbp-118h]
  __int64 v34; // [rsp+8h] [rbp-110h]
  unsigned int v35; // [rsp+14h] [rbp-104h]
  __int64 v36; // [rsp+18h] [rbp-100h]
  _BYTE v37[8]; // [rsp+20h] [rbp-F8h] BYREF
  int v38[8]; // [rsp+28h] [rbp-F0h] BYREF
  unsigned int *v39; // [rsp+48h] [rbp-D0h]
  __m128i v40; // [rsp+50h] [rbp-C8h] BYREF
  bool v41; // [rsp+60h] [rbp-B8h]
  int v42; // [rsp+68h] [rbp-B0h] BYREF
  char v43; // [rsp+6Ch] [rbp-ACh]
  __int64 v44; // [rsp+70h] [rbp-A8h]
  int v45; // [rsp+78h] [rbp-A0h] BYREF
  char v46; // [rsp+7Ch] [rbp-9Ch]
  __int64 v47; // [rsp+80h] [rbp-98h]
  unsigned int *v48; // [rsp+88h] [rbp-90h]
  __int64 v49; // [rsp+90h] [rbp-88h]
  __int64 v50; // [rsp+98h] [rbp-80h]
  char v51; // [rsp+A0h] [rbp-78h]
  _QWORD v52[5]; // [rsp+A8h] [rbp-70h] BYREF
  __m128i v53; // [rsp+D0h] [rbp-48h]

  v7 = *((_QWORD *)*a1 + 2);
  if ( *(_QWORD *)(v7 + 8984) != qword_1C7ECB8 )
    return 0;
  if ( *(_BYTE *)(v7 + 2416) )
    return 0;
  v10 = sub_FF9E10(a1[63], a2);
  v35 = v10;
  v11 = sub_FF9E10(a1[63], a3);
  v12 = v11 == -1 || v10 == -1;
  if ( v12 )
    return 0;
  v13 = *((_QWORD *)*a1 + 4);
  v14 = *(_QWORD **)(v13 + 8LL * v10);
  v15 = *(__int64 **)(v13 + 8LL * v11);
  if ( v14[1] == v15[1] )
    return 0;
  v16 = *v15;
  v36 = *v14;
  v30 = sub_15D1F10(*v14);
  if ( v30 != sub_15D1F10(v16) )
    return 0;
  if ( a5 )
    goto LABEL_13;
  if ( *(_WORD *)(v36 + 4) )
  {
    if ( *(_WORD *)(v16 + 4) )
      goto LABEL_13;
    v17 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
    if ( !v17 )
      goto LABEL_13;
    if ( *v17 != 5 )
      goto LABEL_12;
    v28 = v17[1] == 0;
    goto LABEL_61;
  }
  v26 = *(_QWORD *)(v36 + 16);
  v27 = *(_DWORD **)(v26 + 24);
  if ( v27 )
  {
    if ( *v27 == 5 )
    {
      if ( !v27[1] )
        goto LABEL_13;
      if ( *(_WORD *)(v16 + 4) )
        goto LABEL_13;
      v17 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
      if ( !v17 )
        goto LABEL_13;
    }
    else if ( *(_WORD *)(v16 + 4) || (v17 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL)) == nullptr )
    {
      if ( !*v27 && v27[1] == 4 )
        return 0;
      goto LABEL_13;
    }
    if ( *v17 != 5 )
      goto LABEL_42;
    goto LABEL_53;
  }
  if ( *(_WORD *)(v16 + 4) )
    goto LABEL_13;
  v17 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
  v28 = v17 == nullptr;
  if ( v17 )
  {
    if ( *v17 != 5 )
      goto LABEL_12;
LABEL_53:
    if ( !v17[1] )
      goto LABEL_13;
    v27 = *(_DWORD **)(v26 + 24);
    if ( !v27 )
      goto LABEL_12;
LABEL_42:
    if ( !*v27 && v27[1] == 4 )
      return 0;
LABEL_12:
    if ( !*v17 && v17[1] == 4 )
      return 0;
    goto LABEL_13;
  }
LABEL_61:
  if ( !v28 )
    goto LABEL_12;
LABEL_13:
  sub_A7AF60(a1);
  sub_83B2E0((__int64)v37, (unsigned __int64 *)a4);
  v18 = *(_QWORD *)a4;
  v19 = *(_QWORD *)(a4 + 8) + 12LL * *(unsigned int *)(a4 + 16);
  if ( *(_QWORD *)a4 )
  {
    v20 = *(unsigned int *)(v18 - 4);
    v18 += 40 * v20;
    v12 = (_DWORD)v20 != 0;
  }
  v41 = v12;
  v43 &= 0xFCu;
  v46 &= 0xFCu;
  v21 = qword_1C7F2C0;
  v42 = 0;
  v44 = 0;
  v45 = 1;
  v47 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v34 = v19;
    v32 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v42, &qword_1C7F280);
    v19 = v34;
    v21 = v32;
  }
  else
  {
    v42 = qword_1C7F280;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    v31 = v19;
    sub_182C690(v21, &v45, &qword_1C7F290);
    v19 = v31;
  }
  else
  {
    v46 &= ~1u;
    v45 = qword_1C7F290;
  }
  v49 = v19;
  v50 = v19;
  v48 = (unsigned int *)v18;
  while ( v37[0] )
  {
    if ( v39 == v48 )
      goto LABEL_36;
    v22 = *v39;
LABEL_22:
    sub_A75C40(a1, v22, a1 + 106);
    if ( v37[0] )
    {
      v39 += 10;
    }
    else
    {
      v24 = v40.m128i_i64[0] + 12;
      v40.m128i_i64[0] = v24;
      if ( v40.m128i_i64[1] != v24 )
      {
        v25 = 0;
        while ( *(_DWORD *)(v24 + 4) != 2 )
        {
          v24 += 12;
          v25 = 1;
          if ( v40.m128i_i64[1] == v24 )
          {
            v40.m128i_i64[0] = v40.m128i_i64[1];
            goto LABEL_24;
          }
          v5 = v24;
        }
        if ( v25 )
          v40.m128i_i64[0] = v5;
      }
    }
LABEL_24:
    v51 = v37[0];
    v52[0] = 0;
    v52[1] = 0;
    v52[2] = 1;
    v52[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v52, v38);
    v23 = _mm_load_si128(&v40);
    v52[4] = v39;
    v53 = v23;
    sub_25A130((char *)v52);
  }
  if ( v40.m128i_i64[0] != v49 )
  {
    v22 = *(_DWORD *)(v40.m128i_i64[0] + 8);
    goto LABEL_22;
  }
LABEL_36:
  sub_25A130((char *)&v42);
  sub_25A130((char *)v38);
  sub_A97610((__int64 *)a1, v35, v11);
  return 1;
}

