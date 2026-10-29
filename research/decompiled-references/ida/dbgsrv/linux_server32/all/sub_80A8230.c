/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A8230
// Address: 0x080A8230

//----- (080A8230) --------------------------------------------------------
int __cdecl sub_80A8230(int a1, int a2)
{
  char *v2; // edx
  int v3; // eax
  int v5; // eax
  size_t i; // eax
  char v7; // cl
  int v8; // edi
  unsigned int v9; // edx
  void *v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  void *v13; // eax
  void *v14; // eax
  char *v15; // eax
  char v16; // [esp+7h] [ebp-45h]
  unsigned int v17; // [esp+8h] [ebp-44h]
  const char *v18; // [esp+Ch] [ebp-40h]
  char *v19; // [esp+Ch] [ebp-40h]
  char *v20; // [esp+Ch] [ebp-40h]
  char v21; // [esp+23h] [ebp-29h] BYREF
  char *s1; // [esp+24h] [ebp-28h] BYREF
  int v23; // [esp+28h] [ebp-24h]
  int v24; // [esp+2Ch] [ebp-20h]
  unsigned int v25; // [esp+30h] [ebp-1Ch]

  v25 = __readgsdword(0x14u);
  s1 = nullptr;
  v23 = 0;
  v24 = 0;
  sub_80A7F70((int)&s1, (_QWORD *)a2, *(_DWORD **)(a1 + 8));
  v2 = s1;
  if ( v23 )
  {
    v18 = s1;
    v3 = strcmp(s1, ".debug_info");
    v2 = (char *)v18;
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 12) = 1;
      goto LABEL_4;
    }
    if ( !strcmp(v18, ".note.gnu.build-id") && (v11 = *(_DWORD *)(a2 + 16), v11 <= 0xFFFF) )
    {
      v12 = *(_DWORD *)(a1 + 20);
      if ( v12 < v11 )
      {
        v15 = *(char **)(a1 + 16);
        if ( *(_DWORD *)(a1 + 24) < v11 )
        {
          v20 = *(char **)(a2 + 16);
          v15 = (char *)sub_80CF920(a1 + 16, v15, v11, 1u);
          v12 = *(_DWORD *)(a1 + 20);
          v11 = (unsigned int)v20;
          *(_DWORD *)(a1 + 16) = v15;
        }
        v19 = (char *)v11;
        memset(&v15[v12], 0, v11 - v12);
        *(_DWORD *)(a1 + 20) = v19;
      }
      else if ( v11 != v12 )
      {
        *(_DWORD *)(a1 + 20) = v11;
      }
      sub_80CD730(*(_DWORD *)(a1 + 4), *(int *)(a2 + 20), 0);
      if ( *(_DWORD *)(a2 + 16) != sub_80CD690(*(_DWORD *)(a1 + 4), *(void **)(a1 + 16), *(_DWORD *)(a2 + 16)) )
      {
        v14 = *(void **)(a1 + 16);
        if ( v14 )
        {
          *(_DWORD *)(a1 + 20) = 0;
          sub_80CF780(v14);
          v2 = s1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = 0;
          goto LABEL_4;
        }
      }
    }
    else
    {
      v5 = strcmp(v18, ".gnu_debuglink");
      v2 = (char *)v18;
      if ( v5 )
        goto LABEL_4;
      sub_80CD730(*(_DWORD *)(a1 + 4), *(int *)(a2 + 20), 0);
      for ( i = sub_80CD690(*(_DWORD *)(a1 + 4), &v21, 1); i == 1; i = sub_80CD690(*(_DWORD *)(a1 + 4), &v21, 1) )
      {
        v7 = v21;
        if ( !v21 )
          goto LABEL_23;
        v8 = *(_DWORD *)(a1 + 32);
        v9 = 2;
        if ( v8 )
          v9 = v8-- + 1;
        v10 = *(void **)(a1 + 28);
        if ( *(_DWORD *)(a1 + 36) < v9 )
        {
          v16 = v21;
          v17 = v9;
          v10 = sub_80CF920(a1 + 28, v10, v9, 1u);
          v7 = v16;
          v9 = v17;
          *(_DWORD *)(a1 + 28) = v10;
        }
        *(_DWORD *)(a1 + 32) = v9;
        *((_BYTE *)v10 + v8) = v7;
        *(_BYTE *)(*(_DWORD *)(a1 + 28) + v8 + 1) = 0;
      }
      v13 = *(void **)(a1 + 28);
      if ( v13 )
      {
        *(_DWORD *)(a1 + 32) = 0;
        sub_80CF780(v13);
        *(_DWORD *)(a1 + 28) = 0;
        *(_DWORD *)(a1 + 36) = 0;
      }
    }
LABEL_23:
    v2 = s1;
  }
LABEL_4:
  if ( v2 )
    sub_80CF780(v2);
  if ( v25 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
