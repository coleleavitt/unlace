/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BE330
// Address: 0x00000000000BE330

//----- (00000000000BE330) ----------------------------------------------------
void __fastcall sub_BE330(__int64 a1)
{
  __int64 v2; // rax
  signed __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r14
  void *v6; // rax
  void *v7; // rdi

  *(_QWORD *)(a1 + 24) = 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(unsigned int *)(v2 + 16);
  *(_QWORD *)(a1 + 48) = v4;
  if ( v4 )
  {
    if ( v3 > 0 )
    {
      v5 = ((v3 + v4 - 1) / v4 + 7) >> 3;
      *(_QWORD *)(a1 + 40) = qalloc(v3);
      v6 = qalloc(v5);
      *(_QWORD *)(a1 + 32) = v6;
      v7 = *(void **)(a1 + 40);
      if ( v6 && v7 )
      {
        memset(v6, 0, v5);
        return;
      }
      qfree(v7);
      *(_QWORD *)(a1 + 40) = 0;
      qfree(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = 0;
    }
    *(_QWORD *)(a1 + 48) = 0;
  }
}
