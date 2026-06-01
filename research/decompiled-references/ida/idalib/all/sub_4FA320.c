__int64 __fastcall sub_4FA320(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rax
  char v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v12; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *a2;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v3 < v8 )
        goto LABEL_10;
      if ( v8 < v3 )
        goto LABEL_7;
      v4 = *((_DWORD *)a2 + 2);
      v5 = *(_DWORD *)(v2 + 40);
      if ( v4 != (_DWORD)&stru_10000 )
        break;
      if ( v5 == (_DWORD)&stru_10000 )
        goto LABEL_7;
      v6 = *(_QWORD *)(v2 + 16);
      v7 = 1;
LABEL_11:
      if ( !v6 )
      {
LABEL_12:
        if ( !v7 )
          goto LABEL_13;
        goto LABEL_22;
      }
LABEL_8:
      v2 = v6;
    }
    if ( v5 == (_DWORD)&stru_10000 || v4 >= v5 )
    {
LABEL_7:
      v6 = *(_QWORD *)(v2 + 24);
      v7 = 0;
      if ( !v6 )
        goto LABEL_12;
      goto LABEL_8;
    }
LABEL_10:
    v6 = *(_QWORD *)(v2 + 16);
    v7 = 1;
    goto LABEL_11;
  }
  v2 = a1 + 8;
LABEL_22:
  if ( v2 == *(_QWORD *)(a1 + 24) )
    return 0;
  v12 = std::_Rb_tree_decrement(v2);
  v3 = *a2;
  v8 = *(_QWORD *)(v12 + 32);
  v2 = v12;
LABEL_13:
  if ( v8 < v3 )
    return 0;
  if ( v3 < v8 )
    return v2;
  v9 = *(_DWORD *)(v2 + 40);
  v10 = *((_DWORD *)a2 + 2);
  if ( v9 == (_DWORD)&stru_10000 )
  {
    if ( v10 != (_DWORD)&stru_10000 )
      return 0;
    return v2;
  }
  if ( v10 == (_DWORD)&stru_10000 || v9 >= v10 )
    return v2;
  return 0;
}
