__int64 __fastcall tiplace_t__touval(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  v2 = *(unsigned int *)(a1 + 12);
  if ( a2[2] )
  {
    if ( v2 >= a2[5] )
      return 0;
    v3 = *(int *)(a2[4] + 4 * v2);
    if ( v3 < 0 )
      return 0;
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2) < (unsigned int)v2 )
      return 0;
    v3 = (unsigned int)v2 - 1LL;
    if ( v3 < 0 )
      return 0;
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 4095;
  if ( v5 <= 0xFFF )
    v6 = *(_QWORD *)(a1 + 16);
  if ( v5 == -2 )
    v6 = 0;
  return v6 | (v3 << 12);
}
