unsigned __int64 __fastcall sub_F42360(__int64 a1, __int64 a2)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int16 v9; // r13
  _QWORD *v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rsi

  if ( !(unsigned __int8)sub_F422E0(a1) && !(*(_BYTE *)(a1 + 19) >> 2) )
    return a1 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)(a1 + 24);
  if ( (v5 & 8) != 0 )
  {
    v14 = v5 & 0xFFFFFFFFFFFFFFF0LL;
    v7 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL)) | *(_QWORD *)(a1 + 24) & 7LL;
    v6 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v14 + 16LL) - 35 <= 1 )
      goto LABEL_6;
LABEL_11:
    v7 = sub_F3F890(v7);
    if ( !v7 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v6 = v5 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 24) & 7LL;
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 35 > 1 )
    goto LABEL_11;
LABEL_6:
  v6 = sub_F42360(v7, a2);
LABEL_7:
  v9 = *(_WORD *)(a1 + 18);
  v10 = (_QWORD *)(a1 + 48);
  v11 = v6 & 7;
  v12 = (v9 >> 3) & 0x7F;
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v15 = v8 | v11;
    v16 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v6 & 8) != 0 )
    {
      v15 |= *(__int64 *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL));
      v16 = (_QWORD *)*v16;
    }
    v13 = sub_A4CF00(a2, (__int64)v16, v15);
  }
  else
  {
    v13 = v6 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v8 | (unsigned int)v11;
  }
  return sub_A51360(a2, v13, v10, v12, nullptr, 0, 0);
}

