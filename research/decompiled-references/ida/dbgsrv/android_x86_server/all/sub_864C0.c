/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_864C0
// Address: 0x000864C0

//----- (000864C0) --------------------------------------------------------
int __cdecl sub_864C0(int a1, int a2, int off, unsigned int a4, int a5)
{
  __int64 v5; // rdi
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // esi
  _DWORD *v17; // edi
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // edx
  char *v23; // eax
  char *v24; // esi
  int v25; // ecx
  int v26; // esi
  int v27; // edx
  unsigned int v28; // edx
  int v29; // edx
  int v30; // esi
  int v31; // esi
  bool v32; // zf
  int v33; // edi
  int v34; // eax
  int v35; // edi
  int v36; // edx
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // esi
  int v40; // eax
  int v41; // edi
  __int64 v43; // [esp-10h] [ebp-6Ch]
  bool v44; // [esp+8h] [ebp-54h]
  int v45; // [esp+8h] [ebp-54h]
  int v46; // [esp+8h] [ebp-54h]
  int v47; // [esp+8h] [ebp-54h]
  int v48; // [esp+Ch] [ebp-50h]
  int v49; // [esp+Ch] [ebp-50h]
  int v50; // [esp+10h] [ebp-4Ch]
  int v51; // [esp+10h] [ebp-4Ch]
  bool v52; // [esp+14h] [ebp-48h]
  bool v53; // [esp+14h] [ebp-48h]
  int v54; // [esp+18h] [ebp-44h]
  int v55; // [esp+18h] [ebp-44h]
  void **v56; // [esp+1Ch] [ebp-40h]
  int v57; // [esp+20h] [ebp-3Ch]
  int v58; // [esp+24h] [ebp-38h]
  unsigned int v59; // [esp+28h] [ebp-34h]
  char *v60; // [esp+2Ch] [ebp-30h]
  int v61; // [esp+38h] [ebp-24h] BYREF
  int v62; // [esp+3Ch] [ebp-20h]
  unsigned int v63; // [esp+40h] [ebp-1Ch]
  unsigned int v64; // [esp+48h] [ebp-14h]

  v5 = off;
  v64 = __readgsdword(0x14u);
  *(_DWORD *)(a1 + 8) = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v6 = *(_DWORD *)(a1 + 112);
  v44 = v6 == *(_DWORD *)(a1 + 116);
  v52 = v6 < 0x1000;
  qlseek(a2, off, 0);
  if ( off == -1 )
  {
    LODWORD(v5) = qlseek(a2, 0, 1);
    HIDWORD(v5) = v7;
  }
  LODWORD(v8) = qlsize(a2);
  v9 = v8 - v5;
  if ( (HIDWORD(v9) | HIDWORD(v5)) < 0 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    if ( a4 <= 0x6666666 && v9 >= 40 * a4 )
    {
      v11 = a4;
      goto LABEL_9;
    }
    v10 = v9 / 40;
  }
  v11 = v10;
  if ( sub_44030() != 1 )
    sub_43A00(0);
LABEL_9:
  v53 = v44 && v52;
  v50 = v11;
  if ( v11 <= 0 )
  {
LABEL_19:
    v17 = (_DWORD *)a1;
    if ( v53 || (v54 = 512, *(_DWORD *)(a1 + 56) == 23126) )
    {
      v46 = (*(int (__cdecl **)(int))(*(_DWORD *)a5 + 4))(a5);
      if ( v46 )
        goto LABEL_67;
      v54 = 512;
      if ( v53 )
        v54 = *(_DWORD *)(a1 + 116);
    }
    if ( (unsigned __int16)(*(_WORD *)(a1 + 148) - 10) < 4u || *(_DWORD *)(a1 + 56) == 23126 )
      v54 = 1;
    v56 = (void **)(a1 + 4);
    if ( v11 <= 0 )
    {
      v20 = 0;
      if ( *(_DWORD *)(a1 + 56) != 23126 )
        goto LABEL_51;
    }
    else
    {
      v55 = -v54;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      do
      {
        v58 = v19;
        v59 = v20;
        v47 = v18;
        v48 = v61;
        v57 = v55 & *(_DWORD *)(v61 + v18 + 20);
        v21 = v17[2];
        v22 = v21 + 1;
        if ( v17[3] >= (unsigned int)(v21 + 1) )
        {
          v24 = (char *)*v56;
        }
        else
        {
          v23 = (char *)qvector_reserve((int)v56, *v56, v21 + 1, 0x10u);
          v17[1] = v23;
          v21 = v17[2];
          v22 = v21 + 1;
          v24 = v23;
        }
        v60 = v24;
        v17[2] = v22;
        v25 = 16 * v21;
        *(_DWORD *)&v24[v25] = *(_DWORD *)(v48 + v47 + 12);
        v26 = *(_DWORD *)(v48 + v47 + 8);
        if ( !v26 )
          v26 = *(_DWORD *)(v48 + v47 + 16);
        v27 = *(_DWORD *)(a1 + 112);
        if ( !v27 )
          v27 = 1;
        v28 = (v26 + v27 - 1) & -v27;
        if ( *(_DWORD *)(v48 + v47 + 16) < v28 )
          v28 = *(_DWORD *)(v48 + v47 + 16);
        *(_DWORD *)&v60[v25 + 12] = v28;
        v29 = *(_DWORD *)(v48 + v47 + 12) + v28;
        if ( (unsigned __int16)(*(_WORD *)((char *)&off_13AD6C + a1 - 1289432) - 10) >= 4u )
        {
          v30 = 511;
          if ( *(_DWORD *)(a1 + 112) != 4096 )
          {
            v31 = *(_DWORD *)(a1 + 116);
            v32 = v31 == 0;
            v30 = v31 - 1;
            if ( v32 )
              v30 = 511;
          }
          v29 = ~v30 & (v30 + v29);
        }
        *(_DWORD *)&v60[v25 + 4] = v29;
        v33 = v57;
        *(_DWORD *)&v60[v25 + 8] = v57;
        v11 = v50;
        if ( *(_DWORD *)(a1 + 56) == 23126 )
        {
          *(_DWORD *)&v60[v25 + 8] = v57 + 40 - *(unsigned __int16 *)(a1 + 22);
          v33 = v57;
        }
        v34 = (**(int (__cdecl ***)(int, int, int))a5)(a5, v48 + v47, v33);
        v20 = v59;
        if ( v34 )
        {
          v46 = v34;
          goto LABEL_67;
        }
        if ( v59 < *(_DWORD *)(v48 + v47 + 12) + *(_DWORD *)(v48 + v47 + 8) )
          v20 = *(_DWORD *)(v48 + v47 + 12) + *(_DWORD *)(v48 + v47 + 8);
        v19 = v58 + 1;
        v18 = v47 + 40;
        v17 = (_DWORD *)a1;
      }
      while ( v58 + 1 < v50 );
      if ( *(_DWORD *)(a1 + 56) != 23126 )
        goto LABEL_51;
    }
    v17[34] = v20;
LABEL_51:
    v46 = 0;
    if ( !v11 || v53 )
    {
      v35 = qlsize(a2);
      v36 = *(_DWORD *)(a1 + 136);
      if ( (unsigned __int16)(*(_WORD *)(a1 + 148) - 10) >= 4u )
      {
        v37 = 511;
        if ( *(_DWORD *)(a1 + 112) != 4096 )
        {
          v38 = *(_DWORD *)(a1 + 116);
          v32 = v38 == 0;
          v37 = v38 - 1;
          if ( v32 )
            v37 = 511;
        }
        v36 = ~v37 & (v37 + v36);
      }
      v49 = v36;
      v39 = *(_DWORD **)(a1 + 4);
      v40 = *(_DWORD *)(a1 + 8);
      v51 = v35;
      if ( *(_DWORD *)(a1 + 12) >= (unsigned int)(v40 + 1) )
      {
        v41 = a1;
      }
      else
      {
        v39 = qvector_reserve((int)v56, v39, v40 + 1, 0x10u);
        v41 = a1;
        *(_DWORD *)(a1 + 4) = v39;
        v40 = *(_DWORD *)(a1 + 8);
      }
      memmove(v39 + 4, v39, 16 * v40);
      *v39 = 0;
      v39[1] = v49;
      v39[2] = 0;
      v39[3] = v51;
      ++*(_DWORD *)(v41 + 8);
    }
    goto LABEL_67;
  }
  v12 = 0;
  while ( 1 )
  {
    v45 = v12;
    v13 = v62;
    v14 = v62 + 1;
    if ( v63 >= v62 + 1 )
    {
      v15 = (_DWORD *)v61;
    }
    else
    {
      v15 = qvector_reserve((int)&v61, (void *)v61, v62 + 1, 0x28u);
      v61 = (int)v15;
      v13 = v62;
      v14 = v62 + 1;
    }
    v62 = v14;
    v16 = 5 * v13;
    HIDWORD(v43) = &v15[10 * v13];
    LODWORD(v43) = a2;
    if ( qlread(v43, 0x28u) != 40 )
      break;
    if ( v15[2 * v16 + 3] != v15[2 * v16 + 5] || v15[2 * v16 + 2] > v15[2 * v16 + 4] )
      v53 = 0;
    v12 = v45 + 1;
    v11 = v50;
    if ( v45 + 1 >= v50 )
      goto LABEL_19;
  }
  v46 = -1;
LABEL_67:
  if ( v61 )
  {
    v62 = 0;
    qfree((void *)v61);
    v61 = 0;
    v63 = 0;
  }
  return v46;
}
// 86552: variable 'v7' is possibly undefined
// 8656B: variable 'v8' is possibly undefined
// 13AD6C: using guessed type _UNKNOWN *off_13AD6C;
