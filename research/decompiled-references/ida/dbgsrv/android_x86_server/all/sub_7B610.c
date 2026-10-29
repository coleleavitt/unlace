/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B610
// Address: 0x0007B610

//----- (0007B610) --------------------------------------------------------
int __cdecl sub_7B610(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  const char *v4; // eax
  int v5; // eax
  const char *v6; // eax
  int v7; // ecx
  int v8; // esi
  const char *v10; // [esp+Ch] [ebp-40h]
  char *v11; // [esp+18h] [ebp-34h] BYREF
  int v12; // [esp+1Ch] [ebp-30h]
  int v13; // [esp+20h] [ebp-2Ch]
  _DWORD *v14; // [esp+28h] [ebp-24h]
  void **v15[7]; // [esp+30h] [ebp-1Ch] BYREF

  v15[2] = (void **)__readgsdword(0x14u);
  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  sub_7AEC0(a2, (int)&v11);
  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
    goto LABEL_15;
  v10 = byte_EF875;
  if ( v12 )
    v10 = v11;
  v3 = (_DWORD *)(a1 + 4);
  do
  {
    v4 = byte_EF875;
    if ( *(_DWORD *)(v2 + 20) )
      v4 = *(const char **)(v2 + 16);
    v5 = strcmp(v4, v10);
    if ( v5 >= 0 )
      v3 = (_DWORD *)v2;
    v2 = *(_DWORD *)(v2 + 4 * ((unsigned int)v5 >> 31));
  }
  while ( v2 );
  if ( v3 != (_DWORD *)(a1 + 4) && (!v3[5] ? (v6 = byte_EF875) : (v6 = (const char *)v3[4]), strcmp(v10, v6) >= 0) )
  {
    v14 = v3;
    sub_87C80(v15, a1, v3);
    LOBYTE(v7) = 1;
  }
  else
  {
LABEL_15:
    v7 = 0;
  }
  if ( v11 )
  {
    v8 = v7;
    v12 = 0;
    qfree(v11);
    v11 = nullptr;
    v13 = 0;
    return v8;
  }
  return v7;
}
// 7B6F3: variable 'v7' is possibly undefined
