unsigned __int64 __fastcall sub_1E65A20(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v7; // rax
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+18h] [rbp-D0h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+20h] [rbp-C8h] BYREF
  int v24; // [rsp+28h] [rbp-C0h]
  __int64 *v25; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v26; // [rsp+40h] [rbp-A8h] BYREF
  char v27; // [rsp+98h] [rbp-50h]
  unsigned int v28; // [rsp+A0h] [rbp-48h]
  char v29; // [rsp+A4h] [rbp-44h]

  v21[0] = a2;
  v7 = *(_BYTE **)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v7[17] & 4) == 0 && (v7[16] != 16 || ((v7[18] >> 3) & 3) != 2) )
  {
    LODWORD(v22) = 0;
    v24 = 3139;
    v23 = off_2BE44D0;
    v25 = &v22;
    if ( (unsigned __int8)sub_1E63C20((__int64)a1, a3, v21[0], (__int64 *)((char *)&dword_0 + 1), (__int64)&v23, a6) )
      return 0;
    v9 = 1;
    v10 = *(_QWORD *)(v21[0] & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned __int8)(v11 - 2) <= 4u )
      goto LABEL_6;
    v9 = 2;
    if ( (unsigned int)v11 - 25 <= 1 )
      goto LABEL_6;
    v9 = 3;
    if ( (unsigned int)v11 - 43 <= 1 )
      goto LABEL_6;
    if ( v11 == 7 )
    {
      v9 = 4;
      goto LABEL_6;
    }
    if ( v21[0] & 7 | (v21[0] >> 3) & 1
      || *(_QWORD *)&byte_8[v21[0] & 0xFFFFFFFFFFFFFFF0LL] & 7LL
       | (*(__int64 *)&byte_8[v21[0] & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1 )
    {
      v9 = 5;
      goto LABEL_6;
    }
    v9 = 6;
    if ( sub_F582C0(v10) )
    {
LABEL_6:
      sub_168B9F0((__int64)&v23, a1 + 1, a3, 0xC43u, 0);
      if ( v27 )
      {
        sub_1E5E160(&v26, v9);
      }
      else if ( v29 )
      {
        v16 = sub_168B9E0(&v23);
        v19 = (__int64)v25;
        if ( v25 )
          v19 = (*(__int64 (__fastcall **)(__int64 *))(*v25 + 32))(v25);
        v22 = v19;
        v20 = sub_1587BC0(v16, &v22, v14, v15, v17, v18);
        sub_1E5E160((unsigned __int8 **)(*v20 + 32LL * v28 + 8), v9);
      }
      sub_1605D30((__int64)&v23, v21);
      sub_15F7200(&v23);
      return 0;
    }
    if ( !sub_F62A70(v21, a1[31]) && (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
    {
      v9 = 7;
      goto LABEL_6;
    }
    v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( v13 == 10 )
    {
      v9 = 8;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)a1[29] & 8) != 0 )
    {
      v9 = 9;
      if ( v13 == 16 )
        goto LABEL_6;
    }
  }
  return sub_A72BF0(a1[31], v21[0]);
}
