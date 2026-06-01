__int64 __fastcall sub_8837C0(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // al
  void *v6; // r15
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rax
  void *v12; // r13
  __int64 v13; // r15
  unsigned int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v18; // [rsp+8h] [rbp-70h]
  char v19; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]

  v18 = a1 + 832;
  v20 = 0;
  v21 = 0;
  v22 = 1;
  v23 = 0;
  v5 = sub_1666AE0(a1 + 832, a3, &v20, &v19);
  v6 = qword_1C7F2C0;
  if ( v5 && !(_DWORD)v20 )
  {
    sub_182CBA0(qword_1C7F2C0, &v20);
    return sub_182CBA0(v6, &v22);
  }
  else
  {
    sub_182CBA0(qword_1C7F2C0, &v20);
    sub_182CBA0(v6, &v22);
    v20 = 0;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    sub_182CBA0(qword_1C7F2C0, &v22);
    v10 = *(_QWORD *)(a1 + 840);
    BYTE4(v22) &= ~1u;
    LODWORD(v22) = 1;
    if ( !v10 )
    {
      sub_16669E0(v18);
      v10 = *(_QWORD *)(a1 + 840);
    }
    v11 = sub_166A700(v10, (unsigned int)&v20, 0, v7, v8, v9);
    v12 = qword_1C7F2C0;
    v13 = v11;
    sub_182CBA0(qword_1C7F2C0, &v20);
    sub_182CBA0(v12, &v22);
    v14 = sub_7E58D0(a1, a3, v13);
    sub_15E1B70(*(_QWORD *)(a1 + 832));
    v15 = sub_15E1B70(*(_QWORD *)(a1 + 832));
    v16 = sub_7E58D0(a1, v15, a2);
    return sub_7E5400(a1, v14, v16, nullptr);
  }
}

