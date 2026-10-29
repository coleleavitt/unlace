/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D4210
// Address: 0x080D4210

//----- (080D4210) --------------------------------------------------------
int __usercall sub_80D4210@<eax>(size_t n@<ecx>, int a2@<eax>, int a3@<edx>)
{
  int v4; // esi
  char *v5; // edx
  size_t v6; // edi
  int v7; // ecx
  char *v8; // edx
  size_t v9; // ecx
  unsigned int v10; // ecx
  size_t v11; // eax
  unsigned int v12; // edx
  int result; // eax
  int v14; // ecx
  int v15; // eax
  size_t v16; // edi
  int v17; // eax
  size_t na; // [esp+0h] [ebp-28h]
  int v20; // [esp+8h] [ebp-20h]

  v4 = *(_DWORD *)(a2 + 28);
  v5 = *(char **)(v4 + 56);
  if ( !v5 )
  {
    v5 = (char *)(*(int (__cdecl **)(_DWORD, int, int))(a2 + 32))(*(_DWORD *)(a2 + 40), 1 << *(_DWORD *)(v4 + 40), 1);
    *(_DWORD *)(v4 + 56) = v5;
    if ( !v5 )
      return 1;
  }
  v6 = *(_DWORD *)(v4 + 44);
  if ( v6 )
  {
    if ( n < v6 )
      goto LABEL_4;
LABEL_11:
    memcpy(v5, (const void *)(a3 - v6), v6);
    v15 = *(_DWORD *)(v4 + 44);
    *(_DWORD *)(v4 + 52) = 0;
    *(_DWORD *)(v4 + 48) = v15;
    return 0;
  }
  v14 = *(_DWORD *)(v4 + 40);
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  v6 = 1 << v14;
  *(_DWORD *)(v4 + 44) = 1 << v14;
  if ( n >= 1 << v14 )
    goto LABEL_11;
LABEL_4:
  v7 = *(_DWORD *)(v4 + 52);
  v8 = &v5[v7];
  v20 = v7;
  v9 = v6 - v7;
  if ( n >= v9 )
  {
    na = v9;
    memcpy(v8, (const void *)(a3 - n), v9);
    v16 = n + v20 - v6;
    if ( v16 )
    {
      memcpy(*(void **)(v4 + 56), (const void *)(a3 + na - n), v16);
      v17 = *(_DWORD *)(v4 + 44);
      *(_DWORD *)(v4 + 52) = v16;
      *(_DWORD *)(v4 + 48) = v17;
      return 0;
    }
    n = na;
  }
  else
  {
    memcpy(v8, (const void *)(a3 - n), n);
  }
  v10 = *(_DWORD *)(v4 + 44);
  v11 = n + *(_DWORD *)(v4 + 52);
  if ( v11 == v10 )
    v11 = 0;
  v12 = *(_DWORD *)(v4 + 48);
  *(_DWORD *)(v4 + 52) = v11;
  result = 0;
  if ( v10 > v12 )
    *(_DWORD *)(v4 + 48) = v12 + n;
  return result;
}
