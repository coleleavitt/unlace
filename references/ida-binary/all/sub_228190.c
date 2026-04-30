bool __fastcall reg_cond_bits_t__::vfunc_2(__int64 a1, int a2)
{
  bool result; // al
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rdx

  result = 0;
  if ( a2 >= 0 && a2 < (unsigned __int64)xmmword_8CC398 )
  {
    v3 = qword_8CC390 + 56LL * a2;
    v4 = *(_DWORD *)(dbg + 64);
    result = v3 != 0 && v4 > a2;
    if ( result )
    {
      v5 = *(int *)(v3 + 44);
      result = 0;
      if ( v4 > (int)v5 )
      {
        v6 = *(_QWORD *)(dbg + 56) + 32 * v5;
        if ( (*(_BYTE *)(v6 + 9) & 1) == 0 )
          return *(_QWORD *)(v6 + 16) != 0;
      }
    }
  }
  return result;
}
