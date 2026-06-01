void __fastcall sub_6DF6B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r13d
  __int64 v12; // rdx
  char *v13; // rax
  unsigned __int64 v14; // rax
  _BYTE *v15; // rdi
  char *v16; // rcx
  __int64 v17; // rsi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int64 v19; // [rsp+8h] [rbp-80h]
  _BYTE v20[120]; // [rsp+10h] [rbp-78h] BYREF

  v4 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v5 = v4[1];
  else
    v5 = *v4;
  v6 = (unsigned __int64)sub_6C38B0(a1, v5, 0);
  v7 = *(_QWORD *)(a3 + 80);
  v8 = *(_QWORD *)(a3 + 48);
  ptr = v20;
  *(_QWORD *)(a3 + 80) = v6 & 0xFFFFFFFFFFFFFFFBLL | v7 & 3;
  v19 = 0x800000000LL;
  v9 = *(_BYTE *)(v8 + 32) & 0x3F;
  v10 = 8 * v9;
  v11 = *(_BYTE *)(v8 + 32) & 0x3F;
  if ( v9 <= 8 )
  {
    v12 = 0;
    v13 = v20;
    if ( !v10 )
      goto LABEL_5;
    v16 = v20;
    v17 = v8 + 48;
    if ( (unsigned int)v10 < 8 )
      goto LABEL_10;
LABEL_14:
    *(_QWORD *)v16 = *(_QWORD *)(v8 + 48);
    *(_QWORD *)&v16[(unsigned int)v10 - 8] = *(_QWORD *)(v17 + (unsigned int)v10 - 8);
    qmemcpy(
      (void *)((unsigned __int64)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(v17 - (_QWORD)&v16[-((unsigned __int64)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
      8LL * (((unsigned int)v10 + (_DWORD)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8)) >> 3));
    v13 = (char *)ptr;
    LODWORD(v10) = v11 + v19;
    v12 = (unsigned int)(v11 + v19);
    goto LABEL_5;
  }
  sub_25D6060(&ptr, v20, *(_BYTE *)(v8 + 32) & 0x3F, 8);
  v17 = v8 + 48;
  v16 = (char *)ptr + 8 * (unsigned int)v19;
  if ( (unsigned int)v10 >= 8 )
    goto LABEL_14;
LABEL_10:
  if ( (_DWORD)v10 )
    *v16 = *(_BYTE *)(v8 + 48);
  v13 = (char *)ptr;
  LODWORD(v10) = v11 + v19;
  v12 = (unsigned int)(v11 + v19);
LABEL_5:
  LODWORD(v19) = v10;
  v14 = sub_6DF480((__int64)a1, a3, v13, v12);
  v15 = ptr;
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v15 != v20 )
    free(v15);
}

