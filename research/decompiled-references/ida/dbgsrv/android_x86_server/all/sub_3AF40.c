/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AF40
// Address: 0x0003AF40

//----- (0003AF40) --------------------------------------------------------
unsigned int __cdecl sub_3AF40(int a1, int a2)
{
  int v2; // ecx
  _BYTE *v3; // eax
  int v4; // ecx
  __int64 v5; // xmm0_8
  char *v6; // esi
  unsigned int v7; // ecx
  int i; // edi
  void *v9; // eax
  unsigned int v11; // [esp+1Ch] [ebp-60h]
  unsigned int v12; // [esp+20h] [ebp-5Ch]
  void *v13; // [esp+28h] [ebp-54h] BYREF
  int v14; // [esp+2Ch] [ebp-50h]
  int v15; // [esp+30h] [ebp-4Ch]
  char *v16; // [esp+34h] [ebp-48h]
  unsigned int v17; // [esp+38h] [ebp-44h]
  int v18; // [esp+3Ch] [ebp-40h]
  void *v19; // [esp+40h] [ebp-3Ch]
  int v20; // [esp+44h] [ebp-38h]
  int v21; // [esp+48h] [ebp-34h]
  __int64 v22; // [esp+4Ch] [ebp-30h]
  __int64 v23; // [esp+54h] [ebp-28h]
  __int64 v24; // [esp+5Ch] [ebp-20h]
  char v25; // [esp+64h] [ebp-18h]
  unsigned int v26; // [esp+68h] [ebp-14h]

  v26 = __readgsdword(0x14u);
  sub_3ADF0(&v13, a2);
  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v2 + 1) )
  {
    v3 = *(_BYTE **)a1;
  }
  else
  {
    v3 = qvector_reserve(a1, *(void **)a1, v2 + 1, 0x40u);
    *(_DWORD *)a1 = v3;
    v2 = *(_DWORD *)(a1 + 4);
  }
  v4 = v2 << 6;
  *(_DWORD *)&v3[v4] = v13;
  v13 = nullptr;
  *(_DWORD *)&v3[v4 + 4] = v14;
  v14 = 0;
  *(_DWORD *)&v3[v4 + 8] = v15;
  v15 = 0;
  *(_DWORD *)&v3[v4 + 12] = v16;
  v16 = nullptr;
  *(_DWORD *)&v3[v4 + 16] = v17;
  v17 = 0;
  *(_DWORD *)&v3[v4 + 20] = v18;
  v18 = 0;
  *(_DWORD *)&v3[v4 + 24] = v19;
  v19 = nullptr;
  *(_DWORD *)&v3[v4 + 28] = v20;
  v20 = 0;
  *(_DWORD *)&v3[v4 + 32] = v21;
  v21 = 0;
  v3[v4 + 60] = v25;
  *(_QWORD *)&v3[v4 + 52] = v24;
  v5 = v22;
  *(_QWORD *)&v3[v4 + 44] = v23;
  *(_QWORD *)&v3[v4 + 36] = v5;
  ++*(_DWORD *)(a1 + 4);
  if ( v19 )
  {
    v20 = 0;
    qfree(v19);
    v19 = nullptr;
    v21 = 0;
  }
  v6 = v16;
  if ( v16 )
  {
    v11 = v17;
    if ( v17 )
    {
      v7 = 1;
      for ( i = 0; ; i += 28 )
      {
        v9 = *(void **)&v6[i];
        if ( v9 )
        {
          v12 = v7;
          *(_DWORD *)&v6[i + 4] = 0;
          qfree(v9);
          *(_DWORD *)&v6[i] = 0;
          *(_DWORD *)&v6[i + 8] = 0;
          v7 = v12;
        }
        if ( v7 >= v11 )
          break;
        v6 = v16;
        ++v7;
      }
      v6 = v16;
    }
    v17 = 0;
    qfree(v6);
    v16 = nullptr;
    v18 = 0;
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v13 = nullptr;
    v15 = 0;
  }
  return __readgsdword(0x14u);
}
