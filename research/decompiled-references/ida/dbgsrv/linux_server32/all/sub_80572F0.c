/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80572F0
// Address: 0x080572F0

//----- (080572F0) --------------------------------------------------------
_DWORD *__usercall sub_80572F0@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // eax
  size_t v5; // eax
  int v6; // eax
  int *v7; // edi
  _DWORD *v8; // esi
  int v9; // eax
  size_t v10; // eax
  int v11; // eax
  void *v13; // eax
  void *v14; // eax
  _DWORD *v15; // [esp+0h] [ebp-28h]
  _DWORD *v16; // [esp+8h] [ebp-20h]
  size_t n; // [esp+Ch] [ebp-1Ch]
  size_t na; // [esp+Ch] [ebp-1Ch]

  v15 = (_DWORD *)operator new(0x20u);
  v4 = *(_DWORD *)(a1 + 16);
  v15[5] = 0;
  v15[4] = v4;
  v5 = *(_DWORD *)(a1 + 24);
  v15[6] = 0;
  v15[7] = 0;
  n = v5;
  if ( v5 )
  {
    v14 = sub_80CF8B0(v5);
    v15[7] = n;
    v15[5] = v14;
    memcpy(v14, *(const void **)(a1 + 20), n);
    v15[6] = n;
  }
  *v15 = *(_DWORD *)a1;
  v6 = *(_DWORD *)(a1 + 12);
  v15[2] = 0;
  v15[3] = 0;
  v15[1] = a2;
  if ( v6 )
    v15[3] = sub_80572F0();
  v7 = *(int **)(a1 + 8);
  if ( v7 )
  {
    v8 = v15;
    do
    {
      v16 = v8;
      v8 = (_DWORD *)operator new(0x20u);
      v9 = v7[4];
      v8[5] = 0;
      v8[4] = v9;
      v8[6] = 0;
      v8[7] = 0;
      v10 = v7[6];
      na = v10;
      if ( v10 )
      {
        v13 = sub_80CF8B0(v10);
        v8[5] = v13;
        v8[7] = na;
        memcpy(v13, (const void *)v7[5], na);
        v8[6] = na;
      }
      v11 = *v7;
      v8[2] = 0;
      v8[3] = 0;
      *v8 = v11;
      v16[2] = v8;
      v8[1] = v16;
      if ( v7[3] )
        v8[3] = sub_80572F0();
      v7 = (int *)v7[2];
    }
    while ( v7 );
  }
  return v15;
}
// 8057466: control flows out of bounds to 804C03A
