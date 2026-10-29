char __fastcall sub_7B3060(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  unsigned int *v8; // r9
  __int64 v9; // rdx
  int v11; // r10d
  int v12; // r11d
  int v13; // r8d
  __int64 v14; // rdi
  unsigned int v15; // esi
  __int64 v16; // rcx
  unsigned int v17; // eax

  v4 = (unsigned int *)(a3 + 20);
  v5 = *(unsigned int *)(a3 + 4);
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 60);
  *a4 = 0;
  v5 *= 4;
  v8 = (unsigned int *)((char *)v4 + v5);
  if ( !v5 )
  {
    v17 = v6;
    return v17 < v7;
  }
  v9 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *(_QWORD *)(v9 + 3840);
  v15 = *(_DWORD *)(v9 + 3848);
  do
  {
    while ( 1 )
    {
      v16 = *v4;
      if ( v15 >= *(_DWORD *)(v14 + 4 * v16) )
        break;
      ++v13;
LABEL_4:
      if ( ++v4 == v8 )
        goto LABEL_8;
    }
    if ( v15 >= *(_DWORD *)(v14 + 4LL * ((unsigned int)v16 ^ 1)) )
    {
      ++v11;
      goto LABEL_4;
    }
    ++v4;
    ++v12;
  }
  while ( v4 != v8 );
LABEL_8:
  v17 = v6 - v13;
  if ( !v12 || v6 + v11 - v12 >= v7 + 1 )
    return v17 < v7;
  *a4 = 1;
  return 1;
}

