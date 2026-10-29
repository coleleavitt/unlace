/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001DF0
// Address: 0x0000000100001DF0

//----- (0000000100001DF0) ----------------------------------------------------
__int64 __fastcall sub_100001DF0(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  int i; // r12d
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r13

  v6 = qword_1000AE240;
  *(_DWORD *)qword_1000AE240 = a3;
  *(_DWORD *)(v6 + 4) = a2;
  *(_DWORD *)(v6 + 8) = a4;
  if ( a6 )
  {
    for ( i = 0; i != a6; ++i )
    {
      v13 = *(_QWORD *)(a5 + 8LL * i);
      v10 = *(void **)(v6 + 16);
      v11 = *(_QWORD *)(v6 + 24);
      if ( *(_QWORD *)(v6 + 32) < (unsigned __int64)(v11 + 1) )
      {
        v10 = qvector_reserve(v6 + 16, v10, v11 + 1, 8u);
        *(_QWORD *)(v6 + 16) = v10;
        v11 = *(_QWORD *)(v6 + 24);
        v12 = qword_1000AE240;
      }
      else
      {
        v12 = v6;
      }
      *((_QWORD *)v10 + v11) = v13;
      ++*(_QWORD *)(v6 + 24);
      v6 = v12;
    }
  }
  return 0;
}
// 1000AE240: using guessed type __int64 qword_1000AE240;
