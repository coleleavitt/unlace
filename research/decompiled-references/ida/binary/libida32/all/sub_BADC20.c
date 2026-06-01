__int64 __fastcall sub_BADC20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  _BYTE v6[56]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6936);
  if ( v4 != sub_BA3690 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
    return 0;
  sub_F3A7E0(v6, a2);
  return (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a1 + 104))(a1, v6);
}

