unsigned __int64 *__fastcall sub_2205A70(unsigned __int64 *a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned __int64 v4; // rsi
  __int64 v6; // r9
  _BOOL8 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  _BOOL8 v13; // r8

  v2 = *((_DWORD *)a1 + 2);
  v3 = *a2;
  v4 = *a1;
  if ( v2 > 0x40 )
  {
    v6 = v2;
    v7 = 0;
    v8 = 0;
    v9 = (unsigned __int64)(v6 + 63) >> 6;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v4 + 8 * v8);
      v11 = *(_QWORD *)(v3 + 8 * v8);
      if ( v7 )
        break;
LABEL_8:
      v7 = v10 < v11;
      *(_QWORD *)(v4 + 8 * v8++) = v10 - v11;
      if ( (unsigned int)v9 <= (unsigned int)v8 )
        return sub_CF8100(a1);
    }
    while ( 1 )
    {
      v12 = v10 - 1 - v11;
      *(_QWORD *)(v4 + 8 * v8) = v12;
      v13 = v12 >= v10;
      if ( (unsigned int)v9 <= (unsigned int)++v8 )
        break;
      v10 = *(_QWORD *)(v4 + 8 * v8);
      v11 = *(_QWORD *)(v3 + 8 * v8);
      if ( !v13 )
        goto LABEL_8;
    }
  }
  else
  {
    *a1 = v4 - v3;
  }
  return sub_CF8100(a1);
}
