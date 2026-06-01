__int64 __fastcall sub_3A2F40(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v8; // r13
  __int64 func; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v2 = a2;
  v3 = set_auto_state(0x28u);
  v4 = a2[2];
  if ( (v4 & 0x1000) == 0 )
  {
    BYTE1(v4) |= 0x10u;
    v8 = *a2;
    a2[2] = v4;
    update_func(a2);
    sub_3792E0(0x50u, v8);
    func = get_func(v8);
    v2 = (__int64 *)func;
    if ( !func )
      return set_auto_state(v3);
    v4 = *(_QWORD *)(func + 16);
  }
  if ( (v4 & 0x200) == 0 || (v5 = *v2, sub_5CD440(a1, v2), (v2 = (__int64 *)get_func(v5)) != nullptr) )
  {
    lock_func_range(v2, 1);
    v6 = v2[2];
    if ( (v6 & 0x40000) != 0 )
    {
      reanalyze_function(v2, 0, -1, 0);
      v2[2] &= ~0x40000uLL;
      update_func(v2);
      lock_func_range(v2, 0);
    }
    else
    {
      if ( (v6 & 0x400) == 0 && (getinf(10) & 0x2000) != 0 )
      {
        v2[2] |= 0x400uLL;
        update_func(v2);
        v10 = sub_3792E0(0x39u, v2);
        v11 = *v2;
        if ( v10 )
          remember_problem(11, v11, 0);
        else
          forget_problem(11, v11);
        v12 = v2[2];
        if ( (v12 & 0x1000) == 0 )
        {
          BYTE1(v12) |= 0x10u;
          v2[2] = v12;
          update_func(v2);
        }
      }
      lock_func_range(v2, 0);
    }
  }
  return set_auto_state(v3);
}
