__int64 __fastcall sub_3D2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // r14
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r13
  void *v7; // rax
  char **v8; // rax
  unsigned __int64 v9; // r13
  int v10; // r15d
  char *v11; // r14
  int v12; // ebx
  __int64 v13; // rax
  char *v14; // rax

  v2 = *(unsigned int *)(a2 + 120);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = (&off_73540)[4 * v2];
  if ( v3 )
  {
    v4 = strlen((&off_73540)[4 * v2]);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v7, v3, v6);
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  }
  v8 = &(&off_73540)[4 * v2];
  v9 = (unsigned __int64)v8[3];
  if ( v9 )
  {
    v10 = *((_DWORD *)v8 + 2);
    v11 = v8[2];
    v12 = 0;
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = &v11[24 * v13];
        if ( (*((_DWORD *)v14 + 2) & v10) != 0 )
          break;
        v13 = ++v12;
        if ( v12 >= v9 )
          return a1;
      }
      sub_3D1F0((__int64 *)a1, (__int64)"-%s", *(const char **)v14);
      v13 = ++v12;
    }
    while ( v12 < v9 );
  }
  return a1;
}
