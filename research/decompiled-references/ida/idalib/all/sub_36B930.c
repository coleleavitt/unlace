__int64 __fastcall sub_36B930(__int64 a1, __int64 a2)
{
  __int64 func; // rdi
  __int64 v4; // rax

  func = get_func(*(_QWORD *)(a1 + 8));
  v4 = 0;
  if ( func )
    v4 = (unsigned __int8)del_stkpnt(func, *(_QWORD *)(a1 + 40));
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
