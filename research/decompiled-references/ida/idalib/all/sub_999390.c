unsigned __int64 __fastcall sub_999390(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rcx
  __int64 v7; // rbx
  unsigned int *v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // rbx
  unsigned __int64 result; // rax
  __int64 v12; // rcx

  v6 = *(_BYTE **)(a1 + 328);
  if ( v6[59] || v6[60] || (result = a3, v6[63]) )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( (v7 & 1) != 0 )
    {
      v8 = (unsigned int *)(v7 & 0xFFFFFFFFFFFFFFFELL);
      v9 = (__int64)&v8[2 * *v8 + 2];
      v10 = (__int64 *)(v8 + 2);
    }
    else
    {
      result = a3;
      if ( !v7 )
        return result;
      v9 = a2 + 16;
      v10 = (__int64 *)(a2 + 8);
    }
    if ( v10 == (__int64 *)v9 )
    {
      return a3;
    }
    else
    {
      result = a3;
      do
      {
        v12 = (*(_BYTE *)(*v10 + 28) & 0x7Fu) - 40;
        if ( (unsigned int)v12 <= 6 )
          result = sub_998FE0(a1, *v10, result, v12, a5, a6);
        ++v10;
      }
      while ( (__int64 *)v9 != v10 );
    }
  }
  return result;
}
