__int64 __fastcall sub_A4770(int a1, unsigned __int16 *a2, int a3, __int64 *a4, unsigned int *a5, __int64 *a6)
{
  __int16 *v6; // rax
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int16 *i; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  int v14; // r10d
  __int64 v15; // rax
  unsigned int v16; // ebp
  int v17; // ecx
  unsigned __int16 *v18; // r9
  int v19; // eax
  _WORD *j; // r8
  int v21; // ecx
  unsigned int v22; // esi
  char *v23; // rax
  __int64 v24; // r8
  __int64 k; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // esi
  unsigned int v29; // r13d
  unsigned int v30; // r12d
  unsigned int v31; // r14d
  __int64 v32; // r11
  char v33; // r8
  char v34; // r9
  unsigned int v35; // eax
  __int16 v36; // di
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 m; // rax
  __int16 v41; // di
  int v42; // edx
  unsigned __int16 *v43; // rcx
  int v44; // edi
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v49; // [rsp+14h] [rbp-D4h]
  unsigned int v51; // [rsp+28h] [rbp-C0h]
  unsigned int v52; // [rsp+2Ch] [rbp-BCh]
  int v53; // [rsp+34h] [rbp-B4h]
  __int64 *v56; // [rsp+48h] [rbp-A0h]
  __int64 *v57; // [rsp+50h] [rbp-98h]
  unsigned int v58; // [rsp+58h] [rbp-90h]
  bool v59; // [rsp+5Eh] [rbp-8Ah]
  bool v60; // [rsp+5Fh] [rbp-89h]
  __int16 v61; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int16 v62; // [rsp+62h] [rbp-86h]
  _BYTE v63[26]; // [rsp+64h] [rbp-84h] BYREF
  __int16 v64; // [rsp+7Eh] [rbp-6Ah] BYREF
  _WORD v65[2]; // [rsp+80h] [rbp-68h] BYREF
  char v66; // [rsp+84h] [rbp-64h] BYREF
  char v67; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v6 = &v61;
  do
    *v6++ = 0;
  while ( v65 != v6 );
  if ( a3 )
  {
    v7 = a2;
    do
    {
      v8 = *v7++;
      ++*(&v61 + v8);
    }
    while ( &a2[a3 - 1 + 1] != v7 );
  }
  v9 = 15;
  for ( i = &v64; !*i; --i )
  {
    if ( !--v9 )
    {
      v11 = (_DWORD *)*a4;
      *a4 += 4;
      *v11 = 320;
      v12 = (_DWORD *)*a4;
      *a4 += 4;
      *v12 = 320;
      *a5 = 1;
      return 0;
    }
  }
  v14 = v62;
  if ( v9 == 1 || v62 )
  {
    v16 = 1;
  }
  else
  {
    v15 = 2;
    do
    {
      v16 = v15;
      if ( v9 - 2 + 2LL == v15 )
        break;
      ++v15;
    }
    while ( !*(&v61 + v15 - 1) );
  }
  v17 = v62;
  v18 = (unsigned __int16 *)v63;
  v19 = 1;
  for ( j = v63; ; ++j )
  {
    v19 = 2 * v19 - v17;
    if ( v19 < 0 )
      return 0xFFFFFFFFLL;
    if ( v65 == j )
      break;
    v17 = (unsigned __int16)*j;
  }
  if ( v19 && (!a1 || v9 != 1) )
    return 0xFFFFFFFFLL;
  v65[1] = 0;
  v21 = 0;
  v22 = *a5;
  v23 = &v66;
  while ( 1 )
  {
    v21 += v14;
    v23 += 2;
    *((_WORD *)v23 - 1) = v21;
    if ( &v67 == v23 )
      break;
    v14 = *v18++;
  }
  if ( a3 )
  {
    v24 = (unsigned int)(a3 - 1);
    for ( k = 0; ; ++k )
    {
      v26 = a2[k];
      if ( (_WORD)v26 )
      {
        v27 = (unsigned __int16)v65[v26];
        *((_WORD *)a6 + v27) = k;
        v65[v26] = v27 + 1;
      }
      if ( v24 == k )
        break;
    }
  }
  if ( v22 > v9 )
    v22 = v9;
  if ( v22 < v16 )
    v22 = v16;
  v49 = v22;
  v52 = 1 << v22;
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
    if ( v52 <= 0x354 )
    {
      v51 = 257;
      v57 = qword_133A00;
      v56 = qword_133A40;
      v60 = 1;
      v59 = 0;
      goto LABEL_45;
    }
    return 1;
  }
  v59 = a1 == 2;
  if ( v52 > 0x250 && a1 == 2 )
    return 1;
  v51 = 0;
  v57 = qword_133980;
  v56 = qword_1339C0;
LABEL_44:
  v60 = a1 == 1;
LABEL_45:
  v28 = 0;
  v29 = 0;
  v53 = -1;
  LOBYTE(v30) = v49;
  v31 = 0;
  v32 = *a4;
  v58 = v52 - 1;
  while ( 1 )
  {
    v33 = 0;
    v34 = v16 - v29;
    v35 = *((unsigned __int16 *)a6 + v31);
    v36 = *((_WORD *)a6 + v31);
    if ( v35 + 1 >= v51 )
    {
      if ( v35 < v51 )
      {
        v36 = 0;
        v33 = 96;
      }
      else
      {
        v37 = v35 - v51;
        v36 = *((_WORD *)v56 + v37);
        v33 = *((_BYTE *)v57 + 2 * v37);
      }
    }
    v38 = 1 << v30;
    do
    {
      v38 -= 1 << (v16 - v29);
      v39 = v32 + 4LL * ((v28 >> v29) + v38);
      *(_BYTE *)v39 = v33;
      *(_BYTE *)(v39 + 1) = v34;
      *(_WORD *)(v39 + 2) = v36;
    }
    while ( v38 );
    for ( m = (unsigned int)(1 << (v16 - 1)); ((unsigned int)m & v28) != 0; m = (unsigned int)m >> 1 )
      ;
    if ( (_DWORD)m )
      m = (((_DWORD)m - 1) & v28) + (unsigned int)m;
    ++v31;
    v41 = *(&v61 + v16);
    *(&v61 + v16) = v41 - 1;
    if ( v41 != 1 )
      goto LABEL_58;
    if ( v16 == v9 )
      break;
    v16 = a2[*((unsigned __int16 *)a6 + v31)];
LABEL_58:
    if ( v49 >= v16 || ((unsigned int)m & v58) == v53 )
    {
      v28 = m;
    }
    else
    {
      if ( !v29 )
        v29 = v49;
      v32 += 4LL * (unsigned int)(1 << v30);
      v30 = v16 - v29;
      if ( v16 < v9 )
      {
        v42 = (1 << (v16 - v29)) - (unsigned __int16)*(&v61 + v16);
        if ( v42 > 0 )
        {
          v43 = (unsigned __int16 *)(&v61 + v16 + 1);
          do
          {
            ++v30;
            v45 = 2 * v42;
            if ( v9 <= v29 + v30 )
              break;
            v44 = *v43++;
            v42 = v45 - v44;
          }
          while ( v42 > 0 );
        }
      }
      v52 += 1 << v30;
      if ( v52 > 0x354 && v60 || v52 > 0x250 && v59 )
        return 1;
      v53 = m & v58;
      v28 = m;
      v46 = 4LL * ((unsigned int)m & v58);
      *(_BYTE *)(*a4 + v46) = v30;
      *(_BYTE *)(*a4 + v46 + 1) = v49;
      *(_WORD *)(*a4 + v46 + 2) = (v32 - *a4) >> 2;
    }
  }
  if ( (_DWORD)m )
  {
    v47 = v32 + 4 * m;
    *(_BYTE *)v47 = 64;
    *(_BYTE *)(v47 + 1) = v34;
    *(_WORD *)(v47 + 2) = 0;
  }
  *a4 += 4LL * v52;
  *a5 = v49;
  return 0;
}

