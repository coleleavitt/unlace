__int64 __fastcall sub_E5B0(__int64 a1, int a2, __int64 a3, int a4, double a5, double a6)
{
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  unsigned __int16 *v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // r14
  unsigned __int8 v23; // al
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int16 v27; // dx
  __int64 v28; // rdx
  __int64 v29; // [rsp+8h] [rbp-D0h]
  __int64 v30; // [rsp+10h] [rbp-C8h]
  int v31; // [rsp+1Ch] [rbp-BCh] BYREF
  _QWORD v32[23]; // [rsp+20h] [rbp-B8h] BYREF

  v31 = a4;
  v32[15] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 48) || (unsigned __int8)qgetenv("IDA_NORELOC", 0) || !v31 )
    return 1;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = (unsigned int)*(_QWORD *)(a3 + 48);
  qlseek(v11, *(_QWORD *)(v10 + 16) + (int)v12, 0);
  v13 = *(unsigned __int16 **)(a1 + 24);
  v14 = *v13;
  if ( (unsigned __int16)v14 > 0x1F2u )
  {
    if ( (_WORD)v14 == 0x8664 )
      goto LABEL_10;
    if ( (unsigned __int16)v14 > 0x8664u )
    {
      if ( (_WORD)v14 != 0xA641 && (_WORD)v14 != 0xAA64 )
        goto LABEL_11;
LABEL_10:
      if ( *(_DWORD *)(a3 + 64) == 0xFFFF && (*(_BYTE *)(a3 + 75) & 1) != 0 )
      {
        sub_6300(v11, *(unsigned __int16 **)(a1 + 24), (__int64)v32, 1, *(_BYTE *)(*(_QWORD *)(a1 + 8) + 382LL));
        v13 = *(unsigned __int16 **)(a1 + 24);
        v31 = LODWORD(v32[0]) - 1;
      }
      goto LABEL_11;
    }
    LOBYTE(v27) = *v13;
    HIBYTE(v27) = BYTE1(v14) & 0xFE;
    if ( v27 == 614 || (_WORD)v14 == 1126 )
      goto LABEL_10;
LABEL_23:
    if ( (_WORD)v14 != 388 && (_WORD)v14 != 512 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (unsigned __int16)v14 > 0x1BFu )
  {
    v28 = 0x7000000000015LL;
    LOWORD(v14) = v14 - 448;
    if ( _bittest64(&v28, v14) )
      goto LABEL_10;
    goto LABEL_11;
  }
  if ( (unsigned __int16)v14 > 0x168u )
  {
    v25 = (unsigned int)(v14 - 418);
    if ( (unsigned __int16)(v14 - 418) <= 6u )
    {
      v26 = 81;
      if ( _bittest64(&v26, v25) )
        goto LABEL_10;
      goto LABEL_11;
    }
    goto LABEL_23;
  }
  if ( (unsigned __int16)v14 > 0x14Bu )
  {
    LOWORD(v14) = v14 - 332;
    v15 = 335544321;
    if ( _bittest64(&v15, v14) )
      goto LABEL_10;
  }
LABEL_11:
  v16 = sub_6230(v13, *(_BYTE *)(*(_QWORD *)(a1 + 8) + 382LL));
  sub_DB90(v11, (unsigned int *)&v31, v16, "Relocation count", *(_QWORD *)(v17 + 16) + v12, v18);
  v19 = v31;
  if ( v31 )
  {
    v30 = (unsigned int)v31;
    v20 = qcalloc((unsigned int)v31, 22);
    v29 = v20;
    if ( !v20 )
      sub_5B40((__int64)"coff reloc");
    v21 = (_QWORD *)v20;
    sub_6300(v11, *(unsigned __int16 **)(a1 + 24), v20, v19, *(_BYTE *)(*(_QWORD *)(a1 + 8) + 382LL));
    v22 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 141LL) + 32LL * a2 + 16);
    v23 = getinf_flag(3, 32);
    sub_1B020(
      v32,
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 16),
      **(unsigned __int16 **)(a1 + 24),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 382LL),
      v23);
    do
    {
      v24 = v21;
      v21 = (_QWORD *)((char *)v21 + 22);
      sub_D0C0(*(_QWORD *)(a1 + 8), v24, (__int64)v32, a2, v22, a5, a6);
    }
    while ( (_QWORD *)(v29 + 22 * v30) != v21 );
    qfree(v29);
  }
  return 1;
}
