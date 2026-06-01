/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DAB0
// Address: 0x0006DAB0

//----- (0006DAB0) --------------------------------------------------------
const char *__cdecl sub_6DAB0(_DWORD *a1, int a2, _BYTE *a3)
{
  char *v3; // eax
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // edi
  int v7; // esi
  const char *v8; // ecx
  unsigned int v9; // ecx
  int v10; // ecx
  _BYTE *v11; // esi
  int v12; // eax
  void **v13; // eax
  int v14; // ecx
  _DWORD *v15; // eax
  char **v16; // esi
  int v17; // esi
  int v18; // edx
  char *v19; // ebx
  char **v20; // ecx
  char *v21; // eax
  char *v22; // edi
  unsigned int v23; // ecx
  int i; // esi
  void *v25; // eax
  const char *result; // eax
  int v27; // [esp+1Ch] [ebp-40h]
  unsigned int v28; // [esp+1Ch] [ebp-40h]
  const char *v29; // [esp+20h] [ebp-3Ch]
  int v30; // [esp+24h] [ebp-38h]
  unsigned int v31; // [esp+24h] [ebp-38h]
  unsigned int v32; // [esp+24h] [ebp-38h]
  size_t v33; // [esp+28h] [ebp-34h]
  int v34; // [esp+28h] [ebp-34h]
  char *v35; // [esp+2Ch] [ebp-30h]
  char v36; // [esp+37h] [ebp-25h] BYREF
  char *v37; // [esp+38h] [ebp-24h] BYREF
  unsigned int v38; // [esp+3Ch] [ebp-20h]
  const char *v39; // [esp+40h] [ebp-1Ch]
  unsigned int v40; // [esp+48h] [ebp-14h]

  v40 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a2 + 4) )
    v3 = *(char **)a2;
  else
    v3 = byte_EF875;
  v35 = v3;
  v4 = sub_6AB50((int)a1, v3);
  v5 = a1;
  *a3 = 0;
  v27 = v4;
  if ( !v4 )
    return nullptr;
  v6 = a1[8] - 1;
  if ( v6 >= 0 )
  {
    v7 = 28 * a1[8] - 4;
    do
    {
      v30 = v5[7];
      if ( *(_DWORD *)(v30 + v7 - 4) == v27 )
      {
        if ( !*(_BYTE *)(v27 + 13) )
          return nullptr;
        v8 = (char *)&qword_13ACD8 - 308323;
        if ( *(_DWORD *)(v27 + 4) )
          v8 = *(const char **)v27;
        v29 = v8;
        v33 = strlen(v8);
        v5 = a1;
        v9 = a1[1];
        if ( (unsigned int)v29 <= v9 && v9 <= (unsigned int)&v29[v33] )
          return nullptr;
        if ( a1[10] > *(_DWORD *)(v30 + v7) )
          return nullptr;
      }
      v7 -= 28;
    }
    while ( --v6 >= 0 );
  }
  v37 = nullptr;
  v38 = 0;
  v39 = nullptr;
  v10 = v27;
  v11 = a3;
  if ( !*(_BYTE *)(v27 + 13) )
    goto LABEL_20;
  v12 = sub_6D3C0((int)v5, (int)&v37, &v36);
  if ( v12 || !v36 )
  {
LABEL_24:
    v29 = (const char *)v12;
    v17 = 1;
    goto LABEL_31;
  }
  v10 = v27;
  if ( v38 != *(unsigned __int8 *)(v27 + 12) )
  {
    set_error_string(0, v35);
    v12 = set_qerrno(39);
    goto LABEL_24;
  }
  v5 = a1;
LABEL_20:
  if ( *(_DWORD *)(v10 + 4) >= 2u )
  {
    v13 = (void **)(v5 + 7);
    v14 = v5[8];
    if ( v5[9] >= (unsigned int)(v14 + 1) )
    {
      v15 = *v13;
      v16 = (char **)a1;
    }
    else
    {
      v15 = qvector_reserve((int)v13, *v13, v14 + 1, 0x1Cu);
      v16 = (char **)a1;
      a1[7] = v15;
      v14 = a1[8];
    }
    v18 = 7 * v14;
    v15[v18] = 0;
    v15[v18 + 1] = 0;
    v15[v18 + 2] = 0;
    ++v16[8];
    v15[v18 + 3] = *v16;
    v15[v18 + 4] = v16[1];
    v15[v18 + 6] = v16[10];
    v15[v18 + 5] = v27;
    v19 = v37;
    v31 = v38;
    v29 = v39;
    v37 = (char *)v15[7 * v14];
    v38 = v15[7 * v14 + 1];
    v39 = (const char *)v15[7 * v14 + 2];
    v15[v18] = v19;
    v15[v18 + 1] = v31;
    v15[v18 + 2] = v29;
    v16[10] = v16[8] - 1;
    v20 = v16;
    if ( *(_DWORD *)(v27 + 4) )
      v21 = *(char **)v27;
    else
      v21 = byte_EF875;
    v11 = a3;
    v20[1] = v21;
    *v20 = v21;
  }
  *v11 = 1;
  v17 = 0;
LABEL_31:
  v22 = v37;
  if ( v37 )
  {
    v32 = v38;
    if ( v38 )
    {
      v34 = v17;
      v23 = 1;
      for ( i = 0; ; i += 12 )
      {
        v25 = *(void **)&v22[i];
        if ( v25 )
        {
          v28 = v23;
          *(_DWORD *)&v22[i + 4] = 0;
          qfree(v25);
          *(_DWORD *)&v22[i] = 0;
          *(_DWORD *)&v22[i + 8] = 0;
          v23 = v28;
        }
        if ( v23 >= v32 )
          break;
        v22 = v37;
        ++v23;
      }
      v22 = v37;
      v17 = v34;
    }
    v38 = 0;
    qfree(v22);
    v37 = nullptr;
    v39 = nullptr;
  }
  result = v29;
  if ( !v17 )
    return nullptr;
  return result;
}
// 6DDCA: variable 'v29' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
