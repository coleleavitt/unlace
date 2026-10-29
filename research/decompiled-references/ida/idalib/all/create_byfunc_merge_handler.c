__int64 __fastcall create_byfunc_merge_handler(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD, __int64 *, unsigned __int64, void *))
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // r15
  __int64 v12; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = *a1;
  v15 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(switch_dbctx(*(int *)(v3 + 16)) + 1672);
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 1616LL);
  if ( !*(_BYTE *)(v5 + 56) )
  {
    sub_5CA3A0(v5);
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 1616LL);
  }
  v6 = *(_QWORD *)(v5 + 32);
  if ( (int)v6 > 0 )
  {
    v7 = 0;
    v12 = (unsigned int)(v6 - 1);
    while ( 1 )
    {
      if ( v7 < v6 )
      {
        v9 = sub_505D70(v4 + 1704, *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16 * v7));
        v10 = v9;
        if ( v9 )
        {
          if ( *((char *)v9 + 17) >= 0 || (v10 = sub_505D70(v4 + 1704, v9[3])) != nullptr )
          {
            switch_dbctx(*(int *)(*a1 + 16));
            ptr = nullptr;
            v14 = 0;
            v8 = sub_505D70(v4 + 1704, *v10);
            if ( v8 )
            {
              if ( *((char *)v8 + 17) >= 0 || (v8 = sub_505D70(v4 + 1704, v8[3])) != nullptr )
                get_ea_name(&ptr, *v8, 0, 0);
            }
            sub_35A910((__int64 *)&ptr);
            (**a2)(a2, a1, *v10, ptr);
            if ( ptr )
            {
              *(_QWORD *)&v14 = 0;
              qfree(ptr);
            }
          }
        }
      }
      if ( v12 == v7 )
        break;
      ++v7;
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 1616LL);
      v6 = *(_QWORD *)(v5 + 32);
    }
  }
  return 0;
}
