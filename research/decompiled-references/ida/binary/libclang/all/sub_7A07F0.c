char __fastcall sub_7A07F0(_BYTE *a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // bp
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rax

  while ( 1 )
  {
    v4 = a4;
    v5 = a3;
    v6 = (__int64)a1;
    v7 = a1[8] & 0x7F;
    if ( (unsigned __int8)v7 > 0x10u )
      break;
    v8 = 65922;
    if ( _bittest64(&v8, v7) )
    {
      v9 = 8388688;
      if ( !_bittest64(&v9, v7) )
        return v7;
    }
    else if ( (a1[8] & 0x7D) != 4 )
    {
      goto LABEL_8;
    }
    v10 = *(_QWORD *)(sub_79A2E0((__int64)a1) + 16);
    v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v10 & 4) != 0 )
      v11 = (_QWORD *)*v11;
    v12 = sub_79CC40((__int64)v11);
    a4 = v4;
    a3 = v5;
    a1 = (_BYTE *)v12;
  }
  if ( (unsigned __int8)v7 > 0x1Fu && (unsigned __int8)v7 <= 0x25u )
    return v7;
LABEL_8:
  LOBYTE(v7) = sub_792DE0(a2);
  if ( (_BYTE)v7 )
    return v7;
  if ( *(_QWORD *)a1 || (a1[9] & 1) != 0 )
  {
LABEL_10:
    sub_79FF40(a1);
    sub_79F480((__int64)a1, a2, v5);
    v13 = a1[8] & 0x7F;
    goto LABEL_11;
  }
  if ( !v4
    || (v20 = *(_QWORD *)(a2 + 16), (v20 & 4) != 0)
    && *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 8) != *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    v22 = sub_79A2E0((__int64)a1);
    if ( (*(_BYTE *)(v22 + 28) & 0x7F) != 0 )
      v22 = sub_793320(v22);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 88) + 2160LL) + 1LL) & 8) == 0 && (a1[8] & 0x7F) == 0 )
    {
      a1[9] |= 4u;
      goto LABEL_17;
    }
    goto LABEL_10;
  }
  v21 = a1[8];
  a1[9] |= 4u;
  v13 = v21 & 0x7F;
LABEL_11:
  if ( (_BYTE)v13 == 60 )
  {
    if ( (char)a1[12] < 0 )
      goto LABEL_17;
  }
  else
  {
    if ( (unsigned __int8)v13 > 0x17u )
      goto LABEL_17;
    v14 = 8388688;
    if ( !_bittest64(&v14, v13) && ((_BYTE)v13 != 22 || (a1[9] & 0x20) == 0) )
      goto LABEL_17;
  }
  v15 = *(_QWORD *)(sub_79A2E0((__int64)a1) + 16);
  v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v15 & 4) != 0 )
    v16 = (_QWORD *)*v16;
  v17 = sub_79CC40((__int64)v16);
  sub_7A07F0(v17, a2, v5, v4);
LABEL_17:
  v18 = sub_79A2E0(v6);
  LOBYTE(v7) = *(_BYTE *)(v18 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)v7 - 56 > 4 )
  {
    if ( !(_BYTE)v7 )
      goto LABEL_24;
  }
  else if ( (*(_BYTE *)(v18 + 74) & 2) != 0 )
  {
    return v7;
  }
  v18 = sub_793320(v18);
LABEL_24:
  v7 = *(_QWORD *)(v18 + 88);
  v19 = *(_QWORD *)(v7 + 18208);
  if ( v19 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v19 + 24LL);
    if ( (void (*)())v7 != nullsub_65 )
      LOBYTE(v7) = ((__int64 (__fastcall *)(__int64, __int64, __int64))v7)(v19, v6, a2);
  }
  return v7;
}

