__int64 __fastcall sub_54B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rax

  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
  {
    v7 = a1 + 8;
LABEL_12:
    if ( v7 != *(_QWORD *)(a1 + 24) )
    {
      v10 = std::_Rb_tree_decrement(v7, a2, a3, a4, a5);
      LODWORD(a4) = *(_DWORD *)(v10 + 32);
      v7 = v10;
      if ( (unsigned int)a4 >= v6 )
        goto LABEL_14;
    }
    return 0;
  }
  while ( 1 )
  {
    a4 = *(unsigned int *)(v7 + 32);
    if ( v6 < (unsigned int)a4 || (_DWORD)a4 == v6 && (unsigned int)a3 < *(_DWORD *)(v7 + 36) )
      break;
    v8 = *(_QWORD *)(v7 + 24);
    a2 = 0;
    if ( !v8 )
      goto LABEL_9;
LABEL_6:
    v7 = v8;
  }
  v8 = *(_QWORD *)(v7 + 16);
  a2 = 1;
  if ( v8 )
    goto LABEL_6;
LABEL_9:
  if ( (_BYTE)a2 )
    goto LABEL_12;
  if ( (unsigned int)a4 < v6 )
    return 0;
LABEL_14:
  if ( v6 == (_DWORD)a4 && *(_DWORD *)(v7 + 36) < v5 )
    return 0;
  return v7;
}
