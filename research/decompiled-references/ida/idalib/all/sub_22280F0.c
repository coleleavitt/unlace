__int64 __fastcall sub_22280F0(__int64 *a1, int a2)
{
  __int64 v2; // r10
  unsigned int v3; // edx
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // edx
  __int64 result; // rax
  int v11; // edx

  if ( !a2 )
    return 0;
  v2 = *a1;
  v3 = a2 - 1;
  if ( a2 == 1 )
  {
    v11 = *(_DWORD *)(v2 + 12);
    if ( *(_DWORD *)(v2 + 8) - 1 != v11 )
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL * (unsigned int)(v11 + 1));
    return 0;
  }
  v4 = v2 + 16LL * v3;
  v5 = *(_DWORD *)(v4 + 12);
  if ( v5 != *(_DWORD *)(v4 + 8) - 1 )
    return *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned int)(v5 + 1));
  v6 = v2 + 16LL * (unsigned int)(a2 - 2);
  while ( 1 )
  {
    if ( v3 == 1 )
    {
      v9 = *(_DWORD *)(v2 + 12);
      if ( *(_DWORD *)(v2 + 8) - 1 == v9 )
        return 0;
      result = *(_QWORD *)(*(_QWORD *)v2 + 8LL * (unsigned int)(v9 + 1));
      v3 = 1;
      goto LABEL_11;
    }
    v7 = v6;
    v8 = *(_DWORD *)(v6 + 12);
    v6 -= 16;
    if ( v8 != *(_DWORD *)(v7 + 8) - 1 )
      break;
    --v3;
  }
  result = *(_QWORD *)(*(_QWORD *)v7 + 8LL * (unsigned int)(v8 + 1));
  if ( a2 == v3 )
    return result;
  do
  {
LABEL_11:
    ++v3;
    result = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFC0LL);
  }
  while ( a2 != v3 );
  return result;
}
