__int64 __fastcall sub_963AC0(__int64 a1, __int64 a2, __int64 *a3, __int16 *a4)
{
  __int64 v7; // rax
  __int16 v8; // cx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int8 **v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 (*v15)(void); // rax
  _QWORD **v16; // rdi
  __int64 (*v17)(void); // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int8 **v21; // r13
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v23; // [rsp+18h] [rbp-40h] BYREF
  void *v24; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-30h]
  char v26; // [rsp+2Ch] [rbp-2Ch]

  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    v8 = *a4 & 0x3F;
    *a4 = v8;
LABEL_3:
    v9 = *(_QWORD *)(a1 + 184);
    goto LABEL_4;
  }
  if ( v8 >= 0 )
  {
    if ( v8 <= 63 )
      goto LABEL_3;
    v18 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v19 = (unsigned __int16)*a4;
    v26 = 0;
    v25 = 16;
    v24 = (void *)v19;
    v20 = *(_QWORD *)(v18 + 8);
    v23 = (unsigned __int8 **)sub_A2E240(a1, v18, 2220, 0);
    v21 = v23;
    if ( v23 )
    {
      sub_8DF340(&v23, (__int64)&v24);
      sub_8D69A0(v21, v20);
      sub_8D6E40(v21, 64);
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v25 > 0x40 && v24 )
        operator delete[](v24);
      v8 = *a4;
      v9 = *(_QWORD *)(a1 + 184);
      if ( *a4 > 63 )
      {
        v10 = -1;
        goto LABEL_5;
      }
LABEL_4:
      v10 = *a3 >> v8;
LABEL_5:
      *(_QWORD *)sub_A1A4E0(v9, 8) = v10;
      return 1;
    }
    if ( v25 > 0x40 && v24 )
    {
      operator delete[](v24);
      return 0;
    }
  }
  else
  {
    v22 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v22, 2242, 0);
    v13 = (unsigned __int16)*a4;
    v26 = 0;
    v23 = v12;
    v25 = 16;
    v24 = (void *)v13;
    if ( v12 )
    {
      sub_8DF340(&v23, (__int64)&v24);
      if ( v25 > 0x40 )
      {
        if ( v24 )
          operator delete[](v24);
      }
    }
    v14 = *(_QWORD **)(a1 + 24);
    v15 = *(__int64 (**)(void))(*v14 + 32LL);
    if ( (char *)v15 == (char *)sub_8D7FC0 )
    {
      v16 = (_QWORD **)v14[3];
      v17 = (__int64 (*)(void))(*v16)[4];
      if ( v17 == v15 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 32LL))(v16[3]);
      else
        result = v17();
    }
    else
    {
      result = v15();
    }
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_963D10(a1, a2, a3, a4);
    }
  }
  return result;
}

