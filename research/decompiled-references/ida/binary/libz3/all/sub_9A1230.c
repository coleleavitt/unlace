__int64 __fastcall sub_9A1230(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  char v5; // al
  void *v6; // r12
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  _DWORD *v17; // rax
  __int64 v18; // rbp
  __int64 v20; // [rsp+0h] [rbp-78h]
  int v21[2]; // [rsp+8h] [rbp-70h]
  char v22; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h]

  v3 = a1 + 59;
  v23 = 0;
  v24 = 0;
  v25 = 1;
  v26 = 0;
  v5 = sub_1666AE0(a1 + 59, a3, &v23, &v22);
  v6 = qword_1C7F2C0;
  if ( v5 && !(_DWORD)v23 )
  {
    sub_182CBA0(qword_1C7F2C0, &v23);
    return sub_182CBA0(v6, &v25);
  }
  else
  {
    sub_182CBA0(qword_1C7F2C0, &v23);
    sub_182CBA0(v6, &v25);
    v20 = a1[3];
    v7 = sub_15E1B70(a1[59]);
    v8 = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v23 = 0;
    v24 = 0;
    v25 = 1;
    v26 = 0;
    sub_182CBA0(qword_1C7F2C0, &v25);
    v12 = a1[60];
    BYTE4(v25) &= ~1u;
    LODWORD(v25) = 1;
    if ( !v12 )
    {
      sub_16669E0(v3);
      v12 = a1[60];
    }
    v13 = sub_166A700(v12, (unsigned int)&v23, 0, v9, v10, v11);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    sub_25A130((char *)&v23);
    v15 = sub_15E1B70(a1[3]);
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    *(_QWORD *)v21 = a1[3];
    sub_15E1B70(a1[59]);
    v17 = (_DWORD *)sub_15E1B70(v21[0]);
    v18 = (__int64)v17;
    if ( v17 )
      ++v17[2];
    sub_9A0E10((__int64)a1, v16, v17, 1);
    sub_98B270(v18, v20);
    sub_98B270(v16, v20);
    sub_98B270(v14, v20);
    return sub_98B270(v8, v20);
  }
}

