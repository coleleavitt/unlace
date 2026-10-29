/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_214C0
// Address: 0x000214C0

//----- (000214C0) --------------------------------------------------------
unsigned int __cdecl sub_214C0(_DWORD *a1)
{
  _DWORD *v1; // ecx
  void *v2; // eax
  FILE *v3; // eax
  int v4; // edi
  size_t v5; // eax
  size_t v6; // ecx
  size_t v7; // eax
  const char *v8; // edx
  int v9; // esi
  unsigned int v10; // ecx
  int v11; // eax
  const char *v13; // [esp+20h] [ebp-5Ch]
  _DWORD *v14; // [esp+24h] [ebp-58h]
  _DWORD v15[2]; // [esp+28h] [ebp-54h] BYREF
  unsigned int v16; // [esp+30h] [ebp-4Ch] BYREF
  unsigned int v17; // [esp+34h] [ebp-48h]
  int v18; // [esp+44h] [ebp-38h] BYREF
  char *v19; // [esp+58h] [ebp-24h]
  int v20; // [esp+5Ch] [ebp-20h]
  int v21; // [esp+60h] [ebp-1Ch]
  unsigned int v22; // [esp+68h] [ebp-14h]

  v1 = a1;
  v22 = __readgsdword(0x14u);
  v2 = (void *)a1[159];
  if ( v2 )
  {
    a1[160] = 0;
    qfree(v2);
    v1 = a1;
    a1[159] = 0;
    a1[161] = 0;
  }
  v1[162] = 0;
  v3 = (FILE *)v1[167];
  if ( v3 )
  {
    v4 = (int)v1;
    v14 = v1 + 159;
    rewind(v3);
    v19 = nullptr;
    v20 = 0;
    v21 = 0;
    while ( (unsigned __int8)sub_21760(v4, (int)&v16) )
    {
      if ( v16 < v17 && __strchr_chk(&v18, 120, 8) )
      {
        v5 = __strlen_chk(".oat", 5);
        if ( !v5 )
          goto LABEL_21;
        v6 = v20 - 1;
        if ( !v20 )
          v6 = 0;
        if ( v6 >= v5 && !strncmp(&v19[v6 - v5], ".oat", v5) )
          goto LABEL_21;
        v7 = __strlen_chk(".odex", 6);
        if ( !v7 )
          goto LABEL_21;
        v8 = v19;
        v9 = v20;
        v10 = v20 - 1;
        if ( !v20 )
          v10 = 0;
        if ( v10 >= v7 )
        {
          v13 = v19;
          v11 = strncmp(&v19[v10 - v7], ".odex", v7);
          v8 = v13;
          if ( !v11 )
            goto LABEL_21;
        }
        if ( !v9 )
          v8 = byte_EF875;
        if ( strstr(v8, "jit-cache") )
        {
LABEL_21:
          v15[0] = v16;
          v15[1] = v17;
          rangeset_t_add(v14, v15);
        }
      }
    }
    sub_1C9D0(v4, "ART: refreshed code ranges: %d regions\n", *(_DWORD *)(v4 + 640));
    if ( v19 )
    {
      v20 = 0;
      qfree(v19);
      v19 = nullptr;
      v21 = 0;
    }
  }
  return __readgsdword(0x14u);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
