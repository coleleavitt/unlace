__int64 __fastcall sub_158B070(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v22[16]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v24[11]; // [rsp+30h] [rbp-98h] BYREF
  char v25; // [rsp+88h] [rbp-40h]
  unsigned int v26; // [rsp+90h] [rbp-38h]
  char v27; // [rsp+94h] [rbp-34h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = -(a3 == 0);
  v5 = sub_B73090(a2);
  sub_168B9F0(v22, v3 + 8, v5, (v4 & 0xFFFFFFDA) + 6686, 0);
  if ( v25 )
  {
    sub_157E260(v24, a2);
    if ( v25 )
      goto LABEL_7;
  }
  else
  {
    if ( !v27 )
      return sub_15F7200(v22);
    v9 = sub_168B9E0(v22);
    v12 = v23;
    if ( v23 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
    v21 = v12;
    v13 = sub_1587BC0(v9, &v21, v7, v8, v10, v11);
    sub_157E260((unsigned __int8 **)(*v13 + 32LL * v26 + 8), a2);
    if ( v25 )
    {
LABEL_7:
      sub_157E4A0(v24, 0);
      return sub_15F7200(v22);
    }
  }
  if ( v27 )
  {
    v16 = sub_168B9E0(v22);
    v19 = v23;
    if ( v23 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
    v21 = v19;
    v20 = sub_1587BC0(v16, &v21, v14, v15, v17, v18);
    sub_157E4A0((unsigned __int8 **)(*v20 + 32LL * v26 + 8), 0);
  }
  return sub_15F7200(v22);
}
