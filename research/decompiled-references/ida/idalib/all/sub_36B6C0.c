__int64 __fastcall sub_36B6C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 func; // rax
  int v6; // eax
  __int64 *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+8h] [rbp-40h]
  __int128 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v2 = -1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  if ( v3 != -1 )
  {
    func = get_func(v4);
    v9 = 0;
    v11 = 0;
    func_tail_iterator_set(&v9, func, v3);
    if ( v9 )
    {
      v6 = v10 + 1;
      if ( v10 + 1 < *(_DWORD *)(v9 + 128) )
      {
        ++v10;
        v8 = (__int64 *)v9;
        if ( v6 >= 0 )
          v8 = (__int64 *)(*(_QWORD *)(v9 + 136) + 16LL * v6);
        v2 = *v8;
        lock_func_range(v9, 0);
      }
      else
      {
        lock_func_range(v9, 0);
      }
    }
  }
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}
