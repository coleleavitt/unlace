__int64 __fastcall sub_4C5000(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(); // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 192LL);
  if ( v4 == sub_4C9AE0 )
    return 0;
  else
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))v4)(v3, a2, a3);
}

