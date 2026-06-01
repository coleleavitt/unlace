void __fastcall sub_D66F80(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  __int64 v11; // rax
  unsigned __int8 **v12; // rax
  unsigned __int8 **v13; // r12
  _QWORD *v14; // rdi
  __int64 (*v15)(void); // rax
  _QWORD **v16; // rdi
  __int64 (*v17)(void); // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  void *v20[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v21; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 96LL);
  if ( v6 == sub_CCC500 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 96LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_18:
      v11 = v8();
      goto LABEL_6;
    }
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 96LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (__int64 (*)(void))(*v10)[12];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 96LL))(v10[3]);
        goto LABEL_6;
      }
      goto LABEL_18;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  if ( *(_QWORD *)(v11 + 8) )
  {
    v19 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
    {
      v12 = (unsigned __int8 **)sub_E0FFE0(a1, &v19, 2419, 0);
      v13 = v12;
      if ( v12 )
      {
        sub_AC60B0(v12, 0, 2u);
        sub_AC60B0(v13, 0, 2u);
      }
      v14 = *(_QWORD **)(a1 + 24);
      v15 = *(__int64 (**)(void))(*v14 + 104LL);
      if ( (char *)v15 == (char *)sub_D66930 )
      {
        v16 = (_QWORD **)v14[3];
        v17 = (__int64 (*)(void))(*v16)[13];
        if ( v17 == v15 )
          v18 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 104LL))(v16[3]);
        else
          v18 = v17();
      }
      else
      {
        v18 = v15();
      }
      sub_F995C0(v20, *(_QWORD *)(v18 + 17520), a3);
      if ( v13 )
        sub_AC84E0(v13, (_BYTE *)v20[0], (signed __int64)v20[1]);
      if ( v20[0] != &v21 )
        operator delete(v20[0]);
    }
    else
    {
      sub_E0FFE0(a1, &v19, 108, 0);
    }
  }
}

