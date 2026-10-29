/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7130
// Address: 0x000B7130

//----- (000B7130) --------------------------------------------------------
char __cdecl sub_B7130(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  char *v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  char *v11; // esi
  char *v12; // edx
  int v13; // esi
  int v14; // edx
  int v15; // edi
  unsigned int v16; // edx
  unsigned int *v17; // edx
  char *v18; // ebx
  _DWORD *v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // esi
  _DWORD *v23; // esi
  int v24; // edx
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // esi
  int v28; // edx
  char *v29; // eax
  char *v30; // ecx
  bool v31; // zf
  char *v32; // ecx
  unsigned int v33; // edx
  int v34; // esi
  char *v35; // edx
  int v37; // eax
  bool v38; // cf
  char v39; // al
  char *v40; // edx
  unsigned int *v41; // edi
  char *v42; // esi
  int v43; // eax
  char *v44; // edi
  char *v45; // eax
  char *v46; // esi
  int v47; // eax
  int v48; // eax
  unsigned int *v49; // [esp-10h] [ebp-4Ch]
  unsigned int v50; // [esp-8h] [ebp-44h]
  int v51; // [esp+0h] [ebp-3Ch]
  int v52; // [esp+0h] [ebp-3Ch]
  unsigned int v53; // [esp+0h] [ebp-3Ch]
  int v54; // [esp+4h] [ebp-38h]
  char *v55; // [esp+4h] [ebp-38h]
  int v56; // [esp+4h] [ebp-38h]
  char *v57; // [esp+8h] [ebp-34h]
  int v58; // [esp+8h] [ebp-34h]
  int v59; // [esp+8h] [ebp-34h]
  void *v60; // [esp+8h] [ebp-34h]
  char *v61; // [esp+10h] [ebp-2Ch]
  void *v62; // [esp+10h] [ebp-2Ch]
  int v63; // [esp+10h] [ebp-2Ch]
  int v64; // [esp+14h] [ebp-28h]
  int v65; // [esp+18h] [ebp-24h] BYREF
  int v66; // [esp+1Ch] [ebp-20h]
  char v67; // [esp+20h] [ebp-1Ch]
  unsigned int v68; // [esp+28h] [ebp-14h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v68 = __readgsdword(0x14u);
  v6 = (char *)*a1;
  v51 = a1[1];
  if ( v51 )
  {
    v7 = a1[1];
    if ( *(_DWORD *)&v6[8 * v51 - 4] == *a2 )
    {
      if ( *(_BYTE *)(a3 + 16) )
      {
        v8 = *(_DWORD *)&v6[8 * v51 - 8];
        v66 = *(_DWORD *)&v6[8 * v51 - 4];
        v65 = v8;
        v67 = 1;
        v61 = v6;
        sub_B8FF0((unsigned int *)a3, (unsigned int)&v65);
        v7 = v51;
        v6 = v61;
        v4 = a2;
      }
      *(_DWORD *)&v6[8 * v7 - 4] = v4[1];
      v5 = a1;
      if ( !*(_BYTE *)(a3 + 16) )
        goto LABEL_59;
      v9 = v7;
      v10 = *(_DWORD *)&v6[8 * v7 - 8];
      v66 = *(_DWORD *)&v6[8 * v9 - 4];
      v65 = v10;
      goto LABEL_58;
    }
    if ( *(_DWORD *)&v6[8 * v51 - 4] < *a2 )
    {
      v13 = *a2;
      v54 = a2[1];
      v5 = a1;
      if ( a1[2] < (unsigned int)(v51 + 1) )
      {
        v6 = (char *)qvector_reserve((int)a1, v6, v51 + 1, 8u);
        v4 = a2;
        *a1 = v6;
      }
      v14 = a1[1];
      *(_DWORD *)&v6[8 * v14] = v13;
      *(_DWORD *)&v6[8 * v14 + 4] = v54;
      ++a1[1];
      v17 = (unsigned int *)a3;
      if ( !*(_BYTE *)(a3 + 16) )
        goto LABEL_59;
      goto LABEL_44;
    }
    v11 = &v6[8 * v51];
    v62 = (void *)*a1;
    v57 = v11;
    if ( 8 * v51 )
    {
      v15 = (8 * v51) >> 3;
      v16 = v15;
      do
      {
        v16 >>= 1;
        if ( *(_DWORD *)&v6[8 * v16 + 4] < *a2 )
        {
          v6 += 8 * v16 + 8;
          v16 = v15 + ~v16;
        }
        v15 = v16;
      }
      while ( v16 );
      v5 = a1;
      v12 = v6;
      v4 = a2;
    }
    else
    {
      v12 = (char *)*a1;
      v5 = a1;
    }
  }
  else
  {
    v11 = (char *)*a1;
    v57 = (char *)*a1;
    v62 = (void *)*a1;
    v12 = (char *)*a1;
  }
  v18 = v11;
  if ( v12 == v11 )
  {
    v27 = *v4;
    v28 = v4[1];
    if ( v5[2] < (unsigned int)(v51 + 1) )
    {
      v50 = v51 + 1;
      v52 = v4[1];
      v29 = (char *)qvector_reserve((int)v5, v62, v50, 8u);
      v28 = v52;
      *v5 = v29;
      v18 = &v29[8 * v5[1]];
      v4 = a2;
    }
    *(_DWORD *)v18 = v27;
    *((_DWORD *)v18 + 1) = v28;
    ++v5[1];
    v17 = (unsigned int *)a3;
    if ( !*(_BYTE *)(a3 + 16) )
      goto LABEL_59;
  }
  else
  {
    v19 = v4;
    v20 = *v4;
    v21 = v19[1];
    v22 = *(_DWORD *)v12;
    if ( v20 >= *(_DWORD *)v12 && v21 <= *((_DWORD *)v12 + 1) )
      return 0;
    v55 = v12;
    if ( v22 <= v21 )
    {
      v38 = v22 < v20;
      v53 = v21;
      v30 = (char *)a2;
      if ( v38 )
        v30 = v12;
      v63 = *(_DWORD *)v30;
      v31 = v57 == v12;
      v59 = v57 - v12;
      v32 = v12;
      if ( !v31 )
      {
        v33 = v59 >> 3;
        v32 = v55;
        v34 = v59 >> 3;
        do
        {
          v33 >>= 1;
          if ( v21 >= *(_DWORD *)&v32[8 * v33 + 4] )
          {
            v32 += 8 * v33 + 8;
            v33 = v34 + ~v33;
          }
          v34 = v33;
        }
        while ( v33 );
      }
      if ( v32 == v18 )
      {
        v35 = v55;
      }
      else
      {
        v35 = v55;
        if ( *(_DWORD *)v32 <= v21 )
        {
          v53 = *((_DWORD *)v32 + 1);
          v32 += 8;
        }
        v18 = v32;
      }
      v3 = a3;
      v38 = v35 < v18;
      v39 = *(_BYTE *)(a3 + 16);
      if ( v35 == v18 )
      {
        if ( v39 )
        {
          v47 = *(_DWORD *)v35;
          v66 = *((_DWORD *)v35 + 1);
          v65 = v47;
          v67 = 1;
          sub_B8FF0((unsigned int *)a3, (unsigned int)&v65);
          v35 = v55;
        }
      }
      else
      {
        v40 = v18;
        if ( v38 && v39 )
        {
          v41 = (unsigned int *)a3;
          v42 = v55;
          do
          {
            v43 = *(_DWORD *)v42;
            v66 = *((_DWORD *)v42 + 1);
            v65 = v43;
            v67 = 1;
            v49 = v41;
            v44 = v40;
            sub_B8FF0(v49, (unsigned int)&v65);
            v40 = v44;
            v41 = (unsigned int *)a3;
            v42 += 8;
          }
          while ( v42 < v40 );
        }
        v60 = v55 + 8;
        v45 = (char *)(v40 - v55);
        v46 = v40;
        do
          v45 -= 8;
        while ( v45 );
        memmove(v60, v40, *a1 + 8 * a1[1] - (_DWORD)v40);
        v5 = a1;
        a1[1] -= (v46 - (_BYTE *)v60) >> 3;
        v3 = a3;
        v35 = v55;
      }
      *(_DWORD *)v35 = v63;
      *((_DWORD *)v35 + 1) = v53;
      if ( !*(_BYTE *)(v3 + 16) )
        goto LABEL_59;
      v48 = *(_DWORD *)v35;
      v66 = *((_DWORD *)v35 + 1);
      v65 = v48;
LABEL_58:
      v67 = 0;
      sub_B8FF0((unsigned int *)v3, (unsigned int)&v65);
      goto LABEL_59;
    }
    v58 = *a2;
    v64 = a2[1];
    v23 = v62;
    v24 = (v12 - (_BYTE *)v62) >> 3;
    if ( v5[2] >= (unsigned int)(v51 + 1) )
    {
      v26 = a1[1];
    }
    else
    {
      v25 = qvector_reserve((int)v5, v62, v51 + 1, 8u);
      v24 = (v55 - (_BYTE *)v62) >> 3;
      v23 = v25;
      *v5 = v25;
      v26 = v5[1];
    }
    v56 = v24;
    memmove(&v23[2 * v24 + 2], &v23[2 * v24], 8 * v26 - 8 * v24);
    v23[2 * v56 + 1] = v64;
    v23[2 * v56] = v58;
    ++v5[1];
    v17 = (unsigned int *)a3;
    v4 = a2;
    if ( !*(_BYTE *)(a3 + 16) )
      goto LABEL_59;
  }
LABEL_44:
  v37 = *v4;
  v66 = v4[1];
  v65 = v37;
  v67 = 0;
  sub_B8FF0(v17, (unsigned int)&v65);
LABEL_59:
  v5[3] = 0;
  return 1;
}
