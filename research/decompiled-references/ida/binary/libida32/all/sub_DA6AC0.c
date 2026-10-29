__int64 __fastcall sub_DA6AC0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rdi
  unsigned __int8 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  char v9; // al
  __int64 v10; // r12
  _QWORD *v11; // r13
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v17[88]; // [rsp+0h] [rbp-58h] BYREF

  v3 = (_QWORD *)a1[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 24LL);
  if ( v4 != sub_CCC510 )
    goto LABEL_16;
  v5 = (_QWORD *)v3[3];
  v6 = *(unsigned __int8 (**)(void))(*v5 + 24LL);
  if ( (char *)v6 != (char *)v4 )
    goto LABEL_14;
  v7 = (_QWORD *)v5[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( (char *)v4 != (char *)v6 )
  {
LABEL_16:
    v9 = ((__int64 (*)(void))v4)();
LABEL_6:
    if ( v9 )
      return 0;
    goto LABEL_7;
  }
  v8 = (_QWORD **)v7[3];
  v6 = (unsigned __int8 (*)(void))(*v8)[3];
  if ( (char *)v6 == (char *)v4 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[3] + 24LL))(v8[3]);
    goto LABEL_6;
  }
LABEL_14:
  if ( v6() )
    return 0;
LABEL_7:
  v10 = a1[50];
  v11 = (_QWORD *)(v10 + 40);
  v12 = sub_DA69E0((__int64)a1, a2, v10 + 40);
  if ( (_BYTE)v12 )
  {
    v13 = *(_DWORD *)(v10 + 64);
    if ( v13 )
    {
      if ( v13 == 3 )
      {
LABEL_13:
        v15 = sub_DFD980(a1[22], 48);
        sub_DFF4A0(v15, v11);
        return v12;
      }
    }
    else
    {
      v14 = *(_QWORD *)(v10 + 72);
      if ( v14 && *(_BYTE *)(*(_QWORD *)(v14 + 32) + 61LL) )
        goto LABEL_13;
    }
    if ( !*(_QWORD *)(sub_CDA220(v10 + 40) + 32) )
    {
      sub_CDAA60((__int64)v17, v11);
      sub_DFF560(v17);
    }
    goto LABEL_13;
  }
  return 0;
}

