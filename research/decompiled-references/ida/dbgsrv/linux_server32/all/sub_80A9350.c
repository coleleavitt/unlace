/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A9350
// Address: 0x080A9350

//----- (080A9350) --------------------------------------------------------
int __cdecl sub_80A9350(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  char *v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  size_t v11; // ecx
  unsigned int v12; // esi
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  size_t v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // edx
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  unsigned int v22; // esi
  size_t v24; // ecx
  unsigned int v25; // edx
  int v26; // [esp+10h] [ebp-5Ch]
  unsigned int *v27; // [esp+14h] [ebp-58h]
  char *ptr; // [esp+1Ch] [ebp-50h]
  void *ptra; // [esp+1Ch] [ebp-50h]
  int v30; // [esp+28h] [ebp-44h]
  char *v31; // [esp+34h] [ebp-38h]
  char *v32; // [esp+34h] [ebp-38h]
  void *v33; // [esp+34h] [ebp-38h]
  void *v34; // [esp+34h] [ebp-38h]
  size_t v35; // [esp+38h] [ebp-34h]
  size_t v36; // [esp+38h] [ebp-34h]
  size_t v37; // [esp+38h] [ebp-34h]
  size_t v38; // [esp+38h] [ebp-34h]
  size_t v39; // [esp+38h] [ebp-34h]
  size_t v40; // [esp+38h] [ebp-34h]
  size_t na; // [esp+3Ch] [ebp-30h]
  size_t nc; // [esp+3Ch] [ebp-30h]
  size_t n; // [esp+3Ch] [ebp-30h]
  size_t nb; // [esp+3Ch] [ebp-30h]
  _BYTE src[3]; // [esp+42h] [ebp-2Ah] BYREF
  _BYTE v46[7]; // [esp+45h] [ebp-27h] BYREF
  _DWORD v47[8]; // [esp+4Ch] [ebp-20h] BYREF

  v6 = *(char **)a2;
  v47[0] = __readgsdword(0x14u);
  v7 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v7 + 1) )
  {
    v6 = (char *)sub_80CF920(a2, v6, v7 + 1, 1u);
    v7 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)a2 = v6;
  }
  v6[v7] = 1;
  ++*(_DWORD *)(a2 + 4);
  sub_80A6580((char **)a2, *(unsigned __int8 *)(a4 + 92));
  sub_80A6580((char **)a2, *(unsigned __int8 *)(a4 + 93));
  v8 = sub_80A9020(a5);
  sub_80A6680((char **)a2, v8, 0);
  sub_80A6580((char **)a2, *(_DWORD *)(a5 + 12));
  sub_80A6580((char **)a2, a6[1]);
  v30 = a6[1];
  if ( v30 > 0 )
  {
    v26 = 0;
    while ( 1 )
    {
      ptra = *(void **)(*a6 + 4 * v26);
      v27 = (unsigned int *)(*(_DWORD *)(a4 + 52) + 100 * (_DWORD)ptra);
      v21 = sub_80CDDF0(src, (unsigned int)v47, *v27, v27[1]) - src;
      v24 = v21;
      if ( v21 )
        break;
LABEL_9:
      v10 = sub_80CDDF0(src, (unsigned int)v47, v27[2], 0) - src;
      v11 = v10;
      if ( !v10 )
        goto LABEL_15;
      v12 = *(_DWORD *)(a2 + 4);
      v13 = v12 + v10;
      if ( __CFADD__(v12, v10) )
      {
        if ( v12 > 0x7FFFFFFE )
        {
          if ( v12 != 0x7FFFFFFF )
            *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
          goto LABEL_14;
        }
        v13 = 0x7FFFFFFF;
      }
      v32 = *(char **)a2;
      v14 = *(_DWORD *)(a2 + 4);
      if ( *(_DWORD *)(a2 + 8) < v13 )
      {
        nb = v11;
        v40 = v13;
        v32 = (char *)sub_80CF920(a2, v32, v13, 1u);
        v11 = nb;
        *(_DWORD *)a2 = v32;
        v13 = v40;
        v14 = *(_DWORD *)(a2 + 4);
      }
      nc = v11;
      v36 = v13;
      memset(&v32[v14], 0, v13 - v14);
      v11 = nc;
      *(_DWORD *)(a2 + 4) = v36;
LABEL_14:
      memcpy((void *)(*(_DWORD *)a2 + v12), src, v11);
LABEL_15:
      v15 = sub_80CDBD0(src, (unsigned int)v46, (unsigned __int16)ptra) - src;
      v16 = v15;
      if ( v15 )
      {
        v17 = *(_DWORD *)(a2 + 4);
        v18 = v17 + v15;
        if ( __CFADD__(v17, v15) )
        {
          if ( v17 <= 0x7FFFFFFE )
          {
            v18 = 0x7FFFFFFF;
            ptr = *(char **)a2;
            v19 = *(_DWORD *)(a2 + 4);
            if ( *(_DWORD *)(a2 + 8) < 0x7FFFFFFFu )
              goto LABEL_37;
            goto LABEL_18;
          }
          if ( v17 != 0x7FFFFFFF )
            *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
        }
        else
        {
          ptr = *(char **)a2;
          v19 = *(_DWORD *)(a2 + 4);
          if ( *(_DWORD *)(a2 + 8) >= v18 )
            goto LABEL_18;
LABEL_37:
          v38 = v16;
          v34 = (void *)v18;
          ptr = (char *)sub_80CF920(a2, ptr, v18, 1u);
          v16 = v38;
          *(_DWORD *)a2 = ptr;
          v18 = (unsigned int)v34;
          v19 = *(_DWORD *)(a2 + 4);
LABEL_18:
          v37 = v16;
          v33 = (void *)v18;
          memset(&ptr[v19], 0, v18 - v19);
          v16 = v37;
          *(_DWORD *)(a2 + 4) = v33;
        }
        memcpy((void *)(*(_DWORD *)a2 + v17), src, v16);
      }
      v20 = (char *)&dword_80DDFD8;
      if ( v27[4] )
        v20 = (char *)v27[3];
      sub_80A6780((char **)a2, v20);
      if ( v30 == ++v26 )
        goto LABEL_34;
    }
    v22 = *(_DWORD *)(a2 + 4);
    v25 = v22 + v21;
    if ( __CFADD__(v22, v21) )
    {
      if ( v22 > 0x7FFFFFFE )
      {
        if ( v22 != 0x7FFFFFFF )
          *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
LABEL_8:
        memcpy((void *)(*(_DWORD *)a2 + v22), src, v24);
        goto LABEL_9;
      }
      v25 = 0x7FFFFFFF;
    }
    v31 = *(char **)a2;
    v9 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 8) < v25 )
    {
      n = v24;
      v39 = v25;
      v31 = (char *)sub_80CF920(a2, v31, v25, 1u);
      v24 = n;
      *(_DWORD *)a2 = v31;
      v25 = v39;
      v9 = *(_DWORD *)(a2 + 4);
    }
    na = v24;
    v35 = v25;
    memset(&v31[v9], 0, v25 - v9);
    v24 = na;
    *(_DWORD *)(a2 + 4) = v35;
    goto LABEL_8;
  }
LABEL_34:
  if ( v47[0] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
