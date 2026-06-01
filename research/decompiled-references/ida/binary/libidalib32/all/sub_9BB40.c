__int64 __fastcall sub_9BB40(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edx
  char v4; // cl
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 32);
    v4 = 0;
    v5 = *(_QWORD *)(v2 + 24);
    if ( a2 < v3 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      v4 = 1;
    }
    if ( !v5 )
      break;
    v2 = v5;
  }
  if ( v4 )
  {
LABEL_10:
    if ( v2 != *(_QWORD *)(a1 + 24) )
    {
      v2 = std::_Rb_tree_decrement();
      if ( *(_DWORD *)(v2 + 32) >= a2 )
        return v2;
    }
    return 0;
  }
  if ( v3 < a2 )
    return 0;
  return v2;
}

