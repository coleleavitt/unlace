__int64 __fastcall sub_90B7F0(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  unsigned __int8 (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  char v13; // al
  __int64 v14; // r14
  unsigned int v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  void *v23; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-A0h]
  void *v25; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-90h]
  void *v27; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-80h]
  void *v29; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-70h]
  __int64 v31[13]; // [rsp+40h] [rbp-68h] BYREF

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_8D7F10 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(unsigned __int8 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
      goto LABEL_20;
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (unsigned __int8 (*)(void))(*v12)[3];
      if ( (char *)v10 == (char *)v8 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 24LL))(v12[3]);
        goto LABEL_6;
      }
LABEL_20:
      if ( v10() )
        return 0;
      goto LABEL_7;
    }
  }
  v13 = ((__int64 (*)(void))v8)();
LABEL_6:
  if ( v13 )
    return 0;
LABEL_7:
  v14 = a1[25];
  v15 = sub_9D9870(a1, a2, v14 + 40);
  if ( !(_BYTE)v15 )
    return 0;
  sub_A1C030(
    v31,
    *(_QWORD *)(v14 + 64),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)));
  v16 = a1[23];
  v17 = sub_A1A5A0(v16, 16);
  v18 = *(_DWORD *)(v17 + 8);
  *(_DWORD *)(v17 + 8) = 0;
  v24 = v18;
  v23 = *(void **)v17;
  sub_A1A5E0(v16, 16);
  v19 = sub_781830(*a3);
  sub_25877E0(&v27, &v23, v19);
  sub_2587E20(&v29, &v27, v24);
  v26 = v30;
  if ( v30 > 0x40 )
  {
    sub_2585B30(&v25);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
  }
  else
  {
    v25 = v29;
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  v20 = sub_8F8520(v31);
  v21 = v20;
  if ( *(_DWORD *)(v20 + 8) > 0x40u && *(_QWORD *)v20 )
    operator delete[](*(void **)v20);
  *(_QWORD *)v21 = v25;
  *(_DWORD *)(v21 + 8) = v26;
  sub_A1DB00(v31);
  if ( v24 > 0x40 )
  {
    if ( v23 )
      operator delete[](v23);
  }
  sub_A1C0C0(v31);
  return v15;
}

