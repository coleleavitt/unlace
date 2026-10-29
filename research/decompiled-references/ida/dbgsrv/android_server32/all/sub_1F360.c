/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F360
// Address: 0x0001F360

//----- (0001F360) --------------------------------------------------------
int __fastcall sub_1F360(int a1, int a2, int a3)
{
  FILE *v5; // r0
  FILE **v6; // r4
  int v7; // r0
  int v8; // r4
  _DWORD *v9; // r4
  _DWORD *v10; // r2
  int v11; // r5
  char *v12; // r6
  const char *v13; // r1
  const char *v14; // r4
  char *v15; // r0
  int v16; // r1
  char *v17; // r0
  unsigned int v18; // r1
  unsigned int i; // r0
  _DWORD *v20; // r2
  _DWORD *v21; // r4
  int v22; // r5
  char *v23; // r6
  char *v24; // r0
  unsigned int v25; // r1
  int v26; // r2
  int v27; // r4
  bool v28; // zf
  char *v29; // r7
  _DWORD *v30; // r4
  unsigned int v31; // r6
  unsigned int v32; // r5
  size_t v33; // r2
  const void *v34; // r1
  void *v35; // r3
  size_t v36; // r5
  const char *v37; // r2
  int v38; // r0
  unsigned int v39; // r1
  char *v40; // r5
  unsigned int v41; // r6
  int j; // r7
  void *v43; // r0
  int v45; // [sp+4h] [bp-84h]
  const void *v47; // [sp+10h] [bp-78h]
  _DWORD *v48; // [sp+14h] [bp-74h]
  unsigned int v49; // [sp+18h] [bp-70h]
  unsigned int *v50; // [sp+1Ch] [bp-6Ch]
  int v51; // [sp+20h] [bp-68h]
  char *s; // [sp+24h] [bp-64h]
  unsigned int **v53; // [sp+28h] [bp-60h]
  unsigned int *v54; // [sp+30h] [bp-58h]
  int v55; // [sp+38h] [bp-50h]
  unsigned int v56; // [sp+38h] [bp-50h]
  int v57; // [sp+3Ch] [bp-4Ch]
  _DWORD *v58; // [sp+40h] [bp-48h] BYREF
  unsigned int v59; // [sp+44h] [bp-44h]
  int v60; // [sp+48h] [bp-40h]
  unsigned int v61; // [sp+4Ch] [bp-3Ch] BYREF
  unsigned int v62; // [sp+50h] [bp-38h]
  char v63[16]; // [sp+64h] [bp-24h] BYREF
  unsigned __int8 v64; // [sp+74h] [bp-14h]
  char *s1; // [sp+78h] [bp-10h] BYREF
  unsigned int v66; // [sp+7Ch] [bp-Ch]
  int v67; // [sp+80h] [bp-8h]

  v57 = -5;
  if ( !*(_BYTE *)(a1 + 977) )
  {
    v5 = *(FILE **)(a1 + 1012);
    v55 = a1;
    v6 = (FILE **)(a1 + 1012);
    if ( v5 )
    {
      if ( a3 )
      {
        sub_1CD58(a1, 0, 1);
        v5 = *v6;
      }
      rewind(v5);
      v66 = 0;
      s1 = nullptr;
      v67 = 0;
      v59 = 0;
      v58 = nullptr;
      v60 = 0;
      v54 = (unsigned int *)(v55 + 1028);
      v7 = 1;
      v53 = (unsigned int **)a2;
LABEL_6:
      v45 = v7;
      v8 = v55;
      while ( sub_1F0E8(v8, &v61) )
      {
        if ( v61 < v62 )
        {
          if ( *v54 <= 1 )
          {
            v49 = v66;
            if ( v66 >= 2 )
            {
              v9 = v58;
              v10 = &v58[3 * v59];
              if ( 12 * v59 )
              {
                v48 = &v58[3 * v59];
                v11 = 12 * v59;
                v12 = s1;
                while ( 1 )
                {
                  v13 = v9[1] ? (const char *)*v9 : &byte_B3CBE;
                  if ( !strcmp(v12, v13) )
                    break;
                  v11 -= 12;
                  v9 += 3;
                  if ( !v11 )
                  {
                    a2 = (int)v53;
                    goto LABEL_22;
                  }
                }
                v10 = v48;
              }
              a2 = (int)v53;
              if ( v9 == v10 )
              {
                v12 = s1;
LABEL_22:
                if ( v49 )
                  v14 = v12;
                else
                  v14 = &byte_B3CBE;
                v15 = strstr(v14, "ld-");
                v16 = v15 - v14;
                if ( v15 && v16 != -1 )
                {
                  if ( !v16 )
                    goto LABEL_31;
                  v17 = &v12[v16 - 1];
                  if ( !(v49 | (v16 - 1)) )
                    v17 = byte_DE331;
                  if ( *v17 == 47 )
LABEL_31:
                    sub_24B4C((int)&v58, (int)&s1);
                }
              }
            }
          }
          v18 = *(_DWORD *)(a2 + 4);
          i = 0;
          if ( !v18 )
            goto LABEL_37;
          v20 = *(_DWORD **)a2;
          for ( i = 0; i < v18; ++i )
          {
            if ( *v20 == v61 )
              break;
            v20 += 10;
          }
          v8 = v55;
          if ( i == v18 )
          {
LABEL_37:
            if ( *(_DWORD *)(a2 + 8) >= i + 1 )
            {
              v21 = *(_DWORD **)a2;
            }
            else
            {
              v21 = qvector_reserve(a2, *(void **)a2, i + 1, 0x28u);
              *(_DWORD *)a2 = v21;
              i = *(_DWORD *)(a2 + 4);
            }
            v22 = 10 * i;
            v23 = (char *)&v21[10 * i];
            memset(v23, 0, 0x26u);
            v53[1] = (unsigned int *)((char *)v53[1] + 1);
            v21[v22] = v61;
            *((_DWORD *)v23 + 1) = v62;
            v24 = *((char **)v23 + 2);
            *((_DWORD *)v23 + 2) = s1;
            v25 = *((_DWORD *)v23 + 3);
            *((_DWORD *)v23 + 3) = v66;
            v26 = *((_DWORD *)v23 + 4);
            *((_DWORD *)v23 + 4) = v67;
            s1 = v24;
            v66 = v25;
            v67 = v26;
            sub_1BC8C((int)v24, (int)(v23 + 8));
            a2 = (int)v53;
            v27 = v64;
            v23[36] = v64;
            if ( v45 >= v27 )
              v27 = v45;
            if ( strchr(v63, 114) )
              v23[37] |= 4u;
            if ( strchr(v63, 119) )
              v23[37] |= 2u;
            v28 = strchr(v63, 120) == nullptr;
            v7 = v27;
            if ( !v28 )
            {
              v23[37] |= 1u;
              v7 = v27;
            }
            goto LABEL_6;
          }
        }
      }
      if ( v59 )
      {
        v29 = (char *)(v8 + 1024);
        v50 = (unsigned int *)(v8 + 1032);
        v30 = nullptr;
        v31 = 0;
        v51 = 0;
        s = v29;
        do
        {
          if ( (_DWORD *)(v29 - (char *)v58) != v30 )
          {
            v32 = *(_DWORD *)((char *)v30 + (_DWORD)v58 + 4);
            v33 = v32 - 1;
            if ( v32 < 2 )
            {
              *v54 = 0;
            }
            else
            {
              v34 = *(const void **)((char *)v30 + (_DWORD)v58);
              v35 = *(void **)v29;
              if ( *v50 < v32 )
              {
                v47 = *(const void **)((char *)v30 + (_DWORD)v58);
                v35 = qvector_reserve((int)v29, v35, v32, 1u);
                v29 = s;
                *(_DWORD *)s = v35;
                v33 = v32 - 1;
                v34 = v47;
              }
              *v54 = v32;
              v36 = v33;
              memmove(v35, v34, v33);
              *(_BYTE *)(*(_DWORD *)v29 + v36) = 0;
            }
          }
          sub_64B30(v55, "trying potential interpreter %s\n");
          if ( sub_22244(v55, v53, 1) )
          {
            if ( *v54 )
              v37 = *(const char **)s;
            else
              v37 = &byte_B3CBE;
            sub_1BC48(v55, "Found a valid interpeter in %s, will report shared library events!\n", v37);
            sub_1F7BC(v55, v53);
            v51 = 1;
          }
          v30 += 3;
          ++v31;
          v29 = s;
        }
        while ( v31 < v59 );
        v8 = v55;
        a2 = (int)v53;
        if ( !(v51 << 31) )
          *v54 = 0;
      }
      if ( *(_DWORD *)(a2 + 4) )
      {
        v38 = 36;
        v39 = 0;
        do
        {
          *(_BYTE *)(*(_DWORD *)a2 + v38) = v45;
          v38 += 40;
          ++v39;
        }
        while ( v39 < *(_DWORD *)(a2 + 4) );
      }
      if ( a3 )
        sub_20908(v8, 0, 1);
      v40 = (char *)v58;
      if ( v58 )
      {
        v56 = v59;
        if ( v59 )
        {
          v41 = 1;
          for ( j = 8; ; j += 12 )
          {
            v43 = *(void **)&v40[j - 8];
            if ( v43 )
            {
              *(_DWORD *)&v40[j - 4] = 0;
              qfree(v43);
              *(_DWORD *)&v40[j - 8] = 0;
              *(_DWORD *)&v40[j] = 0;
            }
            if ( v41 >= v56 )
              break;
            ++v41;
            v40 = (char *)v58;
          }
          v40 = (char *)v58;
        }
        v59 = 0;
        qfree(v40);
        v60 = 0;
        v58 = nullptr;
      }
      if ( s1 )
      {
        v66 = 0;
        qfree(s1);
        v67 = 0;
        s1 = nullptr;
      }
      return 1;
    }
  }
  return v57;
}
// B3CBE: using guessed type char byte_B3CBE;
