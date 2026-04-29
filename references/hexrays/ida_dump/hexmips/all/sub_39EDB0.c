__int64 __fastcall sub_39EDB0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 func; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  __int128 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 32) == 2;
  v13 = __readfsqword(0x28u);
  if ( v2 )
  {
    func = get_func(*(_QWORD *)(a1 + 24));
    if ( func )
    {
      v10 = 0;
      v12 = 0;
      func_tail_iterator_set(&v10, func, -1);
      v8 = v10;
      LODWORD(v11) = -1;
      if ( v10 )
      {
        while ( 1 )
        {
          rangeset_t_add(a2, v8);
          v8 = v10;
          if ( !v10 )
            break;
          v9 = v11 + 1;
          if ( (int)v11 + 1 >= *(_DWORD *)(v10 + 128) )
          {
            lock_func_range(v10, 0);
            return 1;
          }
          LODWORD(v11) = v11 + 1;
          if ( v9 >= 0 )
            v8 = *(_QWORD *)(v10 + 136) + 16LL * v9;
        }
      }
      return 1;
    }
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    if ( v4 != -1 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
      v10 = v4;
      v11 = v5 + v4;
      rangeset_t_add(a2, &v10);
      return 1;
    }
  }
  return 0;
}
