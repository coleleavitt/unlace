/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809F1A0
// Address: 0x0809F1A0

//----- (0809F1A0) --------------------------------------------------------
int __cdecl sub_809F1A0(int *a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebp
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned __int8 (__cdecl *v9)(int *, int, int); // edx
  int v10; // ecx
  __int64 *v11; // eax
  int result; // eax
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // ecx
  char *v16; // eax
  int i; // ebp
  void **v18; // ebx
  char *v19; // edx
  void *v20; // ebp
  void *v21; // edi
  void **v22; // esi
  int *v23; // eax
  void *v24; // ebx
  int v25; // ecx
  void **v26; // edx
  char *v27; // eax
  void *v28; // ebx
  void *v29; // edi
  void *v30; // esi
  void **v31; // ebp
  int *v32; // eax
  void *v33; // ebx
  _DWORD *v34; // eax
  _DWORD *v35; // ecx
  _DWORD *v36; // edi
  int v37; // ebp
  size_t v38; // edx
  int v39; // esi
  int *v40; // edi
  int v41; // esi
  int j; // ebp
  void *v43; // edx
  int v44; // eax
  void *v45; // eax
  int v46; // ebx
  int v47; // [esp+4h] [ebp-34h]
  int v48; // [esp+4h] [ebp-34h]
  _DWORD *v49; // [esp+4h] [ebp-34h]
  _DWORD *v50; // [esp+4h] [ebp-34h]
  _DWORD *v51; // [esp+8h] [ebp-30h]
  int v52; // [esp+8h] [ebp-30h]
  _DWORD *ptr; // [esp+Ch] [ebp-2Ch]
  _DWORD *ptra; // [esp+Ch] [ebp-2Ch]
  _DWORD *ptrd; // [esp+Ch] [ebp-2Ch]
  _DWORD *ptrb; // [esp+Ch] [ebp-2Ch]
  _DWORD *ptrc; // [esp+Ch] [ebp-2Ch]
  _DWORD *v58; // [esp+10h] [ebp-28h]
  _DWORD *v59; // [esp+10h] [ebp-28h]
  size_t n; // [esp+14h] [ebp-24h]
  _DWORD *v61; // [esp+18h] [ebp-20h]

  v2 = *(_DWORD **)((char *)a1 + (_DWORD)(&off_811D0AC - 33846269));
  v3 = (int *)((char *)a1 + (_DWORD)(&off_811D0A8 - 33846269));
  v51 = v3;
  if ( !v2 )
    return -1;
  do
  {
    while ( 1 )
    {
      v4 = v2[2];
      v5 = v2[3];
      if ( v2[4] < a2 )
        break;
      v3 = v2;
      v2 = (_DWORD *)v2[2];
      if ( !v4 )
        goto LABEL_6;
    }
    v2 = (_DWORD *)v2[3];
  }
  while ( v5 );
LABEL_6:
  if ( v51 == v3 )
    return -1;
  if ( v3[4] > a2 )
    return -1;
  v6 = v3[6];
  if ( !v6 )
    return -1;
  v7 = v3[5] + 24 * v6 - 24;
  v8 = *a1;
  v9 = *(unsigned __int8 (__cdecl **)(int *, int, int))((char *)&off_811D0E4 + *a1 - 135385076);
  if ( (char *)v9 != (char *)((char *)&qword_811CFF4 - 522644) )
  {
    if ( !v9(a1, a2, v7) )
      return -1;
    v8 = *a1;
  }
  (*(void (**)(void))((char *)&off_811D094 + v8 - 135385076))();
  if ( *(_BYTE *)(v7 + 20) )
  {
    v10 = *(_DWORD *)(v7 + 4);
    v11 = *(__int64 **)((char *)&off_811D0D0 + *a1 - 135385076);
    if ( v11 == (__int64 *)((char *)&qword_811CFF4 - 826516) )
    {
LABEL_12:
      sub_8058E20((int)a1, "Failed to restore %zu registers!\n", v10);
      return -1;
    }
    if ( !((unsigned __int8 (__cdecl *)(int *, int, _DWORD, int, _DWORD))v11)(a1, a2, 0, v10, *(_DWORD *)v7) )
    {
      v10 = *(_DWORD *)(v7 + 4);
      goto LABEL_12;
    }
  }
  v13 = v3[6];
  v14 = v3[5];
  v47 = *(_DWORD *)(v14 + 24 * v13 - 24 + 4);
  if ( !v47 )
  {
    if ( !v13 )
    {
LABEL_18:
      v15 = (_DWORD *)std::_Rb_tree_rebalance_for_erase(v3, v51);
      v16 = (char *)v15[5];
      if ( v16 )
      {
        v48 = v15[6];
        if ( v48 )
        {
          ptr = v15;
          for ( i = 0; i != v48; ++i )
          {
            v18 = (void **)&v16[24 * i];
            v19 = (char *)*v18;
            if ( *v18 )
            {
              if ( v18[1] )
              {
                v52 = i;
                v20 = v18[1];
                v21 = nullptr;
                v22 = v18;
                do
                {
                  v23 = (int *)&v19[16 * (_DWORD)v21];
                  if ( *v23 >= -1 )
                  {
                    v24 = (void *)v23[1];
                    if ( v24 )
                    {
                      v23[2] = 0;
                      sub_80CF780(v24);
                      v19 = (char *)*v22;
                    }
                  }
                  v21 = (char *)v21 + 1;
                }
                while ( v20 != v21 );
                i = v52;
                v18 = v22;
              }
              v18[1] = nullptr;
              sub_80CF780(v19);
              v16 = (char *)ptr[5];
            }
          }
          v15 = ptr;
        }
        v49 = v15;
        v15[6] = 0;
        sub_80CF780(v16);
        v15 = v49;
      }
      operator delete(v15, 0x20u);
      --*(int *)((char *)a1 + (_DWORD)(&off_811D0B8 - 33846269));
      goto LABEL_34;
    }
    v25 = v13 - 1;
    v3[6] = v13 - 1;
    v26 = (void **)(v14 + 24 * (v13 - 1));
    v27 = (char *)*v26;
    if ( *v26 )
    {
      v28 = v26[1];
      if ( v28 )
        goto LABEL_38;
      sub_80CF780(*v26);
      v25 = v3[6];
    }
LABEL_72:
    v44 = v25;
    goto LABEL_64;
  }
  ptrd = (_DWORD *)(v14 + 24 * v13 - 24);
  v34 = sub_80CF8B0(16 * v47);
  v35 = ptrd;
  v59 = v3;
  v36 = v34;
  v37 = 0;
  ptrb = v34;
  do
  {
    v39 = *v35 + 16 * v37;
    *v36 = -2;
    v36[1] = 0;
    v36[2] = 0;
    v36[3] = 0;
    if ( v36 != (_DWORD *)v39 )
    {
      if ( *(int *)v39 >= -1 )
      {
        v36[1] = 0;
        v36[2] = 0;
        v36[3] = 0;
        v38 = *(_DWORD *)(v39 + 8);
        if ( v38 )
        {
          v61 = v35;
          n = *(_DWORD *)(v39 + 8);
          v45 = sub_80CF8B0(v38);
          v36[1] = v45;
          v36[3] = n;
          memcpy(v45, *(const void **)(v39 + 4), n);
          v35 = v61;
          v36[2] = n;
        }
      }
      else
      {
        *(_QWORD *)(v36 + 1) = *(_QWORD *)(v39 + 4);
      }
      *v36 = *(_DWORD *)v39;
    }
    ++v37;
    v36 += 4;
  }
  while ( v47 != v37 );
  v3 = v59;
  v2 = ptrb;
  v25 = v59[6];
  if ( !v25 || (--v25, v46 = v59[5], v59[6] = v25, v26 = (void **)(v46 + 24 * v25), (v27 = (char *)*v26) == nullptr) )
  {
    if ( ptrb )
      goto LABEL_57;
    goto LABEL_72;
  }
  v28 = v26[1];
  if ( v28 )
  {
LABEL_38:
    ptra = v2;
    v29 = nullptr;
    v30 = v28;
    v58 = v3;
    v31 = v26;
    do
    {
      v32 = (int *)&v27[16 * (_DWORD)v29];
      if ( *v32 >= -1 )
      {
        v33 = (void *)v32[1];
        if ( v33 )
        {
          v32[2] = 0;
          sub_80CF780(v33);
        }
      }
      v29 = (char *)v29 + 1;
      v27 = (char *)*v31;
    }
    while ( v30 != v29 );
    v26 = v31;
    v2 = ptra;
    v3 = v58;
  }
  v26[1] = nullptr;
  sub_80CF780(v27);
  if ( v2 )
  {
    if ( !v47 )
    {
LABEL_63:
      sub_80CF780(v2);
      v44 = v3[6];
      goto LABEL_64;
    }
LABEL_57:
    ptrc = v2;
    v40 = v2;
    v41 = v47;
    v50 = v3;
    for ( j = 0; j != v41; ++j )
    {
      if ( *v40 >= -1 )
      {
        v43 = (void *)v40[1];
        if ( v43 )
        {
          v40[2] = 0;
          sub_80CF780(v43);
        }
      }
      v40 += 4;
    }
    v2 = ptrc;
    v3 = v50;
    goto LABEL_63;
  }
  v44 = v3[6];
LABEL_64:
  if ( !v44 )
    goto LABEL_18;
LABEL_34:
  result = 3;
  if ( a1[20] == a1[16] )
    return 1;
  return result;
}
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D094: using guessed type _UNKNOWN *off_811D094;
// 811D0A8: using guessed type _UNKNOWN *off_811D0A8;
// 811D0AC: using guessed type _UNKNOWN *off_811D0AC;
// 811D0B8: using guessed type _UNKNOWN *off_811D0B8;
// 811D0D0: using guessed type _UNKNOWN *off_811D0D0;
// 811D0E4: using guessed type _UNKNOWN *off_811D0E4;
