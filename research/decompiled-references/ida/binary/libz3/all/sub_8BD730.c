__int64 __fastcall sub_8BD730(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbp
  unsigned int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rbp
  __int64 v9; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned int i; // ebp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r12
  int v23; // r15d
  unsigned int v24; // eax
  unsigned int v25; // eax
  char v26; // [rsp+Dh] [rbp-5Bh] BYREF
  char v27; // [rsp+Eh] [rbp-5Ah] BYREF
  char v28; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v29[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1 + 10;
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(a1 + 10, a2, v29, &v26) )
  {
    v5 = sub_8BD5E0((__int64)a1, (unsigned int *)a2, v29);
LABEL_3:
    v6 = v5;
    goto LABEL_4;
  }
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_13;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_DWORD **)(v9 + 24);
  if ( !v10 || *v10 != 5 )
    goto LABEL_13;
  if ( v10[1] != 6 )
  {
LABEL_9:
    v6 = -1;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
LABEL_11:
    v11 = *(_DWORD **)(v9 + 24);
    if ( v11 && *v11 == 5 )
      goto LABEL_9;
LABEL_13:
    v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 392LL))(a1, a2);
    goto LABEL_3;
  }
  if ( (unsigned __int8)sub_1666AE0(v3, *(_QWORD *)(a2 + 32), v29, &v28) )
  {
    v12 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) != 2 || !(unsigned __int8)sub_1666AE0(v3, *(_QWORD *)(a2 + 40), v29, &v27) )
    {
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_13;
      v9 = *(_QWORD *)(a2 + 16);
      goto LABEL_11;
    }
    v12 = *(_QWORD *)(a2 + 32);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 392LL))(a1, v12);
  v15 = *(_DWORD *)(a2 + 24);
  v16 = a1[2];
  v17 = v13;
  if ( v15 )
  {
    for ( i = 0; i < v15; ++i )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v16 + 8656);
        if ( !v19 )
          break;
        v20 = **(unsigned int **)(a2 + 8LL * i + 32);
        if ( (unsigned int)v20 >= *(_DWORD *)(v19 - 4) || !*(_QWORD *)(v19 + 8 * v20) )
          break;
        if ( ++i >= v15 )
          goto LABEL_27;
      }
      sub_B6F780(v16);
      v15 = *(_DWORD *)(a2 + 24);
      v16 = a1[2];
    }
  }
LABEL_27:
  v21 = sub_B68280(v16, a2, 0, 0, 1, v14);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64))*a1)(a1, v21);
  v22 = (__int64)(a1 + 23);
  v23 = sub_182D050(qword_1C7F2C0, v29);
  v24 = sub_893C10(v22, v17, v6, v23, 0xFFFFFFFE);
  sub_8BC970(v22, v24);
  v25 = sub_893C10(v22, v6, v17, -v23, 0xFFFFFFFE);
  sub_8BC970(v22, v25);
LABEL_4:
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v7, v30);
  return v6;
}

