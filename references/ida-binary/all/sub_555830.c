__int64 __fastcall sub_555830(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned __int8 v9; // al
  unsigned __int8 v10; // dl
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned __int8 v14; // dl
  unsigned int v15; // esi

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5]
      || (v11 = a1[4], v12 = *(_DWORD *)a3, v13 = *(_DWORD *)(v11 + 32), v13 >= v12)
      && (v12 != v13 || *(_BYTE *)(v11 + 36) >= *(_BYTE *)(a3 + 4)) )
    {
      v14 = *(_BYTE *)(a3 + 4);
      v15 = *(_DWORD *)a3;
      return sub_550A10((__int64)a1, v15, v14);
    }
    return 0;
  }
  v4 = *(_DWORD *)a3;
  v5 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)a3 < v5 )
    goto LABEL_3;
  if ( v5 != v4 )
  {
LABEL_17:
    if ( a1[4] == a2 )
      return 0;
    result = std::_Rb_tree_increment(a2);
    if ( v4 >= *(_DWORD *)(result + 32)
      && (v4 != *(_DWORD *)(result + 32) || *(_BYTE *)(a3 + 4) >= *(_BYTE *)(result + 36)) )
    {
      goto LABEL_25;
    }
    if ( !*(_QWORD *)(a2 + 24) )
      return 0;
    return result;
  }
  v9 = *(_BYTE *)(a3 + 4);
  v10 = *(_BYTE *)(a2 + 36);
  if ( v9 >= v10 )
  {
    if ( v10 >= v9 )
      return a2;
    goto LABEL_17;
  }
LABEL_3:
  result = a2;
  if ( a1[3] != a2 )
  {
    v7 = std::_Rb_tree_decrement(a2);
    v8 = *(_DWORD *)(v7 + 32);
    if ( v8 >= v4 && (v4 != v8 || *(_BYTE *)(v7 + 36) >= *(_BYTE *)(a3 + 4)) )
    {
LABEL_25:
      v14 = *(_BYTE *)(a3 + 4);
      v15 = v4;
      return sub_550A10((__int64)a1, v15, v14);
    }
    result = a2;
    if ( !*(_QWORD *)(v7 + 24) )
      return 0;
  }
  return result;
}
