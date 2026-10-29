__int64 __fastcall sub_CB29F0(__int64 a1, unsigned int a2, __int64 a3, char a4, int a5, int a6)
{
  char **exception; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  void *v9; // r14
  __int64 v11; // rdi
  int v12; // [rsp+Ch] [rbp-74h] BYREF
  int v13[2]; // [rsp+10h] [rbp-70h] BYREF
  int v14[2]; // [rsp+18h] [rbp-68h] BYREF
  unsigned int v15; // [rsp+20h] [rbp-60h] BYREF
  char v16; // [rsp+28h] [rbp-58h]
  __int64 v17[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[8]; // [rsp+40h] [rbp-40h] BYREF

  v7 = a3;
  if ( a2 )
  {
    if ( **(_DWORD **)(a1 + 8) < a2 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v17, off_1C7E178);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, v17);
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v17[0] = 0;
    v17[1] = 0;
    v18[0] = 1;
    v18[1] = 0;
    if ( a4 )
    {
      v15 = a2;
      *(_QWORD *)v13 = a3;
      v8 = *(_QWORD *)(a1 + 24);
      v16 = 0;
      v7 = sub_15DCAD0(v8, (int)v13, 0);
      sub_15D0DF0(&v15);
    }
    else if ( (unsigned __int8)sub_1673B50((int)a1 + 16, a3, (unsigned int)v17, (unsigned int)&v12, a5, a6) )
    {
      v7 = sub_1674520(a1 + 16, v17, a2 + v12);
    }
    else
    {
      v15 = a2;
      *(_QWORD *)v14 = v7;
      v11 = *(_QWORD *)(a1 + 24);
      v16 = 0;
      v7 = sub_15DCAD0(v11, (int)v14, 0);
      sub_15D0DF0(&v15);
    }
    v9 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v17);
    sub_182CBA0(v9, v18);
  }
  return v7;
}

