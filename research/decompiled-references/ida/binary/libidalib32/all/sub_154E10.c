__int64 __fastcall sub_154E10(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  void (*v4)(); // rdx
  void (*v5)(); // rdx

  result = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(void (**)())(*(_QWORD *)result + 120LL);
  if ( v4 == nullsub_82 )
  {
    v5 = *(void (**)())(*(_QWORD *)v3 + 120LL);
    if ( v5 == nullsub_82 )
      return result;
    return ((__int64 (__fastcall *)(__int64, __int64))v5)(v3, result);
  }
  ((void (__fastcall *)(__int64, __int64))v4)(result, v3);
  v3 = *(_QWORD *)(a1 + 64);
  result = *(_QWORD *)(a1 + 56);
  v5 = *(void (**)())(*(_QWORD *)v3 + 120LL);
  if ( v5 != nullsub_82 )
    return ((__int64 (__fastcall *)(__int64, __int64))v5)(v3, result);
  return result;
}

