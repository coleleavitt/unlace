unsigned __int64 __fastcall sub_279A90(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  int dbctx_id; // eax
  int v8; // ebp
  __int64 v9; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(sub_277DF0() + 112);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 120);
    if ( v2 != -1 )
    {
      v4 = sub_49EE00(*(_QWORD *)(a1 + 16));
      v5 = v4;
      if ( v4 )
      {
        sub_4E4770(v4 + 104);
        v9 = 0;
        v11 = -1;
        v10 = 0;
        v9 = qvector_reserve(&v9, 0, 1, 8);
        *(_QWORD *)(v9 + 8 * v10) = v2;
        v6 = *(_QWORD *)(v5 + 2520);
        *(_QWORD *)&v10 = v10 + 1;
        v11 = v2;
        if ( get_dbctx_qty(&v9) )
        {
          dbctx_id = get_dbctx_id();
          v8 = dbctx_id;
          if ( (int)v6 >= 0 && (_DWORD)v6 != dbctx_id )
            switch_dbctx((int)v6);
          sub_4A4600(v5, &v9, 7, 0);
          if ( v8 != -1 && v8 < (unsigned __int64)get_dbctx_qty(v5) )
            switch_dbctx(v8);
        }
        else
        {
          sub_4A4600(v5, &v9, 7, 0);
        }
        if ( v9 )
        {
          *(_QWORD *)&v10 = 0;
          qfree(v9, (const char *)&v9);
        }
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}
