/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8082260
// Address: 0x08082260

//----- (08082260) --------------------------------------------------------
int __cdecl sub_8082260(int a1, int *a2, int a3)
{
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  const char *v5; // ecx
  const char *v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // esi
  void *v13; // eax
  char *v14; // ecx
  int v15; // ebx
  int v16; // esi
  int v17; // edi
  char *v18; // eax
  void *v19; // ebx
  void *v20; // eax
  void *v21; // eax
  void *v22; // edi
  int v23; // ecx
  const char *v25; // edx
  const char *v26; // eax
  size_t v27; // edi
  unsigned int v28; // esi
  void *v29; // eax
  size_t v30; // edx
  unsigned int v31; // edi
  size_t v32; // esi
  char *v33; // eax
  size_t v34; // edi
  bool v35; // zf
  _DWORD *v36; // edi
  char *v37; // eax
  const char *v38; // ecx
  const char *v39; // eax
  _DWORD *v40; // esi
  int v41; // eax
  _DWORD *v42; // ecx
  int v43; // eax
  int v44; // edx
  const char *v45; // ecx
  const char *v46; // edx
  const char *v47; // eax
  __m128i v48; // xmm0
  int v49; // esi
  void *v50; // ecx
  int v51; // eax
  void *v52; // edx
  size_t v53; // ecx
  void *v54; // eax
  _DWORD *v55; // esi
  const char *v56; // eax
  const char *v57; // edx
  unsigned int v58; // eax
  int v59; // [esp+8h] [ebp-4Ch]
  _DWORD *v60; // [esp+Ch] [ebp-48h]
  char *s1; // [esp+10h] [ebp-44h]
  _DWORD *v62; // [esp+14h] [ebp-40h]
  _DWORD *v63; // [esp+18h] [ebp-3Ch]
  int v64; // [esp+18h] [ebp-3Ch]
  size_t v65; // [esp+18h] [ebp-3Ch]
  void *v66; // [esp+1Ch] [ebp-38h]
  _DWORD *v67; // [esp+1Ch] [ebp-38h]
  void *v68; // [esp+1Ch] [ebp-38h]
  void *v69; // [esp+1Ch] [ebp-38h]
  char *v70; // [esp+1Ch] [ebp-38h]
  void *v71; // [esp+1Ch] [ebp-38h]
  int v72; // [esp+24h] [ebp-30h] BYREF
  int v73; // [esp+28h] [ebp-2Ch]
  void *ptr; // [esp+2Ch] [ebp-28h] BYREF
  size_t v75; // [esp+30h] [ebp-24h]
  size_t v76; // [esp+34h] [ebp-20h]
  unsigned int v77; // [esp+38h] [ebp-1Ch]

  v3 = *(_DWORD **)(a1 + 8);
  v77 = __readgsdword(0x14u);
  v60 = (_DWORD *)(a1 + 4);
  if ( !v3 )
    goto LABEL_42;
  v63 = (_DWORD *)(a1 + 4);
  v4 = v3;
  v66 = *(void **)(a3 + 4);
  while ( 1 )
  {
    v10 = v4[5];
    if ( !v66 )
      break;
    v5 = *(const char **)a3;
    if ( v10 )
      goto LABEL_13;
    v6 = (const char *)&dword_80DDFD8;
    v7 = v4;
LABEL_5:
    v8 = strcmp(v6, v5);
    v9 = (_DWORD *)v4[2];
    v4 = (_DWORD *)v4[3];
    if ( v8 >= 0 )
    {
      v63 = v7;
      v4 = v9;
    }
    if ( !v4 )
    {
      v4 = v63;
      goto LABEL_15;
    }
  }
  if ( v10 )
  {
LABEL_12:
    v5 = (const char *)&dword_80DDFD8;
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
    v63 = v4;
    v4 = (_DWORD *)v4[2];
    if ( *(_DWORD *)(v11 + 20) )
      goto LABEL_12;
  }
LABEL_15:
  if ( v60 != v4 )
  {
    if ( v4[5] )
    {
      v25 = (const char *)v4[4];
      v26 = (char *)&qword_811CFF4 - 258076;
      if ( v66 )
        goto LABEL_40;
    }
    else
    {
      if ( !v66 )
        goto LABEL_18;
      v25 = (char *)&qword_811CFF4 - 258076;
LABEL_40:
      v26 = *(const char **)a3;
    }
    if ( strcmp(v26, v25) >= 0 )
    {
LABEL_18:
      v64 = v4[7];
      v12 = *(_DWORD **)(*a2 + 4 * v64);
      if ( v12[17] )
      {
        v64 = -1;
      }
      else
      {
        v13 = (void *)v12[4];
        if ( v13 )
        {
          v12[5] = 0;
          sub_80CF780(v13);
          v12[4] = 0;
          v12[6] = 0;
        }
        v14 = (char *)v12[11];
        if ( v14 )
        {
          v15 = v12[12];
          if ( v15 )
          {
            v67 = v12;
            v16 = 0;
            v17 = v15;
            do
            {
              v18 = &v14[16 * v16];
              v19 = *((void **)v18 + 1);
              if ( v19 )
              {
                *((_DWORD *)v18 + 2) = 0;
                sub_80CF780(v19);
                v14 = (char *)v67[11];
              }
              ++v16;
            }
            while ( v17 != v16 );
            v12 = v67;
          }
          v12[12] = 0;
          sub_80CF780(v14);
          v12[11] = 0;
          v12[13] = 0;
        }
        v20 = (void *)v12[14];
        if ( v20 )
        {
          v12[15] = 0;
          sub_80CF780(v20);
          v12[14] = 0;
          v12[16] = 0;
        }
        v21 = (void *)v12[8];
        if ( v21 )
        {
          if ( v12[9] )
          {
            v68 = (void *)v12[9];
            v22 = nullptr;
            do
            {
              v23 = 5 * (_DWORD)v22;
              v22 = (char *)v22 + 1;
              sub_8089430((int)v21 + 4 * v23);
              v21 = (void *)v12[8];
            }
            while ( v68 != v22 );
          }
          v12[9] = 0;
          sub_80CF780(v21);
          v12[8] = 0;
          v12[10] = 0;
        }
        v12[3] = 0;
        v12[17] = -1;
      }
      goto LABEL_37;
    }
  }
LABEL_42:
  ptr = nullptr;
  v75 = 0;
  v27 = *(_DWORD *)(a1 + 36);
  v76 = 0;
  if ( !v27 )
  {
    v28 = 2;
    v29 = nullptr;
    goto LABEL_44;
  }
  v28 = v27 + 1;
  v76 = v27;
  ptr = sub_80CF8B0(v27);
  memcpy(ptr, *(const void **)(a1 + 32), v27);
  v75 = v27;
  v29 = ptr;
  v30 = v27 - 1;
  if ( v27 < v27 + 1 )
  {
    --v27;
LABEL_44:
    v29 = sub_80CF920((int)&ptr, v29, v28, 1u);
    v30 = v27;
    ptr = v29;
  }
  v75 = v28;
  *((_BYTE *)v29 + v30) = 46;
  *((_BYTE *)ptr + v30 + 1) = 0;
  v31 = *(_DWORD *)(a3 + 4);
  if ( v31 )
  {
    v32 = v31 - 1;
    if ( v31 != 1 )
    {
      v52 = (void *)v75;
      v53 = v31 - 1;
      if ( v75 )
      {
        v52 = (void *)(v75 - 1);
        v53 = v32 + v75 - 1;
        v31 += v75 - 1;
      }
      v54 = ptr;
      if ( v76 < v31 )
      {
        v65 = v53;
        v71 = v52;
        v54 = sub_80CF920((int)&ptr, ptr, v31, 1u);
        v53 = v65;
        v52 = v71;
        ptr = v54;
      }
      v75 = v31;
      *((_BYTE *)v54 + v53) = 0;
      memcpy((char *)ptr + (_DWORD)v52, *(const void **)a3, v32);
    }
  }
  v33 = (char *)&qword_811CFF4 - 258076;
  if ( v75 )
    v33 = (char *)ptr;
  v64 = sub_8080740(a2, v33);
  s1 = nullptr;
  v34 = *(_DWORD *)(a3 + 4);
  if ( v34 )
  {
    s1 = (char *)sub_80CF8B0(*(_DWORD *)(a3 + 4));
    memcpy(s1, *(const void **)a3, v34);
  }
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v62 = (_DWORD *)(a1 + 4);
    goto LABEL_73;
  }
  v35 = v34 == 0;
  v69 = (void *)v34;
  v36 = *(_DWORD **)(a1 + 8);
  v37 = s1;
  if ( v35 )
    v37 = (char *)&qword_811CFF4 - 258076;
  v59 = (int)v37;
  v62 = (_DWORD *)(a1 + 4);
  while ( 2 )
  {
    v43 = v36[5];
    if ( v69 )
    {
      if ( !v43 )
      {
        v38 = s1;
        v39 = (char *)&qword_811CFF4 - 258076;
        v40 = v36;
        goto LABEL_60;
      }
LABEL_67:
      v39 = (const char *)v36[4];
      v38 = (const char *)v59;
      v40 = v36;
LABEL_60:
      v41 = strcmp(v39, v38);
      v42 = (_DWORD *)v36[2];
      v36 = (_DWORD *)v36[3];
      if ( v41 >= 0 )
      {
        v62 = v40;
        v36 = v42;
      }
      if ( !v36 )
      {
        v34 = (size_t)v69;
        v45 = (char *)&qword_811CFF4 - 258076;
        goto LABEL_69;
      }
      continue;
    }
    break;
  }
  if ( v43 )
    goto LABEL_67;
  while ( 1 )
  {
    v44 = v36[2];
    if ( !v44 )
      break;
    v62 = v36;
    v36 = (_DWORD *)v36[2];
    if ( *(_DWORD *)(v44 + 20) )
      goto LABEL_67;
  }
  v55 = v36;
  v45 = (char *)&qword_811CFF4 - 258076;
  v34 = 0;
  v62 = v55;
LABEL_69:
  if ( v60 == v62 )
    goto LABEL_73;
  if ( v62[5] )
  {
    v46 = (const char *)v62[4];
    v47 = v45;
    if ( !v34 )
      goto LABEL_72;
    goto LABEL_79;
  }
  v46 = v45;
  if ( v34 )
  {
LABEL_79:
    v47 = s1;
LABEL_72:
    if ( strcmp(v47, v46) < 0 )
    {
LABEL_73:
      v48 = _mm_cvtsi32_si128(v34);
      v70 = (char *)operator new(0x20u);
      *((_DWORD *)v70 + 4) = s1;
      *(_QWORD *)(v70 + 20) = _mm_unpacklo_epi32(v48, v48).m128i_u64[0];
      *((_DWORD *)v70 + 7) = v64;
      sub_8081FC0(&v72, (_DWORD *)a1, v62, (int)(v70 + 16));
      v49 = v73;
      v50 = v70;
      if ( v73 )
      {
        if ( v72 || v60 == (_DWORD *)v73 )
        {
          v51 = 1;
        }
        else
        {
          v56 = (char *)&qword_811CFF4 - 258076;
          if ( *(_DWORD *)(v73 + 20) )
            v56 = *(const char **)(v73 + 16);
          v57 = (const char *)&dword_80DDFD8;
          if ( v34 )
            v57 = s1;
          v58 = strcmp(v57, v56);
          v50 = v70;
          v51 = v58 >> 31;
        }
        std::_Rb_tree_insert_and_rebalance(v51, v50, v49, v60);
        ++*(_DWORD *)(a1 + 20);
      }
      else if ( v70 )
      {
        if ( s1 )
        {
          *((_DWORD *)v70 + 5) = 0;
          sub_80CF780(s1);
          v50 = v70;
        }
        operator delete(v50, 0x20u);
      }
      goto LABEL_82;
    }
  }
  if ( s1 )
    sub_80CF780(s1);
LABEL_82:
  if ( ptr )
  {
    v75 = 0;
    sub_80CF780(ptr);
  }
LABEL_37:
  if ( v77 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v64;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
