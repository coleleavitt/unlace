__int64 __fastcall sub_6C5F20(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (*v3)(); // rax

  v2 = *(_QWORD *)(a1 + 17288);
  v3 = *(__int64 (**)())(*(_QWORD *)v2 + 584LL);
  if ( v3 != sub_6A6820 )
    ((void (__fastcall *)(__int64, char *, __int64))v3)(v2, "reference-types", 15);
  return *(_QWORD *)(a1 + 22520);
}

