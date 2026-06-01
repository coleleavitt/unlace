__int64 __fastcall sub_675720(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // eax
  signed int v14; // eax

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5]
      || (v11 = a1[4], v12 = *a3, v13 = *(_DWORD *)(v11 + 32), v13 >= v12)
      && (v12 != v13 || (signed int)a3[1] <= *(_DWORD *)(v11 + 36)) )
    {
      v9 = a3[1];
      v10 = *a3;
      return sub_673070((__int64)a1, v10, v9);
    }
    return 0;
  }
  v4 = *a3;
  v5 = *(_DWORD *)(a2 + 32);
  if ( *a3 < v5 )
    goto LABEL_3;
  if ( v5 != v4 )
  {
LABEL_9:
    if ( a1[4] == a2 )
      return 0;
    result = std::_Rb_tree_increment();
    if ( v4 >= *(_DWORD *)(result + 32)
      && (v4 != *(_DWORD *)(result + 32) || (signed int)a3[1] >= *(_DWORD *)(result + 36)) )
    {
      goto LABEL_12;
    }
    if ( !*(_QWORD *)(a2 + 24) )
      return 0;
    return result;
  }
  v14 = *(_DWORD *)(a2 + 36);
  if ( (int)a3[1] >= v14 )
  {
    if ( (int)a3[1] <= v14 )
      return a2;
    goto LABEL_9;
  }
LABEL_3:
  result = a2;
  if ( a1[3] != a2 )
  {
    v7 = std::_Rb_tree_decrement();
    v8 = *(_DWORD *)(v7 + 32);
    if ( v8 >= v4 && (v4 != v8 || *(_DWORD *)(v7 + 36) >= (signed int)a3[1]) )
    {
LABEL_12:
      v9 = a3[1];
      v10 = v4;
      return sub_673070((__int64)a1, v10, v9);
    }
    result = a2;
    if ( !*(_QWORD *)(v7 + 24) )
      return 0;
  }
  return result;
}

