/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BE00
// Address: 0x0007BE00

//----- (0007BE00) --------------------------------------------------------
unsigned int __cdecl sub_7BE00(int a1, int a2, unsigned int a3, int a4, char *s)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  int v12; // ecx
  unsigned int v13; // edx
  char *v14; // esi
  size_t v15; // eax
  _BYTE *v16; // eax
  void *v17; // eax
  char *v19; // [esp+Ch] [ebp-30h]
  int v20; // [esp+10h] [ebp-2Ch] BYREF
  int v21; // [esp+14h] [ebp-28h]
  unsigned int v22; // [esp+18h] [ebp-24h]
  _BYTE src[5]; // [esp+1Eh] [ebp-1Eh] BYREF
  char v24; // [esp+23h] [ebp-19h] BYREF
  _DWORD v25[5]; // [esp+28h] [ebp-14h] BYREF

  v25[0] = __readgsdword(0x14u);
  if ( a3 == 1 )
  {
    v5 = a1 - 100;
    if ( !a1 )
      v5 = 0;
    v6 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v5 + 244) + 204))(*(_DWORD *)(v5 + 244));
  }
  else
  {
    v6 = a4;
  }
  v19 = (char *)v6;
  sub_96B40((int)&v20, 56);
  v7 = a2 + 1;
  v8 = __CFADD__(a2, 1);
  if ( a2 == -1 )
  {
    v7 = 0;
    v8 = 0;
  }
  v9 = pack_dq(src, (unsigned int)v25, v7, v8);
  sub_3A950(&v20, src, v9 - src);
  v10 = pack_dd(src, (unsigned int)&v24, a3);
  sub_3A950(&v20, src, v10 - src);
  v11 = (_BYTE *)v20;
  v12 = v21;
  v13 = v21 + 1;
  if ( v19 == s )
  {
    if ( v22 < v13 )
    {
      v11 = qvector_reserve((int)&v20, (void *)v20, v21 + 1, 1u);
      v20 = (int)v11;
      v12 = v21;
    }
    v11[v12] = 1;
    ++v21;
    v14 = &byte_DCEE2;
    if ( s )
      v14 = s;
    v15 = strlen(v14);
    sub_3A950(&v20, v14, v15 + 1);
  }
  else
  {
    if ( v22 < v13 )
    {
      v11 = qvector_reserve((int)&v20, (void *)v20, v21 + 1, 1u);
      v20 = (int)v11;
      v12 = v21;
    }
    v11[v12] = 0;
    ++v21;
    v16 = pack_dq(src, (unsigned int)v25, (unsigned int)(v19 + 1), (unsigned __int64)(v19 + 1) >> 32);
    sub_3A950(&v20, src, v16 - src);
  }
  v17 = (void *)(*(int (__cdecl **)(int, int, int *))(*(_DWORD *)a1 + 8))(a1, 56, &v20);
  qfree(v17);
  if ( v20 )
  {
    v21 = 0;
    qfree((void *)v20);
    v20 = 0;
    v22 = 0;
  }
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
