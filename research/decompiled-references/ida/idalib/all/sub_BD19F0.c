__int64 __fastcall sub_BD19F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BC5900 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6880);
  if ( v4 != sub_BC7360 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v2 + 128))(a1, *(_QWORD *)(a2 + 32)) )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 40));
  return 0;
}
