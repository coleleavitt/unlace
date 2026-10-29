void __fastcall sub_17F150(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rdi

  *a1 = &off_235CB0;
  v2 = a1[4];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[1];
  if ( v3 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_QWORD *)(v3 + 32 * i);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          v3 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x48u);
}

