__int64 __fastcall sub_B79170(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  void (*v4)(); // rcx

  v2 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 96) = a2;
  result = *(_QWORD *)(v2 + 18368);
  if ( result )
  {
    v4 = *(void (**)())(*(_QWORD *)result + 216LL);
    if ( v4 != nullsub_454 )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64))v4)(result, a1, a2);
  }
  return result;
}
