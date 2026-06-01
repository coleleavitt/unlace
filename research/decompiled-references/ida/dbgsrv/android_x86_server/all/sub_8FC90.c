/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FC90
// Address: 0x0008FC90

//----- (0008FC90) --------------------------------------------------------
int __cdecl sub_8FC90(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // edi
  _BYTE *v11; // eax
  size_t v13; // eax
  size_t v14; // ecx
  void *v15; // eax
  const char *v17; // [esp+4h] [ebp-28h]
  size_t v18; // [esp+8h] [ebp-24h]
  size_t v19; // [esp+Ch] [ebp-20h]
  _BYTE *v20; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v21; // [esp+14h] [ebp-18h]
  unsigned int v22; // [esp+18h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  v4 = (*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)a1 + 8))(a1, *(unsigned __int8 *)(*(_DWORD *)a2 + 4), a2);
  if ( !v4 )
    return a3;
  v5 = (_DWORD *)v4;
  v6 = v4 + 5;
  v7 = v6 + *v5;
  v20 = (_BYTE *)v6;
  v21 = v7;
  v8 = unpack_dd((unsigned int *)&v20, v7);
  v9 = a4;
  v10 = v8;
  if ( a4 && v8 < 0 )
  {
    v11 = v20;
    v17 = v20;
    do
    {
      if ( (unsigned int)v11 >= v21 )
        goto LABEL_12;
    }
    while ( *v11++ != 0 );
    v20 = v11;
    if ( !v17 || (v13 = strlen(v17), v9 = a4, !v13) )
    {
LABEL_12:
      *(_DWORD *)(v9 + 4) = 0;
      goto LABEL_13;
    }
    v18 = v13;
    v14 = v13 + 1;
    if ( *(_DWORD *)(a4 + 8) >= v13 + 1 )
    {
      v15 = *(void **)a4;
    }
    else
    {
      v19 = v13 + 1;
      v15 = qvector_reserve(a4, *(void **)a4, v13 + 1, 1u);
      v14 = v19;
      v9 = a4;
      *(_DWORD *)a4 = v15;
    }
    *(_DWORD *)(v9 + 4) = v14;
    memmove(v15, v17, v18);
    *(_BYTE *)(*(_DWORD *)a4 + v18) = 0;
  }
LABEL_13:
  qfree(v5);
  return v10;
}
