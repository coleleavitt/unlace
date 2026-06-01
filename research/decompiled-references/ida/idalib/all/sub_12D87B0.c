__int64 __fastcall sub_12D87B0(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned int v4; // r11d
  bool v5; // cl
  __int64 v6; // rax
  int v7; // r8d
  unsigned int v8; // r10d
  __int64 result; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_16;
  }
  v3 = *a2;
  v4 = a2[1];
  while ( 1 )
  {
    v7 = *(_DWORD *)(v2 + 32);
    v8 = *(_DWORD *)(v2 + 36);
    if ( v7 > v3 )
      break;
    v5 = v8 > v4 && v7 == v3;
    if ( v5 )
      break;
    v6 = *(_QWORD *)(v2 + 24);
    if ( !v6 )
      goto LABEL_8;
LABEL_5:
    v2 = v6;
  }
  v6 = *(_QWORD *)(v2 + 16);
  v5 = 1;
  if ( v6 )
    goto LABEL_5;
LABEL_8:
  if ( !v5 )
    goto LABEL_9;
LABEL_16:
  result = 0;
  if ( *(_QWORD *)(a1 + 24) != v2 )
  {
    v10 = std::_Rb_tree_decrement(v2);
    v4 = a2[1];
    v3 = *a2;
    v7 = *(_DWORD *)(v10 + 32);
    v8 = *(_DWORD *)(v10 + 36);
    v2 = v10;
LABEL_9:
    if ( v3 > v7 || v4 > v8 && v3 == v7 )
      return 0;
    else
      return v2;
  }
  return result;
}
