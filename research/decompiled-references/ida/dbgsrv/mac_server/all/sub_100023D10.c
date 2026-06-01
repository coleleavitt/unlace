/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023D10
// Address: 0x0000000100023D10

//----- (0000000100023D10) ----------------------------------------------------
void __fastcall sub_100023D10(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  void *v7; // rdi
  char *v8; // rax
  void *v9; // rax

  if ( *(int *)a1 >= -1 )
  {
    v7 = *(void **)(a1 + 8);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v7);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a3 )
  {
    v8 = (char *)qvector_reserve(a1 + 8, nullptr, a3, 1u);
    *(_QWORD *)(a1 + 8) = v8;
    __bzero(&v8[*(_QWORD *)(a1 + 16)], a3 - *(_QWORD *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = a3;
    memcpy(*(void **)(a1 + 8), a2, a3);
  }
  *(_DWORD *)a1 = a4;
  if ( a4 <= -2 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0xC8Eu);
    sub_100001690(v9);
  }
}
// 100023DE4: variable 'v9' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000AE23D: using guessed type char under_debugger;
