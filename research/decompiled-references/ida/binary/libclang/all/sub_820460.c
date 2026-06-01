__int64 __fastcall sub_820460(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // si
  unsigned __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // rax
  unsigned __int64 v12; // rcx

  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
  {
    v5 = a1 + 8;
LABEL_12:
    if ( v5 != *(_QWORD *)(a1 + 24) )
    {
      v11 = std::_Rb_tree_decrement();
      v12 = *(_QWORD *)(v11 + 32);
      v5 = v11;
      v9 = v12 == a2;
      if ( v12 >= a2 )
        goto LABEL_14;
    }
    return 0;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v5 + 32);
    if ( a2 < v8 || v8 == a2 && a3 < *(_DWORD *)(v5 + 40) )
      break;
    v6 = *(_QWORD *)(v5 + 24);
    v7 = 0;
    if ( !v6 )
      goto LABEL_9;
LABEL_6:
    v5 = v6;
  }
  v6 = *(_QWORD *)(v5 + 16);
  v7 = 1;
  if ( v6 )
    goto LABEL_6;
LABEL_9:
  if ( v7 )
    goto LABEL_12;
  v9 = v8 == a2;
  if ( v8 < a2 )
    return 0;
LABEL_14:
  if ( v9 && *(_DWORD *)(v5 + 40) < a3 )
    return 0;
  return v5;
}

