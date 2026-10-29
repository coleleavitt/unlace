/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_209A0
// Address: 0x000209A0

//----- (000209A0) --------------------------------------------------------
_DWORD *__userpurge sub_209A0@<eax>(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // ebx
  int v8; // ecx
  int v9; // edx
  bool v10; // zf
  unsigned int v11; // edx
  int v12; // edi
  char *v13; // esi
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // edi
  int v20; // ecx
  unsigned int v21; // ecx
  _DWORD *v22; // ebx
  int v23; // esi
  int v24; // ecx
  unsigned int v25; // ecx
  _DWORD *v26; // esi
  char *v27; // eax
  int v28; // esi
  unsigned int v29; // edi
  int v30; // ebx
  int v31; // ecx
  unsigned int v32; // edi
  _DWORD *v33; // eax
  _DWORD *v34; // ecx
  int v36; // ecx
  int v37; // esi
  bool v38; // cf
  int v39; // eax
  _DWORD *v40; // ebx
  unsigned int v41; // eax
  unsigned int v42; // edi
  char *v43; // eax
  _DWORD *v44; // eax
  _DWORD *v46; // [esp+20h] [ebp-6Ch]
  _DWORD *v47; // [esp+20h] [ebp-6Ch]
  unsigned int v48; // [esp+24h] [ebp-68h]
  char v49; // [esp+28h] [ebp-64h]
  _DWORD *v50; // [esp+2Ch] [ebp-60h]
  _DWORD *v51; // [esp+30h] [ebp-5Ch]
  int v52; // [esp+3Ch] [ebp-50h]
  __int64 v53[2]; // [esp+58h] [ebp-34h] BYREF
  _DWORD *v54; // [esp+68h] [ebp-24h]
  char *v55; // [esp+6Ch] [ebp-20h]
  _DWORD *v56; // [esp+70h] [ebp-1Ch]
  _DWORD *v57; // [esp+74h] [ebp-18h]
  unsigned int v58; // [esp+78h] [ebp-14h]

  v58 = __readgsdword(0x14u);
  v4 = *(_DWORD *)(a2 + 4);
  v52 = v4;
  v5 = (_DWORD *)(v4 + 4 * (*(_DWORD *)(a2 + 16) / 0x5Du));
  if ( *(_DWORD *)(a2 + 8) == v4 )
    v6 = nullptr;
  else
    v6 = (_DWORD *)(*v5 + 44 * (*(_DWORD *)(a2 + 16) % 0x5Du));
  v7 = v5;
  v46 = v6;
  if ( a4 == v6 )
  {
    v49 = 1;
    v14 = 0;
    v13 = (char *)v6;
  }
  else
  {
    v8 = 93 * (a3 - v5) - 1171354717 * (((int)a4 - *a3) >> 2);
    v9 = ((int)v6 - *v5) / -44;
    v10 = v8 + v9 == 0;
    v11 = v8 + v9;
    v51 = v5;
    if ( v10 )
    {
      v14 = 0;
      v49 = 1;
      v13 = (char *)v6;
    }
    else
    {
      v12 = v11 - 1171354717 * (((int)v6 - *v5) >> 2);
      if ( v12 <= 0 )
      {
        v15 = 92 - v12;
        v16 = (92 - v12) / -93;
        v17 = 93 * (v15 / 93) - v15;
        v18 = v7;
        v7 += v16;
        v13 = (char *)&dword_13BCA8[11 * v17 - 322358] + v18[v16];
      }
      else
      {
        v7 = &v5[v12 / 0x5Du];
        v13 = (char *)(*v7 + 44 * (v12 % 0x5Du));
      }
      v49 = 0;
      v14 = v11;
    }
    v19 = *(_DWORD *)(a2 + 20);
    if ( v14 > (unsigned int)(v19 - 1) >> 1 )
    {
      v48 = v14;
      v20 = -1171354717 * ((int)&v13[-*v7] >> 2);
      v50 = v7;
      if ( (int)&v13[-*v7] < -43 )
      {
        v30 = 91 - v20;
        v31 = (91 - v20) / -93;
        v22 = (int *)((char *)&dword_13BCA8[11 * (93 * (v30 / 93) - v30) - 322358] + v50[v31]);
        v47 = &v50[v31];
      }
      else
      {
        v21 = v20 + 1;
        v47 = &v7[v21 / 0x5D];
        v22 = (_DWORD *)(*v47 + 44 * (v21 % 0x5D));
      }
      v32 = *(_DWORD *)(a2 + 16) + v19;
      v33 = (_DWORD *)(v52 + 4 * (v32 / 0x5D));
      if ( *(_DWORD *)(a2 + 8) == v52 )
        v34 = nullptr;
      else
        v34 = (_DWORD *)(*v33 + 44 * (v32 % 0x5D));
      sub_2EE50(v53, v47, v22, v33, v34, v50, (int)v13);
      free_debug_event((_DWORD *)HIDWORD(v53[0]));
      v36 = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = v36 - 1;
      v37 = 93 * ((*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2) - 1;
      if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(a2 + 4) )
        v37 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4);
      v29 = *(_DWORD *)(a2 + 16);
      v38 = v37 - (v36 + v29 - 1) < 0xBA;
      v28 = a2;
      if ( !v38 )
      {
        operator delete(*(void **)(*(_DWORD *)(a2 + 8) - 4));
        *(_DWORD *)(a2 + 8) -= 4;
        v29 = *(_DWORD *)(a2 + 16);
      }
      goto LABEL_29;
    }
    v6 = v46;
    v5 = v51;
  }
  v48 = v14;
  v56 = v5;
  v57 = v6;
  v54 = v7;
  v55 = v13;
  v23 = (int)&v13[-*v7];
  v24 = -1171354717 * (v23 >> 2);
  if ( v23 < -43 )
  {
    v26 = &v7[(91 - v24) / -93];
    v6 = v46;
    v27 = (char *)&dword_13BCA8[11 * (93 * ((91 - v24) / 93) - (91 - v24)) - 322358] + *v26;
  }
  else
  {
    v25 = v24 + 1;
    v26 = &v7[v25 / 0x5D];
    v27 = (char *)(*v26 + 44 * (v25 % 0x5D));
  }
  v53[1] = __PAIR64__((unsigned int)v27, (unsigned int)v26);
  sub_2EC30(v53, v56, (int)v57, v54, (int)v55, __SPAIR64__((unsigned int)v27, (unsigned int)v26));
  free_debug_event(v6);
  v28 = a2;
  --*(_DWORD *)(a2 + 20);
  v29 = *(_DWORD *)(a2 + 16) + 1;
  *(_DWORD *)(a2 + 16) = v29;
  if ( v29 >= 0xBA )
  {
    operator delete(**(void ***)(a2 + 4));
    *(_DWORD *)(a2 + 4) += 4;
    v29 = *(_DWORD *)(a2 + 16) - 93;
    *(_DWORD *)(a2 + 16) = v29;
  }
LABEL_29:
  v39 = *(_DWORD *)(v28 + 4);
  v40 = (_DWORD *)(v39 + 4 * (v29 / 0x5D));
  if ( *(_DWORD *)(v28 + 8) == v39 )
    v41 = 0;
  else
    v41 = *v40 + 44 * (v29 % 0x5D);
  a1[1] = v41;
  *a1 = v40;
  if ( !v49 )
  {
    v42 = v48 - 1171354717 * ((int)(v41 - *v40) >> 2);
    if ( (int)v42 <= 0 )
    {
      v44 = &v40[(int)(92 - v42) / -93];
      *a1 = v44;
      v43 = (char *)&dword_13BCA8[11 * (93 * ((int)(92 - v42) / 93) - (92 - v42)) - 322358] + *v44;
    }
    else
    {
      *a1 = &v40[v42 / 0x5D];
      v43 = (char *)(v40[v42 / 0x5D] + 44 * (v42 % 0x5D));
    }
    a1[1] = v43;
  }
  return a1;
}
// 13BCA8: using guessed type int dword_13BCA8[6];
