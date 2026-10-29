__int64 __fastcall sub_6881D0(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  const char *v4; // rsi
  bool v5; // cc
  __int64 v6; // r13
  __int64 v7; // r12
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax

  v4 = (const char *)*a2;
  v5 = (int)v4 <= *a3;
  if ( (_DWORD)v4 == *a3 )
  {
    v6 = *((_QWORD *)a2 + 1);
    v7 = *((_QWORD *)a3 + 1);
    if ( v6 == v7 )
      return 0;
    switch ( (unsigned __int64)v4 )
    {
      case 0uLL:
        return 0;
      case 1uLL:
        goto LABEL_5;
      case 2uLL:
        v11 = *(_QWORD *)(v6 + 8);
        v12 = *(_QWORD *)(v7 + 8);
        LODWORD(v13) = v12;
        if ( v11 <= v12 )
          v13 = *(_QWORD *)(v6 + 8);
        if ( (int)v13 <= 0 )
          goto LABEL_35;
        v14 = 0;
        v15 = 8 * (3LL * (unsigned int)(v13 - 1) + 3);
        break;
      case 3uLL:
      case 4uLL:
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 764LL) )
        {
          v23 = (*(_BYTE *)(get_ph(a1, v4) + 9) & 0x10) != 0 ? sub_375980(0x7DDu, a2, a3) : (int)compare_arglocs(a2, a3);
          if ( v23 != -1 )
            return 0;
        }
LABEL_5:
        v9 = a3[2];
        v5 = (int)a2[2] <= v9;
        if ( a2[2] == v9 )
          return 0;
        goto LABEL_6;
      case 5uLL:
        v21 = *(_DWORD *)(v7 + 4);
        v5 = *(_DWORD *)(v6 + 4) <= v21;
        if ( *(_DWORD *)(v6 + 4) != v21 )
          goto LABEL_6;
        if ( *(_DWORD *)v6 == *(_DWORD *)v7 )
          return 0;
        if ( *(_DWORD *)v6 <= *(_DWORD *)v7 )
          return 0xFFFFFFFFLL;
        return 1;
      case 6uLL:
        v20 = a2[2];
        if ( a3[2] == v20 )
          return 0;
        if ( a3[2] >= v20 )
          return 0xFFFFFFFFLL;
        return 1;
      default:
        if ( v6 <= v7 || (v22 = sub_6917B0(a1, v4, a3)) == 0 )
        {
          if ( !under_debugger )
            interr(1097);
          BUG();
        }
        return (*(__int64 (__fastcall **)(unsigned int *, _DWORD *))(v22 + 40))(a2, a3);
    }
    do
    {
      v18 = v14 + *(_QWORD *)v6;
      v19 = v14 + *(_QWORD *)v7;
      v16 = *(_WORD *)(v18 + 16);
      v17 = *(_WORD *)(v19 + 16);
      if ( v16 != v17 || (v16 = *(_WORD *)(v18 + 18), v17 = *(_WORD *)(v19 + 18), v16 != v17) )
      {
        if ( v17 < v16 )
          return 1;
        return 0xFFFFFFFFLL;
      }
      result = compare_arglocs(v18, v19);
      if ( (_DWORD)result )
        return result;
      v14 += 24;
    }
    while ( v15 != v14 );
    v11 = *(_QWORD *)(v6 + 8);
    v12 = *(_QWORD *)(v7 + 8);
LABEL_35:
    if ( v12 >= v11 )
      return (unsigned int)-(v11 < v12);
  }
  else
  {
LABEL_6:
    if ( v5 )
      return 0xFFFFFFFFLL;
  }
  return 1;
}

