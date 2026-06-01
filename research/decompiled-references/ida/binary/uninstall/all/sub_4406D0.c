__int64 __fastcall sub_4406D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rax

  if ( *(char ***)(a2 + 24) != &off_6554A0 && (result = sub_43FB20(a1, a2), (_DWORD)result) )
  {
    *a4 = 0;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a2 + 32) + 64LL))(*(_QWORD *)(a2 + 32), a3);
    if ( v7 )
      *a4 = *(_QWORD *)(v7 + 24);
    else
      *a4 = 0;
    return 0;
  }
  return result;
}

