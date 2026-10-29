/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfread
// Address: 0x000000010007C540

//----- (000000010007C540) ----------------------------------------------------
size_t __fastcall qfread(FILE *__stream, void *__ptr, signed __int64 __nitems)
{
  signed __int64 v3; // rbx
  size_t v4; // rax
  size_t v5; // r15
  size_t v7; // rdx

  if ( __nitems >= 0 )
  {
    if ( __stream )
    {
      v3 = __nitems;
      if ( !__nitems )
        return 0;
      v4 = fread(__ptr, 1u, __nitems, __stream);
      if ( v4 == v3 )
        return v3;
      v5 = v4;
      feof(__stream);
      v3 = v5;
    }
    else
    {
      set_qerrno();
      *__error() = 9;
      v3 = -1;
    }
    set_qerrno();
    return v3;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4C9u);
  return qfwrite((FILE *)0x4C9, __ptr, v7);
}
// 10007C5F2: variable 'v7' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
