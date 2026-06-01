void __fastcall sub_64C5F0(__int64 a1)
{
  __int64 v1; // rdi
  void (*v2)(void); // rax

  *(_DWORD *)(a1 + 2988) = 0;
  v1 = *(_QWORD *)(a1 + 2976);
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 184LL);
    if ( v2 != nullsub_190 )
      v2();
  }
}

