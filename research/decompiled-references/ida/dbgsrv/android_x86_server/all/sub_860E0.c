/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_860E0
// Address: 0x000860E0

//----- (000860E0) --------------------------------------------------------
int __cdecl sub_860E0(int a1, int a2)
{
  void *v2; // esi
  const char *v3; // edi
  unsigned int v4; // eax
  int v5; // edx
  void **v6; // edi
  unsigned int v7; // ecx
  char *v8; // eax
  _DWORD *v9; // edx
  void *v10; // eax
  int v11; // ecx
  int v12; // esi
  void *v14; // eax
  void *v15; // eax
  __int64 v16; // [esp-10h] [ebp-4Ch]
  __int64 v17; // [esp-10h] [ebp-4Ch]
  void *v18; // [esp+Ch] [ebp-30h]
  int v19; // [esp+10h] [ebp-2Ch]
  _DWORD *v20; // [esp+10h] [ebp-2Ch]
  char v21; // [esp+14h] [ebp-28h]
  void *v22; // [esp+18h] [ebp-24h] BYREF
  int v23; // [esp+1Ch] [ebp-20h]
  int v24; // [esp+20h] [ebp-1Ch]
  char dest; // [esp+27h] [ebp-15h] BYREF
  unsigned int v26; // [esp+28h] [ebp-14h]

  v26 = __readgsdword(0x14u);
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  sub_79700((int)&v22, (_QWORD *)a2, *(_DWORD **)(a1 + 8));
  v2 = v22;
  v3 = byte_EF875;
  if ( v23 )
    v3 = (const char *)v22;
  if ( !strcmp(v3, ".debug_info") )
  {
    *(_BYTE *)(a1 + 12) = 1;
  }
  else if ( !strcmp(v3, ".note.gnu.build-id") && (v4 = *(_DWORD *)(a2 + 16), v4 <= 0xFFFF) )
  {
    v5 = a1;
    v6 = (void **)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 20);
    if ( v7 >= v4 )
    {
      if ( v7 != v4 )
      {
        dest = 0;
        sub_43860((char **)(a1 + 16), v4, &dest);
        v5 = a1;
      }
    }
    else
    {
      v19 = *(_DWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 24) >= v4 )
      {
        v8 = (char *)*v6;
      }
      else
      {
        v8 = (char *)qvector_reserve(a1 + 16, *v6, v4, 1u);
        *(_DWORD *)(a1 + 16) = v8;
        v7 = *(_DWORD *)(a1 + 20);
      }
      memset(&v8[v7], 0, v19 - v7);
      *(_DWORD *)(a1 + 20) = v19;
      v5 = a1;
      v6 = (void **)(a1 + 16);
    }
    qlseek(*(_DWORD *)(v5 + 4), *(int *)(a2 + 20), 0);
    HIDWORD(v17) = *(_DWORD *)(a1 + 16);
    LODWORD(v17) = *(_DWORD *)(a1 + 4);
    if ( qlread(v17, *(_DWORD *)(a2 + 16)) != *(_DWORD *)(a2 + 16) )
    {
      v15 = *v6;
      if ( *v6 )
      {
        *(_DWORD *)(a1 + 20) = 0;
        qfree(v15);
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 24) = 0;
        if ( !v2 )
          return 0;
        goto LABEL_20;
      }
    }
  }
  else if ( !strcmp(v3, ".gnu_debuglink") )
  {
    qlseek(*(_DWORD *)(a1 + 4), *(int *)(a2 + 20), 0);
    v18 = v2;
    v9 = (_DWORD *)a1;
    v20 = (_DWORD *)(a1 + 28);
    while ( 1 )
    {
      HIDWORD(v16) = &dest;
      LODWORD(v16) = v9[1];
      if ( qlread(v16, 1u) != 1 )
        break;
      v9 = (_DWORD *)a1;
      if ( !dest )
      {
        v2 = v18;
        if ( v18 )
          goto LABEL_20;
        return 0;
      }
      v21 = dest;
      v10 = *(void **)(a1 + 28);
      v11 = *(_DWORD *)(a1 + 32);
      v12 = v11 - 1;
      if ( !v11 )
        v12 = 0;
      if ( *(_DWORD *)(a1 + 36) < (unsigned int)(v12 + 2) )
      {
        v10 = qvector_reserve((int)v20, v10, v12 + 2, 1u);
        *v20 = v10;
        v9 = (_DWORD *)a1;
      }
      v9[8] = v12 + 2;
      *((_BYTE *)v10 + v12) = v21;
      *(_BYTE *)(v9[7] + v12 + 1) = 0;
    }
    v14 = *(void **)(a1 + 28);
    v2 = v18;
    if ( !v14 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 32) = 0;
    qfree(v14);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    if ( v18 )
      goto LABEL_20;
    return 0;
  }
LABEL_19:
  if ( v2 )
  {
LABEL_20:
    v23 = 0;
    qfree(v2);
    v22 = nullptr;
    v24 = 0;
  }
  return 0;
}
