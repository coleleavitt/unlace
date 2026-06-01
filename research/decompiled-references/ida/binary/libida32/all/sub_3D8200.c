__int64 __fastcall sub_3D8200(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r9d
  unsigned int v4; // edx
  char v5; // cl
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_11;
  }
  v3 = *a2;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 32);
    v5 = 0;
    v6 = *(_QWORD *)(v2 + 24);
    if ( v3 < v4 )
    {
      v6 = *(_QWORD *)(v2 + 16);
      v5 = 1;
    }
    if ( !v6 )
      break;
    v2 = v6;
  }
  if ( v5 )
  {
LABEL_11:
    if ( v2 != *(_QWORD *)(a1 + 24) )
    {
      v2 = std::_Rb_tree_decrement();
      if ( *(_DWORD *)(v2 + 32) >= *a2 )
        return v2;
    }
    return 0;
  }
  if ( v4 >= v3 )
    return v2;
  return 0;
}

