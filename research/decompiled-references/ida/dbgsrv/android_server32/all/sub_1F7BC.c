/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F7BC
// Address: 0x0001F7BC

//----- (0001F7BC) --------------------------------------------------------
int __fastcall sub_1F7BC(int a1, _DWORD *a2)
{
  int v2; // r2
  const char *v3; // r7
  unsigned int v4; // r6
  unsigned int v5; // r5
  unsigned int *v6; // r4
  const char *v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r1
  int *v12; // r4
  _DWORD *v13; // r0
  int v14; // r1
  const char *v15; // r7
  unsigned int v16; // r4
  char *v17; // r5
  unsigned int v18; // r6
  const char *v19; // r0
  int *v20; // r0
  int v21; // r4
  size_t v22; // r0
  size_t v23; // r5
  unsigned int v24; // r2
  void *v25; // r1
  int v26; // r0
  unsigned int v27; // r7
  int v28; // r3
  int v29; // r2
  int v30; // r0
  int *v31; // r0
  _DWORD *v32; // r0
  int v33; // r1
  int v34; // r5
  int v35; // r7
  char *v36; // r4
  const char **v37; // r0
  const char *v38; // r1
  unsigned int v39; // r6
  int *v40; // r1
  int *v41; // r0
  unsigned int v42; // r2
  int **v43; // r3
  const char *v44; // r0
  char *v45; // r4
  unsigned int v46; // r2
  char *v47; // r0
  int v49; // [sp+10h] [bp-7Ch]
  unsigned int v50; // [sp+14h] [bp-78h]
  _BYTE *v51; // [sp+18h] [bp-74h]
  int *v52; // [sp+1Ch] [bp-70h]
  _DWORD *v53; // [sp+24h] [bp-68h]
  char *s2; // [sp+28h] [bp-64h]
  unsigned int v55; // [sp+2Ch] [bp-60h]
  int **v56; // [sp+2Ch] [bp-60h]
  int v58; // [sp+34h] [bp-58h]
  int *v59; // [sp+34h] [bp-58h]
  int v60; // [sp+34h] [bp-58h]
  int *v61; // [sp+38h] [bp-54h]
  int *v62; // [sp+38h] [bp-54h]
  int v63; // [sp+3Ch] [bp-50h]
  char *v64; // [sp+40h] [bp-4Ch] BYREF
  int v65; // [sp+44h] [bp-48h]
  int v66; // [sp+48h] [bp-44h]
  char *v67; // [sp+4Ch] [bp-40h] BYREF
  int v68; // [sp+50h] [bp-3Ch]
  int v69; // [sp+54h] [bp-38h]
  unsigned int v70; // [sp+58h] [bp-34h] BYREF
  int v71; // [sp+5Ch] [bp-30h] BYREF
  int v72; // [sp+60h] [bp-2Ch]
  int v73; // [sp+64h] [bp-28h]
  char v74; // [sp+68h] [bp-24h]
  int v75; // [sp+6Ch] [bp-20h]
  void *ptr; // [sp+70h] [bp-1Ch] BYREF
  unsigned int v77; // [sp+74h] [bp-18h]
  unsigned int v78; // [sp+78h] [bp-14h]
  int v79; // [sp+7Ch] [bp-10h]
  int v80; // [sp+80h] [bp-Ch]
  int v81; // [sp+84h] [bp-8h]
  int v82; // [sp+88h] [bp-4h]

  v68 = 0;
  v67 = nullptr;
  v69 = 0;
  v55 = a2[1];
  v63 = a1;
  if ( v55 )
  {
    v2 = 0;
    do
    {
      v58 = v2;
      v61 = (int *)(*a2 + 40 * v2);
      v3 = &byte_B3CBE;
      if ( v61[3] )
        v3 = *(const char **)(*a2 + 40 * v2 + 8);
      v4 = v68;
      if ( !v68 )
        goto LABEL_22;
      v5 = 0;
      v6 = (unsigned int *)v67;
      while ( 1 )
      {
        v7 = v6[3] ? (const char *)v6[2] : &byte_B3CBE;
        ++v5;
        if ( !strcmp(v7, v3) )
          break;
        v6 += 10;
        if ( v5 >= v4 )
          goto LABEL_22;
      }
      if ( v6 )
      {
        v8 = *v6;
        v9 = *v61;
        if ( *v6 > *v61 )
        {
          *v6 = v9;
          v8 = v9;
        }
        v10 = v6[1];
        a1 = v63;
        if ( v10 < v9 )
        {
          v6[1] = v9;
          v10 = v9;
        }
        v11 = v61[1];
        if ( v8 > v11 )
          *v6 = v11;
        if ( v10 < v11 )
          v6[1] = v11;
      }
      else
      {
LABEL_22:
        sub_24A54((int)&v67, v61);
        a1 = v63;
      }
      v2 = v58 + 1;
    }
    while ( v58 + 1 < v55 );
  }
  v12 = *(int **)(a1 + 900);
  v56 = (int **)(a1 + 900);
  v62 = (int *)(a1 + 904);
  if ( (int *)(a1 + 904) != v12 )
  {
    v51 = (_BYTE *)(a1 + 1020);
    v52 = (int *)(a1 + 968);
    s2 = (char *)(a1 + 904);
    v53 = (_DWORD *)(a1 + 908);
    v49 = a1 + 56;
    do
    {
      v59 = v12;
      if ( v12[8] )
        v15 = (const char *)v12[7];
      else
        v15 = &byte_B3CBE;
      v16 = v68;
      if ( !v68 )
        goto LABEL_44;
      v17 = v67 + 8;
      v18 = 0;
      while ( 1 )
      {
        v19 = *((_DWORD *)v17 + 1) ? *(const char **)v17 : &byte_B3CBE;
        ++v18;
        if ( !strcmp(v19, v15) )
          break;
        v17 += 40;
        if ( v18 >= v16 )
          goto LABEL_44;
      }
      if ( v17 == byte_8 )
      {
LABEL_44:
        if ( !sub_1E70C((_DWORD *)v63, 8, v15) )
        {
          v21 = 0;
          v74 = 0;
          v72 = 0;
          v71 = -1;
          v73 = -1;
          v75 = 0;
          ptr = nullptr;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          v80 = 0;
          v81 = 0;
          set_debug_event_code((int)&v71, 9);
          if ( (v75 & 0xFFFFFFFu) - 9 >= 2 && (v75 & 0xFFFFFFF) != 3 )
          {
            if ( !under_debugger )
              interr(3297);
            __debugbreak();
          }
          if ( v15 && (v22 = strlen(v15)) != 0 )
          {
            v23 = v22;
            v24 = v22 + 1;
            v25 = ptr;
            if ( v78 < v22 + 1 )
            {
              v50 = v22 + 1;
              v25 = qvector_reserve((int)&ptr, ptr, v24, 1u);
              ptr = v25;
              v24 = v50;
            }
            v77 = v24;
            memmove(v25, v15, v23);
            *((_BYTE *)ptr + v23) = 0;
          }
          else
          {
            v77 = 0;
          }
          v26 = *v52;
          v74 = 1;
          v72 = v26;
          v71 = v26;
          v73 = -1;
          if ( 16 * v75 )
          {
            v27 = *(_DWORD *)(v63 + 72);
            if ( !v27 )
            {
              sub_2519C(v49);
              v27 = *(_DWORD *)(v63 + 72);
            }
            v28 = *(_DWORD *)(v63 + 60);
            v29 = *(_DWORD *)(v28 + 4 * (v27 / 0x5D));
            if ( *(_DWORD *)(v63 + 64) != v28 )
              v21 = v29 + 44 * (v27 % 0x5D);
            if ( v21 == v29 )
              v21 = *(_DWORD *)(v28 + 4 * (v27 / 0x5D) - 4) + 4092;
            *(_DWORD *)(v21 - 44) = -1;
            v30 = v21 - 44;
            *(_DWORD *)(v30 + 4) = 0;
            *(_DWORD *)(v30 + 8) = -1;
            *(_BYTE *)(v30 + 12) = 0;
            *(_DWORD *)(v30 + 16) = 0;
            copy_debug_event(v21 - 44, (int)&v71);
            --*(_DWORD *)(v63 + 72);
            ++*(_DWORD *)(v63 + 76);
            *v51 = 0;
          }
          free_debug_event(&v71);
        }
        v31 = (int *)v59[1];
        if ( v31 )
        {
          do
          {
            v12 = v31;
            v31 = (int *)*v31;
          }
          while ( v31 );
        }
        else
        {
          v32 = v59 + 2;
          v12 = (int *)v59[2];
          if ( (int *)*v12 != v59 )
          {
            do
            {
              v33 = *v32;
              v32 = (_DWORD *)(*v32 + 8);
              v12 = *(int **)(v33 + 8);
            }
            while ( *v12 != v33 );
          }
        }
        if ( *v56 == v59 )
          *v56 = v12;
        --*v53;
        sub_27512(*(int **)s2, v59);
        sub_21464((int)(v59 + 5));
        operator delete(v59);
      }
      else
      {
        v20 = (int *)v59[1];
        if ( v20 )
        {
          do
          {
            v12 = v20;
            v20 = (int *)*v20;
          }
          while ( v20 );
        }
        else
        {
          v13 = v59 + 2;
          v12 = (int *)v59[2];
          if ( (int *)*v12 != v59 )
          {
            do
            {
              v14 = *v13;
              v13 = (_DWORD *)(*v13 + 8);
              v12 = *(int **)(v14 + 8);
            }
            while ( *v12 != v14 );
          }
        }
      }
    }
    while ( v62 != v12 );
  }
  v60 = v68;
  if ( v68 >= 1 )
  {
    v34 = 0;
    do
    {
      v35 = 40 * v34;
      v36 = v67;
      v37 = (const char **)&v67[40 * v34];
      if ( (unsigned int)v37[3] >= 2 )
      {
        if ( *(_BYTE *)(v63 + 389) )
          goto LABEL_78;
        v38 = &byte_B3CBE;
        if ( *(_DWORD *)(v63 + 252) )
          v38 = *(const char **)(v63 + 248);
        if ( strcmp(v37[2], v38) )
        {
LABEL_78:
          v39 = *(_DWORD *)&v36[40 * v34];
          v40 = (int *)*v62;
          if ( !*v62 )
            goto LABEL_106;
          v41 = v62;
          do
          {
            v42 = v40[4];
            if ( v42 >= v39 )
              v41 = v40;
            v43 = (int **)(v40 + 1);
            if ( v42 >= v39 )
              v43 = (int **)v40;
            v40 = *v43;
          }
          while ( *v43 );
          if ( v41 == v62 || v39 < v41[4] )
          {
LABEL_106:
            if ( sub_1EE24(v63, -1, v39, &v70, 4, 0) == 4 && v70 == 1179403647 )
            {
              v65 = 0;
              v64 = nullptr;
              v66 = 0;
              v44 = *(_DWORD *)&v67[v35 + 12] ? *(const char **)&v67[v35 + 8] : &byte_B3CBE;
              v72 = 4;
              v73 = (int)&v64;
              v71 = (int)&off_D6358;
              v45 = (char *)v44;
              sub_35628(v44, &v71, 0);
              v46 = sub_22890((int)v67, &v67, (unsigned int *)&v67[v35]);
              v47 = v65 ? v64 : &byte_B3CBE;
              sub_20F58(v63, v39, v46, v45, v47);
              if ( v64 )
              {
                v65 = 0;
                qfree(v64);
                v66 = 0;
                v64 = nullptr;
              }
            }
          }
        }
      }
      ++v34;
    }
    while ( v34 < v60 );
  }
  sub_1E070(v63);
  if ( v67 )
  {
    sub_1B470((int *)&v67, 0);
    qfree(v67);
    v69 = 0;
    v67 = nullptr;
  }
  return _stack_chk_guard - v82;
}
// B3CBE: using guessed type char byte_B3CBE;
// D6358: using guessed type _UNKNOWN *off_D6358;
// E0550: using guessed type char under_debugger;
