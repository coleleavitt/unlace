__int64 __fastcall sub_369270(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 func; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == -1 )
    return 0;
  func = get_func(v3);
  if ( !func || (int)get_func_chunknum(func, *(_QWORD *)(a1 + 40)) < 0 )
    return 0;
  *(_QWORD *)(a2 + 8) = 1;
  return 0;
}
