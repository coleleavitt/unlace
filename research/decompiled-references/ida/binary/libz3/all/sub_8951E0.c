void __fastcall sub_8951E0(__int64 a1)
{
  __int64 v1; // r14
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // eax
  void *v11; // rdi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  __int64 v22; // [rsp+18h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 580) == -1 )
  {
    v1 = a1 + 104;
    v19 = 0;
    v20 = 0;
    v21 = 1;
    v22 = 0;
    sub_182CBA0(qword_1C7F2C0, &v21);
    v6 = *(_QWORD *)(a1 + 112);
    BYTE4(v21) &= ~1u;
    LODWORD(v21) = 1;
    if ( !v6 )
    {
      sub_16669E0(v1);
      v6 = *(_QWORD *)(a1 + 112);
    }
    v7 = sub_166A700(v6, (unsigned int)&v19, 1, v3, v4, v5);
    sub_25A130((char *)&v19);
    v9 = sub_B68280(*(_QWORD *)(a1 + 16), v7, 0, 0, 1, v8, v19, v20, v21);
    v10 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v9);
    v11 = qword_1C7F2C0;
    v19 = 0;
    *(_DWORD *)(a1 + 580) = v10;
    v20 = 0;
    v21 = 1;
    v22 = 0;
    sub_182CBA0(v11, &v21);
    v15 = *(_QWORD *)(a1 + 112);
    BYTE4(v21) &= ~1u;
    LODWORD(v21) = 1;
    if ( !v15 )
    {
      sub_16669E0(v1);
      v15 = *(_QWORD *)(a1 + 112);
    }
    v16 = sub_166A700(v15, (unsigned int)&v19, 0, v12, v13, v14);
    sub_25A130((char *)&v19);
    v18 = sub_B68280(*(_QWORD *)(a1 + 16), v16, 0, 0, 1, v17, v19, v20, v21);
    *(_DWORD *)(a1 + 584) = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v18);
  }
}

