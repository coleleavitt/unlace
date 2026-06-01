__int64 __fastcall sub_DDD820(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  void *v5; // rdx
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD *v10; // rdi
  _QWORD **v11; // rdi
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // r12
  _BYTE *v15; // rdi
  __int64 v16; // rbx
  void *v18; // [rsp+0h] [rbp-38h]
  unsigned int v19; // [rsp+8h] [rbp-30h]
  char v20; // [rsp+Ch] [rbp-2Ch]
  int v21; // [rsp+10h] [rbp-28h]

  v3 = a1[22];
  v4 = sub_DFDA20(v3, 24);
  v19 = *(_DWORD *)(v4 + 8);
  v5 = *(void **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  v18 = v5;
  v20 = *(_BYTE *)(v4 + 12);
  v21 = *(_DWORD *)(v4 + 16);
  sub_DFDA50(v3, 24);
  v6 = (_QWORD *)a1[3];
  v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 24LL);
  if ( v7 == sub_CCC510 )
  {
    v8 = (_QWORD *)v6[3];
    v9 = *(__int64 (**)(void))(*v8 + 24LL);
    if ( (char *)v9 != (char *)v7 )
    {
LABEL_18:
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
      goto LABEL_18;
    }
  }
  v12 = ((__int64 (*)(void))v7)();
LABEL_6:
  v13 = a1[50];
  if ( (!v12 || *(_QWORD *)(v13 + 8))
    && (sub_DA3C90(a1, *a2, *(_QWORD *)(v13 + 32)), v13 = a1[50], (v14 = *(_QWORD *)(v13 + 8)) != 0) )
  {
    *a2 = *(_QWORD *)(v13 + 136);
    v15 = (_BYTE *)a1[50];
    if ( !v15[200] )
      sub_DFCD30(v15);
    a1[50] = v14;
    v16 = sub_DFD980(a1[22], 24);
    *(_DWORD *)(v16 + 8) = v19;
    if ( v19 > 0x40 )
      sub_21E17D0(v16);
    else
      *(_QWORD *)v16 = v18;
    *(_BYTE *)(v16 + 12) = v20;
    *(_DWORD *)(v16 + 16) = v21;
  }
  else
  {
    if ( !*(_BYTE *)(v13 + 200) )
      sub_DFCD30((void *)v13);
    a1[50] = 0;
  }
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return 1;
}

