void __fastcall sub_402A40(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 *func; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(__int64 ***)(a4 + 8);
      if ( v4 )
      {
        v5 = a2[2];
        v6 = *(_QWORD *)(v5 + 280);
        if ( v6 != -1 )
        {
          v7 = *v4;
          func = (__int64 *)get_func(v6);
          if ( func )
            v13 = *func;
          else
            v13 = -1;
          if ( v7 == v13 )
            sub_400520(v5, *(_QWORD *)(v5 + 280), v9, v10, v11, v12);
        }
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
