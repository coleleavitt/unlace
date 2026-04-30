char __fastcall sub_3DF2F0(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  __int64 v3; // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 120LL);
  if ( v2 == sub_3DB4A0 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 || *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 && (v3 = 0, *(_QWORD *)(a2 + 16)) )
    {
      if ( *(int *)(v3 + 24) > 0 )
        return 1;
    }
    else if ( *(int *)(a1[4] + 24LL) > 0 )
    {
      return 1;
    }
    return sub_3DF240((__int64)a1, a2);
  }
  if ( ((int (*)(void))v2)() <= 0 )
    return sub_3DF240((__int64)a1, a2);
  return 1;
}
