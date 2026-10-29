__int64 __fastcall sub_BBFC20(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 v7; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 216);
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 1160);
  if ( v4 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 1248);
  if ( v5 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v6 = *(__int64 (**)())(v2 + 1256);
  if ( v6 != sub_BA1DE0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v6)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v2 + 96))(a1, a2[11]) )
  {
    v7 = *a1;
    if ( !a2[12] )
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v7 + 128))(a1, a2[6]);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v7 + 96))(a1) )
    {
      v7 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v7 + 128))(a1, a2[6]);
    }
  }
  return 0;
}

