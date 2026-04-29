_DWORD *__fastcall sub_241460(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rsi
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *result; // rax

  v6 = a4;
  v8 = *(_QWORD **)(a1 + 224);
  if ( v8 )
  {
    a4 = 24;
    v9 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v9 )
    {
LABEL_9:
      a3 = *(_DWORD *)(a4 + 4);
      goto LABEL_7;
    }
LABEL_3:
    if ( (*(_BYTE *)v9 & 2) == 0 )
    {
      while ( 1 )
      {
        a4 = v9 + 24;
        if ( *(_DWORD *)(v9 + 24) > a3 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          goto LABEL_3;
        }
        if ( *(_DWORD *)(v9 + 24) >= a3 )
          break;
        v9 = *(_QWORD *)(v9 + 16);
        if ( (*(_BYTE *)v9 & 2) != 0 )
          goto LABEL_7;
      }
      if ( v8 == (_QWORD *)v9 )
        goto LABEL_7;
      goto LABEL_9;
    }
  }
LABEL_7:
  v10 = sub_2413C0(a2, v6, (__int64)v8, a4);
  *((_DWORD *)v10 + 2) = 81;
  v11 = v10;
  result = (_DWORD *)j__qalloc_or_throw(4, v6, v12, v13);
  v11[3] = (__int64)result;
  *result = a3;
  return result;
}
