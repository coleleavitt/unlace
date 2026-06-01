/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8085050
// Address: 0x08085050

//----- (08085050) --------------------------------------------------------
_DWORD *__cdecl sub_8085050(_DWORD *a1, int a2)
{
  const char **v2; // ecx
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  const char *v5; // ecx
  const char *v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // edx
  const char *v13; // ebx
  _DWORD *result; // eax
  const char *v15; // eax
  int v16; // eax
  int v17; // esi
  __int64 v18; // xmm1_8
  const char *v19; // ebx
  int v20; // ecx
  const char *v21; // edx
  unsigned int v22; // eax
  int v23; // eax
  void *v24; // eax
  _DWORD *v25; // edx
  int v26; // [esp+0h] [ebp-5Ch]
  _DWORD *v27; // [esp+0h] [ebp-5Ch]
  const char **v28; // [esp+0h] [ebp-5Ch]
  _DWORD *v29; // [esp+0h] [ebp-5Ch]
  _DWORD *v30; // [esp+0h] [ebp-5Ch]
  _DWORD *v31; // [esp+Ch] [ebp-50h]
  const char **v32; // [esp+Ch] [ebp-50h]
  _DWORD *v33; // [esp+Ch] [ebp-50h]
  int v34; // [esp+Ch] [ebp-50h]
  _DWORD *v35; // [esp+18h] [ebp-44h]
  _DWORD *v36; // [esp+28h] [ebp-34h] BYREF
  int v37; // [esp+2Ch] [ebp-30h]
  unsigned int v38; // [esp+3Ch] [ebp-20h]

  v38 = __readgsdword(0x14u);
  v2 = (const char **)a2;
  v3 = a1;
  v4 = (_DWORD *)a1[2];
  v35 = a1 + 1;
  if ( !v4 )
  {
    v12 = a1 + 1;
    goto LABEL_23;
  }
  v31 = a1 + 1;
  v26 = *(_DWORD *)(a2 + 4);
  while ( 1 )
  {
    v10 = v4[5];
    if ( !v26 )
      break;
    v5 = *(const char **)a2;
    if ( v10 )
      goto LABEL_13;
    v6 = (char *)&qword_811CFF4 - 258076;
    v7 = v4;
LABEL_5:
    v8 = strcmp(v6, v5);
    v9 = (_DWORD *)v4[2];
    v4 = (_DWORD *)v4[3];
    if ( v8 >= 0 )
    {
      v31 = v7;
      v4 = v9;
    }
    if ( !v4 )
    {
      v12 = v31;
      v3 = a1;
      v2 = (const char **)a2;
      goto LABEL_15;
    }
  }
  if ( v10 )
  {
LABEL_12:
    v5 = (char *)&qword_811CFF4 - 258076;
LABEL_13:
    v6 = (const char *)v4[4];
    v7 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v11 = v4[2];
    if ( !v11 )
      break;
    v31 = v4;
    v4 = (_DWORD *)v4[2];
    if ( *(_DWORD *)(v11 + 20) )
      goto LABEL_12;
  }
  v3 = a1;
  v2 = (const char **)a2;
  v12 = v4;
LABEL_15:
  if ( v35 == v12 )
    goto LABEL_23;
  if ( v12[5] )
  {
    v13 = (const char *)v12[4];
    v15 = (char *)&qword_811CFF4 - 258076;
    if ( v26 )
      goto LABEL_21;
  }
  else
  {
    v13 = (char *)&qword_811CFF4 - 258076;
    if ( !v26 )
      goto LABEL_18;
LABEL_21:
    v15 = *v2;
  }
  v32 = v2;
  v27 = v12;
  v16 = strcmp(v15, v13);
  v12 = v27;
  v2 = v32;
  if ( v16 < 0 )
  {
LABEL_23:
    v28 = v2;
    v33 = v12;
    v17 = operator new(0x30u);
    *(_BYTE *)(v17 + 28) = 2;
    v18 = *(_QWORD *)(v28 + 1);
    v19 = *v28;
    v28[1] = nullptr;
    *v28 = nullptr;
    v28[2] = nullptr;
    *(_DWORD *)(v17 + 16) = v19;
    *(_QWORD *)(v17 + 20) = v18;
    *(_OWORD *)(v17 + 32) = 0;
    sub_8084DB0(&v36, v3, v33, v17 + 16);
    v20 = v37;
    v12 = v36;
    if ( v37 )
    {
      if ( v35 == (_DWORD *)v37 || v36 )
      {
        v23 = 1;
      }
      else
      {
        v21 = (char *)&qword_811CFF4 - 258076;
        if ( *(_DWORD *)(v37 + 20) )
          v21 = *(const char **)(v37 + 16);
        v34 = v37;
        if ( !(_DWORD)v18 )
          v19 = (char *)&qword_811CFF4 - 258076;
        v22 = strcmp(v19, v21);
        v20 = v34;
        v23 = v22 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v23, v17, v20, v35);
      ++v3[5];
      v12 = (_DWORD *)v17;
    }
    else if ( v17 )
    {
      v29 = v36;
      sub_8089430(v17 + 28);
      v24 = *(void **)(v17 + 16);
      v25 = v29;
      if ( v24 )
      {
        *(_DWORD *)(v17 + 20) = 0;
        sub_80CF780(v24);
        v25 = v29;
      }
      v30 = v25;
      operator delete((void *)v17, 0x30u);
      v12 = v30;
    }
  }
LABEL_18:
  result = v12 + 7;
  if ( v38 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
