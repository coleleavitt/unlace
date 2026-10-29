__int64 __fastcall sub_EB4C10(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 (*v3)(); // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
  v3 = *(__int64 (**)())(*(_QWORD *)v2 + 544LL);
  if ( v3 == sub_A55ED0 )
    return 1;
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v3)(v2, *a2, a2[1]);
}
