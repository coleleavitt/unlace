__int64 __fastcall sub_8F14B0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbp
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rdx
  _QWORD **v11; // rdi
  char v12; // al
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  _BYTE v16[104]; // [rsp+0h] [rbp-68h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v3;
  v5 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a3;
  v7 = *(_QWORD **)(a1 + 408);
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_8D7F10 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(__int64 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
    {
      v12 = v10();
LABEL_7:
      if ( v12 )
        return 0;
      goto LABEL_8;
    }
    v11 = (_QWORD **)v9[3];
    v8 = (__int64 (__fastcall *)(__int64))(*v11)[3];
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 24LL))(v11[3]);
      goto LABEL_7;
    }
  }
  if ( ((unsigned __int8 (*)(void))v8)() )
    return 0;
LABEL_8:
  v13 = *(_QWORD *)(a1 + 584);
  v3 = sub_9D9870(a1 + 384, v5, v13 + 40);
  if ( (_BYTE)v3 )
  {
    v14 = *(_QWORD *)(a1 + 568);
    sub_A1C030(
      v16,
      *(_QWORD *)(v13 + 64),
      (unsigned int)(a2 + *(_DWORD *)(v13 + 40)),
      (unsigned int)(a2 + *(_DWORD *)(v13 + 40)));
    v15 = sub_A1A4E0(v14, 56);
    sub_A1C070(v15, v16);
    sub_A1C0C0(v16);
    return v3;
  }
  return 0;
}

