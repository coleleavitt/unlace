__int64 __fastcall sub_4473E0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // esi

  v2 = 0;
  if ( dword_65A7E0 <= 0 )
    goto LABEL_6;
  v3 = (__int64 *)qword_65A7E8;
  while ( 1 )
  {
    result = *v3;
    if ( *v3 == a1 || !result )
      break;
    ++v2;
    ++v3;
    if ( dword_65A7E0 <= v2 )
      goto LABEL_6;
  }
  if ( dword_65A7E0 <= v2 )
  {
LABEL_6:
    v5 = sub_40FC10((void *)qword_65A7E8, 8 * (dword_65A7E0 + 5));
    v6 = dword_65A7E0;
    qword_65A7E8 = v5;
    *(_QWORD *)(v5 + 8LL * dword_65A7E0) = a2;
    memset((void *)(v5 + 8 * v6 + 8), 0, 0x20u);
    dword_65A7E0 += 5;
    return 0;
  }
  else
  {
    v7 = qword_65A7E8;
    v8 = v2;
    v9 = *(_QWORD *)(qword_65A7E8 + 8LL * v2);
    if ( v9 )
    {
      result = Tcl_Free(v9);
      v7 = qword_65A7E8;
    }
    if ( a2 )
    {
      *(_QWORD *)(v7 + 8LL * v2) = a2;
    }
    else
    {
      v10 = dword_65A7E0;
      v11 = dword_65A7E0 - 1;
      if ( dword_65A7E0 - 1 > v2 )
      {
        while ( 1 )
        {
          ++v2;
          *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8 * v8 + 8);
          if ( v11 <= v2 )
            break;
          v8 = v2;
        }
      }
      *(_QWORD *)(v7 + 8LL * v10 - 8) = 0;
      return v10;
    }
  }
  return result;
}

