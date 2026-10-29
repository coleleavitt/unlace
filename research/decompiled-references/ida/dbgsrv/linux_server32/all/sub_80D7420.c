/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D7420
// Address: 0x080D7420

//----- (080D7420) --------------------------------------------------------
unsigned __int8 *__cdecl sub_80D7420(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // edi
  unsigned int v3; // ebp
  unsigned __int8 *v4; // edx
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // eax
  char v8; // cl
  int i; // eax
  char *v10; // esi
  int v11; // ecx
  char v12; // cl
  unsigned __int8 v13; // al
  char v14; // cl
  char *v15; // esi
  int v16; // ecx
  unsigned int v17; // ebx
  char v18; // cl
  char v19; // al
  int v20; // ecx
  unsigned __int8 v21; // al
  char v22; // cl
  unsigned int v23; // esi
  unsigned __int8 v24; // cl
  _BYTE *v25; // eax
  unsigned int v26; // ecx
  _BYTE *v27; // eax
  unsigned __int8 *v28; // esi
  unsigned __int8 *v29; // eax
  unsigned int v30; // ecx
  int v31; // edi
  unsigned __int8 v32; // dl
  unsigned __int8 *v33; // edx
  int v35; // eax
  char v36; // cl
  unsigned __int8 *v37; // edi
  unsigned __int8 *v38; // eax
  unsigned int v39; // esi
  unsigned __int8 *v40; // ecx
  unsigned __int8 *j; // edx
  unsigned __int8 *v42; // eax
  unsigned __int8 *v43; // edi
  unsigned __int8 *v44; // edi
  unsigned __int8 *v45; // esi
  unsigned __int8 *v46; // edi
  unsigned __int8 *v47; // [esp+0h] [ebp-5Ch]
  unsigned __int8 *v48; // [esp+0h] [ebp-5Ch]
  unsigned __int8 *v49; // [esp+4h] [ebp-58h]
  unsigned int v50; // [esp+8h] [ebp-54h]
  unsigned int v51; // [esp+8h] [ebp-54h]
  unsigned int v52; // [esp+Ch] [ebp-50h]
  unsigned __int8 *v53; // [esp+10h] [ebp-4Ch]
  unsigned __int8 *v54; // [esp+14h] [ebp-48h]
  int v55; // [esp+18h] [ebp-44h]
  int v56; // [esp+1Ch] [ebp-40h]
  unsigned int v57; // [esp+20h] [ebp-3Ch]
  int v58; // [esp+20h] [ebp-3Ch]
  int v59; // [esp+28h] [ebp-34h]
  unsigned int v60; // [esp+2Ch] [ebp-30h]
  unsigned __int8 *v61; // [esp+30h] [ebp-2Ch]
  unsigned __int8 *v62; // [esp+34h] [ebp-28h]
  unsigned int v63; // [esp+38h] [ebp-24h]
  int v64; // [esp+3Ch] [ebp-20h]

  v2 = a1[7];
  v3 = *((_DWORD *)v2 + 15);
  v49 = *a1;
  v54 = v2;
  v52 = (unsigned int)&a1[1][(_DWORD)*a1 - 5];
  v64 = *((_DWORD *)v2 + 11);
  v4 = a1[4];
  v47 = a1[3];
  v53 = (unsigned __int8 *)&stru_811CEEC.d_un + (unsigned int)&v4[(_DWORD)v47] - 135385073;
  v61 = &v4[(_DWORD)v47 - a2];
  v63 = *((_DWORD *)v2 + 12);
  v5 = *((_DWORD *)v2 + 20);
  v60 = *((_DWORD *)v2 + 13);
  v62 = *((unsigned __int8 **)v2 + 14);
  v6 = *((_DWORD *)v2 + 16);
  v56 = *((_DWORD *)v2 + 21);
  v55 = ~(-1 << *((_DWORD *)v2 + 22));
  v59 = ~(-1 << *((_DWORD *)v2 + 23));
LABEL_2:
  if ( v6 <= 0xE )
  {
    v7 = v49[1] << (v6 + 8);
    v8 = v6;
    v6 += 16;
    v3 += (*v49 << v8) + v7;
    v49 += 2;
  }
  for ( i = v3 & v55; ; i = *((unsigned __int16 *)v10 + 1) + (v3 & ~(-1 << v12)) )
  {
    v10 = (char *)(v5 + 4 * i);
    v11 = (unsigned __int8)v10[1];
    v3 >>= v11;
    v6 -= v11;
    v12 = *v10;
    if ( !*v10 )
    {
      *v47++ = *((_WORD *)v10 + 1);
      goto LABEL_10;
    }
    if ( (v12 & 0x10) != 0 )
    {
      v51 = *((unsigned __int16 *)v10 + 1);
      v13 = v12 & 0xF;
      if ( (*v10 & 0xF) != 0 )
      {
        if ( v13 > v6 )
        {
          v14 = v6;
          v6 += 8;
          v3 += *v49++ << v14;
        }
        v6 -= v13;
        v51 += v3 & ~(-1 << v13);
        v3 >>= v13;
      }
      if ( v6 <= 0xE )
      {
        v35 = v49[1] << (v6 + 8);
        v36 = v6;
        v6 += 16;
        v3 += (*v49 << v36) + v35;
        v49 += 2;
      }
      v15 = (char *)(v56 + 4 * (v3 & v59));
      v16 = (unsigned __int8)v15[1];
      v3 >>= v16;
      v17 = v6 - v16;
      v18 = *v15;
      v19 = *v15;
      if ( (*v15 & 0x10) == 0 )
      {
        if ( (v19 & 0x40) != 0 )
        {
LABEL_43:
          v50 = v17;
          a1[6] = "invalid distance code";
          *((_DWORD *)v54 + 1) = 16209;
          goto LABEL_41;
        }
        while ( 1 )
        {
          v15 = (char *)(v56 + 4 * (*((unsigned __int16 *)v15 + 1) + (v3 & ~(-1 << v18))));
          v20 = (unsigned __int8)v15[1];
          v3 >>= v20;
          v17 -= v20;
          v18 = *v15;
          v19 = *v15;
          if ( (*v15 & 0x10) != 0 )
            break;
          if ( (v19 & 0x40) != 0 )
            goto LABEL_43;
        }
      }
      v21 = v19 & 0xF;
      if ( v21 > v17 )
      {
        v22 = v17 + 8;
        v3 += *v49 << v17;
        if ( v21 > v17 + 8 )
        {
          v17 += 16;
          v3 += v49[1] << v22;
          v49 += 2;
        }
        else
        {
          ++v49;
          v17 += 8;
        }
      }
      v6 = v17 - v21;
      v23 = (v3 & ~(-1 << v21)) + *((unsigned __int16 *)v15 + 1);
      v24 = v21;
      v25 = (_BYTE *)(v47 - v61);
      v57 = v23;
      v3 >>= v24;
      if ( v23 <= v47 - v61 )
      {
        v39 = v51;
        v40 = &v47[-v57];
        v58 = v5;
        for ( j = v47; ; j += 3 )
        {
          v39 -= 3;
          *j = *v40;
          j[1] = v40[1];
          v42 = j + 3;
          j[2] = v40[2];
          if ( v39 <= 2 )
            break;
          v40 += 3;
        }
        v43 = j;
        v48 = j;
        v5 = v58;
        if ( v39 )
        {
          v43[3] = v40[3];
          if ( v39 == 2 )
          {
            v48[4] = v40[4];
            v47 = v48 + 5;
          }
          else
          {
            v47 = v43 + 4;
          }
        }
        else
        {
          v47 = v42;
        }
        goto LABEL_10;
      }
      v26 = v23 - (_DWORD)v25;
      if ( v63 < v23 - (unsigned int)v25 && *((_DWORD *)v54 + 1777) )
      {
        v50 = v6;
        a1[6] = "invalid distance too far back";
        *((_DWORD *)v54 + 1) = 16209;
        goto LABEL_41;
      }
      v27 = &v25[-v23];
      if ( v60 )
      {
        if ( v60 < v26 )
        {
          v28 = &v27[v60 + v64 + (_DWORD)v62];
          if ( v51 > v26 - v60 )
          {
            v51 += (unsigned int)&v27[v60];
            v37 = v47;
            v38 = &v47[v26 - v60];
            do
              *v37++ = *v28++;
            while ( v37 != v38 );
            if ( v60 < v51 )
            {
              v47 += v26;
              v51 -= v60;
              v45 = v62;
              v46 = v38;
              do
                *v46++ = *v45++;
              while ( v46 != v47 );
              v28 = &v47[-v57];
            }
            else
            {
              v28 = v62;
              v47 = v37;
            }
          }
          goto LABEL_32;
        }
        v28 = &v27[v60 + (_DWORD)v62];
        if ( v51 <= v26 )
        {
LABEL_32:
          if ( v51 > 2 )
          {
            v29 = v47;
            v30 = v51;
            v31 = v5;
            do
            {
              v32 = *v28;
              v28 += 3;
              v29 += 3;
              v30 -= 3;
              *(v29 - 3) = v32;
              *(v29 - 2) = *(v28 - 2);
              *(v29 - 1) = *(v28 - 1);
            }
            while ( v30 > 2 );
            v47 = v29;
            v5 = v31;
            v51 = v30;
          }
          if ( v51 )
          {
            *v47 = *v28;
            if ( v51 == 2 )
            {
              v47[1] = v28[1];
              v47 += 2;
            }
            else
            {
              ++v47;
            }
          }
LABEL_10:
          if ( (unsigned int)v49 >= v52 || v47 >= v53 )
          {
            v50 = v6;
            goto LABEL_41;
          }
          goto LABEL_2;
        }
        v51 += (unsigned int)v27;
        v44 = v47;
        do
          *v44++ = *v28++;
        while ( v44 != &v47[v26] );
      }
      else
      {
        v28 = &v27[v64 + (_DWORD)v62];
        if ( v51 <= v26 )
          goto LABEL_32;
        v44 = v47;
        v51 += (unsigned int)v27;
        do
          *v44++ = *v28++;
        while ( v44 != &v47[v26] );
      }
      v47 = v44;
      v28 = &v44[-v57];
      goto LABEL_32;
    }
    if ( (v12 & 0x40) != 0 )
      break;
  }
  v50 = v6;
  if ( (v12 & 0x20) != 0 )
  {
    *((_DWORD *)v54 + 1) = 16191;
  }
  else
  {
    a1[6] = "invalid literal/length code";
    *((_DWORD *)v54 + 1) = 16209;
  }
LABEL_41:
  v33 = &v49[-(v50 >> 3)];
  *a1 = v33;
  a1[3] = v47;
  a1[1] = (unsigned __int8 *)(v52 - (_DWORD)v33 + 5);
  a1[4] = (unsigned __int8 *)(v53 - v47 + 257);
  *((_DWORD *)v54 + 15) = ~(-1 << (v50 & 7)) & v3;
  *((_DWORD *)v54 + 16) = v50 & 7;
  return v54;
}
// 811CEEC: using guessed type Elf32_Dyn stru_811CEEC;
