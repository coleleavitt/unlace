__int64 __fastcall sub_36B8F0(_QWORD *a1, __int64 a2)
{
  __int64 func; // rdi
  __int64 v4; // rax

  func = get_func(a1[1]);
  v4 = 0;
  if ( func )
    v4 = (unsigned __int8)add_auto_stkpnt(func, a1[5], a1[9]);
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
