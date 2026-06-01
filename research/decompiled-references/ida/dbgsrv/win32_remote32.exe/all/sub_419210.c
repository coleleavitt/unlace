/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419210
// Address: 0x00419210

//----- (00419210) --------------------------------------------------------
_DWORD *__thiscall sub_419210(_DWORD *this, int *a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  char *v8; // eax
  bool v9; // sf
  int v10; // ecx
  _DWORD *v11; // ebx
  int *v12; // esi
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *v18; // eax
  void *v19; // eax
  _DWORD *result; // eax
  LPVOID v21; // [esp+14h] [ebp-3Ch]
  unsigned int v22; // [esp+18h] [ebp-38h]
  unsigned int v23; // [esp+1Ch] [ebp-34h]
  LPVOID v24; // [esp+24h] [ebp-2Ch]
  unsigned int v25; // [esp+28h] [ebp-28h]
  unsigned int v26; // [esp+2Ch] [ebp-24h]
  int v27; // [esp+30h] [ebp-20h]
  int v28; // [esp+34h] [ebp-1Ch]
  int v29; // [esp+38h] [ebp-18h]
  char *v30; // [esp+3Ch] [ebp-14h]
  int v32; // [esp+58h] [ebp+8h]

  v2 = (int)this;
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  v3 = a2[2];
  v28 = *a2;
  if ( v3 )
  {
    v21 = sub_4539E0(v3);
    v23 = v3;
    sub_464310((unsigned int)v21, a2[1], v3);
    v22 = v3;
  }
  v4 = a2[6];
  v27 = a2[4];
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  if ( v4 )
  {
    v24 = sub_4539E0(v4);
    v26 = v4;
    sub_464310((unsigned int)v24, a2[5], v4);
    v25 = v4;
  }
  v5 = (_DWORD *)(v2 + 4);
  v6 = *(_DWORD *)(v2 + 8);
  v7 = *(_DWORD *)(v2 + 4) + 1;
  if ( v7 > v6 )
  {
    v8 = (char *)sub_453B00(v2, nullptr, v7, 0x20u);
    v29 = *(_DWORD *)(v2 + 8);
    v9 = *v5 - 1 < 0;
    v10 = *v5 - 1;
    *(_DWORD *)(v2 + 8) = v6;
    v11 = *(_DWORD **)v2;
    v30 = v8;
    v32 = v10;
    if ( !v9 )
    {
      v12 = v11 + 7;
      v13 = v8 + 12;
      do
      {
        *(v13 - 3) = *v11;
        *(v13 - 2) = *(v12 - 6);
        v14 = *(v12 - 5);
        *(v12 - 6) = 0;
        *(v13 - 1) = v14;
        v15 = *(v12 - 4);
        *(v12 - 5) = 0;
        *v13 = v15;
        *(v12 - 4) = 0;
        v13[1] = *(v12 - 3);
        v13[2] = *(v12 - 2);
        v16 = *(v12 - 1);
        *(v12 - 2) = 0;
        v13[3] = v16;
        v17 = *v12;
        *(v12 - 1) = 0;
        v13[4] = v17;
        *v12 = 0;
        v18 = (void *)*(v12 - 2);
        if ( v18 )
        {
          *(v12 - 1) = 0;
          sub_453A20(v18);
          v10 = v32;
          *(v12 - 2) = 0;
          *v12 = 0;
        }
        v19 = (void *)*(v12 - 6);
        if ( v19 )
        {
          *(v12 - 5) = 0;
          sub_453A20(v19);
          v10 = v32;
          *(v12 - 6) = 0;
          *(v12 - 4) = 0;
        }
        v11 += 8;
        v12 += 8;
        v13 += 8;
        v32 = --v10;
      }
      while ( v10 >= 0 );
      v2 = (int)this;
      v5 = this + 1;
    }
    sub_453A20(*(void **)v2);
    *(_DWORD *)v2 = v30;
    *(_DWORD *)(v2 + 8) = v29;
  }
  result = (_DWORD *)(*(_DWORD *)v2 + 32 * *v5);
  *result = v28;
  result[1] = v21;
  result[2] = v22;
  result[3] = v23;
  result[4] = v27;
  result[5] = v24;
  result[6] = v25;
  result[7] = v26;
  ++*v5;
  return result;
}
