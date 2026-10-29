__int64 __fastcall sub_145C6C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi

  result = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 968) = 1;
  *(_BYTE *)(result + 6) = 1;
  v5 = *(_QWORD *)(a1 + 752);
  if ( v5 )
  {
    result = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
    if ( (void (*)())result != nullsub_680 )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))result)(v5, a2, a3, a4);
  }
  return result;
}
