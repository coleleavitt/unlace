_DWORD *__fastcall sub_638D30(_DWORD *a1, __int64 a2, int *a3)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  _DWORD *v8; // rdi
  _DWORD *v9; // rdx
  int v11; // ecx
  _DWORD *v12; // rdx

  v3 = a1;
  v4 = a2 - (_QWORD)a1;
  v5 = (a2 - (__int64)a1) >> 4;
  v6 = v4 >> 2;
  if ( v5 <= 0 )
  {
LABEL_11:
    switch ( v6 )
    {
      case 2LL:
        v11 = *a3;
        break;
      case 3LL:
        v11 = *a3;
        v9 = v3;
        if ( *v3 == v11 )
          return v9;
        ++v3;
        break;
      case 1LL:
        v11 = *a3;
        v12 = v3;
LABEL_18:
        if ( *v12 != v11 )
          return (_DWORD *)a2;
        return v12;
      default:
        return (_DWORD *)a2;
    }
    v9 = v3;
    if ( *v3 == v11 )
      return v9;
    v12 = v3 + 1;
    goto LABEL_18;
  }
  v7 = *a3;
  v8 = &v3[4 * v5];
  while ( 1 )
  {
    if ( *v3 == v7 )
      return v3;
    if ( v7 == v3[1] )
      return v3 + 1;
    if ( v7 == v3[2] )
      return v3 + 2;
    if ( v7 == v3[3] )
      return v3 + 3;
    v3 += 4;
    if ( v3 == v8 )
    {
      v6 = (a2 - (__int64)v3) >> 2;
      goto LABEL_11;
    }
  }
}

