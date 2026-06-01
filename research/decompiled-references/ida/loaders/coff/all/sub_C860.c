__int64 __fastcall sub_C860(__int64 a1, char a2)
{
  int v3; // eax
  __int64 v4; // r13
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx

  if ( a2 )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    *(_DWORD *)(a1 + 32) = v3;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 32);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    return 1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 1;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v4 + 85);
    v12 = v11 + 76LL * (v6 - 1);
    if ( (*(_BYTE *)(v5 + 166) & 0x20) != 0 || sub_9420(v5, v11 + 76LL * (v6 - 1), *(_BYTE *)(v5 + 382)) )
      break;
    if ( *(_DWORD *)(a1 + 32) < ++v6 )
      return v6;
LABEL_10:
    v5 = *(_QWORD *)(a1 + 8);
  }
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(unsigned int *)(v12 + 64);
  v9 = *(unsigned int *)(v12 + 68);
  if ( *(_WORD *)v7 != 332 && ((_DWORD)v8 == 0xFFFF || (_DWORD)v9 == 0xFFFF) )
  {
    v14 = *(unsigned int *)(v7 + 4);
    if ( (_DWORD)v14 )
    {
      v15 = *(_QWORD *)(v4 + 85);
      v16 = v15 + 76 * v14;
      do
      {
        if ( *(char *)(v15 + 73) < 0 && *(_DWORD *)(v15 + 64) == v6 )
        {
          v8 = *(unsigned int *)(v15 + 16);
          v9 = *(unsigned int *)(v15 + 24);
        }
        v15 += 76;
      }
      while ( v15 != v16 );
    }
  }
  v10 = v6;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64, _QWORD, __int64, __int64, __int64))a1)(a1, v6, v12, v8, v9) )
    return v10;
  if ( *(_DWORD *)(a1 + 32) >= ++v6 )
    goto LABEL_10;
  return v6;
}

