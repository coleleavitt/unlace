__int64 __fastcall sub_90EAF0(_QWORD *a1, __int64 a2, int a3)
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
  __int64 v17; // rax
  void *v19; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-70h]
  __int64 v21[13]; // [rsp+10h] [rbp-68h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_17:
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
      goto LABEL_17;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = 0;
  if ( !v11 )
  {
    v13 = a1[23];
    v14 = sub_A1A5A0(v13, 16);
    v15 = *(_DWORD *)(v14 + 8);
    *(_DWORD *)(v14 + 8) = 0;
    v20 = v15;
    v19 = *(void **)v14;
    sub_A1A5E0(v13, 16);
    v16 = a1[25];
    v12 = sub_9D9870(a1, a2, v16 + 40);
    if ( (_BYTE)v12 )
    {
      sub_A1C030(
        v21,
        *(_QWORD *)(v16 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v16 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v16 + 40)));
      v12 = sub_9E26A0(a1, a2, v21);
      if ( (_BYTE)v12 )
      {
        v17 = sub_8F8520(v21);
        if ( *(_DWORD *)(v17 + 8) <= 0x40u && v20 <= 0x40 )
        {
          *(_QWORD *)v17 = v19;
          *(_DWORD *)(v17 + 8) = v20;
        }
        else
        {
          sub_2585EA0(v17, &v19);
        }
      }
      sub_A1C0C0(v21);
    }
    if ( v20 > 0x40 && v19 )
      operator delete[](v19);
  }
  return v12;
}

