__int64 __fastcall sub_6511B0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // si
  unsigned int v8; // ecx
  __int64 v10; // rdx

  v5 = *(_QWORD *)(a1 + 72);
  if ( !v5 )
  {
    v5 = a1 + 64;
LABEL_14:
    if ( v5 != *(_QWORD *)(a1 + 80) )
    {
      v10 = std::_Rb_tree_decrement();
      v8 = *(_DWORD *)(v10 + 32);
      v5 = v10;
      goto LABEL_10;
    }
    return 0;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(v5 + 32);
    if ( a2 < v8 || v8 >= a2 && a3 < *(_DWORD *)(v5 + 36) )
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
    goto LABEL_14;
LABEL_10:
  if ( v8 < a2 || a2 >= v8 && *(_DWORD *)(v5 + 36) < a3 )
    return 0;
  return v5;
}

