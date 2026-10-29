__int64 __fastcall sub_18BFF30(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        double a7,
        double a8)
{
  __int64 *v8; // r15
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // r15
  __int64 v22; // rdi
  char v23; // al
  unsigned int v24; // ecx
  unsigned int v25; // r13d
  __int64 v26; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // al

  v8 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(a1 + 248);
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    if ( sub_F60F80(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), v15, a3, a4, a5, (__int64)a6) )
    {
      v24 = 28;
      goto LABEL_6;
    }
    v14 = *v8;
    v15 = *(_QWORD *)(a1 + 248);
  }
  if ( sub_F60F80(v14, v15, a3, a4, a5, (__int64)a6) )
  {
    v21 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 47LL) & 0x20) == 0 )
      goto LABEL_5;
    if ( !sub_F58100(v22)
      && (!sub_9EC890(*v21, v15, v28, v29, v30) || (int)sub_AADE70(*(_QWORD **)(a1 + 248), a4, a3, v18, v19) >= 0) )
    {
      v22 = *v21;
LABEL_5:
      v23 = sub_F60F80(v22, *(_QWORD *)(a1 + 248), v17, v18, v19, v20);
      v24 = 27;
      if ( v23 )
        goto LABEL_6;
      return 1;
    }
LABEL_10:
    v25 = 1;
    *a6 = 4702;
    return v25;
  }
  if ( !sub_F58100(*v8) )
    return 1;
  if ( sub_F58100(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 47LL) & 0x20) != 0
      && (int)sub_A637F0(*(_QWORD *)(a1 + 248), a4, a3, v31, v32) < 0 )
    {
      goto LABEL_10;
    }
    v24 = 39;
  }
  else
  {
    v34 = sub_F60F80(
            *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL),
            *(_QWORD *)(a1 + 248),
            a3 & 0xFFFFFFFFFFFFFFF0LL,
            v31,
            v32,
            v33);
    v24 = 29;
    if ( !v34 )
      return 1;
  }
LABEL_6:
  v25 = 0;
  if ( a2 )
  {
    v26 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, a4, v24, 0, 0, a7, a8, 0);
    *a2 = v26;
    *a2 = sub_160A600(a1, v26 & 0xFFFFFFFFFFFFFFFELL, a5, 0x1Au, 0, 0, a7, a8, 0);
  }
  return v25;
}
