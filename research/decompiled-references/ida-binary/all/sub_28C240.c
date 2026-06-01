__int64 sub_28C240()
{
  const char *v0; // rsi
  char v1; // al
  unsigned __int64 v2; // rdi
  bool v4; // al
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  const char *v7; // r13
  __int64 func; // rax
  _QWORD *v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = nullptr;
  v0 = (const char *)xmmword_8CC810;
  v10 = 0;
  v1 = sub_28A400((unsigned __int64 *)&v9, xmmword_8CC810);
  v2 = (unsigned __int64)v9;
  if ( v1 )
  {
    v0 = "HIDECANCEL\nDo you really want to detach this function tail?";
    v4 = sub_28AA30(unk_8D0AD9, (int)"HIDECANCEL\nDo you really want to detach this function tail?");
    v2 = (unsigned __int64)v9;
    if ( v4 )
    {
      v5 = &v9[v10];
      if ( v5 != v9 )
      {
        v6 = v9;
        do
        {
          v7 = (const char *)xmmword_8CC810;
          func = get_func(*v6);
          v0 = v7;
          remove_func_tail(func, v7);
          ++v6;
        }
        while ( v5 != v6 );
        v2 = (unsigned __int64)v9;
      }
    }
  }
  if ( v2 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v2, v0);
  }
  return 1;
}
