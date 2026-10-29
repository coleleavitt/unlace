__int64 __fastcall create_byfunc_merge_handler(__int64 *a1, void (__fastcall ***a2)(_QWORD, __int64 *, _QWORD, void *))
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned int *v8; // rax
  unsigned int *v9; // rax
  unsigned int *v10; // r15
  __int64 v12; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = *a1;
  v15 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(switch_dbctx(*(int *)(v3 + 16)) + 1480);
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 1424LL);
  if ( !*(_BYTE *)(v5 + 48) )
  {
    sub_5AF6C0(v5);
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 1424LL);
  }
  v6 = *(_QWORD *)(v5 + 24);
  if ( (int)v6 > 0 )
  {
    v7 = 0;
    v12 = (unsigned int)(v6 - 1);
    while ( 1 )
    {
      if ( v7 < v6 )
      {
        v9 = sub_4EE820(v4 + 1624, *(unsigned int *)(*(_QWORD *)(v5 + 16) + 8 * v7));
        v10 = v9;
        if ( v9 )
        {
          if ( *((char *)v9 + 9) >= 0 || (v10 = sub_4EE820(v4 + 1624, v9[4])) != nullptr )
          {
            switch_dbctx(*(int *)(*a1 + 16));
            ptr = nullptr;
            v14 = 0;
            v8 = sub_4EE820(v4 + 1624, *v10);
            if ( v8 )
            {
              if ( *((char *)v8 + 9) >= 0 || (v8 = sub_4EE820(v4 + 1624, v8[4])) != nullptr )
                get_ea_name(&ptr, *v8, 0, 0);
            }
            sub_357520((__int64 *)&ptr);
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
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 1424LL);
      v6 = *(_QWORD *)(v5 + 24);
    }
  }
  return 0;
}

