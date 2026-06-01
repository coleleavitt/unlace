unsigned __int64 *__fastcall sub_22059A0(unsigned __int64 *a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  unsigned __int64 v4; // rsi
  __int64 v6; // r8
  _BOOL8 v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  bool v11; // cf
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx

  v2 = *((_DWORD *)a1 + 2);
  v3 = *a2;
  v4 = *a1;
  if ( v2 > 0x40 )
  {
    v6 = v2;
    v7 = 0;
    v8 = 0;
    v9 = (unsigned __int64)(v6 + 63) >> 6;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v4 + 8 * v8);
        v11 = __CFADD__(*(_QWORD *)(v3 + 8 * v8), v10);
        v12 = *(_QWORD *)(v3 + 8 * v8) + v10;
        if ( !v7 )
          break;
        v13 = v12 + 1;
        *(_QWORD *)(v4 + 8 * v8) = v13;
        v7 = v13 <= v10;
        if ( (unsigned int)v9 <= (unsigned int)++v8 )
          return sub_CF8100(a1);
      }
      *(_QWORD *)(v4 + 8 * v8++) = v12;
      v7 = v11;
    }
    while ( (unsigned int)v9 > (unsigned int)v8 );
  }
  else
  {
    *a1 = v3 + v4;
  }
  return sub_CF8100(a1);
}
