/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BB80
// Address: 0x000000000044BB80

//----- (000000000044BB80) ----------------------------------------------------
void *__fastcall sub_44BB80(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  void *result; // rax

  if ( !*(_BYTE *)(a1 + 648) )
  {
    v2 = *(_QWORD *)(a1 + 584);
    if ( v2 )
    {
      sub_44BA90(*(_QWORD *)(a1 + 584));
      if ( *(_QWORD *)v2 != v2 + 48 )
        operator delete(*(void **)v2, 8LL * *(_QWORD *)(v2 + 8));
      operator delete((void *)v2, 0x38u);
    }
  }
  v3 = *(_QWORD **)(a1 + 608);
  *(_BYTE *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    sub_4491C0(v4);
  }
  result = memset(*(void **)(a1 + 592), 0, 8LL * *(_QWORD *)(a1 + 600));
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  return result;
}
