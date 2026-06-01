void __fastcall sub_A5DC80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  int v8; // ecx
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  char v11; // bl
  _BYTE *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  _BYTE *v18; // rdi
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-80h]
  _BYTE v21[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v5 = v4[1];
  else
    v5 = *v4;
  v6 = (unsigned __int64)sub_A5DBD0(a1, v5, 0);
  v7 = *(_QWORD *)(a3 + 48);
  v8 = 0;
  v9 = v21;
  v10 = *(_QWORD *)(a3 + 80) & 3LL;
  ptr = v21;
  *(_QWORD *)(a3 + 80) = v6 & 0xFFFFFFFFFFFFFFFBLL | v10;
  v11 = *(_BYTE *)(v7 + 32);
  v12 = v21;
  v20 = 0x800000000LL;
  v13 = v7 + 48;
  v14 = 8LL * (v11 & 0x3F);
  v15 = v7 + v14 + 48;
  v16 = v14 >> 3;
  if ( (unsigned __int64)v14 > 0x40 )
  {
    sub_22134E0(&ptr, v21, v14 >> 3, 8);
    v12 = ptr;
    v8 = v20;
    v13 = v7 + 48;
    v15 = v7 + v14 + 48;
    v9 = (char *)ptr + 8 * (unsigned int)v20;
  }
  if ( v13 != v15 )
  {
    if ( (unsigned int)v14 < 8 )
    {
      if ( (_DWORD)v14 )
        *v9 = *(_BYTE *)(v7 + 48);
    }
    else
    {
      *(_QWORD *)v9 = *(_QWORD *)(v7 + 48);
      *(_QWORD *)&v9[(unsigned int)v14 - 8] = *(_QWORD *)(v13 + (unsigned int)v14 - 8);
      qmemcpy(
        (void *)((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v13 - (_QWORD)&v9[-((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
        8LL * (((unsigned int)v14 + (_DWORD)v9 - (((_DWORD)v9 + 8) & 0xFFFFFFF8)) >> 3));
    }
    v12 = ptr;
    v8 = v20;
  }
  LODWORD(v20) = v16 + v8;
  v17 = sub_A548B0((__int64)a1, a3, (__int64)v12, (unsigned int)(v16 + v8));
  v18 = ptr;
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v18 != v21 )
    free(v18);
}

