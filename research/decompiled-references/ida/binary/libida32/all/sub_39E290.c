__int64 __fastcall sub_39E290(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // rax
  unsigned int v8; // r13d
  __int64 func; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v2 = a2;
  v3 = set_auto_state(40);
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 0x1000) == 0 )
  {
    BYTE1(v4) |= 0x10u;
    v8 = *a2;
    *((_QWORD *)a2 + 1) = v4;
    update_func(a2);
    sub_375980(0x50u, v8);
    func = get_func(v8);
    v2 = (unsigned int *)func;
    if ( !func )
      return set_auto_state(v3);
    v4 = *(_QWORD *)(func + 8);
  }
  if ( (v4 & 0x200) == 0 || (v5 = *v2, sub_5B2530(a1, v2), (v2 = (unsigned int *)get_func(v5)) != nullptr) )
  {
    lock_func_range(v2, 1);
    v6 = *((_QWORD *)v2 + 1);
    if ( (v6 & 0x40000) != 0 )
    {
      reanalyze_function(v2, 0, 0xFFFFFFFFLL, 0);
      *((_QWORD *)v2 + 1) &= ~0x40000uLL;
      update_func(v2);
      lock_func_range(v2, 0);
    }
    else
    {
      if ( (v6 & 0x400) == 0 && (getinf(10) & 0x2000) != 0 )
      {
        *((_QWORD *)v2 + 1) |= 0x400uLL;
        update_func(v2);
        v10 = sub_375980(0x39u, v2);
        v11 = *v2;
        if ( v10 )
          remember_problem(11, v11, 0);
        else
          forget_problem(11, v11);
        v12 = *((_QWORD *)v2 + 1);
        if ( (v12 & 0x1000) == 0 )
        {
          BYTE1(v12) |= 0x10u;
          *((_QWORD *)v2 + 1) = v12;
          update_func(v2);
        }
      }
      lock_func_range(v2, 0);
    }
  }
  return set_auto_state(v3);
}

