unsigned __int64 __fastcall sub_142080(__int64 a1)
{
  int dbctx_id; // eax
  __int64 dbctx_qty; // r12
  __int64 i; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  __int64 (*v9)(void); // rax
  __int64 v10; // rdx
  int v12; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  ++*(_DWORD *)(a1 + 356);
  dbctx_id = get_dbctx_id();
  sub_F26F0(&v12, dbctx_id);
  dbctx_qty = get_dbctx_qty();
  if ( dbctx_qty )
  {
    for ( i = 0; i != dbctx_qty; ++i )
    {
      if ( j__switch_dbctx() )
      {
        v9 = *(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 136LL) + 168LL);
        if ( v9 == sub_13FF20 )
        {
          get_builtin_widgets_state();
          v5 = v13;
          v6 = v14;
        }
        else
        {
          v5 = v9();
          v6 = v10;
        }
        if ( v6 | v5 )
        {
          sub_F61B0(v5, v6);
          if ( (v5 & 0x20000000) != 0 )
            sub_165560();
          v7 = *(_QWORD *)(a1 + 144) + 136LL;
          v8 = *(__int64 (**)())(*(_QWORD *)v7 + 176LL);
          if ( v8 == sub_13FF60 )
            mark_builtin_widgets();
          else
            ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))v8)(v7, -1, -1, 0);
        }
      }
    }
  }
  --*(_DWORD *)(a1 + 356);
  sub_F27B0(&v12);
  return v15 - __readfsqword(0x28u);
}

