__int64 __fastcall sub_1DBAAE0(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r10
  int v10; // r8d
  unsigned int v11; // esi
  __int64 *v12; // r9
  __int64 v13; // r11
  int v14; // r9d
  int v15; // ebx
  __int64 v16; // r11

  v1 = *(unsigned int *)(a1 + 11320);
  v2 = *(_DWORD *)(a1 + 11320);
  v3 = *(_QWORD *)(a1 + 11312) + (v1 << 6) - 64;
  if ( ((1LL << *(_DWORD *)v3) & 0xEFF75A0) != 0 )
    --*(_DWORD *)(a1 + 12596);
  v4 = *(unsigned int *)(a1 + 12408);
  *(_BYTE *)(a1 + 12592) = *(_BYTE *)(v3 + 4);
  v5 = v4;
  if ( v1 != v4 )
    goto LABEL_4;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 12400) + 8 * v1 - 8);
  if ( !v7 || (v8 = *(_DWORD *)(a1 + 12560), v9 = *(_QWORD *)(a1 + 12544), !v8) )
  {
    *(_DWORD *)(a1 + 12408) = v5 - 1;
LABEL_4:
    if ( *(_DWORD *)(a1 + 12600) == v2 )
      *(_DWORD *)(a1 + 12600) = 0;
    result = (unsigned int)(v2 - 1);
    *(_DWORD *)(a1 + 11320) = result;
    return result;
  }
  v10 = v8 - 1;
  v11 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v12 = (__int64 *)(v9 + 8LL * v11);
  v13 = *v12;
  if ( v7 != *v12 )
  {
    v14 = 1;
    if ( v13 == -4096 )
      goto LABEL_11;
    while ( 1 )
    {
      v15 = v14 + 1;
      v11 = v10 & (v14 + v11);
      v12 = (__int64 *)(v9 + 8LL * v11);
      v16 = *v12;
      if ( v7 == *v12 )
        break;
      v14 = v15;
      if ( v16 == -4096 )
        goto LABEL_11;
    }
  }
  *v12 = -8192;
  --*(_DWORD *)(a1 + 12552);
  ++*(_DWORD *)(a1 + 12556);
LABEL_11:
  *(_DWORD *)(a1 + 12408) = v5 - 1;
  if ( *(_DWORD *)(a1 + 12600) == v2 )
    *(_DWORD *)(a1 + 12600) = 0;
  result = (unsigned int)(v2 - 1);
  *(_DWORD *)(a1 + 11320) = result;
  return result;
}
