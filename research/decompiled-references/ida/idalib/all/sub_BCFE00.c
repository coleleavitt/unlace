__int64 __fastcall sub_BCFE00(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BC5900 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6808);
  if ( v4 != sub_BC72D0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 6824);
  if ( v5 != sub_BC72F0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  if ( a2[5] )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v2 + 96))(a1) )
      return 0;
    v2 = *a1;
  }
  if ( !a2[6] )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 128))(a1, a2[4]);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v2 + 96))(a1) )
  {
    v2 = *a1;
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 128))(a1, a2[4]);
  }
  return 0;
}
