__int64 __fastcall sub_158B1D0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r12
  int v5; // ebx
  unsigned int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v23[16]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v25[11]; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+88h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp-38h]
  char v28; // [rsp+94h] [rbp-34h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -(a4 == 0);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  sub_168B9F0(v23, v4 + 8, v6, (v5 & 0xFFFFFFDA) + 6686, 0);
  if ( v26 )
  {
    sub_157E260(v25, a2);
    if ( v26 )
      goto LABEL_7;
  }
  else
  {
    if ( !v28 )
      return sub_15F7200(v23);
    v10 = sub_168B9E0(v23);
    v13 = v24;
    if ( v24 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v22 = v13;
    v14 = sub_1587BC0(v10, &v22, v8, v9, v11, v12);
    sub_157E260((unsigned __int8 **)(*v14 + 32LL * v27 + 8), a2);
    if ( v26 )
    {
LABEL_7:
      sub_157E4A0(v25, 1);
      return sub_15F7200(v23);
    }
  }
  if ( v28 )
  {
    v17 = sub_168B9E0(v23);
    v20 = v24;
    if ( v24 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v22 = v20;
    v21 = sub_1587BC0(v17, &v22, v15, v16, v18, v19);
    sub_157E4A0((unsigned __int8 **)(*v21 + 32LL * v27 + 8), 1);
  }
  return sub_15F7200(v23);
}
