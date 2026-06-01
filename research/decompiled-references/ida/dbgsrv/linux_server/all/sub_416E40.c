/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416E40
// Address: 0x0000000000416E40

//----- (0000000000416E40) ----------------------------------------------------
void __fastcall sub_416E40(
        _QWORD *a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // rbp
  __int64 v11; // r14
  _QWORD *v14; // r12
  _QWORD *v15; // rax
  unsigned __int64 v16; // rsi
  _QWORD *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r15
  void *v21; // rax
  const char *v22; // rdi

  v10 = a1 + 140;
  v11 = a1[142];
  if ( (_QWORD *)v11 != a1 + 140 )
  {
    v14 = a1 + 146;
    do
    {
      v15 = (_QWORD *)a1[147];
      v16 = *(_QWORD *)(v11 + 32);
      if ( v15 )
      {
        v17 = v14;
        do
        {
          while ( 1 )
          {
            v18 = v15[2];
            v19 = v15[3];
            if ( v15[4] < v16 )
              break;
            v17 = v15;
            v15 = (_QWORD *)v15[2];
            if ( !v18 )
              goto LABEL_8;
          }
          v15 = (_QWORD *)v15[3];
        }
        while ( v19 );
LABEL_8:
        if ( v14 != v17 && v16 >= v17[4] )
        {
          if ( a2 )
          {
            v22 = s1;
            if ( v17[11] )
              v22 = (const char *)v17[10];
            if ( strcmp(v22, a2) )
            {
              v11 = std::_Rb_tree_increment(v11);
              continue;
            }
          }
          sub_416760(a1, v17 + 5, a3, a4, a5, a6, a7, a8, a9, a10);
        }
      }
      v20 = std::_Rb_tree_increment(v11);
      v21 = (void *)std::_Rb_tree_rebalance_for_erase(v11, v10);
      v11 = v20;
      operator delete(v21, 0x28u);
      --a1[144];
    }
    while ( (_QWORD *)v11 != v10 );
  }
}
// 416F3A: variable 'a7' is possibly undefined
// 416F3A: variable 'a8' is possibly undefined
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
