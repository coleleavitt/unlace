__int64 __fastcall sub_55B1C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v4; // rax
  void *v5; // rdi

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(v1 + 40);
  if ( !v2 )
  {
    v4 = (**(__int64 (__fastcall ***)(_QWORD))v1)(*(_QWORD *)(a1 + 40));
    v5 = *(void **)(v1 + 40);
    v2 = v4;
    if ( v5 && (void *)v4 != v5 )
      sub_4D63E0(v5);
    *(_QWORD *)(v1 + 40) = v2;
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}

