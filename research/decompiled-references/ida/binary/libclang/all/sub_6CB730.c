__int64 __fastcall sub_6CB730(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // edx
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 14 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) != 14 )
      goto LABEL_11;
    v6 = v3;
    v5 = sub_B0D320(v5);
    if ( !v5 )
      goto LABEL_10;
  }
  v6 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 14 )
    goto LABEL_3;
  v15 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 14 )
  {
LABEL_11:
    v8 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    v10 = *(_QWORD *)v8;
    v11 = *((_DWORD *)qword_3C8E3E0 + (unsigned __int16)(((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) - 479));
    if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 14 )
      goto LABEL_4;
    goto LABEL_12;
  }
  v7 = sub_B0D320(v7);
  if ( !v7 )
  {
LABEL_10:
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
LABEL_3:
  v8 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = sub_6B1490(*(_QWORD *)(v7 + 32));
  v10 = *(_QWORD *)v8;
  v11 = v9;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 14 )
  {
LABEL_4:
    v12 = sub_6B1490(*(_QWORD *)(v10 + 32));
    goto LABEL_5;
  }
LABEL_12:
  v16 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 14 )
  {
    v10 = sub_B0D320(v10);
    if ( v10 )
      goto LABEL_4;
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v12 = *((_DWORD *)qword_3C8E3E0 + (unsigned __int16)(((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) - 479));
LABEL_5:
  v13 = 0;
  if ( v12 != v11 )
    return 2 * (unsigned int)(v11 > v12) - 1;
  return v13;
}

