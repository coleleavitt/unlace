__int64 __fastcall sub_73EFB0(__int64 a1, __int64 a2)
{
  _WORD *v4; // rdx
  __int64 v5; // rbp
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  const void *v9; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "#pragma init_seg");
  v4 = *(_WORD **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v4 <= 1u )
  {
    v13 = sub_26240F0(a2, " (", 2);
    v6 = *(_BYTE **)(v13 + 32);
    v5 = v13;
  }
  else
  {
    v5 = a2;
    *v4 = 10272;
    v6 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 2LL);
    *(_QWORD *)(a2 + 32) = v6;
  }
  v7 = *(_QWORD *)(v5 + 24);
  v8 = *(unsigned int *)(a1 + 36);
  v9 = *(const void **)(a1 + 40);
  if ( v7 - (unsigned __int64)v6 < v8 )
  {
    v12 = sub_26240F0(v5, v9, *(unsigned int *)(a1 + 36));
    v6 = *(_BYTE **)(v12 + 32);
    v5 = v12;
    v7 = *(_QWORD *)(v12 + 24);
  }
  else if ( *(_DWORD *)(a1 + 36) )
  {
    memcpy(v6, v9, *(unsigned int *)(a1 + 36));
    v11 = *(_QWORD *)(v5 + 24);
    v6 = (_BYTE *)(v8 + *(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = v6;
    if ( (unsigned __int64)v6 < v11 )
      goto LABEL_8;
LABEL_11:
    sub_26239D0(v5, 41);
    return sub_5FF0F0(a2, "\n");
  }
  if ( (unsigned __int64)v6 >= v7 )
    goto LABEL_11;
LABEL_8:
  *(_QWORD *)(v5 + 32) = v6 + 1;
  *v6 = 41;
  return sub_5FF0F0(a2, "\n");
}

