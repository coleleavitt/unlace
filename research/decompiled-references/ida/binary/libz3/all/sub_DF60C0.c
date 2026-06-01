__int64 __fastcall sub_DF60C0(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  int v11; // edx
  int v12; // eax

  v3 = *a3;
  v4 = a1;
  if ( *a3 )
  {
    if ( (*a3 & 7) == 1 )
      v5 = v3 >> 3;
    else
      LODWORD(v5) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v5) = -1640531495;
  }
  v6 = 24LL * ((unsigned int)v5 & (a2 - 1));
  v7 = 24LL * a2;
  v8 = a1 + v6;
  v9 = v4 + v7;
  if ( v6 == v7 )
  {
LABEL_14:
    while ( v8 != v4 )
    {
      v12 = *(_DWORD *)(v4 + 4);
      if ( v12 == 2 )
      {
        if ( (_DWORD)v5 == *(_DWORD *)v4 && v3 == *(_QWORD *)(v4 + 8) )
          return v4;
      }
      else if ( !v12 )
      {
        return 0;
      }
      v4 += 24;
    }
    return 0;
  }
  result = v4 + v6;
  while ( 1 )
  {
    v11 = *(_DWORD *)(result + 4);
    if ( v11 != 2 )
    {
      if ( !v11 )
        return 0;
      goto LABEL_7;
    }
    if ( (_DWORD)v5 == *(_DWORD *)result && v3 == *(_QWORD *)(result + 8) )
      return result;
LABEL_7:
    result += 24;
    if ( v9 == result )
      goto LABEL_14;
  }
}

