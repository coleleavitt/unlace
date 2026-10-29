__int64 __fastcall sub_454550(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void (*v3)(); // r8

  result = *(_QWORD *)(a1 + 80);
  if ( result )
  {
    v3 = *(void (**)())(*(_QWORD *)result + 32LL);
    if ( v3 != nullsub_65 )
      return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v3)(
               *(_QWORD *)(a1 + 80),
               a2,
               *(unsigned __int8 *)(a1 + 92),
               *(_QWORD *)(a1 + 64));
  }
  return result;
}
