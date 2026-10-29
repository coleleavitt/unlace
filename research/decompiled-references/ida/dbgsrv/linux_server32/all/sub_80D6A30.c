/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D6A30
// Address: 0x080D6A30

//----- (080D6A30) --------------------------------------------------------
int __cdecl sub_80D6A30(int a1, unsigned __int16 *a2, int a3, int *a4, unsigned int *a5, int *a6)
{
  __int16 *v6; // eax
  unsigned __int16 *v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int result; // eax
  int v13; // esi
  unsigned int v14; // ebp
  char *v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int i; // eax
  int j; // eax
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // eax
  __int16 v26; // si
  int v27; // eax
  int v28; // edx
  int v29; // ebp
  int v30; // ecx
  unsigned int k; // eax
  __int16 v32; // si
  int v33; // esi
  unsigned int v34; // ebx
  char v35; // bl
  int v36; // edx
  unsigned int v37; // ecx
  int v38; // esi
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // [esp+0h] [ebp-C0h]
  unsigned int v43; // [esp+4h] [ebp-BCh]
  unsigned int v44; // [esp+8h] [ebp-B8h]
  char v45; // [esp+8h] [ebp-B8h]
  int *v46; // [esp+Ch] [ebp-B4h]
  unsigned int v47; // [esp+10h] [ebp-B0h]
  char v48; // [esp+18h] [ebp-A8h]
  int v49; // [esp+1Ch] [ebp-A4h]
  unsigned int v50; // [esp+20h] [ebp-A0h]
  unsigned int v51; // [esp+28h] [ebp-98h]
  unsigned int v52; // [esp+2Ch] [ebp-94h]
  unsigned int v53; // [esp+30h] [ebp-90h]
  int v54; // [esp+38h] [ebp-88h]
  unsigned int v55; // [esp+40h] [ebp-80h]
  int *v56; // [esp+48h] [ebp-78h]
  int *v57; // [esp+4Ch] [ebp-74h]
  char v58; // [esp+51h] [ebp-6Fh]
  bool v59; // [esp+52h] [ebp-6Eh]
  bool v60; // [esp+53h] [ebp-6Dh]
  __int16 v61; // [esp+60h] [ebp-60h] BYREF
  unsigned __int16 v62; // [esp+62h] [ebp-5Eh]
  char v63; // [esp+64h] [ebp-5Ch] BYREF
  _WORD v64[16]; // [esp+80h] [ebp-40h] BYREF
  unsigned int v65; // [esp+A0h] [ebp-20h]

  v65 = __readgsdword(0x14u);
  v6 = &v61;
  do
    *v6++ = 0;
  while ( v64 != v6 );
  v7 = a2;
  if ( a3 )
  {
    do
    {
      v8 = *v7++;
      ++*(&v61 + v8);
    }
    while ( &a2[a3] != v7 );
  }
  v9 = 15;
  while ( !*(&v61 + v9) )
  {
    if ( !--v9 )
    {
      v10 = (_DWORD *)*a4;
      *a4 += 4;
      *v10 = 320;
      v11 = (_DWORD *)*a4;
      *a4 += 4;
      *v11 = 320;
      *a5 = 1;
      result = 0;
      goto LABEL_9;
    }
  }
  v52 = v9;
  v13 = v62;
  v14 = 1;
  if ( v9 != 1 && !v62 )
  {
    do
      ++v14;
    while ( v14 != v9 && !*(&v61 + v14) );
  }
  v15 = &v63;
  v16 = v62;
  v17 = 1;
  while ( 1 )
  {
    v17 = 2 * v17 - v16;
    if ( v17 < 0 )
      goto LABEL_40;
    if ( v64 == (_WORD *)v15 )
      break;
    v16 = *(unsigned __int16 *)v15;
    v15 += 2;
  }
  if ( v17 && (!a1 || v52 != 1) )
  {
LABEL_40:
    result = -1;
    goto LABEL_9;
  }
  v18 = 0;
  v64[1] = 0;
  v44 = *a5;
  for ( i = 1; ; v13 = (unsigned __int16)*(&v61 + i) )
  {
    ++i;
    v18 += v13;
    v64[i] = v18;
    if ( i == 15 )
      break;
  }
  if ( a3 )
  {
    for ( j = 0; j != a3; ++j )
    {
      v21 = a2[j];
      if ( (_WORD)v21 )
      {
        v22 = (unsigned __int16)v64[v21];
        *((_WORD *)a6 + v22) = j;
        v64[v21] = v22 + 1;
      }
    }
  }
  v23 = v44;
  if ( v44 > v52 )
    v23 = v52;
  if ( v14 >= v23 )
    v23 = v14;
  v50 = v23;
  v53 = 1 << v23;
  if ( !a1 )
  {
    v51 = 20;
    v59 = 0;
    v57 = a6;
    v56 = a6;
    goto LABEL_44;
  }
  if ( a1 == 1 )
  {
    if ( v53 <= 0x354 )
    {
      v51 = 257;
      v60 = 1;
      v59 = 0;
      v57 = dword_80F3280;
      v56 = dword_80F32C0;
      goto LABEL_45;
    }
LABEL_42:
    result = 1;
    goto LABEL_9;
  }
  v59 = a1 == 2;
  if ( v53 > 0x250 && a1 == 2 )
    goto LABEL_42;
  v51 = 0;
  v57 = dword_80F3200;
  v56 = dword_80F3240;
LABEL_44:
  v60 = a1 == 1;
LABEL_45:
  v54 = -1;
  v24 = 0;
  v43 = 0;
  v49 = *a4;
  v55 = v53 - 1;
  v46 = a6;
  v48 = v23;
  while ( 1 )
  {
    v45 = 0;
    v58 = v14 - v43;
    v25 = *(unsigned __int16 *)v46;
    v26 = *(_WORD *)v46;
    if ( v25 + 1 >= v51 )
    {
      if ( v25 < v51 )
      {
        v26 = 0;
        v45 = 96;
      }
      else
      {
        v27 = v25 - v51;
        v45 = *((_BYTE *)v57 + 2 * v27);
        v26 = *((_WORD *)v56 + v27);
      }
    }
    v28 = 1 << (v14 - v43);
    v47 = v14;
    v42 = 1 << v48;
    v29 = -4 << (v14 - v43);
    v30 = v49 + 4 * ((v24 >> v43) + (1 << v48) - v28);
    do
    {
      *(_BYTE *)v30 = v45;
      *(_BYTE *)(v30 + 1) = v58;
      *(_WORD *)(v30 + 2) = v26;
      v30 += v29;
      v42 -= v28;
    }
    while ( v42 );
    v14 = v47;
    for ( k = 1 << (v47 - 1); (k & v24) != 0; k >>= 1 )
      ;
    if ( k )
      k += v24 & (k - 1);
    v32 = *(&v61 + v47);
    *(&v61 + v47) = v32 - 1;
    if ( v32 == 1 )
      break;
LABEL_58:
    if ( v14 > v50 )
    {
      v33 = k & v55;
      if ( (k & v55) != v54 )
      {
        v34 = v43;
        if ( !v43 )
          v34 = v50;
        v49 += 4 << v48;
        v43 = v34;
        v35 = v14 - v34;
        v48 = v35;
        if ( v14 < v52 )
        {
          v36 = (1 << v35) - (unsigned __int16)*(&v61 + v14);
          if ( v36 > 0 )
          {
            v37 = v14 + 1;
            do
            {
              ++v35;
              v39 = 2 * v36;
              if ( v52 <= v37 )
                break;
              v38 = (unsigned __int16)*(&v61 + v37++);
              v36 = v39 - v38;
            }
            while ( v36 > 0 );
            v33 = k & v55;
            v48 = v35;
          }
        }
        v53 += 1 << v48;
        if ( v53 > 0x354 && v60 || v53 > 0x250 && v59 )
          goto LABEL_42;
        v40 = 4 * v33;
        v54 = v33;
        *(_BYTE *)(*a4 + 4 * v33) = v48;
        *(_BYTE *)(*a4 + v40 + 1) = v50;
        *(_WORD *)(*a4 + v40 + 2) = (v49 - *a4) >> 2;
      }
    }
    v46 = (int *)((char *)v46 + 2);
    v24 = k;
  }
  if ( v47 != v52 )
  {
    v14 = a2[*((unsigned __int16 *)v46 + 1)];
    goto LABEL_58;
  }
  if ( k )
  {
    v41 = v49 + 4 * k;
    *(_BYTE *)v41 = 64;
    *(_BYTE *)(v41 + 1) = v58;
    *(_WORD *)(v41 + 2) = 0;
  }
  *a4 += 4 * v53;
  *a5 = v50;
  result = 0;
LABEL_9:
  if ( __readgsdword(0x14u) != v65 )
    sub_80D7AB0();
  return result;
}
// 80F3200: using guessed type int dword_80F3200[16];
// 80F3240: using guessed type int dword_80F3240[16];
// 80F3280: using guessed type int dword_80F3280[16];
// 80F32C0: using guessed type int dword_80F32C0[16];
