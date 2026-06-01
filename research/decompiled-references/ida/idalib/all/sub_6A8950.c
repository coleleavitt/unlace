__int64 __fastcall sub_6A8950(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  const char *v4; // rsi
  bool v5; // cc
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  int v9; // eax
  __int64 result; // rax
  int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax

  v4 = (const char *)*a2;
  v5 = (int)v4 <= *a3;
  if ( (_DWORD)v4 == *a3 )
  {
    v6 = *((_QWORD **)a2 + 1);
    v7 = *((_QWORD **)a3 + 1);
    if ( v6 == v7 )
      return 0;
    switch ( (unsigned __int64)v4 )
    {
      case 0uLL:
        return 0;
      case 1uLL:
        if ( (__int64)v7 < (__int64)v6 )
          return 1;
        return 0xFFFFFFFFLL;
      case 2uLL:
        v12 = v6[1];
        v13 = v7[1];
        LODWORD(v14) = v13;
        if ( v12 <= v13 )
          v14 = v6[1];
        if ( (int)v14 <= 0 )
          goto LABEL_36;
        v15 = 0;
        v16 = 8 * (3LL * (unsigned int)(v14 - 1) + 3);
        break;
      case 3uLL:
      case 4uLL:
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 932LL) )
        {
          v22 = (*(_BYTE *)(get_ph(a1, v4) + 9) & 0x10) != 0 ? sub_3792E0(0x7DDu, a2, a3) : (int)compare_arglocs(a2, a3);
          if ( v22 != -1 )
            return 0;
        }
        v11 = a3[2];
        v5 = (int)a2[2] <= v11;
        if ( a2[2] != v11 )
          goto LABEL_5;
        return 0;
      case 5uLL:
        v9 = *((_DWORD *)v7 + 2);
        v5 = *((_DWORD *)v6 + 2) <= v9;
        if ( *((_DWORD *)v6 + 2) != v9 )
          goto LABEL_5;
        if ( *v6 == *v7 )
          return 0;
        if ( *v6 <= *v7 )
          return 0xFFFFFFFFLL;
        return 1;
      case 6uLL:
        if ( v7 >= v6 )
          return 0xFFFFFFFFLL;
        return 1;
      default:
        if ( (__int64)v6 <= (__int64)v7 || (v21 = sub_6B1FD0(a1, v4, a3)) == 0 )
        {
          if ( !under_debugger )
            interr(1097);
          BUG();
        }
        return (*(__int64 (__fastcall **)(unsigned int *, _DWORD *))(v21 + 40))(a2, a3);
    }
    do
    {
      v19 = v15 + *v6;
      v20 = v15 + *v7;
      v17 = *(_WORD *)(v19 + 16);
      v18 = *(_WORD *)(v20 + 16);
      if ( v17 != v18 || (v17 = *(_WORD *)(v19 + 18), v18 = *(_WORD *)(v20 + 18), v17 != v18) )
      {
        if ( v18 < v17 )
          return 1;
        return 0xFFFFFFFFLL;
      }
      result = compare_arglocs(v19, v20);
      if ( (_DWORD)result )
        return result;
      v15 += 24;
    }
    while ( v16 != v15 );
    v12 = v6[1];
    v13 = v7[1];
LABEL_36:
    if ( v13 >= v12 )
      return (unsigned int)-(v12 < v13);
    return 1;
  }
LABEL_5:
  if ( !v5 )
    return 1;
  return 0xFFFFFFFFLL;
}
