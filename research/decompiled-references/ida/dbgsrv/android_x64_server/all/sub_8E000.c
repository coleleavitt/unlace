/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E000
// Address: 0x000000000008E000

//----- (000000000008E000) ----------------------------------------------------
void __fastcall sub_8E000(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  _QWORD *i; // rbx
  _QWORD **v5; // rdi

  *(_QWORD *)a1 = &off_14E3B0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(void **)(a1 + 4208);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 4216) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 4208) = 0;
    *(_QWORD *)(a1 + 4224) = 0;
  }
  v3 = *(void **)(a1 + 4184);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 4192) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 4184) = 0;
    *(_QWORD *)(a1 + 4200) = 0;
  }
  for ( i = *(_QWORD **)(a1 + 4152); (_QWORD *)(a1 + 4152) != i; --*(_QWORD *)(a1 + 4168) )
  {
    v5 = (_QWORD **)i;
    i = (_QWORD *)*i;
    *v5[1] = i;
    (*v5)[1] = v5[1];
    qfree(v5);
  }
}
// 14E3B0: using guessed type __int64 (__fastcall *off_14E3B0)();
