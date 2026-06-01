_QWORD **__fastcall sub_20B2FD0(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        _QWORD **a5,
        __int64 a6,
        _QWORD **a7,
        __int64 a8)
{
  _QWORD **result; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned int v12; // esi
  _QWORD **v13; // r13
  _QWORD **v14; // rbx
  _QWORD *v15; // rdx

  *(_WORD *)(a1 + 2) = 0;
  result = &a5[a6];
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = a4 & 0x7F;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  if ( result == a5 )
  {
    v12 = 0;
  }
  else
  {
    v10 = 0;
    v11 = (unsigned __int64)(8 * a6 - 8) >> 3;
    while ( 1 )
    {
      sub_20B2F30((_WORD *)a1, v10, a5[v10]);
      result = (_QWORD **)(v10 + 1);
      if ( v10 == v11 )
        break;
      ++v10;
    }
    v12 = v10 + 1;
  }
  v13 = &a7[a8];
  if ( a7 != v13 )
  {
    v14 = a7;
    do
    {
      v15 = *v14++;
      result = (_QWORD **)sub_20B2F30((_WORD *)a1, v12++, v15);
    }
    while ( v13 != v14 );
  }
  if ( (*(_WORD *)a1 & 0x7F00) == 0 )
    return sub_20A0C20(a1);
  return result;
}
