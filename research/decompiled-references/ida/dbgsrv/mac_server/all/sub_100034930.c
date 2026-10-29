/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034930
// Address: 0x0000000100034930

//----- (0000000100034930) ----------------------------------------------------
__int64 __fastcall sub_100034930(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  char **v4; // rdi
  char **v5; // r13
  char **v6; // r12
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r15

  result = qword_1000AC0E0;
  v2 = *(_QWORD *)(a1 + 48);
  if ( qword_1000AC0E0 != v2 )
  {
    v4 = off_1000AC0E8;
    v5 = &off_1000AC0E8[5 * v2];
    v6 = &off_1000AC0E8[5 * qword_1000AC0E0];
    if ( v5 < v6 )
    {
      do
      {
        v7 = v5[3];
        if ( v7 )
        {
          v8 = *((_QWORD *)v7 - 1);
          if ( v8 )
          {
            v9 = 32 * v8;
            do
            {
              free_idcv((unsigned __int8 *)&v7[v9 - 32]);
              v9 -= 32;
            }
            while ( v9 );
          }
          operator delete[](v7 - 8);
        }
        qfree(*v5);
        qfree(v5[2]);
        *((_OWORD *)v5 + 1) = 0;
        *(_OWORD *)v5 = 0;
        v5[4] = nullptr;
        v5 += 5;
      }
      while ( v5 < v6 );
      v4 = off_1000AC0E8;
    }
    qfree(v4);
    off_1000AC0E8 = *(char ***)(a1 + 40);
    result = *(_QWORD *)(a1 + 48);
    qword_1000AC0E0 = result;
  }
  return result;
}
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
// 1000AC0E8: using guessed type char **off_1000AC0E8;
