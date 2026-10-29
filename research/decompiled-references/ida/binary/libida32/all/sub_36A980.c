__int64 __fastcall sub_36A980(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // r12d
  __int64 func; // rax
  __int64 v5; // rbx

  v2 = a1[18];
  v3 = a1[10];
  func = get_func(a1[2]);
  if ( func && (v5 = func, (unsigned __int8)sub_36A7C0((__int64)&unk_2388500, func, v3, v2)) )
  {
    *(_DWORD *)(a2 + 8) = (unsigned __int8)update_func(v5);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    return 0;
  }
}

