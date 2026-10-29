__int64 __fastcall sub_7F4470(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rax

  if ( *a2 )
    return 0;
  v4 = (*(__int64 (**)(void))(*(_QWORD *)(a1 + 1352) + 24LL))();
  *a2 = v4;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 1352) + 40LL))(a1, v4, a3);
  *(_QWORD *)(a1 + 64) = "error initializing secondary stream";
  return 4294949585LL;
}

