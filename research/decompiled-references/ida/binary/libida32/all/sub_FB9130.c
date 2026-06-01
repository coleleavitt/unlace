__int64 __fastcall sub_FB9130(__int64 a1, __int64 a2)
{
  _QWORD *v5; // r13
  __int64 v6; // rcx
  const char *(*v7)(); // rax
  char *v8; // rsi
  char *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+18h] [rbp-50h] BYREF
  __int64 v18[2]; // [rsp+20h] [rbp-48h] BYREF
  char v19; // [rsp+30h] [rbp-38h]

  if ( !*(_QWORD *)(a2 + 648) )
  {
    sub_220CB20(v18);
    if ( (v19 & 1) != 0 )
    {
      sub_21FC7C0(&v17, LODWORD(v18[0]), v18[1]);
      v14 = v17;
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v14;
      sub_F9EDB0(v18);
      return a1;
    }
    v5 = (_QWORD *)v18[0];
    v18[0] = 0;
    sub_F9EDB0(v18);
    v6 = v5[2] - v5[1];
    v7 = *(const char *(**)())(*v5 + 16LL);
    if ( v7 == sub_FA2570 )
    {
      v8 = "Unknown buffer";
      v9 = byte_9 + 5;
    }
    else
    {
      v16 = v5[2] - v5[1];
      v15 = ((__int64 (__fastcall *)(_QWORD *))v7)(v5);
      v6 = v16;
      v8 = (char *)v15;
    }
    v10 = sub_FB81C0(a2, v8, v9, v6, 0);
    *(_QWORD *)(a2 + 648) = v10;
    v11 = v10;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( !v12 )
        break;
      v11 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v12 & 4) == 0 || !v11 )
        goto LABEL_11;
    }
    v11 = 0;
LABEL_11:
    v13 = *(_QWORD *)(v11 + 88);
    *(_QWORD *)(v11 + 88) = v5;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    *(_BYTE *)(v11 + 76) = 1;
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_QWORD *)a1 = *(_QWORD *)(a2 + 648);
  return a1;
}

