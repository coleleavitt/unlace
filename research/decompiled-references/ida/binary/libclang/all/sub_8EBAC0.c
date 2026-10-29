__int64 __fastcall sub_8EBAC0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rax
  _QWORD **v9; // rdi
  __int64 (*v10)(void); // rdx
  unsigned __int64 v11; // rsi
  unsigned __int8 **v12; // rax
  unsigned __int8 **v13; // rbx

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a3;
  if ( a2 == *(_QWORD *)(a1 + 600) )
    return 1;
  v7 = *(_QWORD **)(a1 + 408);
  v8 = *(__int64 (**)(void))(*v7 + 104LL);
  if ( (char *)v8 == (char *)sub_8D7E60 )
  {
    v9 = (_QWORD **)v7[3];
    v10 = (__int64 (*)(void))(*v9)[13];
    v11 = v10 == v8 ? (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 104LL))(v9[3]) : v10();
  }
  else
  {
    v11 = v8();
  }
  v3 = sub_788D80((_QWORD *)a2, v11);
  if ( (_BYTE)v3 )
  {
    return 1;
  }
  else
  {
    v12 = (unsigned __int8 **)sub_A2E050(a1 + 384, *(unsigned int *)(a2 + 24), 2281, 0);
    v13 = v12;
    if ( v12 )
    {
      sub_8D6BF0(v12, (*(_BYTE *)(a2 + 96) & 0x18) != 0);
      sub_8356A0(v13, a2, 0xAu);
    }
  }
  return v3;
}

