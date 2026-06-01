__int64 __fastcall sub_1ED0410(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  __int64 v4; // rax
  char v5; // r9
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_12;
  }
  v3 = *a2;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v2 + 32);
    if ( v3 >= v6 )
      break;
    v4 = *(_QWORD *)(v2 + 16);
    v5 = 1;
    if ( !v4 )
      goto LABEL_7;
LABEL_4:
    v2 = v4;
  }
  v4 = *(_QWORD *)(v2 + 24);
  v5 = 0;
  if ( v4 )
    goto LABEL_4;
LABEL_7:
  if ( !v5 )
  {
LABEL_8:
    result = v2;
    if ( v3 > v6 )
      return 0;
    return result;
  }
LABEL_12:
  result = 0;
  if ( *(_QWORD *)(a1 + 24) != v2 )
  {
    v8 = std::_Rb_tree_decrement(v2);
    v3 = *a2;
    v6 = *(_DWORD *)(v8 + 32);
    v2 = v8;
    goto LABEL_8;
  }
  return result;
}
