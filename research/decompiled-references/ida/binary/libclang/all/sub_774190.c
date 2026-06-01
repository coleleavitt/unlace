bool __fastcall sub_774190(_QWORD *a1, __int64 a2)
{
  __int64 (*v2)(); // rax

  v2 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_6A41B0 )
    return *a1 != sub_777E10(a2);
  else
    return *a1 != ((__int64 (__fastcall *)(__int64))v2)(a2);
}

