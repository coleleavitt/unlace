__int64 __fastcall sub_3681D0(unsigned int *a1, __int64 a2)
{
  __int64 func; // rdi
  int v4; // eax

  func = get_func(a1[2]);
  v4 = 0;
  if ( func )
    v4 = (unsigned __int8)add_auto_stkpnt(func, a1[10], a1[18]);
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}

