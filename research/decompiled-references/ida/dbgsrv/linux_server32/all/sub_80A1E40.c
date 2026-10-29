/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1E40
// Address: 0x080A1E40

//----- (080A1E40) --------------------------------------------------------
void __cdecl sub_80A1E40(void **a1)
{
  void **v1; // edx
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  char *v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // ebp
  int v8; // esi
  void **v9; // ebp
  void *v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edi
  void **v13; // ebp
  _DWORD *v14; // [esp-18h] [ebp-4Ch]
  _DWORD *v15; // [esp-18h] [ebp-4Ch]
  _DWORD *v16; // [esp-18h] [ebp-4Ch]
  _DWORD *v17; // [esp-18h] [ebp-4Ch]
  unsigned int v18; // [esp+0h] [ebp-34h]
  _DWORD *v19; // [esp+4h] [ebp-30h]
  _DWORD *v20; // [esp+8h] [ebp-2Ch]
  char *v21; // [esp+Ch] [ebp-28h]
  _DWORD *v22; // [esp+10h] [ebp-24h]
  _DWORD *v23; // [esp+14h] [ebp-20h]
  void **v24; // [esp+38h] [ebp+4h]

  v1 = a1;
  v2 = a1[7];
  v3 = a1[2];
  v20 = a1[4];
  v4 = (char *)a1[5];
  v19 = a1[6];
  v5 = (unsigned int)a1[9];
  if ( (unsigned int)(v4 + 4) < v5 )
  {
    v21 = (char *)a1[5];
    v18 = (unsigned int)a1[9];
    v22 = a1[2];
    v23 = a1[7];
    v6 = v4 + 4;
    do
    {
      v7 = (_DWORD *)*v6;
      v8 = *v6 + 484;
      do
      {
        v14 = v7;
        v7 += 11;
        sub_80C6090(v14);
      }
      while ( (_DWORD *)v8 != v7 );
      v5 = v18;
      ++v6;
    }
    while ( (unsigned int)v6 < v18 );
    v4 = v21;
    v3 = v22;
    v2 = v23;
    v1 = a1;
  }
  if ( v4 == (char *)v5 )
  {
    if ( v3 != v19 )
    {
      v9 = v1;
      do
      {
        v17 = v3;
        v3 += 11;
        sub_80C6090(v17);
      }
      while ( v19 != v3 );
      goto LABEL_15;
    }
  }
  else
  {
    if ( v3 != v20 )
    {
      v24 = v1;
      do
      {
        v15 = v3;
        v3 += 11;
        sub_80C6090(v15);
      }
      while ( v20 != v3 );
      v1 = v24;
    }
    if ( v19 != v2 )
    {
      v9 = v1;
      do
      {
        v16 = v2;
        v2 += 11;
        sub_80C6090(v16);
      }
      while ( v19 != v2 );
LABEL_15:
      v1 = v9;
    }
  }
  v10 = *v1;
  if ( *v1 )
  {
    v11 = (unsigned int)v1[5];
    v12 = (unsigned int)v1[9] + 4;
    if ( v11 < v12 )
    {
      v13 = v1;
      do
      {
        v11 += 4;
        operator delete(*(void **)(v11 - 4), 0x1E4u);
      }
      while ( v11 < v12 );
      v10 = *v13;
      v1 = v13;
    }
    operator delete(v10, 4 * (_DWORD)v1[1]);
  }
}
