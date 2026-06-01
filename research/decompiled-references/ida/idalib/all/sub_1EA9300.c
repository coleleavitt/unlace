char *__fastcall sub_1EA9300(__int64 a1)
{
  int v1; // ecx
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // r10
  char v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rsi
  char *v12; // r12
  char **v13; // rdi
  unsigned __int16 *v14; // rax
  __int64 v15; // rax
  unsigned __int16 *v17; // rdx
  char *v18; // [rsp+0h] [rbp-20h] BYREF

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 60);
  if ( v1 == v2 )
  {
    LODWORD(v3) = *(_DWORD *)(a1 + 16);
    if ( !(_DWORD)v3 )
      return nullptr;
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_BYTE *)(a1 + 72);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 160);
      v3 = (unsigned int)(v3 - 1);
      *(_DWORD *)(a1 + 16) = v3;
      v7 = *(_QWORD *)(v6 + 8 * v3);
      if ( !v5 || (v8 = *(_DWORD *)(v7 + 4), v8 > 1) && v8 != 5 )
      {
        v9 = *(_QWORD *)(v7 + 1704);
        v1 = *(_DWORD *)(v9 + 4);
        v10 = *(_QWORD *)(v9 + 56);
        *(_DWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 40) = v9 + 24;
        *(_DWORD *)(a1 + 36) = v1;
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0;
        *(_QWORD *)(a1 + 24) = v10;
        v2 = 0;
      }
      if ( v1 != v2 )
        break;
      if ( !(_DWORD)v3 )
        return nullptr;
    }
  }
  v18 = (char *)(*(_QWORD *)(a1 + 24) + (*(_DWORD *)(a1 + 32) == 0 ? 6LL : 4LL));
  sub_1EA91E0(&v18);
  v12 = v18;
  v13 = (char **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 32) )
  {
    v14 = *(unsigned __int16 **)(a1 + 24);
  }
  else
  {
    v17 = *(unsigned __int16 **)(a1 + 24);
    v14 = v17 + 1;
    *(_DWORD *)(a1 + 32) = *v17;
  }
  *(_QWORD *)(a1 + 24) = v14 + 2;
  v15 = sub_1EA91E0(v13);
  --*(_DWORD *)(a1 + 32);
  --*(_DWORD *)(a1 + 36);
  *(_QWORD *)(a1 + 24) += (unsigned int)(HIDWORD(v15) + v15);
  return v12;
}
