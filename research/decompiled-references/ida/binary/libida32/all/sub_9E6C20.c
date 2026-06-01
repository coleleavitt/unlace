void __fastcall sub_9E6C20(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 *v17; // rdi

  v2 = *a1;
  v3 = **a1;
  if ( !v3 || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3), (v2 = *a1) != nullptr) )
  {
    v4 = (void *)v2[22];
    if ( v4 )
      operator delete(v4, 0x28u);
    v5 = (void *)v2[21];
    if ( v5 )
      operator delete(v5, 0x28u);
    v6 = (void *)v2[20];
    if ( v6 )
      operator delete(v6, 0x28u);
    v7 = (void *)v2[19];
    if ( v7 )
      operator delete(v7, 0x28u);
    v8 = (void *)v2[18];
    if ( v8 )
      operator delete(v8, 0x28u);
    v9 = (void *)v2[17];
    if ( v9 )
      operator delete(v9, 0x28u);
    v10 = (void *)v2[16];
    if ( v10 )
      operator delete(v10, 0x28u);
    v11 = (void *)v2[15];
    if ( v11 )
      operator delete(v11, 0x28u);
    v12 = (void *)v2[14];
    if ( v12 )
      operator delete(v12, 0x28u);
    v13 = (void *)v2[13];
    if ( v13 )
      operator delete(v13, 0x28u);
    v14 = (void *)v2[12];
    if ( v14 )
      operator delete(v14, 0x28u);
    v15 = (void *)v2[11];
    if ( v15 )
      operator delete(v15, 0x28u);
    v16 = (void *)v2[10];
    if ( v16 )
      operator delete(v16, 0x28u);
    v17 = (__int64 *)v2[3];
    if ( v17 != v2 + 5 )
      operator delete(v17);
    operator delete(v2, 0xB8u);
  }
}

