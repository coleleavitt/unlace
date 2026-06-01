__int64 __fastcall sub_4408B0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( *(char ***)(a2 + 24) == &off_6554A0 || (result = sub_43FB20(a1, a2), !(_DWORD)result) )
  {
    *a3 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 44LL);
    return 0;
  }
  return result;
}

