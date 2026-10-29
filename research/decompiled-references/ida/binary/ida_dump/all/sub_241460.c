_DWORD *__fastcall sub_241460(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  _DWORD *result; // rax

  v8 = *(_QWORD **)(a1 + 224);
  if ( v8 )
  {
    v9 = 24;
    v10 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
    {
LABEL_9:
      a3 = *(_DWORD *)(v9 + 4);
      goto LABEL_7;
    }
LABEL_3:
    if ( (*(_BYTE *)v10 & 2) == 0 )
    {
      while ( 1 )
      {
        v9 = v10 + 24;
        if ( *(_DWORD *)(v10 + 24) > a3 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          goto LABEL_3;
        }
        if ( *(_DWORD *)(v10 + 24) >= a3 )
          break;
        v10 = *(_QWORD *)(v10 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
          goto LABEL_7;
      }
      if ( v8 == (_QWORD *)v10 )
        goto LABEL_7;
      goto LABEL_9;
    }
  }
LABEL_7:
  v11 = sub_2413C0(a2, a4);
  *((_DWORD *)v11 + 2) = 81;
  v12 = v11;
  result = (_DWORD *)j__qalloc_or_throw();
  v12[3] = result;
  *result = a3;
  return result;
}
