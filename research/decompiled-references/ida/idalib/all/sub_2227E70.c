__int64 __fastcall sub_2227E70(__int64 *a1, int a2)
{
  __int64 v2; // r9
  unsigned int v3; // edx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  _QWORD *v7; // r8
  int v8; // ecx
  int v9; // eax
  __int64 result; // rax
  int v11; // eax

  if ( !a2 )
    return 0;
  v2 = *a1;
  v3 = a2 - 1;
  if ( a2 == 1 )
  {
    v11 = *(_DWORD *)(v2 + 12);
    if ( v11 )
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL * (unsigned int)(v11 - 1));
    return 0;
  }
  v4 = v2 + 16LL * v3;
  v5 = *(_DWORD *)(v4 + 12);
  if ( v5 )
    return *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned int)(v5 - 1));
  v6 = v2 + 16LL * (unsigned int)(a2 - 2);
  while ( 1 )
  {
    if ( v3 == 1 )
    {
      v9 = *(_DWORD *)(v2 + 12);
      if ( !v9 )
        return 0;
      result = *(_QWORD *)(*(_QWORD *)v2 + 8LL * (unsigned int)(v9 - 1));
      v3 = 1;
      goto LABEL_11;
    }
    v7 = (_QWORD *)v6;
    v6 -= 16;
    v8 = *(_DWORD *)(v6 + 28);
    if ( v8 )
      break;
    --v3;
  }
  result = *(_QWORD *)(*v7 + 8LL * (unsigned int)(v8 - 1));
  if ( a2 == v3 )
    return result;
  do
  {
LABEL_11:
    ++v3;
    result = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFC0LL) + 8 * (result & 0x3F));
  }
  while ( a2 != v3 );
  return result;
}
