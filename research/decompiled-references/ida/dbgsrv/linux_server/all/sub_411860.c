/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411860
// Address: 0x0000000000411860

//----- (0000000000411860) ----------------------------------------------------
void __fastcall sub_411860(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  void *v7; // rdi
  char *v8; // rax
  __int64 v9; // rdx

  if ( *(int *)a1 >= -1 )
  {
    v7 = *(void **)(a1 + 8);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      j__free(v7);
    }
    *(_DWORD *)a1 = -2;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a3 )
  {
    v8 = (char *)sub_481540(a1 + 8, nullptr, a3, 1u);
    v9 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v8;
    memset(&v8[v9], 0, a3 - v9);
    *(_QWORD *)(a1 + 16) = a3;
    memcpy(*(void **)(a1 + 8), a2, a3);
  }
  *(_DWORD *)a1 = a4;
  if ( a4 < -1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(3214);
    BUG();
  }
}
// 4C94E1: using guessed type char byte_4C94E1;
