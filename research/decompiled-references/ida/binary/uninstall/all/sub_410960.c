__int64 __fastcall sub_410960(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // [rsp+1Ch] [rbp-1Ch] BYREF
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v10 = 2;
  if ( (_DWORD)a3 != 1 )
  {
    if ( (_DWORD)a3 != 2 )
    {
      sub_458930(a2, 1, a4, "?option?");
      return 1;
    }
    a2 = *(_QWORD *)(a4 + 8);
    a1 = v4;
    v6 = sub_4584C0(v4, a2, (unsigned int)off_653E40, 8, (unsigned int)"option", 0, (__int64)&v10);
    a3 = 1;
    if ( v6 )
      return 1;
  }
  if ( v10 == 1 )
  {
    sub_4AD150(&v11, a2, a3);
    v8 = v12 + 1000000 * v11;
    goto LABEL_13;
  }
  if ( v10 <= 1 )
  {
    if ( v10 )
      return 0;
    sub_4AD150(&v11, a2, a3);
    v7 = v12 / 1000;
    v8 = v12 / 1000 + 1000 * v11;
LABEL_13:
    v9 = sub_47CDC0(v8, a2, v7);
    sub_48AFD0(v4, v9);
    return 0;
  }
  if ( v10 == 2 )
  {
    v8 = sub_4AD120(a1, a2, a3);
    goto LABEL_13;
  }
  return 0;
}

