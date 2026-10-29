__int64 __fastcall sub_90EDF0(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  unsigned int v12; // ebp
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r14
  __int64 v18; // rax
  __int64 v19; // rbx
  void *v20; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-80h]
  char v22; // [rsp+Ch] [rbp-7Ch]
  int v23; // [rsp+10h] [rbp-78h]
  __int64 v24[13]; // [rsp+20h] [rbp-68h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_14:
      v11 = v8();
      goto LABEL_6;
    }
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (__int64 (*)(void))(*v10)[3];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
        goto LABEL_6;
      }
      goto LABEL_14;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = 0;
  if ( !v11 )
  {
    v13 = a1[23];
    v14 = sub_A1A5A0(v13, 24);
    v15 = *(_DWORD *)(v14 + 8);
    *(_DWORD *)(v14 + 8) = 0;
    v21 = v15;
    v20 = *(void **)v14;
    LOBYTE(v15) = *(_BYTE *)(v14 + 12);
    LODWORD(v14) = *(_DWORD *)(v14 + 16);
    v22 = v15;
    v23 = v14;
    sub_A1A5E0(v13, 24);
    v16 = a1[25];
    v12 = sub_9D9870(a1, a2, v16 + 40);
    if ( (_BYTE)v12 )
    {
      sub_A1C030(
        v24,
        *(_QWORD *)(v16 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v16 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v16 + 40)));
      v12 = sub_9E26A0(a1, a2, v24);
      if ( (_BYTE)v12 )
      {
        v18 = sub_8FA0E0(v24);
        v19 = v18;
        if ( *(_DWORD *)(v18 + 8) <= 0x40u && v21 <= 0x40 )
        {
          *(_QWORD *)v18 = v20;
          *(_DWORD *)(v18 + 8) = v21;
        }
        else
        {
          sub_2585EA0(v18, &v20);
        }
        *(_BYTE *)(v19 + 12) = v22;
        *(_DWORD *)(v19 + 16) = v23;
      }
      sub_A1C0C0(v24);
    }
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
  }
  return v12;
}

