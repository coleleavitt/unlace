/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4415D0
// Address: 0x00000000004415D0

//----- (00000000004415D0) ----------------------------------------------------
void __fastcall sub_4415D0(
        char **a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdi
  char v13; // al
  char *v14; // rdi
  int v15; // r13d
  __int64 v16; // r15
  _QWORD *v17; // r12
  void *v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // rbp
  void *v21; // rdi

  if ( a1[4] )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = (__int64)&a1[3][56 * v11];
        v13 = *(_BYTE *)(v12 + 24);
        if ( v13 == 5 || v13 == 6 && (unsigned __int64)-*(_DWORD *)(v12 + 32) >= qword_4C56E0[0] )
          break;
        v11 = ++v10;
        if ( v10 >= (unsigned __int64)a1[4] )
          goto LABEL_8;
      }
      ++v10;
      sub_441540(v12 + 24, a2, a3, a4, a5, a6, a7, a8, a9);
      v11 = v10;
    }
    while ( v10 < (unsigned __int64)a1[4] );
  }
LABEL_8:
  if ( qword_4C5700[1] )
    ((void (*)(void))qword_4C5700[1])();
  v14 = *a1;
  v15 = *((_DWORD *)a1 + 2) - 1;
  if ( v15 >= 0 )
  {
    v16 = 8LL * (unsigned int)v15;
    do
    {
      v17 = *(_QWORD **)&v14[v16];
      if ( v17 )
      {
        v18 = (void *)v17[7];
        if ( v18 )
        {
          v17[8] = 0;
          j__free(v18);
        }
        v19 = v17[2];
        while ( v19 )
        {
          v20 = (_QWORD *)v19;
          sub_43CB10(*(_QWORD **)(v19 + 24));
          v21 = *(void **)(v19 + 32);
          v19 = *(_QWORD *)(v19 + 16);
          if ( v21 )
          {
            v20[5] = 0;
            j__free(v21);
          }
          operator delete(v20, 0x40u);
        }
        operator delete(v17, 0x60u);
        v14 = *a1;
      }
      --v15;
      v16 -= 8;
    }
    while ( v15 != -1 );
  }
  if ( v14 )
  {
    a1[1] = nullptr;
    j__free(v14);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
// 44163E: variable 'a6' is possibly undefined
// 44163E: variable 'a7' is possibly undefined
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
// 4C5700: using guessed type __int64[4];
