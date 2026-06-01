/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7620
// Address: 0x080C7620

//----- (080C7620) --------------------------------------------------------
int __cdecl sub_80C7620(int a1, int a2, int a3)
{
  char **v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // edx
  char **v6; // edi
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ebp
  unsigned int v11; // edx
  int v12; // ecx
  char *v13; // eax
  int v15; // ebp
  unsigned int v16; // edx
  int v17; // ecx
  char *v18; // eax
  void *v19; // eax
  int v20; // [esp+0h] [ebp-34h]
  __int16 v21; // [esp+8h] [ebp-2Ch]
  unsigned int v22; // [esp+8h] [ebp-2Ch]
  bool v23; // [esp+Ch] [ebp-28h]
  int v24; // [esp+10h] [ebp-24h]
  unsigned int v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+14h] [ebp-20h]

  v3 = (char **)a1;
  v4 = *(_DWORD *)(a1 + 8);
  if ( a3 <= 0 )
  {
    if ( v4 > 0xF )
      goto LABEL_24;
    v5 = 16;
LABEL_23:
    v19 = sub_80CF920(a1, *(void **)a1, v5, 2u);
    v3 = (char **)a1;
    *(_DWORD *)a1 = v19;
LABEL_24:
    if ( !a3 )
      return 1;
    goto LABEL_3;
  }
  v5 = a3;
  if ( v4 < a3 )
    goto LABEL_23;
LABEL_3:
  v20 = 0;
  v6 = v3;
  v23 = a3 >= 0;
  while ( 1 )
  {
    v7 = sub_80C7170((unsigned __int8 **)&a2);
    v8 = v7;
    if ( !v7 )
    {
      if ( a3 < 0 )
        return 1;
      ++a2;
      v9 = (int)v6[1];
LABEL_7:
      v10 = v9;
      if ( !v9 )
        goto LABEL_17;
      goto LABEL_8;
    }
    if ( v7 == -1 )
      return 0;
    v15 = (int)v6[1];
    v9 = v15;
    if ( v8 <= 0xFFFF )
      goto LABEL_7;
    v8 -= 0x10000;
    v21 = (v8 >> 10) & 0x3FF | 0xD800;
    if ( v15 )
    {
      v16 = v15 + 1;
      v17 = 2 * v15;
      v18 = *v6;
      v15 = 2 * v15 - 2;
      if ( (unsigned int)v6[2] >= v16 )
        goto LABEL_16;
    }
    else
    {
      v18 = *v6;
      v17 = 2;
      v16 = 2;
      if ( (unsigned int)v6[2] >= 2 )
        goto LABEL_16;
    }
    v26 = v17;
    v25 = v16;
    v18 = (char *)sub_80CF920((int)v6, v18, v16, 2u);
    v17 = v26;
    v16 = v25;
    *v6 = v18;
LABEL_16:
    v6[1] = (char *)v16;
    LOWORD(v8) = v8 & 0x3FF | 0xDC00;
    *(_WORD *)&v18[v15] = v21;
    *(_WORD *)&(*v6)[v17] = 0;
    v10 = (int)v6[1];
    if ( !v10 )
    {
LABEL_17:
      v13 = *v6;
      v12 = 2;
      v11 = 2;
      if ( (unsigned int)v6[2] >= 2 )
        goto LABEL_9;
      goto LABEL_18;
    }
LABEL_8:
    v11 = v10 + 1;
    v12 = 2 * v10;
    v13 = *v6;
    v10 = 2 * v10 - 2;
    if ( (unsigned int)v6[2] >= v11 )
      goto LABEL_9;
LABEL_18:
    v24 = v12;
    v22 = v11;
    v13 = (char *)sub_80CF920((int)v6, v13, v11, 2u);
    v12 = v24;
    v11 = v22;
    *v6 = v13;
LABEL_9:
    v6[1] = (char *)v11;
    *(_WORD *)&v13[v10] = v8;
    *(_WORD *)&(*v6)[v12] = 0;
    if ( a3 <= ++v20 && v23 )
      return 1;
  }
}
