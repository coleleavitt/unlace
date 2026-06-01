/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020944
// Address: 0x0000000100020944

//----- (0000000100020944) ----------------------------------------------------
void __fastcall sub_100020944(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
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
    sub_10000150C(v10);
  }
}
// 100020A24: variable 'v10' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
