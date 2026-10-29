/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000440E0
// Address: 0x00000001000440E0

//----- (00000001000440E0) ----------------------------------------------------
void __fastcall sub_1000440E0(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  void *v3; // rdi
  void *v4; // rdi

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
  {
    if ( *((_BYTE *)a1 + 16) == 1 )
    {
      v2 = *(unsigned __int8 *)(v1 + 56);
      if ( v2 == 5 )
      {
        sub_1000380B0(*(unsigned __int8 ***)(v1 + 64), (unsigned __int8 *)(v1 + 56));
      }
      else if ( v2 == 7 )
      {
        v3 = *(void **)(v1 + 64);
        if ( v3 )
        {
          *(_QWORD *)(v1 + 72) = 0;
          qfree(v3);
          *(_QWORD *)(v1 + 80) = 0;
        }
      }
      *(_BYTE *)(v1 + 56) = 2;
      *(_QWORD *)(v1 + 64) = 0;
      v4 = *(void **)(v1 + 32);
      if ( v4 )
      {
        *(_QWORD *)(v1 + 40) = 0;
        qfree(v4);
      }
    }
    operator delete((void *)v1);
  }
}
