/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415290
// Address: 0x00415290

//----- (00415290) --------------------------------------------------------
int __userpurge sub_415290@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5, int a6)
{
  unsigned int v7; // eax
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // edx
  unsigned int v13; // kr00_4
  int v14; // ecx
  char *v15; // eax
  char *v16; // edx
  __m128i *v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // eax
  bool v21; // zf
  _DWORD *v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // esi
  char *v27; // esi
  unsigned int v28; // eax
  LPVOID v29; // eax
  _DWORD *v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  _DWORD *v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  _DWORD *v40; // eax
  int v41; // ecx
  int v42; // edx
  bool v43; // cc
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // edi
  unsigned int v50; // eax
  _OWORD *v51; // esi
  __int64 v53; // [esp-Ch] [ebp-60h]
  __int128 v54; // [esp+Ch] [ebp-48h]
  char *v55; // [esp+1Ch] [ebp-38h] BYREF
  int v56; // [esp+20h] [ebp-34h]
  unsigned int v57; // [esp+24h] [ebp-30h]
  char *v58; // [esp+28h] [ebp-2Ch]
  _DWORD *v59; // [esp+2Ch] [ebp-28h]
  int v60; // [esp+30h] [ebp-24h]
  int v61; // [esp+34h] [ebp-20h]
  int v62; // [esp+38h] [ebp-1Ch]
  unsigned int v63; // [esp+3Ch] [ebp-18h]
  int v64; // [esp+40h] [ebp-14h]
  char v65; // [esp+47h] [ebp-Dh]
  int v66; // [esp+50h] [ebp-4h]
  int v67; // [esp+60h] [ebp+Ch]
  int v68; // [esp+60h] [ebp+Ch]
  int v69; // [esp+60h] [ebp+Ch]

  *(_DWORD *)(a1 + 8) = 0;
  v55 = nullptr;
  v56 = 0;
  v57 = 0;
  v7 = *(_DWORD *)(a1 + 112);
  v66 = 0;
  if ( v7 != *(_DWORD *)(a1 + 116) || (v65 = 1, v7 >= 0x1000) )
    v65 = 0;
  v64 = a4;
  v53 = a4;
  v67 = a4 >> 31;
  sub_45C810(a2, a1, a3, v53, 0);
  v8 = a5;
  v61 = a5;
  if ( (v67 & v64) == 0xFFFFFFFF )
  {
    v64 = sub_45C810(a2, a1, a3, 0, 1u);
    v67 = v9;
  }
  v10 = sub_45C8B0(a2, a1, a3);
  v13 = v10 - v64;
  v12 = (__PAIR64__(v11, v10) - __PAIR64__(v67, v64)) >> 32;
  v64 = v12;
  if ( v67 < 0 || v12 < 0 )
  {
    v8 = 0;
    a5 = 0;
  }
  else
  {
    if ( !a5 || (v12 = v64, 0xFFFFFFFF / a5 >= 0x28) )
    {
      if ( v12 > 0 || v12 >= 0 && v13 >= 40 * a5 )
        goto LABEL_16;
    }
    v8 = sub_462A90(__PAIR64__(v12, v13), 40);
    a5 = v8;
  }
  if ( sub_404420(1) != 1 )
    sub_414580(0);
LABEL_16:
  v68 = 0;
  if ( v8 <= 0 )
  {
LABEL_25:
    if ( !v65 && *(_DWORD *)(a1 + 56) != 23126 )
      goto LABEL_31;
    v18 = (*(int (__stdcall **)(int))(*(_DWORD *)a6 + 4))(a6);
    if ( v18 )
      goto LABEL_85;
    if ( v65 )
      v19 = *(_DWORD *)(a1 + 116);
    else
LABEL_31:
      v19 = 512;
    v20 = *(unsigned __int16 *)(a1 + 148);
    if ( v20 == 10 || v20 == 11 || v20 == 12 || v20 == 13 )
    {
      v22 = (_DWORD *)(a1 + 56);
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 56) == 23126;
      v22 = (_DWORD *)(a1 + 56);
      v64 = a1 + 56;
      if ( !v21 )
        goto LABEL_40;
    }
    v19 = 1;
    v64 = (int)v22;
LABEL_40:
    v23 = a5;
    v24 = 0;
    v63 = 0;
    v62 = 0;
    if ( a5 <= 0 )
    {
LABEL_69:
      if ( *v22 == 23126 )
        *(_DWORD *)(a1 + 136) = v24;
      if ( !v23 || v65 )
      {
        LODWORD(v54) = 0;
        v44 = sub_45C8B0(a2, a1, a3);
        v45 = *(_DWORD *)(a1 + 136);
        HIDWORD(v54) = v44;
        v46 = *(unsigned __int16 *)(a1 + 148);
        if ( v46 != 10 && v46 != 11 && v46 != 12 && v46 != 13 )
        {
          if ( *(_DWORD *)(a1 + 112) == 4096 || (v47 = *(_DWORD *)(a1 + 116)) == 0 )
            v47 = 512;
          v45 = -v47 & (v47 + v45 - 1);
        }
        v48 = *(_DWORD *)(a1 + 8);
        v49 = a1 + 4;
        v50 = v48 + 1;
        *(_QWORD *)((char *)&v54 + 4) = (unsigned int)v45;
        v51 = *(_OWORD **)v49;
        if ( v50 > *(_DWORD *)(v49 + 8) )
        {
          v51 = sub_453B00(v49, v51, v50, 0x10u);
          *(_DWORD *)v49 = v51;
        }
        sub_464310((unsigned int)(v51 + 1), (unsigned int)v51, 16 * *(_DWORD *)(v49 + 4));
        *v51 = v54;
        ++*(_DWORD *)(v49 + 4);
      }
      v18 = 0;
    }
    else
    {
      v25 = a1 + 4;
      v60 = -v19;
      v26 = 0;
      v61 = 0;
      while ( 1 )
      {
        v27 = &v55[v26];
        v58 = v27;
        v69 = *((_DWORD *)v27 + 5) & v60;
        v28 = *(_DWORD *)(v25 + 4) + 1;
        if ( v28 > *(_DWORD *)(v25 + 8) )
        {
          v29 = sub_453B00(v25, *(void **)v25, v28, 0x10u);
          v25 = a1 + 4;
          *(_DWORD *)(a1 + 4) = v29;
        }
        v30 = (_DWORD *)(*(_DWORD *)v25 + 16 * (*(_DWORD *)(v25 + 4))++);
        v31 = 1;
        v32 = *((_DWORD *)v27 + 3);
        v59 = v30;
        *v30 = v32;
        if ( *(_DWORD *)(a1 + 112) )
          v31 = *(_DWORD *)(a1 + 112);
        v33 = *((_DWORD *)v27 + 2);
        if ( !v33 )
          v33 = *((_DWORD *)v27 + 4);
        v34 = *((_DWORD *)v27 + 4);
        if ( v34 >= (-v31 & (unsigned int)(v31 + v33 - 1)) )
        {
          v35 = 1;
          if ( *(_DWORD *)(a1 + 112) )
            v35 = *(_DWORD *)(a1 + 112);
          if ( *((_DWORD *)v27 + 2) )
            v34 = *((_DWORD *)v27 + 2);
          v34 = -v35 & (v35 + v34 - 1);
        }
        v36 = v59;
        v59[3] = v34;
        v37 = *(unsigned __int16 *)(a1 + 148);
        v38 = *((_DWORD *)v27 + 3) + v34;
        if ( v37 != 10 && v37 != 11 && v37 != 12 && v37 != 13 )
        {
          if ( *(_DWORD *)(a1 + 112) == 4096 || (v39 = *(_DWORD *)(a1 + 116)) == 0 )
            v39 = 512;
          v38 = -v39 & (v39 + v38 - 1);
        }
        v40 = (_DWORD *)v64;
        v36[1] = v38;
        v41 = v69;
        v36[2] = v69;
        if ( *v40 == 23126 )
        {
          v41 = v69;
          v36[2] = 40 - *(unsigned __int16 *)(a1 + 22) + v69;
        }
        v18 = (**(int (__stdcall ***)(int, char *, int))a6)(a6, v27, v41);
        if ( v18 )
          break;
        v42 = v62;
        v24 = v63;
        if ( v63 < *((_DWORD *)v58 + 3) + *((_DWORD *)v58 + 2) )
          v24 = *((_DWORD *)v58 + 3) + *((_DWORD *)v58 + 2);
        v23 = a5;
        v63 = v24;
        v26 = v61 + 40;
        ++v62;
        v43 = v42 + 1 < a5;
        v61 += 40;
        v25 = a1 + 4;
        if ( !v43 )
        {
          v22 = (_DWORD *)(a1 + 56);
          goto LABEL_69;
        }
      }
    }
    goto LABEL_85;
  }
  while ( 1 )
  {
    v14 = v56;
    if ( v56 + 1 <= v57 )
    {
      v16 = v55;
    }
    else
    {
      v15 = (char *)sub_453B00((int)&v55, v55, v56 + 1, 0x28u);
      v14 = v56;
      v16 = v15;
      v55 = v15;
    }
    v17 = (__m128i *)&v16[40 * v14];
    v56 = v14 + 1;
    if ( sub_45C7E0(a3, v17, 40) != 40 )
      break;
    if ( v17->m128i_i32[3] != v17[1].m128i_i32[1] || v17->m128i_i32[2] > (unsigned __int32)v17[1].m128i_i32[0] )
      v65 = 0;
    if ( ++v68 >= a5 )
      goto LABEL_25;
  }
  v18 = -1;
LABEL_85:
  v66 = 4;
  if ( v55 )
  {
    v56 = 0;
    sub_453A20(v55);
  }
  return v18;
}
// 41532D: variable 'v9' is possibly undefined
// 41533F: variable 'v11' is possibly undefined
