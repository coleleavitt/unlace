unsigned __int64 __fastcall sub_20A0850(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8
  int v4; // ecx
  unsigned __int64 v5; // r9
  int v6; // ecx
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // edx
  int v11; // esi
  int v12; // r10d
  __int64 v13; // rdi

  result = sub_20A07F0(a2);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 16) & 1) != 0 )
    {
      v5 = result + 24;
      v6 = 3;
    }
    else
    {
      v4 = *(_DWORD *)(result + 32);
      v5 = *(_QWORD *)(result + 24);
      if ( !v4 )
        return result;
      v6 = v4 - 1;
    }
    v7 = v6 & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
    v8 = (__int64 *)(v5 + 24LL * v7);
    v9 = *v8;
    if ( v3 == *v8 )
      goto LABEL_6;
    v11 = 1;
    if ( v9 != -4096 )
    {
      while ( 1 )
      {
        v12 = v11 + 1;
        v7 = v6 & (v11 + v7);
        v8 = (__int64 *)(v5 + 24LL * v7);
        v13 = *v8;
        if ( v3 == *v8 )
          break;
        v11 = v12;
        if ( v13 == -4096 )
          return result;
      }
LABEL_6:
      *v8 = -8192;
      v10 = *(_DWORD *)(result + 16);
      ++*(_DWORD *)(result + 20);
      *(_DWORD *)(result + 16) = (2 * (v10 >> 1) - 2) | v10 & 1;
    }
  }
  else if ( *(_BYTE *)a2 == 3 )
  {
    a2[1] = 0;
  }
  return result;
}
