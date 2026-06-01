__int64 __fastcall sub_BAE0A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  unsigned int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // r13

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6728);
  if ( v4 != sub_BA34F0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v2 + 80))(
         a1,
         *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (_BYTE)v5 )
  {
    v6 = a2 + 48;
    v7 = a2 + 48 + 24LL * *(unsigned int *)(a2 + 20);
    if ( a2 + 48 == v7 )
      return v5;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 104))(a1, v6) )
    {
      v6 += 24;
      if ( v7 == v6 )
        return v5;
    }
  }
  return 0;
}

