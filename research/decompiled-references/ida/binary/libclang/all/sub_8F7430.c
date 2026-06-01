__int64 __fastcall sub_8F7430(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v7; // rsi

  v1 = *a1;
  v2 = a1[3];
  if ( *((_DWORD *)a1 + 12) )
    return v2 + v1 + 40;
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *((_DWORD *)a1 + 8);
  if ( *(_DWORD *)(v3 + 16) != v4 && v4 )
    v3 = *(_QWORD *)(v2 + v4 + 32);
  if ( !*(_BYTE *)(v3 + 51) )
    return v2 + v1 + 40;
  v7 = v4;
  v5 = v2 + v1 + 72;
  if ( v7 != v1 )
    return v2 + v1 + 40;
  return v5;
}

