__int64 __fastcall sub_64C770(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  void (*v4)(void); // rax

  v3 = a1[372];
  if ( v3 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 72LL);
    if ( v4 != nullsub_187 )
      v4();
  }
  sub_1818510(a2);
  return sub_1818B90(*a1, a2);
}

