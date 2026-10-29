void __fastcall sub_20332D0(void **a1, unsigned __int64 a2)
{
  _BYTE *v2; // rdx
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  char *v12; // rax
  unsigned __int64 v13; // rcx
  char *v14; // r14
  char *v15; // rdx
  void *v16; // rdi
  _DWORD *v17; // rax
  char *v18; // r8
  _DWORD *v19; // rcx
  __int64 v20; // rsi
  int v21; // edx

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 > ((_BYTE *)a1[2] - v2) >> 4 )
    {
      v7 = v2 - (_BYTE *)*a1;
      v8 = v7 >> 4;
      if ( 0xFFFFFFFFFFFFFFFLL - (v7 >> 4) < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v9 = v7 >> 4;
      if ( a2 >= v8 )
        v9 = a2;
      v10 = v8 + v9;
      if ( v10 > 0xFFFFFFFFFFFFFFFLL )
        v10 = 0xFFFFFFFFFFFFFFFLL;
      v11 = 16 * v10;
      v12 = (char *)operator new(v11);
      v13 = a2;
      v14 = v12;
      v15 = &v12[v7];
      do
      {
        *(_QWORD *)v15 = 0;
        v15 += 16;
        *((_DWORD *)v15 - 2) = 0;
        --v13;
      }
      while ( v13 );
      v16 = *a1;
      v17 = a1[1];
      v18 = v14;
      v19 = *a1;
      if ( v17 != *a1 )
      {
        do
        {
          v20 = *(_QWORD *)v19;
          v21 = v19[2];
          v19 += 4;
          v18 += 16;
          *((_QWORD *)v18 - 2) = v20;
          *((_DWORD *)v18 - 2) = v21;
        }
        while ( v17 != v19 );
      }
      if ( v16 )
        operator delete(v16);
      *a1 = v14;
      a1[2] = &v14[v11];
      a1[1] = &v14[16 * a2 + 16 * v8];
    }
    else
    {
      v3 = a2;
      v4 = a1[1];
      do
      {
        *v4 = 0;
        v4 += 2;
        *((_DWORD *)v4 - 2) = 0;
        --v3;
      }
      while ( v3 );
      a1[1] = &v2[16 * a2];
    }
  }
}
