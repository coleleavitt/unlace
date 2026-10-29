/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: relocate_relobj
// Address: 0x00000000000C5F84

//----- (00000000000C5F84) ----------------------------------------------------
_QWORD *__fastcall relocate_relobj(_QWORD *result, __int64 a2, char a3)
{
  __int64 v3; // x8
  _QWORD *v4; // x20
  _BYTE *v5; // x9
  int v6; // w21
  __int64 v8; // x10
  __int64 v9; // x22
  unsigned __int64 v10; // x23
  char v11; // w24
  unsigned int v12; // w0
  unsigned __int64 v13[2]; // [xsp+0h] [xbp-50h] BYREF

  v13[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( result )
  {
    v3 = result[5];
    v4 = result;
    if ( v3 )
    {
      v5 = (_BYTE *)result[4];
      if ( (*v5 & 0x80) != 0 )
        return nullptr;
      v6 = 1 << (*v5 & 0xF);
      if ( v6 > 8 || __CFADD__(result[1], a2) )
        return nullptr;
      v8 = result[3];
      v9 = a2 - v8;
      if ( a2 != v8 )
      {
        v10 = (unsigned __int64)&v5[v3];
        v13[0] = (unsigned __int64)(v5 + 1);
        if ( v5 + 1 < &v5[v3] )
        {
          v11 = a3 & 1;
          do
          {
            v12 = unpack_dd(v13, v10);
            if ( v12 + v6 <= v12 || v4[1] <= (unsigned __int64)(v12 + v6) )
              return nullptr;
            reloc_value((unsigned int *)(*v4 + v12), v6, v9, v11);
          }
          while ( v13[0] < v10 );
        }
        v4[3] = a2;
      }
    }
    return (_QWORD *)(&dword_0 + 1);
  }
  return result;
}
// 0: using guessed type int dword_0;
