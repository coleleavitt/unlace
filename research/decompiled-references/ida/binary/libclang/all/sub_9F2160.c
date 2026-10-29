void __fastcall sub_9F2160(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD *v10; // rdi
  _QWORD **v11; // rdi
  char v12; // al
  _QWORD *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r12
  void *v16; // rdi
  __int64 v17; // rbx
  void *v18; // [rsp+0h] [rbp-38h]
  unsigned int v19; // [rsp+8h] [rbp-30h]
  char v20; // [rsp+Ch] [rbp-2Ch]
  int v21; // [rsp+10h] [rbp-28h]

  v3 = a1[23];
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v19 = v5;
  v18 = *(void **)v4;
  v20 = *(_BYTE *)(v4 + 12);
  v21 = *(_DWORD *)(v4 + 16);
  sub_A1A5E0(v3, 24);
  v6 = (_QWORD *)a1[3];
  v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 24LL);
  if ( v7 == sub_8D7F10 )
  {
    v8 = (_QWORD *)v6[3];
    v9 = *(__int64 (**)(void))(*v8 + 24LL);
    if ( (char *)v9 != (char *)v7 )
    {
LABEL_20:
      v12 = v9();
      goto LABEL_6;
    }
    v10 = (_QWORD *)v8[3];
    v7 = *(__int64 (__fastcall **)(__int64))(*v10 + 24LL);
    if ( (char *)v7 == (char *)v9 )
    {
      v11 = (_QWORD **)v10[3];
      v9 = (__int64 (*)(void))(*v11)[3];
      if ( (char *)v9 == (char *)v7 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 24LL))(v11[3]);
        goto LABEL_6;
      }
      goto LABEL_20;
    }
  }
  v12 = ((__int64 (*)(void))v7)();
LABEL_6:
  v13 = (_QWORD *)a1[25];
  if ( v12 && !v13[1] )
    goto LABEL_23;
  v14 = v13[4];
  if ( !sub_97DAC0(v14) )
    sub_9BD280((__int64)a1, v14);
  v13 = (_QWORD *)a1[25];
  v15 = v13[1];
  if ( v15 )
  {
    *a2 = v13[19];
    v16 = (void *)a1[25];
    if ( v16 )
      sub_A16FA0(v16);
    a1[25] = v15;
    v17 = sub_A1A4E0(a1[23], 24);
    *(_DWORD *)(v17 + 8) = v19;
    if ( v19 > 0x40 )
      sub_2585B30(v17);
    else
      *(_QWORD *)v17 = v18;
    *(_BYTE *)(v17 + 12) = v20;
    *(_DWORD *)(v17 + 16) = v21;
  }
  else
  {
LABEL_23:
    sub_A16FA0(v13);
    a1[25] = 0;
  }
  if ( v19 > 0x40 )
  {
    if ( v18 )
      operator delete[](v18);
  }
}

