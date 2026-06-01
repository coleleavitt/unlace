__int64 __fastcall sub_368210(__int64 a1, __int64 a2)
{
  __int64 func; // rdi
  int v4; // eax

  func = get_func(*(unsigned int *)(a1 + 8));
  v4 = 0;
  if ( func )
    v4 = (unsigned __int8)del_stkpnt(func, *(unsigned int *)(a1 + 40));
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}

