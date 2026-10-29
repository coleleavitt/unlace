void __fastcall sub_8CEA0(__int64 a1)
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
    j__free(v2);
  v3 = *(void **)(a1 + 240);
  *(_QWORD *)(a1 + 288) = 0;
  if ( v3 )
    j__free(v3);
  *(_QWORD *)(a1 + 240) = 0;
  v4 = *(void **)(a1 + 80);
  if ( v4 )
    j__free(v4);
  v5 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 80) = 0;
  if ( v5 )
    j__free(v5);
  v6 = *(void **)(a1 + 184);
  *(_QWORD *)(a1 + 32) = 0;
  if ( v6 )
    j__free(v6);
  v7 = *(void **)(a1 + 136);
  *(_QWORD *)(a1 + 184) = 0;
  if ( v7 )
    j__free(v7);
  *(_QWORD *)(a1 + 136) = 0;
  j__free(*(void **)(a1 + 320));
  v8 = (void **)qword_165CD0;
  *(_QWORD *)(a1 + 320) = 0;
  if ( v8 )
  {
    j__free(*v8);
    if ( qword_165CD0 )
      j__free(qword_165CD0);
  }
  qword_165CD0 = nullptr;
  dword_165CB8 = 0;
  dword_165CB4 = 0;
  dword_165CB0 = 0;
}

