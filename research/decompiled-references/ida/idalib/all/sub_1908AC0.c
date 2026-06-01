unsigned __int64 __fastcall sub_1908AC0(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned __int8 a9)
{
  _DWORD *v10; // r14
  _DWORD *v11; // r13
  unsigned int v12; // ebp
  __int64 v14; // rax
  __int64 v15; // rdi
  char v16; // al
  __int64 *v17; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v37[16]; // [rsp+1Ch] [rbp-ECh] BYREF
  int v38; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v39; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v41[200]; // [rsp+40h] [rbp-C8h] BYREF

  v10 = (_DWORD *)a4;
  v11 = (_DWORD *)a3;
  v12 = a5;
  v14 = *(_QWORD *)(a2 + 8);
  v37[0] = a6;
  v39 = v14;
  v14 &= 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)v14;
  if ( *(_BYTE *)(*(_QWORD *)v14 + 16LL) == 7 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7 )
  {
    v15 = sub_F63050(v15, a2, a3, a4);
    if ( v15 )
    {
LABEL_2:
      v39 = *(_QWORD *)(v15 + 32);
      v15 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_3;
    }
    v15 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_3:
  v16 = *(_BYTE *)(a1[29] + 1);
  if ( (v16 & 8) != 0 )
  {
    a4 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    a3 = *(unsigned __int8 *)(a4 + 16);
    if ( (_BYTE)a3 == 13 )
    {
      a3 = *(unsigned __int16 *)(a4 + 18);
      LOWORD(a3) = ((unsigned __int16)a3 >> 3) & 0x1FF;
      if ( (_WORD)a3 == 436 )
      {
        v17 = a1 + 1;
        if ( !v37[0] )
        {
          sub_168B9F0((__int64)v41, v17, v12, 0xE14u, 0);
          v40 = sub_EEC8C0(a2, (__int64)v17, *(double *)a7.m128i_i64);
          sub_1587DB0((__int64)v41, &v40);
          sub_15F7200(v41);
          return 0;
        }
        sub_168B9F0((__int64)v41, v17, v12, (v16 & 0x40) == 0 ? 7039 : 5583, 0);
        v40 = sub_EEC8C0(a2, (__int64)v17, *(double *)a7.m128i_i64);
        sub_1587DB0((__int64)v41, &v40);
        sub_15F7200(v41);
        goto LABEL_8;
      }
    }
    else if ( (_BYTE)a3 == 47 )
    {
      sub_168B9F0((__int64)v41, a1 + 1, v12, 0xF8Au, 0);
      v31 = sub_15890D0((__int64)v41, v37);
      sub_1605D30(v31, &v39);
      sub_15F7200(v41);
      return 0;
    }
  }
  if ( sub_F61040(v15, a2, a3, a4, a5, a6) )
    goto LABEL_8;
  v22 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  switch ( (_BYTE)v23 )
  {
    case 0x2A:
      if ( !(unsigned __int8)sub_18EC860((__int64)a1, v12, a2, v19, v20, *(double *)a7.m128i_i64) )
        return 0;
      goto LABEL_8;
    case 0x22:
      if ( (unsigned __int8)sub_18BCD60((__int64)a1, v12, a2, v19, v20, *(double *)a7.m128i_i64)
        || (unsigned __int8)sub_18F07E0((__int64)a1, v12, a2, *(double *)a7.m128i_i64) )
      {
        return 0;
      }
      goto LABEL_8;
    case 0xE:
      sub_168B9F0((__int64)v41, a1 + 1, v12, (*(_BYTE *)a1[29] & 0x10) == 0 ? 5505 : 6636, 0);
      v36 = sub_15890D0((__int64)v41, v37);
      v40 = sub_EEC8C0(a2, (__int64)v37, *(double *)a7.m128i_i64);
      sub_1587DB0(v36, &v40);
      sub_15F7200(v41);
      goto LABEL_8;
  }
  v24 = *(unsigned __int8 *)(v22 + 16);
  if ( (_BYTE)v24 == 13 )
  {
    v25 = *(unsigned __int16 *)(v22 + 18);
    LOWORD(v25) = ((unsigned __int16)v25 >> 3) & 0x1FF;
    if ( (unsigned __int16)v25 > 0x1F1u )
    {
      v35 = sub_1907C70((__int64)a1, (_QWORD *)a2, a7, a8, v23, v25, v20, v21);
      if ( v35 == 1 )
        return 0;
      return sub_1908AC0((_DWORD)a1, (unsigned int)v35 & 0xFFFFFFFE, (_DWORD)v11, (_DWORD)v10, v12, v37[0], a9);
    }
  }
  v26 = a1[29];
  if ( (*(_BYTE *)(v26 + 13) & 2) != 0 )
  {
    if ( (unsigned int)(v23 - 57) <= 1 )
      goto LABEL_8;
    v27 = *(_BYTE *)(v26 + 13) & 4;
    if ( (*(_BYTE *)(v26 + 13) & 4) != 0 )
    {
LABEL_20:
      sub_168B9F0((__int64)v41, a1 + 1, v12, 0x1498u, 0);
      v28 = sub_1605D30((__int64)v41, &v39);
      v38 = v37[0];
      v29 = sub_1587D10(v28, &v38);
      v40 = sub_EEC8C0(a2, (__int64)&v38, *(double *)a7.m128i_i64);
      sub_1587DB0(v29, &v40);
      sub_15F7200(v41);
      return 0;
    }
    goto LABEL_42;
  }
  v27 = *(_BYTE *)(v26 + 13) & 4;
  if ( (*(_BYTE *)(v26 + 13) & 4) == 0 )
  {
LABEL_42:
    if ( (*(_BYTE *)(v26 + 47) & 0x20) == 0 )
      goto LABEL_20;
    v33 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
      goto LABEL_20;
    v34 = (unsigned int)*(unsigned __int8 *)(v33 + 16) - 57;
    if ( (unsigned int)v34 > 1 )
      v33 = sub_F63050(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL), v24, v34, v27);
    if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v33 + 32) & 0xFFFFFFFFFFFFFFF0LL), v24, v34, v27, v20) )
      goto LABEL_20;
    goto LABEL_8;
  }
  v32 = (unsigned int)(v23 - 57);
  if ( (unsigned int)v32 > 1 )
    goto LABEL_20;
  v24 = (unsigned int)(v24 - 57);
  if ( (unsigned int)v24 > 1 )
    v22 = sub_F63050(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL), v24, v32, v27);
  if ( ((*(_BYTE *)(v22 + 18) >> 3) & 0xF) == 3 )
  {
    v26 = a1[29];
    goto LABEL_42;
  }
LABEL_8:
  if ( (unsigned __int8)sub_18FE730(a2, v12, a1, *(double *)a7.m128i_i64) )
    return 0;
  if ( *(char *)(a1[29] + 1) < 0 && ((v39 & 4) != 0 || (byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
  {
    sub_168B9F0((__int64)v41, a1 + 1, v12, 0x1AB1u, 0);
    v30 = sub_15890D0((__int64)v41, v37);
    sub_1605D30(v30, &v39);
    sub_15F7200(v41);
  }
  if ( a9 && (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
  {
    *v11 = 1;
    *v10 = (*(_BYTE *)(a2 + 1) >> 3) & 7;
    return v39;
  }
  else
  {
    *v11 = 0;
    return sub_6D5440(&v39);
  }
}
