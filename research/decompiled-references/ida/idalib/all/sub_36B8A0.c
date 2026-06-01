__int64 __fastcall sub_36B8A0(__int64 a1, __int64 a2)
{
  __int64 func; // rdi
  __int64 v3; // rax

  func = get_func(*(_QWORD *)(a1 + 8));
  v3 = -1;
  if ( func )
    v3 = sub_5BB040();
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
