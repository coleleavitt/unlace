/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E950
// Address: 0x000000000042E950

//----- (000000000042E950) ----------------------------------------------------
unsigned __int16 *__fastcall sub_42E950(_QWORD *a1, __int64 a2, unsigned __int16 **a3)
{
  unsigned __int16 *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x21
  _QWORD *v9; // x3
  char v10; // w0

  v6 = (unsigned __int16 *)sub_49E050(0x38u);
  v6[16] = **a3;
  *((_QWORD *)v6 + 5) = 0;
  *((_QWORD *)v6 + 6) = 0;
  v8 = sub_42E808(a1, a2, v6 + 16);
  if ( v7 )
  {
    v9 = a1 + 1;
    v10 = 1;
    if ( !v8 && (_QWORD *)v7 != v9 )
      v10 = v6[16] < (unsigned int)*(unsigned __int16 *)(v7 + 32);
    sub_49F830(v10, (__int64)v6, (_QWORD *)v7, v9);
    ++a1[5];
    return v6;
  }
  else
  {
    j__free_0(v6);
    return (unsigned __int16 *)v8;
  }
}
// 42E99C: variable 'v7' is possibly undefined
