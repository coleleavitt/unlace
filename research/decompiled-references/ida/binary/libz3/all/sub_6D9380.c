__int64 __fastcall sub_6D9380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 *v5; // r14
  __int64 v6; // rbp
  int v7; // ebx
  unsigned int v8; // r15d
  void *v9; // rbx
  unsigned int v10; // ebx
  char v12; // al
  void *v13; // rbx
  void *v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-98h]
  char v16; // [rsp+4Fh] [rbp-69h] BYREF
  int v17[2]; // [rsp+50h] [rbp-68h] BYREF
  int v18[2]; // [rsp+58h] [rbp-60h]
  _QWORD v19[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+70h] [rbp-48h] BYREF

  v3 = a1 + 32;
  *(_QWORD *)v17 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v18 = 0;
  sub_6D8840((_QWORD *)(a1 + 32), a2, (__int64 *)v17);
  v5 = *(__int64 **)v18;
  if ( !*(_QWORD *)v18 || (v15 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(*(_QWORD *)v18 - 4LL), v15 == *(_QWORD *)v18) )
  {
LABEL_16:
    v10 = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v6 = *v5;
    v19[0] = 0;
    v19[1] = 0;
    v20[0] = 1;
    v20[1] = 0;
    if ( (unsigned __int8)sub_1666AE0(a1 + 48, v6, v19, &v16) && !LODWORD(v19[0]) )
    {
      v14 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v19);
      sub_182CBA0(v14, v20);
      goto LABEL_15;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40));
    if ( v7 )
      break;
LABEL_12:
    v12 = sub_6D3F20(v3, v6, a3);
    v13 = qword_1C7F2C0;
    if ( v12 )
    {
      sub_182CBA0(qword_1C7F2C0, v19);
      sub_182CBA0(v13, v20);
      goto LABEL_10;
    }
    sub_182CBA0(qword_1C7F2C0, v19);
    sub_182CBA0(v13, v20);
LABEL_15:
    if ( (__int64 *)v15 == ++v5 )
      goto LABEL_16;
  }
  v8 = 0;
  while ( !(unsigned __int8)sub_6C2C90(v3, v8, v6, a3) )
  {
    if ( v7 == ++v8 )
      goto LABEL_12;
  }
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v9, v20);
LABEL_10:
  v10 = 1;
LABEL_11:
  sub_2334C0((__int64 *)v17);
  return v10;
}

