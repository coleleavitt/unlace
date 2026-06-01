bool __fastcall sub_B47AB0(_QWORD *a1, __int64 a2)
{
  __int64 (*v2)(); // rax

  v2 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_9DD400 )
    return *a1 != sub_B4CD20(a2);
  else
    return *a1 != ((__int64 (__fastcall *)(__int64))v2)(a2);
}

