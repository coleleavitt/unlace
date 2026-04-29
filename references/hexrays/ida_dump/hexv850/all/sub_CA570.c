void __fastcall sub_CA570(__int64 *a1, _DWORD *a2, unsigned int **a3, unsigned int *a4)
{
  unsigned int *v4; // r13
  int v6; // eax
  int v7; // r12d
  unsigned int *v8; // rbx
  int v9; // esi

  v4 = a3[1];
  if ( v4 )
  {
    if ( a4 != (unsigned int *)-1LL )
      v4 = a4;
    v6 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, **a3);
    v7 = a2[20];
    if ( v7 < 8 )
      v7 = 8;
    if ( v7 > v6 )
      v7 = v6;
    v8 = nullptr;
    do
    {
      v9 = (*a3)[(_QWORD)v8];
      v8 = (unsigned int *)((char *)v8 + 1);
      sub_5F400(a1, v9, v7);
    }
    while ( v8 != v4 );
  }
}
