/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006C3F4
// Address: 0x000000010006C3F4

//----- (000000010006C3F4) ----------------------------------------------------
void __fastcall sub_10006C3F4(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x0
  unsigned __int64 v4; // x8
  void *v5; // x20
  void *v6; // x0

  *(_QWORD *)(a1 + 24) = 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v4 = *(unsigned int *)(v2 + 16);
  *(_QWORD *)(a1 + 48) = v4;
  if ( (_DWORD)v4 )
  {
    if ( v3 >= 1 )
    {
      v5 = (void *)(((v3 + v4 - 1) / v4 + 7) >> 3);
      *(_QWORD *)(a1 + 40) = qalloc((void *)v3);
      v6 = qalloc(v5);
      *(_QWORD *)(a1 + 32) = v6;
      if ( *(_QWORD *)(a1 + 40) && v6 )
      {
        bzero(v6, (size_t)v5);
        return;
      }
      qfree(*(void **)(a1 + 40));
      *(_QWORD *)(a1 + 40) = 0;
      qfree(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = 0;
    }
    *(_QWORD *)(a1 + 48) = 0;
  }
}
