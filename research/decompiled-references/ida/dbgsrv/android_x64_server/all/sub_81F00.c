/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81F00
// Address: 0x0000000000081F00

//----- (0000000000081F00) ----------------------------------------------------
void __fastcall sub_81F00(__int64 a1)
{
  char *v2; // rbx
  char *v3; // r14
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void **v7; // rbx
  void **v8; // r14
  void *v9; // rdi
  char **v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rbx
  void *v14; // rdi

  lex_term_file_0(a1, 1);
  sub_82290(a1);
  v2 = *(char **)(a1 + 480);
  if ( v2 )
  {
    do
    {
      v3 = *(char **)v2;
      sub_8BE80((char **)v2 + 5);
      if ( (v2[16] & 1) != 0 )
        operator delete(*((void **)v2 + 4));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)(a1 + 464);
  *(_QWORD *)(a1 + 464) = 0;
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)(a1 + 296);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  v6 = *(void **)(a1 + 248);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  sub_38490((char **)(a1 + 224));
  v7 = *(void ***)(a1 + 104);
  if ( v7 )
  {
    do
    {
      v8 = (void **)*v7;
      if ( ((_BYTE)v7[2] & 1) != 0 )
        operator delete(v7[4]);
      operator delete(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  v9 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0;
  if ( v9 )
    operator delete(v9);
  v10 = *(char ***)(a1 + 56);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      sub_38490(v10);
      if ( v11 != 1 )
      {
        v12 = v11 - 1;
        v13 = 56;
        do
        {
          sub_38490((char **)(v13 + *(_QWORD *)(a1 + 56)));
          v13 += 56;
          --v12;
        }
        while ( v12 );
      }
      v10 = *(char ***)(a1 + 56);
    }
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
  }
  v14 = *(void **)(a1 + 32);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
}
