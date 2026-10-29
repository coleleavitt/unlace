/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8082980
// Address: 0x08082980

//----- (08082980) --------------------------------------------------------
unsigned int __cdecl sub_8082980(int a1, int a2, _BYTE *a3, int a4)
{
  unsigned int v4; // esi
  unsigned int result; // eax
  const void *v6; // ecx
  size_t v7; // esi
  int *v8; // eax
  unsigned int v9; // esi
  _BYTE *v10; // ecx
  int *v11; // eax
  int v12; // esi
  void (__cdecl *v13)(int, int, int, int); // eax
  int *v14; // eax
  _BYTE *v15; // edx
  int *v16; // eax
  size_t v17; // edx
  _BYTE *v18; // [esp-40h] [ebp-40h]
  _BYTE *v19; // [esp-40h] [ebp-40h]
  const void *v20; // [esp-40h] [ebp-40h]
  int v21; // [esp-3Ch] [ebp-3Ch]
  int *v22; // [esp-2Ch] [ebp-2Ch] BYREF
  _BYTE *v23; // [esp-28h] [ebp-28h]
  int v24; // [esp-24h] [ebp-24h]
  unsigned int v25; // [esp-20h] [ebp-20h]

  v4 = *(_DWORD *)(a1 + 92);
  v25 = __readgsdword(0x14u);
  if ( v4 < (unsigned int)a3 )
  {
    v6 = *(const void **)(a1 + 88);
    if ( v4 < (unsigned int)v6 )
      goto LABEL_30;
    v22 = nullptr;
    v23 = nullptr;
    v24 = 0;
    v7 = v4 - (_DWORD)v6;
    if ( !v7 )
      goto LABEL_6;
    v16 = nullptr;
    v17 = v7 + 1;
    if ( v7 != -1 )
    {
      v20 = v6;
      v16 = (int *)sub_80CF920((int)&v22, nullptr, v7 + 1, 1u);
      v6 = v20;
      v17 = v7 + 1;
      v22 = v16;
    }
    v23 = (_BYTE *)v17;
    memmove(v16, v6, v7);
    *((_BYTE *)v22 + v7) = 0;
    if ( v23 )
      v8 = v22;
    else
LABEL_6:
      v8 = &dword_80DDFD8;
    v21 = sub_80C7470(v8);
    if ( v22 )
    {
      v23 = nullptr;
      sub_80CF780(v22);
    }
    v9 = *(_DWORD *)(a1 + 92);
    if ( (unsigned int)a3 < v9 )
    {
LABEL_30:
      if ( v25 == __readgsdword(0x14u) )
        sub_8082950();
LABEL_25:
      sub_80D7AB0();
    }
    v22 = nullptr;
    v23 = nullptr;
    v24 = 0;
    v10 = &a3[-v9];
    if ( a3 == (_BYTE *)v9 )
      goto LABEL_11;
    v14 = nullptr;
    v15 = v10 + 1;
    if ( v10 != (_BYTE *)-1 )
    {
      v19 = v10 + 1;
      v14 = (int *)sub_80CF920((int)&v22, nullptr, (unsigned int)(v10 + 1), 1u);
      v10 = &a3[-v9];
      v15 = v19;
      v22 = v14;
    }
    v23 = v15;
    v18 = v10;
    memmove(v14, (const void *)v9, (size_t)v10);
    v18[(_DWORD)v22] = 0;
    if ( !v23 )
LABEL_11:
      v11 = &dword_80DDFD8;
    else
      v11 = v22;
    v12 = sub_80C7470(v11);
    if ( v22 )
    {
      v23 = nullptr;
      sub_80CF780(v22);
    }
    v13 = *(void (__cdecl **)(int, int, int, int))(*(_DWORD *)a2 + 8);
    if ( (char *)v13 != (char *)((char *)&qword_811CFF4 - 632612) )
      v13(a2, v21, v12, a4);
    *(_DWORD *)(a1 + 92) = a3;
  }
  result = v25 - __readgsdword(0x14u);
  if ( result )
    goto LABEL_25;
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
