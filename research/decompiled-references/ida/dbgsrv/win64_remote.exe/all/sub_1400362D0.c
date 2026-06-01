/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400362D0
// Address: 0x00000001400362D0

//----- (00000001400362D0) ----------------------------------------------------
_QWORD *__fastcall sub_1400362D0(_QWORD *a1, _QWORD *a2, size_t *a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v10; // rbp
  size_t v11; // rsi
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdx
  const void *v14; // rcx

  v5 = (_QWORD *)a1[1];
  v7 = (_QWORD *)(a1[3] + 16 * (a4 & a1[6]));
  v8 = (_QWORD *)v7[1];
  if ( v8 == v5 )
  {
    *a2 = v5;
    a2[1] = 0;
    return a2;
  }
  else
  {
    v10 = (_QWORD *)*v7;
    v11 = a3[2];
    v12 = a3[3];
    while ( 1 )
    {
      v13 = v8 + 2;
      if ( v8[5] > 0xFu )
        v13 = (_QWORD *)*v13;
      v14 = a3;
      if ( v12 > 0xF )
        v14 = (const void *)*a3;
      if ( v11 == v8[4] && (!v11 || !memcmp(v14, v13, v11)) )
      {
        *a2 = *v8;
        a2[1] = v8;
        return a2;
      }
      if ( v8 == v10 )
        break;
      v8 = (_QWORD *)v8[1];
    }
    *a2 = v8;
    a2[1] = 0;
    return a2;
  }
}
