/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024D30
// Address: 0x0000000140024D30

//----- (0000000140024D30) ----------------------------------------------------
void __fastcall sub_140024D30(__int64 a1)
{
  int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // cl
  int v7; // eax
  __int64 i; // rdi
  void **v9; // rbx
  void *v10; // rcx
  void *v11; // rcx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 32) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1 + 24);
      v5 = v3 + v4 + 24;
      v6 = *(_BYTE *)v5;
      if ( *(_BYTE *)v5 == 5 || v6 == 6 && -*(_DWORD *)(v3 + v4 + 32) >= (unsigned __int64)qword_1400C6060 )
      {
        if ( !v5 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(2656);
        }
        if ( v6 == 5 )
          sub_140024A20(*(_DWORD **)(v5 + 8), (char *)v5);
        *(_BYTE *)v5 = 2;
        *(_QWORD *)(v5 + 8) = 0;
      }
      ++v2;
      v3 += 56;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 32) );
  }
  if ( qword_1400C6088 )
    qword_1400C6088();
  v7 = *(_DWORD *)(a1 + 8) - 1;
  if ( v7 >= 0 )
  {
    for ( i = v7; i >= 0; --i )
    {
      v9 = *(void ***)(*(_QWORD *)a1 + 8 * i);
      if ( v9 )
      {
        v10 = v9[3];
        if ( v10 )
        {
          v9[4] = nullptr;
          j_free(v10);
          v9[3] = nullptr;
          v9[5] = nullptr;
        }
        sub_1400209C0((__int64)v9, (__int64)v9, *((_QWORD *)*v9 + 1));
        j_j_free(*v9);
        j_j_free(v9);
      }
    }
  }
  v11 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v11);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
// 140024D9B: conditional instruction was optimized away because cl.1==6
// 1400C6060: using guessed type __int64 qword_1400C6060;
// 1400C6088: using guessed type __int64 (*qword_1400C6088)(void);
// 1400CB61C: using guessed type char byte_1400CB61C;
