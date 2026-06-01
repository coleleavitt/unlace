/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E8A0
// Address: 0x0001E8A0

//----- (0001E8A0) --------------------------------------------------------
void __fastcall sub_1E8A0(int a1, _DWORD *a2)
{
  int v2; // r10
  int v3; // r6
  int v6; // r7
  void **v7; // r0
  void *v8; // r3
  void *v9; // r1
  void *v10; // r2
  unsigned int v11; // r3
  int v12; // r4
  size_t v13; // r8
  int v14; // r1
  signed int v15; // r3
  int v16; // r1
  char v17; // r3
  char v18; // r4
  char *v19; // r3
  char *v20; // r0
  char *v21; // r3
  void *v22; // r0
  int v23; // r1
  int v24; // r2
  int *v25; // r4
  int *v26; // r8
  char *v27; // r6
  int v28; // r9
  int v29; // r7
  int v30; // r8
  const char **v31; // r6
  const char *v32; // r1
  int *v33; // r3
  int *v34; // r1
  char *v35; // r6
  unsigned int v36; // r2
  unsigned int v37; // r2
  const char *v38; // r3
  void *v39; // r0
  int v40; // r7
  int v41; // r5
  char *v42; // r4
  int v43; // r6
  char *v44; // r4
  void *v45; // r0
  void *v46; // r0
  int v47; // r1
  bool v48; // cc
  size_t v49; // r0
  unsigned int v50; // r2
  void *v51; // r0
  int v52; // r3
  __int64 v53; // kr00_8
  int v54; // r6
  int *v55; // r4
  void *v56; // r0
  void *v57; // r0
  void *v58; // r0
  void *v59; // r0
  int *v60; // r0
  int v61; // r1
  size_t v62; // [sp+Ch] [bp-98h]
  int *v63; // [sp+10h] [bp-94h]
  unsigned int v64; // [sp+10h] [bp-94h]
  void *n; // [sp+14h] [bp-90h]
  size_t na; // [sp+14h] [bp-90h]
  void *v67; // [sp+18h] [bp-8Ch]
  int v68; // [sp+1Ch] [bp-88h]
  char v69; // [sp+20h] [bp-84h]
  void *v70; // [sp+2Ch] [bp-78h] BYREF
  int v71; // [sp+30h] [bp-74h]
  unsigned int v72; // [sp+34h] [bp-70h]
  int (**v73[3])(); // [sp+38h] [bp-6Ch] BYREF
  void *ptr; // [sp+44h] [bp-60h] BYREF
  int v75; // [sp+48h] [bp-5Ch]
  int v76; // [sp+4Ch] [bp-58h]
  int v77; // [sp+6Ch] [bp-38h] BYREF
  int v78; // [sp+70h] [bp-34h]
  int v79; // [sp+74h] [bp-30h]
  char v80; // [sp+78h] [bp-2Ch]
  int v81; // [sp+7Ch] [bp-28h]
  void *dest; // [sp+80h] [bp-24h] BYREF
  unsigned int v83; // [sp+84h] [bp-20h]
  unsigned int v84; // [sp+88h] [bp-1Ch]
  int v85; // [sp+8Ch] [bp-18h]
  int v86; // [sp+90h] [bp-14h]
  int v87; // [sp+94h] [bp-10h]
  unsigned int v88; // [sp+98h] [bp-Ch] BYREF

  v2 = a2[1];
  v3 = 0;
  v70 = nullptr;
  v71 = 0;
  v72 = 0;
  if ( v2 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v12 = *a2 + v3;
        v13 = *(_DWORD *)(v12 + 12);
        if ( !v13 )
          break;
        v7 = (void **)sub_15C98((int *)&v70, *(char **)(v12 + 8));
        if ( !v7 )
        {
          v61 = *(_DWORD *)(v12 + 4);
          ptr = *(void **)v12;
          v75 = v61;
          n = sub_77FEC(v13);
          memcpy(n, *(const void **)(v12 + 8), v13);
          goto LABEL_16;
        }
LABEL_4:
        v8 = *(void **)v12;
        ++v6;
        v9 = *v7;
        v3 += 40;
        v10 = v7[1];
        if ( *(_DWORD *)v12 < (unsigned int)*v7 )
        {
          v9 = *(void **)v12;
          *v7 = v8;
        }
        if ( v8 > v10 )
        {
          v10 = v8;
          v7[1] = v8;
        }
        v11 = *(_DWORD *)(v12 + 4);
        if ( v11 < (unsigned int)v9 )
          *v7 = (void *)v11;
        if ( v11 > (unsigned int)v10 )
          v7[1] = (void *)v11;
        if ( v6 == v2 )
          goto LABEL_21;
      }
      v7 = (void **)sub_15C98((int *)&v70, (char *)&dword_8DB98);
      if ( v7 )
        goto LABEL_4;
      v14 = *(_DWORD *)(v12 + 4);
      n = nullptr;
      ptr = *(void **)v12;
      v75 = v14;
LABEL_16:
      v15 = *(_DWORD *)(v12 + 24);
      v62 = v15;
      if ( v15 )
      {
        v67 = sub_77FEC(v15);
        memcpy(v67, *(const void **)(v12 + 20), v62);
      }
      else
      {
        v67 = nullptr;
      }
      v16 = v71;
      v68 = *(_DWORD *)(v12 + 32);
      v17 = *(_BYTE *)(v12 + 36);
      v18 = *(_BYTE *)(v12 + 37);
      v69 = v17;
      v19 = (char *)v70;
      if ( v71 + 1 > v72 )
      {
        v20 = (char *)sub_78018((int)&v70, v70, v71 + 1, 0x28u);
        v16 = v71;
        v19 = v20;
        v70 = v20;
      }
      ++v6;
      v21 = &v19[40 * v16];
      v22 = ptr;
      v23 = v75;
      v3 += 40;
      *((_DWORD *)v21 + 4) = v13;
      v21[37] = v18;
      *(_DWORD *)v21 = v22;
      *((_DWORD *)v21 + 1) = v23;
      v24 = v71;
      *((_DWORD *)v21 + 2) = n;
      *((_DWORD *)v21 + 3) = v13;
      v71 = v24 + 1;
      *((_DWORD *)v21 + 5) = v67;
      *((_DWORD *)v21 + 6) = v62;
      *((_DWORD *)v21 + 7) = v62;
      *((_DWORD *)v21 + 8) = v68;
      v21[36] = v69;
    }
    while ( v6 != v2 );
  }
LABEL_21:
  v25 = *(int **)(a1 + 988);
  v26 = (int *)(a1 + 980);
  while ( v25 != v26 )
  {
    if ( v25[8] )
    {
      v27 = (char *)v25[7];
      if ( !sub_15C98((int *)&v70, v27) )
        goto LABEL_66;
    }
    else
    {
      v27 = (char *)&dword_8DB98;
      if ( !sub_15C98((int *)&v70, (char *)&dword_8DB98) )
      {
LABEL_66:
        if ( !sub_1A170((_DWORD *)a1, 8, v27) )
        {
          v81 = 0;
          dest = nullptr;
          v83 = 0;
          v84 = 0;
          v85 = 0;
          v86 = 0;
          v87 = 0;
          v78 = 0;
          v80 = 0;
          v77 = -1;
          v79 = -1;
          sub_6E52C(&v77, 9);
          v47 = v81 & 0xFFFFFFF;
          v48 = (v81 & 0xFFFFFFFu) > 3;
          if ( (v81 & 0xFFFFFFF) != 3 )
            v48 = (v81 & 0xFFFFFFFu) - 9 > 1;
          if ( v48 )
          {
            if ( under_debugger )
              __und(0xFFu);
            sub_78C64(3297);
          }
          if ( v27 && (v49 = strlen(v27), v47 = v81 & 0xFFFFFFF, (na = v49) != 0) )
          {
            v50 = v49 + 1;
            v51 = dest;
            v64 = v50;
            if ( v50 > v84 )
            {
              v51 = sub_78018((int)&dest, dest, v50, 1u);
              dest = v51;
            }
            v83 = v64;
            memmove(v51, v27, na);
            *((_BYTE *)dest + na) = 0;
            v47 = v81 & 0xFFFFFFF;
          }
          else
          {
            v83 = 0;
          }
          v52 = *(_DWORD *)(a1 + 1068);
          v79 = -1;
          v80 = 1;
          v77 = v52;
          v78 = v52;
          if ( v47 )
          {
            v53 = *(_QWORD *)(a1 + 64);
            if ( (_DWORD)v53 == HIDWORD(v53) )
            {
              sub_1B70C((_DWORD *)(a1 + 56), (int)&v77);
            }
            else
            {
              *(_DWORD *)(v53 - 44) = -1;
              *(_DWORD *)(v53 - 40) = 0;
              *(_DWORD *)(v53 - 36) = -1;
              *(_BYTE *)(v53 - 32) = 0;
              *(_DWORD *)(v53 - 28) = 0;
              sub_6E614(v53 - 44, (int)&v77);
              *(_DWORD *)(a1 + 64) -= 44;
            }
            *(_BYTE *)(a1 + 1112) = 0;
          }
          sub_6E484(&v77);
        }
        v54 = sub_81440((int)v25);
        v55 = sub_81644(v25, (_DWORD *)(a1 + 980));
        v56 = (void *)v55[22];
        if ( v56 )
        {
          v55[23] = 0;
          sub_77F70(v56);
        }
        v57 = (void *)v55[19];
        if ( v57 )
        {
          v55[20] = 0;
          sub_77F70(v57);
        }
        sub_18D00((int)(v55 + 13), (_DWORD *)v55[15]);
        v58 = (void *)v55[10];
        if ( v58 )
        {
          v55[11] = 0;
          sub_77F70(v58);
        }
        v59 = (void *)v55[7];
        if ( v59 )
        {
          v55[8] = 0;
          sub_77F70(v59);
        }
        v60 = v55;
        v25 = (int *)v54;
        sub_809EC(v60);
        --*(_DWORD *)(a1 + 996);
        continue;
      }
    }
    v25 = (int *)sub_81440((int)v25);
  }
  v28 = v71;
  if ( v71 > 0 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = (const char **)((char *)v70 + v29);
      if ( *(_DWORD *)((char *)v70 + v29 + 12) > 1u )
      {
        if ( *(_BYTE *)(a1 + 453)
          || (!*(_DWORD *)(a1 + 304) ? (v32 = (const char *)&dword_8DB98) : (v32 = *(const char **)(a1 + 300)),
              strcmp(v31[2], v32)) )
        {
          v33 = *(int **)(a1 + 984);
          v34 = v25;
          v35 = (char *)*v31;
          if ( !v33 )
            goto LABEL_101;
          do
          {
            v36 = v33[4];
            if ( (unsigned int)v35 > v36 )
              v33 = (int *)v33[3];
            else
              v34 = v33;
            if ( (unsigned int)v35 <= v36 )
              v33 = (int *)v33[2];
          }
          while ( v33 );
          if ( v25 == v34 || (unsigned int)v35 < v34[4] )
          {
LABEL_101:
            if ( !*(_BYTE *)(a1 + 1077)
              && *(_DWORD *)(a1 + 1068) != -1
              && sub_1C68C(a1, -1, (int)v35, &v88, 4, 0) == 4
              && v88 == 1179403647 )
            {
              ptr = nullptr;
              v75 = 0;
              v76 = 0;
              v63 = *(_DWORD *)((char *)v70 + v29 + 12) ? *(int **)((char *)v70 + v29 + 8) : &dword_8DB98;
              v73[0] = (int (**)())&off_D0590;
              v73[1] = (int (**)())4;
              v73[2] = (int (**)())&ptr;
              sub_35040((int)v63, v73, 0);
              v37 = sub_18538(a1, &v70, (unsigned int *)((char *)v70 + v29));
              v38 = (const char *)(v75 ? ptr : &dword_8DB98);
              sub_1DF4C(a1, v35, v37, v63, v38);
              if ( ptr )
              {
                v75 = 0;
                sub_77F70(ptr);
              }
            }
          }
        }
      }
      ++v30;
      v29 += 40;
    }
    while ( v28 != v30 );
  }
  sub_1CC80(a1);
  v39 = v70;
  if ( v70 )
  {
    v40 = v71;
    if ( v71 )
    {
      v41 = 0;
      v42 = (char *)v70;
      v43 = 0;
      while ( 1 )
      {
        v44 = &v42[v41];
        v45 = *((void **)v44 + 5);
        if ( v45 )
        {
          *((_DWORD *)v44 + 6) = 0;
          sub_77F70(v45);
        }
        v46 = *((void **)v44 + 2);
        if ( v46 )
        {
          *((_DWORD *)v44 + 3) = 0;
          sub_77F70(v46);
        }
        ++v43;
        v41 += 40;
        if ( v40 == v43 )
          break;
        v42 = (char *)v70;
      }
      v39 = v70;
    }
    v71 = 0;
    sub_77F70(v39);
  }
}
// 8DB98: using guessed type int dword_8DB98;
// D0590: using guessed type _UNKNOWN *off_D0590;
// D6C20: using guessed type char under_debugger;
