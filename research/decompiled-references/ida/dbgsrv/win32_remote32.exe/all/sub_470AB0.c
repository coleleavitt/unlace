/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470AB0
// Address: 0x00470AB0

//----- (00470AB0) --------------------------------------------------------
int __cdecl sub_470AB0(int a1, unsigned int *a2)
{
  int v2; // ebx
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // esi
  int result; // eax
  unsigned int v10; // esi
  bool v11; // cf
  int v12; // edi
  _DWORD *v13; // ecx
  unsigned int v14; // eax
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // ecx
  int v18; // eax
  signed int v19; // eax
  signed int v20; // edx
  unsigned int *v21; // ecx
  unsigned int *v22; // esi
  unsigned int v23; // esi
  unsigned int v24; // ecx
  bool v25; // zf
  int v26; // eax
  int v27; // edi
  bool v28; // sf
  int v29; // edx
  unsigned int v30; // eax
  int v31; // ebx
  unsigned int *v32; // ecx
  int v33; // eax
  int v34; // edx
  unsigned int v35; // ecx
  int v36; // edi
  int v37; // edx
  int v38; // esi
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // ebx
  int v42; // eax
  unsigned __int64 v43; // rdi
  unsigned int v44; // ecx
  unsigned __int64 v45; // rdi
  unsigned int *v46; // ebx
  unsigned int *v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rcx
  _DWORD *v50; // edx
  _DWORD *v51; // esi
  unsigned int v52; // edi
  unsigned int v53; // eax
  int v54; // et0
  unsigned int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // eax
  _DWORD *v58; // edx
  unsigned __int64 v59; // [esp-14h] [ebp-23Ch]
  _BYTE v60[460]; // [esp+10h] [ebp-218h] BYREF
  unsigned int *v61; // [esp+1DCh] [ebp-4Ch]
  int v62; // [esp+1E0h] [ebp-48h]
  unsigned __int64 v63; // [esp+1E4h] [ebp-44h]
  int v64; // [esp+1ECh] [ebp-3Ch]
  unsigned int v65; // [esp+1F0h] [ebp-38h]
  unsigned int v66; // [esp+1F4h] [ebp-34h]
  int v67; // [esp+1F8h] [ebp-30h]
  int v68; // [esp+1FCh] [ebp-2Ch]
  _DWORD *v69; // [esp+204h] [ebp-24h]
  unsigned int v70; // [esp+208h] [ebp-20h]
  _DWORD *v71; // [esp+20Ch] [ebp-1Ch]
  int v72; // [esp+210h] [ebp-18h]
  int v73; // [esp+214h] [ebp-14h]
  int v74; // [esp+218h] [ebp-10h]
  int v75; // [esp+21Ch] [ebp-Ch]
  unsigned int v76; // [esp+220h] [ebp-8h]
  int v77; // [esp+224h] [ebp-4h]

  v2 = a1;
  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return 0;
  v4 = *a2;
  v66 = v4;
  if ( !v4 )
    return 0;
  v5 = v4 - 1;
  v6 = v3 - 1;
  v76 = v3 - 1;
  if ( v4 == 1 )
  {
    v7 = a2[1];
    v76 = v7;
    if ( v7 == 1 )
    {
      v8 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v5;
      sub_471A66(a1, v5, (__m128i *)(a1 + 4), 0x1CCu, (unsigned int)v60, v5);
      return v8;
    }
    else if ( v3 == 1 )
    {
      v10 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 0;
      sub_471A66(a1, a1 + 4, (__m128i *)(a1 + 4), 0x1CCu, (unsigned int)v60, 0);
      result = v10 / v76;
      v11 = v10 % v76 != 0;
      *(_DWORD *)(a1 + 4) = v10 % v76;
      *(_DWORD *)a1 = v11;
    }
    else
    {
      v12 = 0;
      v75 = 0;
      v69 = nullptr;
      v72 = 0;
      if ( v3 )
      {
        v13 = (_DWORD *)(a1 + 4 * v3);
        v71 = v13;
        do
        {
          HIDWORD(v59) = v12;
          LODWORD(v59) = *v13;
          v14 = sub_4828A0(v59, v7);
          v72 = a1;
          HIDWORD(v63) = v15;
          v12 = v16;
          v17 = (_DWORD *)v75;
          v75 = v14;
          v7 = v76;
          v69 = v17;
          v13 = --v71;
          --v3;
        }
        while ( v3 );
        v2 = a1;
      }
      *(_DWORD *)v2 = 0;
      sub_471A66(v2, v12, (__m128i *)(v2 + 4), 0x1CCu, (unsigned int)v60, 0);
      v18 = v72;
      v11 = v72 != 0;
      *(_DWORD *)(v2 + 4) = v12;
      *(_DWORD *)(v2 + 8) = v18;
      result = v75;
      *(_DWORD *)v2 = v11 + 1;
    }
    return result;
  }
  if ( v5 > v6 )
    return 0;
  v19 = v3 - 1;
  v20 = v6 - v5;
  if ( (int)v6 < (int)(v6 - v5) )
    goto LABEL_20;
  v21 = (unsigned int *)(a1 + 4 * v3);
  v22 = &a2[v5 + 1];
  while ( *v22 == *v21 )
  {
    --v19;
    --v22;
    --v21;
    if ( v19 < v20 )
      goto LABEL_20;
  }
  if ( *v22 < *v21 )
LABEL_20:
    ++v20;
  if ( !v20 )
    return 0;
  v23 = a2[v66];
  v24 = a2[v66 - 1];
  v25 = !_BitScanReverse((unsigned int *)&v26, v23);
  v67 = v23;
  v70 = v24;
  if ( v25 )
    v27 = 32;
  else
    v27 = 31 - v26;
  v75 = v27;
  v68 = 32 - v27;
  if ( v27 )
  {
    v70 <<= v27;
    v67 = (v24 >> v68) | (v23 << v27);
    if ( v66 > 2 )
      v70 |= a2[v66 - 2] >> v68;
  }
  v71 = nullptr;
  v28 = v20 - 1 < 0;
  v29 = v20 - 1;
  v72 = v29;
  if ( !v28 )
  {
    v30 = v29 + v66;
    v31 = a1;
    v65 = v29 + v66;
    v64 = a1 + 4 + 4 * v29;
    v32 = (unsigned int *)(a1 - 4 + 4 * (v29 + v66));
    v61 = v32;
    do
    {
      if ( v30 > v76 )
        v33 = 0;
      else
        v33 = v32[2];
      v34 = v32[1];
      v35 = *v32;
      v62 = v33;
      v69 = nullptr;
      v77 = v33;
      v73 = v35;
      if ( v27 )
      {
        v36 = sub_4634C0(__SPAIR64__(v77, v34), v75) | (v35 >> v68);
        v33 = v37;
        v34 = v36;
        v38 = v73 << v75;
        v77 = v33;
        v73 <<= v75;
        if ( v65 >= 3 )
        {
          v33 = v77;
          v73 = (*(_DWORD *)(v31 + 4 * (v72 + v66) - 8) >> v68) | v38;
        }
      }
      v41 = sub_4828A0(__PAIR64__(v33, v34), (unsigned int)v67);
      v42 = v39;
      v77 = v41;
      v74 = v39;
      v43 = v40;
      v63 = __PAIR64__(v39, v41);
      v69 = nullptr;
      if ( v39 )
      {
        v43 = sub_4633C0(__PAIR64__(v39, v41) - 0xFFFFFFFF, (unsigned int)v67) + v40;
        v41 = -1;
        v42 = 0;
        v69 = (_DWORD *)HIDWORD(v43);
        v77 = -1;
        v63 = 0xFFFFFFFFLL;
        v74 = 0;
      }
      if ( !HIDWORD(v43) )
      {
        while ( sub_4633C0(v70, __SPAIR64__(v42, v41)) > __PAIR64__(v43, v73) )
        {
          v11 = v41-- != 0;
          LODWORD(v63) = v41;
          v42 = v11 + v74 - 1;
          v74 = v42;
          v25 = (_DWORD *)((char *)v69 + __CFADD__(v67, (_DWORD)v43)) == nullptr;
          v69 = (_DWORD *)((__PAIR64__((unsigned int)v69, v67) + (unsigned int)v43) >> 32);
          LODWORD(v43) = v67 + v43;
          HIDWORD(v63) = v42;
          if ( !v25 )
            goto LABEL_43;
        }
        v42 = v74;
LABEL_43:
        v77 = v41;
      }
      if ( v42 || v41 )
      {
        v44 = v66;
        v45 = 0;
        if ( v66 )
        {
          v46 = (unsigned int *)v64;
          v47 = a2 + 1;
          v69 = a2 + 1;
          v73 = v66;
          do
          {
            v76 = *v47;
            v48 = v63 * v76 + v45;
            LODWORD(v45) = (v63 * v76 + v45) >> 32;
            HIDWORD(v45) = 0;
            if ( *v46 < v48 )
              ++v45;
            *v46++ -= v48;
            v47 = v69 + 1;
            v25 = v73-- == 1;
            ++v69;
          }
          while ( !v25 );
          v41 = v77;
          v44 = v66;
        }
        if ( (unsigned int)v62 < v45 )
        {
          if ( v44 )
          {
            HIDWORD(v49) = 0;
            v50 = (_DWORD *)v64;
            v51 = a2 + 1;
            v52 = v44;
            do
            {
              LODWORD(v49) = *v50;
              ++v51;
              ++v50;
              v53 = ((unsigned int)*(v51 - 1) + (unsigned __int64)(unsigned int)v49) >> 32;
              LODWORD(v49) = *(v51 - 1) + v49;
              *(v50 - 1) = HIDWORD(v49) + v49;
              v49 = __PAIR64__(v53, HIDWORD(v49)) + (unsigned int)v49;
              --v52;
            }
            while ( v52 );
            v41 = v77;
          }
          v54 = (__PAIR64__(v74, v41--) - 1) >> 32;
          v74 = v54;
        }
        v76 = v65 - 1;
      }
      v55 = v41;
      v31 = a1;
      v64 -= 4;
      v27 = v75;
      v32 = v61 - 1;
      v71 = (_DWORD *)v55;
      v30 = v65 - 1;
      --v72;
      --v65;
      --v61;
    }
    while ( v72 >= 0 );
  }
  v56 = v76 + 1;
  v57 = v76 + 1;
  if ( v76 + 1 < *(_DWORD *)a1 )
  {
    v58 = (_DWORD *)(a1 + 4 + 4 * v57);
    do
    {
      *v58++ = 0;
      ++v57;
    }
    while ( v57 < *(_DWORD *)a1 );
  }
  *(_DWORD *)a1 = v56;
  if ( v56 )
  {
    do
    {
      if ( *(_DWORD *)(a1 + 4 * v56) )
        break;
      v25 = v56-- == 1;
      *(_DWORD *)a1 = v56;
    }
    while ( !v25 );
  }
  return (int)v71;
}
// 470BA4: variable 'v15' is possibly undefined
// 470BA7: variable 'v16' is possibly undefined
// 470D24: variable 'v37' is possibly undefined
// 470D66: variable 'v39' is possibly undefined
// 470D6E: variable 'v40' is possibly undefined
