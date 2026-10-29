__int64 __fastcall sub_90BC10(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
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
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rbx
  void *v23; // [rsp+0h] [rbp-A8h]
  unsigned int v24; // [rsp+8h] [rbp-A0h]
  char v25; // [rsp+Ch] [rbp-9Ch]
  int v26; // [rsp+10h] [rbp-98h]
  void *v27; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-80h]
  char v29; // [rsp+2Ch] [rbp-7Ch]
  int v30; // [rsp+30h] [rbp-78h]
  _QWORD v31[4]; // [rsp+40h] [rbp-68h] BYREF
  int v32; // [rsp+60h] [rbp-48h]
  int v33; // [rsp+70h] [rbp-38h]

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_8D7F10 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(unsigned __int8 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
      goto LABEL_21;
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
LABEL_21:
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
  v17 = sub_A1A5A0(v16, 24);
  v18 = *(_DWORD *)(v17 + 8);
  *(_DWORD *)(v17 + 8) = 0;
  v24 = v18;
  v23 = *(void **)v17;
  v25 = *(_BYTE *)(v17 + 12);
  v26 = *(_DWORD *)(v17 + 16);
  sub_A1A5E0(v16, 24);
  sub_781830(*a3);
  v28 = v24;
  if ( v24 > 0x40 )
    sub_2585B30(&v27);
  else
    v27 = v23;
  v19 = v31[3];
  v20 = v31[0];
  v29 = v25;
  v30 = v26;
  if ( !v33 && *(_BYTE *)(sub_8E5480((__int64)v31) + 51) && v20 == v32 )
    v21 = v19 + v20 + 72;
  else
    v21 = v19 + v20 + 40;
  if ( *(_DWORD *)(v21 + 8) > 0x40u && *(_QWORD *)v21 )
    operator delete[](*(void **)v21);
  *(_QWORD *)v21 = v27;
  *(_DWORD *)(v21 + 8) = v28;
  *(_BYTE *)(v21 + 12) = v29;
  *(_DWORD *)(v21 + 16) = v30;
  sub_A1DB00(v31);
  if ( v24 > 0x40 )
  {
    if ( v23 )
      operator delete[](v23);
  }
  sub_A1C0C0(v31);
  return v15;
}

