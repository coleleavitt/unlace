__int64 __fastcall sub_127310(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  unsigned int v9; // edi
  int v10; // r11d
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // r9d
  char *v15; // rax
  __int64 v16; // r12
  char v17; // dl
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rdx
  char v21; // r9
  int v22; // edx
  int v23; // r10d
  __int64 v24; // rax
  int v25; // ecx
  int v26; // edi
  int i; // r8d
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r12d
  _DWORD *v36; // rdi
  __int64 v37; // rcx
  int v38; // r14d
  int v39; // r13d
  int v40; // r9d
  unsigned __int8 v41; // dl
  int v42; // r8d
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r11
  int v47; // eax
  unsigned __int8 v48; // r11
  __int64 v49; // rsi
  unsigned __int8 *v50; // rsi
  int v51; // ebp
  int v52; // r11d
  int v53; // r15d
  int v54; // esi
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r10
  int v58; // r8d
  int v59; // esi
  __int64 v60; // rax
  __int64 v61; // r10
  int v62; // r8d
  int v63; // eax
  __int64 v64; // rsi
  unsigned __int8 v65; // r10
  unsigned __int8 *v66; // rsi
  unsigned __int8 *v67; // rsi
  unsigned __int64 v68; // [rsp+0h] [rbp-58h]
  char v69; // [rsp+Bh] [rbp-4Dh]
  unsigned int v70; // [rsp+Ch] [rbp-4Ch]
  unsigned int v71; // [rsp+10h] [rbp-48h] BYREF
  int v72; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v73; // [rsp+18h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v71 = 0;
  v72 = 0;
  v68 = -44;
  if ( a5 > 0x5D3 )
  {
    v68 = sub_115090((unsigned __int8 *)(a4 + 1236), 0x100u, a4, &v72, &v71, a2, a3, a4 + 104, 876, a6);
    if ( v68 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v9 = 11;
      v10 = v72;
      v11 = (unsigned __int8)*a1 + 1;
      v12 = v71;
      v13 = *a1 & 0xFF000000 | *a1 & 0xFF0000 | (unsigned __int16)*a1;
      if ( v11 <= 0xB )
        v9 = (unsigned __int8)*a1 + 1;
      if ( v71 > v9 )
      {
        v9 = v71;
      }
      else if ( v71 < v9 )
      {
        v14 = v9 - v71;
        if ( v72 )
        {
          v15 = (char *)(a4 + 1236);
          v16 = a4 + (unsigned int)(v72 - 1) + 1237;
          do
          {
            v17 = *v15;
            if ( *v15 )
              v17 = *v15 + v14;
            *v15++ = v17;
          }
          while ( (char *)v16 != v15 );
        }
        v18 = a4 + 4LL * v9;
        if ( v9 > v14 )
        {
          do
          {
            v18 -= 4;
            *(_DWORD *)(v18 + 4) = *(_DWORD *)(a4 + 4LL * v12--);
          }
          while ( v12 );
        }
        if ( v14 )
        {
          v19 = (_DWORD *)(a4 + 4LL * v14);
          v20 = (__int64)&v19[-v14];
          do
            *v19-- = 0;
          while ( (_DWORD *)v20 != v19 );
        }
      }
      v71 = v9;
      if ( v11 < v9 )
        return -44;
      v21 = v9;
      v22 = 0;
      v23 = v10 - 3;
      v24 = 0;
      *a1 = ((unsigned __int8)v9 << 16) | v13 & 0xFF0000FF;
      v70 = v9 + 1;
      do
      {
        v25 = *(_DWORD *)(a4 + 4 * v24);
        *(_DWORD *)(a4 + 4 * v24++ + 52) = v22;
        v22 += v25;
      }
      while ( (int)(v9 + 1) > (int)v24 );
      if ( v23 <= 0 )
      {
        i = 0;
      }
      else
      {
        v26 = 4;
        for ( i = 0; i < v23; i += 4 )
        {
          v28 = i;
          do
          {
            v29 = a4 + 4LL * *(unsigned __int8 *)(a4 + v28 + 1236);
            v30 = *(unsigned int *)(v29 + 52);
            *(_DWORD *)(v29 + 52) = v30 + 1;
            *(_BYTE *)(a4 + v30 + 980) = v28++;
          }
          while ( v26 != v28 );
          v26 += 4;
        }
      }
      v31 = a4 + i;
      if ( v10 > i )
      {
        do
        {
          v32 = *(unsigned __int8 *)(v31 + 1236);
          ++v31;
          v33 = a4 + 4 * v32;
          v34 = *(unsigned int *)(v33 + 52);
          *(_DWORD *)(v33 + 52) = v34 + 1;
          *(_BYTE *)(a4 + v34 + 980) = i++;
        }
        while ( v10 != i );
      }
      v35 = *(_DWORD *)a4;
      v36 = a1 + 1;
      v37 = 1;
      v69 = v21 + 1;
      v38 = 0;
      do
      {
        v39 = *(_DWORD *)(a4 + 4 * v37);
        v40 = 1 << v37 >> 1;
        v41 = v69 - v37;
        if ( v40 == 2 )
        {
          if ( v39 > 0 )
          {
            v62 = v35;
            v63 = v38;
            do
            {
              v64 = v62++;
              v65 = *(_BYTE *)(a4 + v64 + 980);
              v66 = (unsigned __int8 *)v36 + 2 * v63;
              *v66 = v41;
              v66[1] = v65;
              LODWORD(v66) = v63 + 1;
              v63 += 2;
              v67 = (unsigned __int8 *)v36 + 2 * (int)v66;
              *v67 = v41;
              v67[1] = v65;
            }
            while ( v63 != v38 + 2 * v39 );
          }
          goto LABEL_36;
        }
        if ( v40 <= 2 )
        {
          if ( v40 == 1 )
          {
            v47 = v38;
            if ( v39 > 0 )
            {
              do
              {
                v48 = *(_BYTE *)(a4 + v35 - v38 + v47 + 980);
                v49 = v47++;
                v50 = (unsigned __int8 *)v36 + 2 * v49;
                *v50 = v41;
                v50[1] = v48;
              }
              while ( v47 != v39 + v38 );
            }
            goto LABEL_36;
          }
        }
        else
        {
          if ( v40 == 4 )
          {
            if ( v39 > 0 )
            {
              v58 = v35;
              v59 = v38;
              do
              {
                v60 = v58;
                v61 = v59;
                v59 += 4;
                ++v58;
                *(_QWORD *)((char *)v36 + 2 * v61) = 0x1000100010001LL
                                                   * (v41 + (*(unsigned __int8 *)(a4 + v60 + 980) << 8));
              }
              while ( v59 != v38 + 4 * v39 );
            }
            goto LABEL_36;
          }
          if ( v40 == 8 )
          {
            if ( v39 > 0 )
            {
              v42 = v35;
              v43 = v38;
              do
              {
                v44 = v42++;
                v45 = 0x1000100010001LL * (v41 + (*(unsigned __int8 *)(a4 + v44 + 980) << 8));
                v46 = v43;
                v43 += 8;
                *(_QWORD *)((char *)v36 + 2 * v46) = v45;
                *(_QWORD *)((char *)v36 + 2 * v46 + 8) = v45;
              }
              while ( v43 != v38 + 8 * v39 );
            }
            goto LABEL_36;
          }
        }
        if ( v39 > 0 )
        {
          v51 = v35;
          v52 = v41;
          v35 += v39;
          v53 = v38;
          do
          {
            v54 = 0;
            v55 = 0x1000100010001LL * (v52 + (*(unsigned __int8 *)(a4 + v51 + 980) << 8));
            do
            {
              v56 = v54;
              v54 += 16;
              v57 = 2 * (v53 + v56);
              *(_QWORD *)((char *)v36 + v57) = v55;
              *(_QWORD *)((char *)v36 + v57 + 8) = v55;
              *(_QWORD *)((char *)v36 + v57 + 16) = v55;
              *(_QWORD *)((char *)v36 + v57 + 24) = v55;
            }
            while ( v40 > v54 );
            ++v51;
            v53 += v40;
          }
          while ( v35 != v51 );
          goto LABEL_37;
        }
LABEL_36:
        v35 += v39;
LABEL_37:
        ++v37;
        v38 += v39 * v40;
      }
      while ( v70 > (unsigned int)v37 );
    }
  }
  return v68;
}

