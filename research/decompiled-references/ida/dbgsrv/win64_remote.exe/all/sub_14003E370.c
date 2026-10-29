/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E370
// Address: 0x000000014003E370

//----- (000000014003E370) ----------------------------------------------------
_QWORD *__fastcall sub_14003E370(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  _QWORD *result; // rax
  const char *v8; // rsi
  int i; // ebx
  __int64 v10; // rax
  __int64 v11; // r14

  result = (_QWORD *)(56LL * a4 + *(_QWORD *)(a1 + 56));
  if ( (unsigned __int64)a3 < result[1] )
  {
    result = (_QWORD *)*result;
    v8 = Str1;
    if ( result[3 * a3 + 1] )
      v8 = (const char *)result[3 * a3];
    for ( i = *(unsigned __int8 *)v8; (_BYTE)i; i = *(unsigned __int8 *)v8 )
    {
      ++v8;
      if ( (unsigned __int8)(i + 0x80) > 0x7Eu )
      {
        v10 = *(_QWORD *)(a2 + 8);
        v11 = v10 - 1;
        if ( !v10 )
          v11 = 0;
        if ( (unsigned __int64)(v11 + 2) > *(_QWORD *)(a2 + 16) )
          *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v11 + 2, 1u);
        *(_QWORD *)(a2 + 8) = v11 + 2;
        *(_BYTE *)(v11 + *(_QWORD *)a2) = i;
        result = *(_QWORD **)a2;
        *(_BYTE *)(*(_QWORD *)a2 + v11 + 1) = 0;
      }
      else
      {
        result = (_QWORD *)sub_14003E370(a1, a2, (unsigned int)(i + 128), (unsigned int)(a4 - 1));
      }
    }
  }
  return result;
}
