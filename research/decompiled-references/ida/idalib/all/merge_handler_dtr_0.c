unsigned __int64 __fastcall merge_handler_dtr_0(__int64 a1)
{
  unsigned __int64 dbctx_id; // r12
  _QWORD *v2; // rbx
  unsigned __int64 result; // rax

  dbctx_id = -1;
  if ( get_dbctx_qty() )
    dbctx_id = (int)get_dbctx_id();
  v2 = (_QWORD *)(a1 + 56);
  do
  {
    if ( *v2 )
    {
      switch_dbctx(*(int *)(*v2 + 8LL));
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
      *v2 = 0;
    }
    ++v2;
  }
  while ( v2 != (_QWORD *)(a1 + 80) );
  *(_DWORD *)(a1 + 40) = -1;
  result = sub_458F60(&xmmword_2CCB660, a1);
  if ( (_DWORD)dbctx_id != -1 )
  {
    result = get_dbctx_qty();
    if ( dbctx_id < result )
    {
      result = sub_3FB5F0();
      if ( (_BYTE)result )
        return switch_dbctx(dbctx_id);
    }
  }
  return result;
}
