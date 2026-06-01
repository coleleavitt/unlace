__int64 __fastcall sub_8F9DD0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbp
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rax
  _QWORD **v9; // rdi
  __int64 (*v10)(void); // rdx
  char v11; // al
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16[13]; // [rsp+0h] [rbp-68h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v3;
  v5 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a3;
  v7 = *(_QWORD **)(a1 + 408);
  v8 = *(__int64 (**)(void))(*v7 + 24LL);
  if ( (char *)v8 == (char *)sub_8D7F10 )
  {
    v9 = (_QWORD **)v7[3];
    v10 = (__int64 (*)(void))(*v9)[3];
    if ( v10 == v8 )
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 24LL))(v9[3]);
    else
      v11 = v10();
  }
  else
  {
    v11 = v8();
  }
  if ( !v11 )
  {
    v12 = *(_QWORD *)(a1 + 584);
    if ( (unsigned __int8)sub_9D9870(a1 + 384, v5, v12 + 40) )
    {
      sub_A1C030(
        v16,
        *(_QWORD *)(v12 + 64),
        (unsigned int)(a2 + *(_DWORD *)(v12 + 40)),
        (unsigned int)(a2 + *(_DWORD *)(v12 + 40)));
      v3 = sub_9E4580(a1 + 384, v5, v16, 0);
      if ( (_BYTE)v3 )
      {
        v13 = *(_QWORD *)(a1 + 568);
        v14 = sub_8F9CB0(v16);
        v15 = sub_A1A4E0(v13, 56);
        sub_A1BFE0(v15, v14);
      }
      sub_A1C0C0(v16);
      return v3;
    }
  }
  return 0;
}

