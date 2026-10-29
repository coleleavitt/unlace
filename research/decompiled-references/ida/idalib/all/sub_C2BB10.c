__int64 __fastcall sub_C2BB10(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  char v5; // r9
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_17;
  }
  v3 = *a2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v2 + 32);
    if ( v6 > v3 || v6 == v3 && *(_DWORD *)(v2 + 40) > *((_DWORD *)a2 + 2) )
      break;
    v4 = *(_QWORD *)(v2 + 24);
    v5 = 0;
    if ( !v4 )
      goto LABEL_9;
LABEL_6:
    v2 = v4;
  }
  v4 = *(_QWORD *)(v2 + 16);
  v5 = 1;
  if ( v4 )
    goto LABEL_6;
LABEL_9:
  if ( !v5 )
    goto LABEL_10;
LABEL_17:
  result = 0;
  if ( v2 != *(_QWORD *)(a1 + 24) )
  {
    v8 = std::_Rb_tree_decrement(v2);
    v3 = *a2;
    v6 = *(_QWORD *)(v8 + 32);
    v2 = v8;
LABEL_10:
    if ( v3 > v6 || v3 == v6 && *(_DWORD *)(v2 + 40) < *((_DWORD *)a2 + 2) )
      return 0;
    else
      return v2;
  }
  return result;
}
