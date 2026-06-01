/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_785F8
// Address: 0x000785F8

//----- (000785F8) --------------------------------------------------------
int __fastcall sub_785F8(int a1)
{
  FILE *v1; // r0
  FILE *v2; // r6
  char *v3; // r0
  int v4; // r7
  int v5; // r2
  unsigned int v6; // r8
  char *v7; // r4
  char *v8; // r12
  int v9; // r3
  char *v10; // r1
  char *v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r4
  char *v16; // r10
  char *v17; // r0
  int v18; // r10
  int v19; // r2
  int v20; // r0
  char *v21; // r12
  char *v22; // r11
  int v23; // r3
  int v24; // r1
  char *v25; // r4
  int v26; // r0
  int v27; // r3
  unsigned int v28; // r10
  char *v29; // r4
  int v30; // r0
  int v31; // r2
  char *v32; // r4
  _BOOL4 v33; // r3
  int v34; // r4
  int v36; // r5
  char *v37; // r6
  char *v38; // r5
  char *v39; // r0
  int v40; // r3
  _DWORD *v41; // r1
  char *v42; // r0
  unsigned int v43; // r11
  int v44; // lr
  char *v45; // r12
  int v46; // r2
  int v47; // r3
  char *v48; // r1
  char *v49; // r3
  int v50; // r0
  int v51; // r1
  void *ptr; // [sp+14h] [bp-20h] BYREF
  int v54; // [sp+18h] [bp-1Ch]
  unsigned int v55; // [sp+1Ch] [bp-18h]
  char *s1; // [sp+20h] [bp-14h] BYREF
  int v57; // [sp+24h] [bp-10h]
  int v58; // [sp+28h] [bp-Ch]

  v1 = sub_75BE8((int)"/proc/cpuinfo", (unsigned __int8 *)"r");
  if ( !v1 )
    return -1;
  v2 = v1;
  ptr = nullptr;
  v54 = 0;
  v55 = 0;
  v3 = (char *)sub_77EB0((int)&ptr, nullptr, 1u, 8u);
  v4 = v54;
  v5 = 0;
  v6 = v55;
  v7 = v3;
  v8 = (char *)ptr;
  v55 = 0;
  if ( v54 - 1 >= 0 )
  {
    do
    {
      v9 = 8 * v5++;
      v10 = &v8[v9];
      v11 = &v7[v9];
      v12 = *(_DWORD *)v10;
      v13 = *((_DWORD *)v10 + 1);
      *(_DWORD *)v11 = v12;
      *((_DWORD *)v11 + 1) = v13;
    }
    while ( v4 != v5 );
    v8 = (char *)ptr;
  }
  sub_77E08(v8);
  v14 = v54;
  v55 = v6;
  ptr = v7;
  *(_DWORD *)&v7[8 * v54] = -1;
  *(_DWORD *)&v7[8 * v14 + 4] = -1;
  s1 = nullptr;
  v57 = 0;
  ++v54;
  v58 = 0;
  while ( sub_77C2C((int *)&s1, v2) >= 0 )
  {
    v15 = v57;
    if ( v57 )
    {
      v16 = s1;
      v17 = strchr(s1, 58);
      if ( v17 )
        goto LABEL_9;
LABEL_28:
      v27 = v54;
      v28 = v55;
      if ( v54 + 1 > v55 )
      {
        v42 = (char *)sub_77EB0((int)&ptr, nullptr, v54 + 1, 8u);
        v44 = v54;
        v43 = v55;
        v29 = v42;
        v55 = v28;
        v45 = (char *)ptr;
        if ( v54 - 1 >= 0 )
        {
          v46 = 0;
          do
          {
            v47 = 8 * v46++;
            v48 = &v45[v47];
            v49 = &v29[v47];
            v50 = *(_DWORD *)v48;
            v51 = *((_DWORD *)v48 + 1);
            *(_DWORD *)v49 = v50;
            *((_DWORD *)v49 + 1) = v51;
          }
          while ( v44 != v46 );
          v45 = (char *)ptr;
        }
        sub_77E08(v45);
        v27 = v54;
        ptr = v29;
        v55 = v43;
      }
      else
      {
        v29 = (char *)ptr;
      }
      *(_DWORD *)&v29[8 * v27] = -1;
      *(_DWORD *)&v29[8 * v27 + 4] = -1;
      ++v54;
    }
    else
    {
      v16 = (char *)&dword_8DA5C;
      v17 = strchr((const char *)&dword_8DA5C, 58);
      if ( !v17 )
        goto LABEL_28;
LABEL_9:
      v18 = v17 - v16;
      v19 = v18;
      if ( v18 == -1 )
        goto LABEL_28;
      if ( v18 > 0 )
      {
        v21 = s1;
        v22 = &byte_D39C4;
        while ( 1 )
        {
          v23 = v19 - 1;
          v20 = (v19 - 1) | v15;
          if ( !v20 )
            break;
          v24 = (unsigned __int8)s1[v23];
          if ( v24 != 32 && v24 != 9 )
            goto LABEL_23;
          --v19;
          if ( !v23 )
            goto LABEL_17;
        }
        if ( byte_D39C4 == 32 || byte_D39C4 == 9 )
          goto LABEL_24;
        v19 = 1;
LABEL_23:
        v22 = &v21[v19];
        goto LABEL_24;
      }
      v20 = v15 | v18;
LABEL_17:
      v21 = s1;
      if ( v20 )
        goto LABEL_23;
      v22 = &byte_D39C4;
LABEL_24:
      *v22 = 0;
      if ( v57 )
      {
        v25 = s1;
        if ( !strcmp(s1, "processor") )
          goto LABEL_26;
LABEL_32:
        if ( !strcmp(v25, "core id") )
        {
          v30 = strtol(&v25[v18 + 1], nullptr, 10);
          *((_DWORD *)ptr + 2 * v54 - 1) = v30;
        }
      }
      else
      {
        v25 = (char *)&dword_8DA5C;
        if ( strcmp((const char *)&dword_8DA5C, "processor") )
          goto LABEL_32;
LABEL_26:
        v26 = strtol(&v25[v18 + 1], nullptr, 10);
        *((_DWORD *)ptr + 2 * v54 + 1073741822) = v26;
      }
    }
  }
  sub_77754(v2);
  v32 = (char *)ptr;
  v31 = v54;
  v33 = *((_DWORD *)ptr + 2 * v54 + 1073741822) == -1;
  if ( !v54 )
    v33 = 0;
  if ( v33 )
    v31 = --v54;
  if ( a1 )
    goto LABEL_39;
  v36 = 8 * v31;
  v37 = (char *)ptr + 8 * v31;
  if ( ptr != v37 )
  {
    sub_783A8((int)ptr, (_DWORD *)ptr + 2 * v31, 2 * (31 - __clz(v36 >> 3)), 0);
    if ( v36 <= 128 )
    {
      sub_78210(v32, v37);
    }
    else
    {
      v38 = v32 + 128;
      sub_78210(v32, v32 + 128);
      if ( v37 != v32 + 128 )
      {
        do
        {
          v39 = v38;
          v38 += 8;
          sub_781D0(v39);
        }
        while ( v37 != v38 );
      }
    }
    v31 = v54;
  }
  if ( !v31 )
  {
LABEL_39:
    v34 = v31;
  }
  else
  {
    v40 = 0;
    v34 = 0;
    do
    {
      if ( !v40 || (v41 = (char *)ptr + 8 * v40, *v41 != *(v41 - 2)) || v41[1] != *(v41 - 1) )
        ++v34;
      ++v40;
    }
    while ( v40 != v31 );
  }
  if ( s1 )
  {
    v57 = 0;
    sub_77E08(s1);
  }
  if ( ptr )
  {
    v54 = 0;
    sub_77E08(ptr);
  }
  return v34;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D39C4: using guessed type char byte_D39C4;
