__int64 __fastcall sub_BF79C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 result; // rax
  unsigned int v5; // r12d
  int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rsi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = qword_1C7EDB0;
  v3 = 214013 * *(_DWORD *)(v1 + 7504) + 2531011;
  *(_DWORD *)(v1 + 7504) = v3;
  if ( *(_QWORD *)(v1 + 8984) != v2 )
    return 0;
  v5 = 0;
  v6 = HIWORD(v3) & 0x7FFF;
  do
  {
    if ( *(_BYTE *)(v1 + 2416) )
      break;
    v7 = *(_DWORD *)(a1 + 240);
    if ( v5 >= v7 )
      break;
    v8 = *(_QWORD *)(a1 + 256) + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL * ((v6 + v5) % v7));
    result = sub_BC69B0(a1, v8, v8 + 16, *(unsigned int **)(v8 + 40));
    if ( (_BYTE)result )
      return result;
    v1 = *(_QWORD *)(a1 + 16);
    ++v5;
  }
  while ( *(_QWORD *)(v1 + 8984) == qword_1C7EDB0 );
  return 0;
}

