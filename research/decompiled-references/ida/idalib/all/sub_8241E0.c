void __fastcall sub_8241E0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void **v8; // rax

  v2 = *(void **)(a1 + 288);
  if ( v2 )
    qfree(v2);
  v3 = *(void **)(a1 + 240);
  *(_QWORD *)(a1 + 288) = 0;
  if ( v3 )
    qfree(v3);
  *(_QWORD *)(a1 + 240) = 0;
  v4 = *(void **)(a1 + 80);
  if ( v4 )
    qfree(v4);
  v5 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 80) = 0;
  if ( v5 )
    qfree(v5);
  v6 = *(void **)(a1 + 184);
  *(_QWORD *)(a1 + 32) = 0;
  if ( v6 )
    qfree(v6);
  v7 = *(void **)(a1 + 136);
  *(_QWORD *)(a1 + 184) = 0;
  if ( v7 )
    qfree(v7);
  *(_QWORD *)(a1 + 136) = 0;
  qfree(*(void **)(a1 + 320));
  v8 = (void **)qword_2CD4A10;
  *(_QWORD *)(a1 + 320) = 0;
  if ( v8 )
  {
    qfree(*v8);
    if ( qword_2CD4A10 )
      qfree(qword_2CD4A10);
  }
  qword_2CD4A10 = nullptr;
  dword_2CD49F8 = 0;
  dword_2CD49F4 = 0;
  dword_2CD49F0 = 0;
}
