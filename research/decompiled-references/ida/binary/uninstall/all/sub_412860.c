__int64 __fastcall sub_412860(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int *v4; // rax
  int *v5; // rbx
  unsigned int v6; // ebp
  int v7; // eax
  bool v8; // zf
  int *v10; // rdi
  int v11; // eax
  int *v12; // [rsp+8h] [rbp-20h] BYREF

  if ( a3 <= 1 )
  {
    sub_458930(a2, 1, a4, "arg ?arg ...?");
    return 1;
  }
  else
  {
    if ( a3 == 2 )
    {
      v6 = sub_452DF0(a2, *(_QWORD *)(a4 + 8), &v12);
    }
    else
    {
      v4 = (int *)sub_49E2D0((unsigned int)(a3 - 1), a4 + 8);
      ++*v4;
      v5 = v4;
      v6 = sub_452DF0(a2, v4, &v12);
      v7 = *v5 - 1;
      v8 = *v5 == 1;
      *v5 = v7;
      if ( v7 < 0 || v8 )
        sub_47B120(v5);
    }
    if ( !v6 )
    {
      sub_48AFD0(a2, v12);
      v10 = v12;
      v11 = *v12 - 1;
      v8 = *v12 == 1;
      *v12 = v11;
      if ( v11 < 0 || v8 )
        sub_47B120(v10);
    }
    return v6;
  }
}

