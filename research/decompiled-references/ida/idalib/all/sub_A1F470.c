void __fastcall sub_A1F470(_DWORD *a1, void **a2, size_t a3)
{
  char *v6; // rax
  __int64 v7; // r10
  char *v8; // rdi
  void *v9; // r13
  char *v10; // r9
  char *v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rdx
  char *v14; // rcx

  v6 = (char *)sub_A1F380(a3);
  v7 = (unsigned int)*a1;
  v8 = (char *)*a2;
  v9 = v6;
  if ( *a1 )
  {
    v10 = (char *)*a2;
    v11 = &v8[16 * v7];
    do
    {
      v12 = *((_QWORD *)v10 + 1);
      if ( v12 )
      {
        do
        {
          v13 = *(_QWORD *)(v12 + 16);
          v14 = &v6[16 * ((a3 - 1) & *(_QWORD *)(v12 + 24))];
          *(_QWORD *)(v12 + 16) = *((_QWORD *)v14 + 1);
          *((_QWORD *)v14 + 1) = v12;
          v12 = v13;
          ++*((_DWORD *)v14 + 1);
        }
        while ( v13 );
      }
      v10 += 16;
    }
    while ( v11 != v10 );
  }
  free(v8);
  *a1 = a3;
  *a2 = v9;
}
