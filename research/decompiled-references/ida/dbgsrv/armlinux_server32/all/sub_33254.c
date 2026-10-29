/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33254
// Address: 0x00033254

//----- (00033254) --------------------------------------------------------
int __fastcall sub_33254(int a1)
{
  int v1; // r4
  int v4; // r0
  __int64 v5; // r0
  __int64 v6; // kr08_8
  unsigned int v7; // r5
  unsigned int v8; // kr00_4
  unsigned int v9; // kr04_4
  unsigned int v10; // r6
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r1
  unsigned int v15; // r5
  unsigned int v16; // r3
  bool v17; // cf
  unsigned __int64 v18; // r10
  unsigned int v19; // r5
  int v20; // r0
  int v21; // r1
  bool v22; // zf
  unsigned int v23; // r3
  int v24; // r1
  char *v25; // r0
  int v26; // r5
  int v27; // r8
  int v28; // r6
  int v29; // r3
  int v30; // r3
  unsigned int v31; // r1
  int v32; // r2
  int v33; // r3
  unsigned int v34; // r1
  int v35; // r2
  unsigned int v36; // r1
  unsigned int v37; // r3
  int v38; // r5
  int v39; // r6
  unsigned int v40; // r3
  int v41; // r0
  _QWORD *v42; // r3
  char *v43; // r0
  __int64 v44; // kr20_8
  char *v45; // r2
  int v46; // r3
  int v47; // r2
  char *v48; // r0
  const char *s1; // [sp+10h] [bp-34h]
  char *s1a; // [sp+10h] [bp-34h]
  int v51; // [sp+14h] [bp-30h]
  char *v52; // [sp+1Ch] [bp-28h] BYREF
  int v53; // [sp+20h] [bp-24h]
  int v54; // [sp+24h] [bp-20h]
  int v55; // [sp+28h] [bp-1Ch]
  __int64 v56; // [sp+30h] [bp-14h]

  if ( !*(_QWORD *)(a1 + 428) )
    return 0;
  v4 = *(_DWORD *)(a1 + 364);
  v55 = a1;
  LODWORD(v5) = sub_74D98(v4, 0, 1);
  v6 = v5 - *(_QWORD *)(a1 + 368);
  LODWORD(v5) = *(_DWORD *)(a1 + 364);
  v7 = *(_DWORD *)(a1 + 372);
  v8 = *(_DWORD *)(a1 + 368);
  v9 = *(_DWORD *)(a1 + 428);
  v10 = *(_DWORD *)(a1 + 432);
  v56 = v6;
  v11 = sub_74D98(v5, __PAIR64__(v10, v9) + __PAIR64__(v7, v8), 0);
  v14 = v12 + 1;
  v13 = v14 == 0;
  if ( !v14 )
    v13 = v11 == -1;
  if ( v13 )
    goto LABEL_26;
  v15 = *(_DWORD *)(a1 + 452);
  v16 = *(_DWORD *)(a1 + 60);
  v17 = v15 >= v16;
  if ( v15 > v16 )
  {
    v25 = *(char **)(a1 + 56);
    if ( v15 > *(_DWORD *)(a1 + 64) )
    {
      v25 = (char *)sub_78018(a1 + 56, *(void **)(a1 + 56), *(_DWORD *)(a1 + 452), 0x40u);
      v16 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 56) = v25;
    }
    memset(&v25[64 * v16], 0, (v15 - v16) << 6);
    *(_DWORD *)(a1 + 60) = v15;
    v16 = *(_DWORD *)(a1 + 452);
  }
  else if ( v15 != v16 )
  {
    v16 = *(_DWORD *)(a1 + 452);
    if ( !v17 )
      *(_DWORD *)(a1 + 60) = v15;
  }
  *(_BYTE *)(a1 + 176) = 1;
  if ( v16 )
  {
    v18 = *(_QWORD *)(a1 + 428);
    v19 = 0;
    do
    {
      v20 = sub_74D98(*(_DWORD *)(a1 + 364), v18 + *(_QWORD *)(a1 + 368), 0);
      v22 = ++v21 == 0;
      if ( !v21 )
        v22 = v20 == -1;
      if ( v22 )
        break;
      if ( !*(_BYTE *)(a1 + 176) )
        sub_14960();
      v23 = *(_DWORD *)(a1 + 60);
      if ( v23 <= v19 )
        v24 = 0;
      else
        v24 = *(_DWORD *)(a1 + 56);
      if ( v23 > v19 )
        v24 += v19 << 6;
      if ( !sub_2A634((signed int *)a1, v24) )
        break;
      if ( *(_DWORD *)(a1 + 452) <= ++v19 )
        goto LABEL_31;
      v18 = *(unsigned __int16 *)(a1 + 446) * (unsigned __int64)v19 + *(_QWORD *)(a1 + 428);
    }
    while ( v18 >= *(_QWORD *)(a1 + 428) );
LABEL_26:
    v1 = 0;
    goto LABEL_27;
  }
LABEL_31:
  v26 = *(_DWORD *)(a1 + 56);
  v27 = v26 + (*(_DWORD *)(a1 + 60) << 6);
  if ( v27 != v26 )
  {
    v28 = 0;
    while ( 1 )
    {
      do
      {
        v26 += 64;
        ++v28;
        if ( v26 == v27 )
          goto LABEL_56;
      }
      while ( !v28 || !*(_QWORD *)(v26 + 32) );
      v29 = *(_DWORD *)(v26 + 4);
      switch ( v29 )
      {
        case 6:
          v36 = *(_DWORD *)(v26 + 40);
          if ( !*(_BYTE *)(a1 + 176) )
            sub_14960();
          if ( v36 < *(_DWORD *)(a1 + 60) && (v35 = *(_DWORD *)(a1 + 56) + (v36 << 6)) != 0 )
          {
            if ( *(_DWORD *)(v35 + 4) != 11 )
              goto LABEL_46;
            *(_DWORD *)(v35 + 40) = 0;
          }
          else
          {
            sub_171B0((int)"Illegal link section %d of the dynamic linking information section\n");
          }
          break;
        case 11:
          v33 = *(unsigned __int8 *)(a1 + 176);
          *(_DWORD *)(a1 + 92) = v28;
          v34 = *(_DWORD *)(v26 + 40);
          if ( !v33 )
            sub_14960();
          if ( v34 < *(_DWORD *)(a1 + 60) && (v35 = *(_DWORD *)(a1 + 56) + (v34 << 6)) != 0 )
LABEL_46:
            sub_33138(a1, (__int64 *)(a1 + 264), v35, 1);
          else
            sub_171B0((int)"Illegal link section %d of the string table for dynamic linking symbols\n", v34);
          break;
        case 2:
          v30 = *(unsigned __int8 *)(a1 + 176);
          *(_DWORD *)(a1 + 124) = v28;
          v31 = *(_DWORD *)(v26 + 40);
          if ( !v30 )
            sub_14960();
          if ( v31 < *(_DWORD *)(a1 + 60) && (v32 = *(_DWORD *)(a1 + 56) + (v31 << 6)) != 0 )
            sub_33138(a1, (__int64 *)(a1 + 232), v32, 1);
          else
            sub_171B0((int)"Illegal link section %d of the string table for symbols\n", v31);
          break;
      }
    }
  }
LABEL_56:
  v37 = *(_DWORD *)(a1 + 456);
  if ( v37 )
  {
    if ( !*(_BYTE *)(a1 + 176) )
      sub_14960();
    v38 = *(_DWORD *)(a1 + 56);
    if ( v37 < *(_DWORD *)(a1 + 60) )
    {
      v42 = (_QWORD *)(v38 + (v37 << 6));
      if ( v42 )
      {
        *(_QWORD *)(a1 + 184) = v42[3];
        *(_QWORD *)(a1 + 192) = v42[2];
        *(_QWORD *)(a1 + 200) = v42[4];
      }
    }
  }
  else
  {
    v38 = *(_DWORD *)(a1 + 56);
  }
  v39 = 0;
  v52 = nullptr;
  v53 = 0;
  v54 = 0;
  if ( v38 == v27 )
  {
    v43 = nullptr;
    goto LABEL_76;
  }
  while ( 1 )
  {
    v38 += 64;
    ++v39;
    if ( v38 == v27 )
      break;
    if ( v39 && *(_QWORD *)(v38 + 32) )
    {
      v53 = 0;
      sub_3266C(a1 + 40, (int)&v52, (unsigned int *)v38);
      v40 = *(_DWORD *)(v38 + 4);
      if ( v40 == 18 )
      {
        v46 = *(_DWORD *)(v38 + 40);
        if ( v46 )
        {
          v47 = *(_DWORD *)(a1 + 92);
          if ( v46 == *(_DWORD *)(a1 + 124) )
          {
            *(_DWORD *)(a1 + 136) = v39;
            v46 = *(_DWORD *)(v38 + 40);
          }
          if ( v46 == v47 )
            *(_DWORD *)(a1 + 140) = v39;
        }
      }
      else if ( v40 > 0x12 )
      {
        switch ( v40 )
        {
          case 0x6FFFFFFEu:
            *(_DWORD *)(a1 + 152) = v39;
            break;
          case 0x6FFFFFFFu:
            *(_DWORD *)(a1 + 156) = v39;
            break;
          case 0x6FFFFFFDu:
            *(_DWORD *)(a1 + 148) = v39;
            break;
        }
      }
      else
      {
        switch ( v40 )
        {
          case 3u:
            if ( v53 )
              v45 = v52;
            else
              v45 = (char *)&dword_8DB98;
            s1a = v45;
            if ( !strcmp(v45, ".strtab") )
            {
              sub_33138(a1, (__int64 *)(a1 + 232), v38, 0);
            }
            else if ( !strcmp(s1a, ".dynstr") )
            {
              sub_33138(a1, (__int64 *)(a1 + 264), v38, 0);
            }
            break;
          case 8u:
            v51 = v53;
            goto LABEL_100;
          case 1u:
            v51 = v53;
            if ( v53 )
            {
              s1 = v52;
              v41 = strcmp(v52, ".interp");
            }
            else
            {
              s1 = (const char *)&dword_8DB98;
              v41 = strcmp((const char *)&dword_8DB98, ".interp");
            }
            if ( v41 )
            {
              if ( !strcmp(s1, ".got") )
              {
                *(_DWORD *)(a1 + 96) = v39;
                *(_BYTE *)(a1 + 177) = 1;
              }
              else if ( !strcmp(s1, ".got.plt") )
              {
                *(_DWORD *)(a1 + 100) = v39;
              }
              else if ( !strcmp(s1, ".plt.got") )
              {
                *(_DWORD *)(a1 + 144) = v39;
              }
              else if ( !strcmp(s1, ".plt.sec") )
              {
                *(_DWORD *)(a1 + 160) = v39;
              }
              else if ( !strcmp(s1, ".gnu_debugdata") )
              {
                *(_DWORD *)(a1 + 164) = v39;
              }
              else if ( !strcmp(s1, ".eh_frame") )
              {
                *(_DWORD *)(a1 + 168) = v39;
              }
              else if ( *(_BYTE *)(a1 + 481) && !strcmp(s1, ".opd") )
              {
                *(_DWORD *)(a1 + 132) = v39;
              }
              else
              {
LABEL_100:
                if ( v51 )
                  v48 = v52;
                else
                  v48 = (char *)&dword_8DB98;
                if ( !strcmp(v48, ".plt") )
                  *(_DWORD *)(a1 + 116) = v39;
              }
            }
            else
            {
              *(_DWORD *)(a1 + 108) = v39;
            }
            break;
        }
      }
    }
  }
  v43 = v52;
LABEL_76:
  v44 = *(_QWORD *)(a1 + 96);
  if ( !HIDWORD(v44) || !(_DWORD)v44 )
    *(_DWORD *)(a1 + 100) = v44;
  if ( v43 )
  {
    v53 = 0;
    sub_77F70(v43);
  }
  v1 = 1;
LABEL_27:
  sub_74D98(*(_DWORD *)(v55 + 364), v56 + *(_QWORD *)(v55 + 368), 0);
  return v1;
}
// 332B0: variable 'v5' is possibly undefined
// 332DC: variable 'v12' is possibly undefined
// 33324: variable 'v21' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
