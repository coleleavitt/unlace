/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805F540
// Address: 0x0805F540

//----- (0805F540) --------------------------------------------------------
int __cdecl sub_805F540(int a1, unsigned int a2, char *a3)
{
  void **v3; // esi
  char *v4; // edx
  unsigned int v5; // edi
  void *v6; // eax
  _DWORD *v7; // esi
  unsigned int *v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int *v11; // edi
  void *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // esi
  int v17; // ecx
  int v18; // edx
  size_t v19; // eax
  size_t v20; // edi
  unsigned int v22; // edx
  void *v23; // eax
  char *s; // [esp+4h] [ebp-40h]
  unsigned int v25; // [esp+8h] [ebp-3Ch]
  _DWORD *v26; // [esp+14h] [ebp-30h] BYREF
  unsigned int *v27; // [esp+20h] [ebp-24h] BYREF
  unsigned int v28; // [esp+24h] [ebp-20h]

  v3 = *(void ***)(a1 + 16);
  s = a3;
  v4 = (char *)v3[1];
  v28 = __readgsdword(0x14u);
  v5 = **(_DWORD **)(a1 + 12) + a2;
  a2 = v5;
  v6 = *v3;
  if ( v3[2] < v4 + 1 )
  {
    v6 = sub_80CF920((int)v3, v6, (unsigned int)(v4 + 1), 4u);
    v4 = (char *)v3[1];
    *v3 = v6;
  }
  *((_DWORD *)v6 + (_DWORD)v4) = v5;
  v3[1] = (char *)v3[1] + 1;
  v7 = *(_DWORD **)(a1 + 16);
  v8 = (unsigned int *)sub_80CF830(s);
  v9 = v7[4];
  v10 = v7[5];
  v27 = v8;
  v11 = v8;
  v12 = (void *)v7[3];
  if ( v10 < v9 + 1 )
  {
    v12 = sub_80CF920((int)(v7 + 3), v12, v9 + 1, 4u);
    v9 = v7[4];
    v7[3] = v12;
  }
  *((_DWORD *)v12 + v9) = v11;
  ++v7[4];
  v13 = *(_DWORD **)(a1 + 12);
  v14 = (_DWORD *)v13[10];
  v15 = v13 + 9;
  if ( !v14 )
  {
    v16 = v13 + 9;
LABEL_20:
    v27 = &a2;
    sub_805F370((int *)&v26, v13 + 8, v16, *((_DWORD *)&qword_811CFF4 - 25), &v27);
    v16 = v26;
    goto LABEL_12;
  }
  v16 = v13 + 9;
  do
  {
    while ( 1 )
    {
      v17 = v14[2];
      v18 = v14[3];
      if ( v14[4] < a2 )
        break;
      v16 = v14;
      v14 = (_DWORD *)v14[2];
      if ( !v17 )
        goto LABEL_10;
    }
    v14 = (_DWORD *)v14[3];
  }
  while ( v18 );
LABEL_10:
  v13 = *(_DWORD **)(a1 + 12);
  if ( v16 == v15 || a2 < v16[4] )
    goto LABEL_20;
LABEL_12:
  if ( s && (v19 = strlen(s), (v20 = v19) != 0) )
  {
    v22 = v19 + 1;
    v23 = (void *)v16[5];
    if ( v16[7] < v22 )
    {
      v25 = v22;
      v23 = sub_80CF920((int)(v16 + 5), v23, v22, 1u);
      v22 = v25;
      v16[5] = v23;
    }
    v16[6] = v22;
    memmove(v23, s, v20);
    *(_BYTE *)(v16[5] + v20) = 0;
  }
  else
  {
    v16[6] = 0;
  }
  if ( __ROR4__(989560465 * *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4), 4) <= 0x68DB8u )
    sub_8058E20(*(_DWORD *)(a1 + 8), "");
  if ( v28 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
