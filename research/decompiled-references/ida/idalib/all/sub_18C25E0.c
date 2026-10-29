bool __fastcall sub_18C25E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+8h] [rbp-20h]

  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(unsigned __int8 *)(v8 + 16);
  if ( (_BYTE)v9 == 13 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(unsigned __int8 *)(v10 + 16);
    if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
      goto LABEL_3;
  }
  else if ( (_BYTE)v9 == 47 )
  {
    v19 = a3;
    v12 = sub_F60F10(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
            a2,
            a3,
            a4,
            v9,
            a6);
    a3 = v19;
    if ( (*((_BYTE *)v12 + 74) & 1) != 0 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v10 = *(_QWORD *)v13;
      v11 = *(unsigned __int8 *)(*(_QWORD *)v13 + 16LL);
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v11 = *(unsigned __int8 *)(v10 + 16);
      if ( (v12[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_3;
    }
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v10 = *(_QWORD *)v16;
    v11 = *(unsigned __int8 *)(*(_QWORD *)v16 + 16LL);
    if ( (unsigned __int8)v9 > 0x2Au )
      goto LABEL_3;
    v17 = 0x40600004C00LL;
    if ( !_bittest64(&v17, v9) )
      goto LABEL_3;
  }
  if ( (_BYTE)v11 == 58 )
    return 0;
LABEL_3:
  if ( (_BYTE)v11 == 13 )
  {
    if ( (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
      return sub_18C22D0(a1, a2, a3, v11, v9, a6);
  }
  else if ( (_BYTE)v11 == 47 )
  {
    v20 = a3;
    v15 = sub_F60F10(v10, a2, a3, v11, v9, a6);
    a3 = v20;
    if ( (*((_BYTE *)v15 + 74) & 1) == 0 && (v15[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return sub_18C22D0(a1, a2, a3, v11, v9, a6);
  }
  else
  {
    if ( (unsigned __int8)v11 > 0x2Au )
      return sub_18C22D0(a1, a2, a3, v11, v9, a6);
    v18 = 0x40600004C00LL;
    if ( !_bittest64(&v18, v11) )
      return sub_18C22D0(a1, a2, a3, v11, v9, a6);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 58 )
    return 0;
  return sub_18C22D0(a1, a2, a3, v11, v9, a6);
}
