/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E4B0
// Address: 0x000000014002E4B0

//----- (000000014002E4B0) ----------------------------------------------------
void __fastcall sub_14002E4B0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rbp
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  void *v10; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 > v3 )
  {
    v4 = (char *)sub_14005ABE0(a1, nullptr, a2, 0x20u);
    v5 = v4;
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v3;
    v7 = *(_QWORD **)a1;
    v8 = *(_QWORD *)(a1 + 8) - 1LL;
    if ( v8 >= 0 )
    {
      v9 = v4 + 16;
      do
      {
        *((_DWORD *)v9 - 4) = *(_DWORD *)v7;
        *(v9 - 1) = v7[1];
        v7[1] = 0;
        *v9 = v7[2];
        v7[2] = 0;
        v9[1] = v7[3];
        v7[3] = 0;
        v10 = (void *)v7[1];
        if ( v10 )
        {
          v7[2] = 0;
          j_free(v10);
          v7[1] = 0;
          v7[3] = 0;
        }
        v7 += 4;
        v9 += 4;
        --v8;
      }
      while ( v8 >= 0 );
    }
    j_free(*(void **)a1);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v6;
  }
}
