__int64 __fastcall sub_8D8610(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 (*v3)(); // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 && (v3 = *(__int64 (**)())(*(_QWORD *)v2 + 8LL), v3 != sub_8A46A0) )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))v3)(v2, 1, a2);
  else
    return 0;
}

