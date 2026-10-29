/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001EB04
// Address: 0x000000010001EB04

//----- (000000010001EB04) ----------------------------------------------------
void __fastcall sub_10001EB04(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  void *v8; // x0
  char *v9; // x0
  void *v10; // x0

  if ( *(int *)a1 >= -1 )
  {
    v8 = *(void **)(a1 + 8);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v8);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a3 )
  {
    v9 = (char *)qvector_reserve((_QWORD *)(a1 + 8), nullptr, a3, 1u);
    *(_QWORD *)(a1 + 8) = v9;
    bzero(&v9[*(_QWORD *)(a1 + 16)], a3 - *(_QWORD *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = a3;
    memcpy(*(void **)(a1 + 8), a2, a3);
  }
  *(_DWORD *)a1 = a4;
  if ( a4 <= -2 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(3214);
    sub_1000013F4(v10);
  }
}
// 10001EBE0: variable 'v10' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
