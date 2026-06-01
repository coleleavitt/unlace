void __fastcall sub_375DB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  sub_370800();
  v2 = *(_QWORD *)(a1 + 440);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( v3 )
      sub_371130((unsigned __int64 **)(v3 + 272), a2);
  }
}
