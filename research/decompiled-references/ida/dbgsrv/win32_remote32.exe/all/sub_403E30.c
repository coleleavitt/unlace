/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403E30
// Address: 0x00403E30

//----- (00403E30) --------------------------------------------------------
int __userpurge sub_403E30@<eax>(_DWORD *a1@<edi>, int a2@<esi>, int a3, _DWORD *a4, char a5, int a6)
{
  _DWORD *v6; // ebx
  int v7; // eax
  int v8; // edi
  unsigned int v9; // eax
  int v10; // eax
  _DWORD **v14; // [esp+18h] [ebp-Ch]
  char *v15; // [esp+1Ch] [ebp-8h] BYREF
  int v16; // [esp+20h] [ebp-4h] BYREF
  void *retaddr; // [esp+24h] [ebp+0h]

  v6 = a4;
  v16 = 0;
  v7 = *a4;
  v15 = nullptr;
  if ( (*(int (__stdcall **)(_DWORD *, int, char **, int *))(v7 + 24))(a4, 1, &v15, &v16) )
    return 0;
  do
  {
    if ( !v16 )
      break;
    if ( !(*(int (__stdcall **)(char *, _DWORD **, _DWORD *, int))(*(_DWORD *)v15 + 12))(v15, &a4, a1, a2) )
    {
      v8 = a6;
      v9 = *(_DWORD *)(a3 + 4) + 1;
      if ( v9 > *(_DWORD *)(a3 + 8) )
        *(_DWORD *)a3 = sub_453B00(a3, *(void **)a3, v9, 4u);
      *(_DWORD *)(*(_DWORD *)a3 + 4 * (*(_DWORD *)(a3 + 4))++) = v8;
    }
    (*(void (__stdcall **)(void *, _DWORD **, char *))(*(_DWORD *)retaddr + 8))(retaddr, v14, v15);
    v10 = *v6;
    v15 = &a5;
    v14 = &a4;
    a2 = 1;
    a1 = v6;
  }
  while ( !(*(int (**)(void))(v10 + 24))() );
  return 0;
}
// 403E30: could not find valid save-restore pair for edi
// 403E30: could not find valid save-restore pair for esi
// 403EAA: variable 'v14' is possibly undefined
