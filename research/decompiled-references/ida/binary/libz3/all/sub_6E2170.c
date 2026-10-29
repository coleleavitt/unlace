__int64 __fastcall sub_6E2170(_QWORD *a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  void *v15; // r15
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rax
  int v24[2]; // [rsp+10h] [rbp-68h]
  _QWORD v25[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a4 + 24) != a1[4] && *(_DWORD *)(a4 + 16) )
  {
    v25[0] = 1;
    v25[1] = 0;
    v26[0] = 2;
    v26[1] = 0;
    sub_6E0DD0((__int64)qword_1C7F2C0, (__int64)v25);
    v14 = a1[2];
    if ( !v14 )
    {
      sub_16669E0(a1 + 1);
      v14 = a1[2];
    }
    sub_166A700(v14, (unsigned int)v25, 0, v11, v12, v13);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v25);
    sub_182CBA0(v15, v26);
    v16 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v24 = *a1;
    sub_6E0F30((__int64)a1);
    sub_6E1010((__int64)a1, v16);
    sub_15E1BF0(v24[0]);
    v17 = sub_15E1B70(a1[1]);
    v18 = sub_6DF7C0((__int64)a1, *(_DWORD *)(a4 + 16));
    v19 = sub_6E1C90(a1, v18, v17);
    sub_6E1B10(a1, *(_QWORD *)a4, v19);
    v6 = sub_15E1B70(a1[1]);
  }
  else
  {
    v6 = sub_15E1B70(a1[1]);
  }
  if ( (a2 & 0xFFFFFFFD) != 1 )
    return v6;
  if ( *a3 == a1[4] )
  {
    v20 = *a1;
    sub_6DF7C0((__int64)a1, 0xFFFFFFFF);
    sub_6DF7C0((__int64)a1, 1u);
    sub_6E1010((__int64)a1, a3[2]);
    v21 = sub_15E1BF0(v20);
    v22 = sub_6DF890((__int64)a1);
    v9 = sub_6E1C90(a1, v22, v21);
  }
  else if ( *(int *)(a4 + 16) <= 0 )
  {
    v9 = sub_6DF890((__int64)a1);
  }
  else
  {
    v7 = sub_6DF890((__int64)a1);
    v8 = sub_6DF7C0((__int64)a1, 0xFFFFFFFF);
    v9 = sub_6E1C90(a1, v8, v7);
  }
  return sub_6E1B10(a1, v6, v9);
}

