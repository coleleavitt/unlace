/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DF34
// Address: 0x0007DF34

//----- (0007DF34) --------------------------------------------------------
void __fastcall sub_7DF34(int a1, int a2)
{
  char *v3; // r4
  int v5; // r0
  int v6; // r3
  __int64 *v7; // r7
  int v8; // r2
  int v9; // r3
  __int64 *v10; // r10
  int v11; // r3
  char *v12; // r4
  int v13; // r1
  int v14; // r2
  unsigned int v15; // r12
  __int64 v16; // r0
  unsigned int v17; // r9
  char *v18; // r0
  unsigned int v19; // r2
  void *v20; // r0
  int v21; // r12
  char *v22; // r3
  char *v23; // lr
  int v24; // r0
  int v25; // r1
  int v26; // r2
  char *v27; // r4
  int v28; // r1
  int v29; // r2
  unsigned int v30; // r10
  int v31; // r3
  int v32; // r1
  int v33; // r2
  char *v34; // r4
  bool v35; // cf
  unsigned int v36; // r12
  unsigned int v37; // r9
  int v38; // r1
  char *v39; // r0
  unsigned int v40; // r2
  void *v41; // r0
  int v42; // r12
  char *v43; // r3
  char *v44; // lr
  int v45; // r0
  int v46; // r1
  int v47; // r2
  char *v48; // r4
  int v49; // r1
  int v50; // r2
  char *v51; // r0
  unsigned int v52; // r2
  void *v53; // r0
  int v54; // r12
  char *v55; // r3
  char *v56; // lr
  int v57; // r0
  int v58; // r1
  int v59; // r2
  char *v60; // r0
  unsigned int v61; // r2
  void *v62; // r0
  int v63; // r12
  char *v64; // r3
  char *v65; // lr
  int v66; // r0
  int v67; // r1
  int v68; // r2
  int *v69; // [sp+4h] [bp-60h]
  unsigned int v70; // [sp+Ch] [bp-58h]
  unsigned int v71; // [sp+Ch] [bp-58h]
  unsigned int v72; // [sp+14h] [bp-50h]
  unsigned int v73; // [sp+14h] [bp-50h]
  __int64 v74; // [sp+18h] [bp-4Ch] BYREF
  int v75; // [sp+20h] [bp-44h]
  __int64 v76; // [sp+24h] [bp-40h]
  int v77; // [sp+2Ch] [bp-38h]
  int v78; // [sp+30h] [bp-34h] BYREF
  int v79; // [sp+34h] [bp-30h]
  int v80; // [sp+38h] [bp-2Ch]
  int v81; // [sp+3Ch] [bp-28h]
  int v82; // [sp+40h] [bp-24h]
  int v83; // [sp+44h] [bp-20h]
  void *ptr; // [sp+48h] [bp-1Ch] BYREF
  int v85; // [sp+4Ch] [bp-18h]
  unsigned int v86; // [sp+50h] [bp-14h]
  int v87; // [sp+54h] [bp-10h]
  char v88; // [sp+58h] [bp-Ch]

  v3 = nullptr;
  v87 = *(_DWORD *)(a1 + 16);
  ptr = nullptr;
  v85 = 0;
  v86 = 0;
  if ( v87 == -1 )
  {
    v88 = 0;
    v6 = *(_DWORD *)(a1 + 4);
    v7 = *(__int64 **)a1;
    goto LABEL_4;
  }
  v5 = sub_6AD68();
  v3 = (char *)ptr;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(__int64 **)a1;
  if ( !v5 )
  {
    v88 = 0;
    goto LABEL_4;
  }
  v10 = &v7[v6];
  v88 = 1;
  if ( v10 <= v7 )
  {
    v69 = *(int **)a2;
    v30 = *(_DWORD *)a2 + 8 * *(_DWORD *)(a2 + 4);
  }
  else
  {
    v11 = v85;
    do
    {
      v15 = v11 + 1;
      v16 = *v7;
      LOBYTE(v75) = 1;
      v74 = v16;
      v17 = v86;
      if ( v3 <= (char *)&v74 && &v74 < (__int64 *)&v3[12 * v86] )
      {
        v76 = v74;
        v77 = v75;
        if ( v86 < v15 )
        {
          v51 = (char *)sub_77EB0((int)&ptr, nullptr, v11 + 1, 0xCu);
          v52 = v86;
          v3 = v51;
          v86 = v17;
          v53 = ptr;
          v54 = v85 - 1;
          v72 = v52;
          if ( v85 - 1 >= 0 )
          {
            v55 = (char *)ptr + 12;
            v56 = v3 + 12;
            do
            {
              v57 = *((_DWORD *)v55 - 3);
              v58 = *((_DWORD *)v55 - 2);
              v59 = *((_DWORD *)v55 - 1);
              --v54;
              v55 += 12;
              *((_DWORD *)v56 - 3) = v57;
              *((_DWORD *)v56 - 2) = v58;
              *((_DWORD *)v56 - 1) = v59;
              v56 += 12;
            }
            while ( v54 != -1 );
            v53 = ptr;
          }
          sub_77E08(v53);
          v11 = v85;
          ptr = v3;
          v86 = v72;
        }
        v27 = &v3[12 * v11];
        v28 = HIDWORD(v76);
        v29 = v77;
        *(_DWORD *)v27 = v76;
        *((_DWORD *)v27 + 1) = v28;
        *((_DWORD *)v27 + 2) = v29;
      }
      else
      {
        if ( v86 < v15 )
        {
          v18 = (char *)sub_77EB0((int)&ptr, nullptr, v11 + 1, 0xCu);
          v19 = v86;
          v3 = v18;
          v86 = v17;
          v20 = ptr;
          v21 = v85 - 1;
          v70 = v19;
          if ( v85 - 1 >= 0 )
          {
            v22 = (char *)ptr + 12;
            v23 = v3 + 12;
            do
            {
              v24 = *((_DWORD *)v22 - 3);
              v25 = *((_DWORD *)v22 - 2);
              v26 = *((_DWORD *)v22 - 1);
              --v21;
              v22 += 12;
              *((_DWORD *)v23 - 3) = v24;
              *((_DWORD *)v23 - 2) = v25;
              *((_DWORD *)v23 - 1) = v26;
              v23 += 12;
            }
            while ( v21 != -1 );
            v20 = ptr;
          }
          sub_77E08(v20);
          v11 = v85;
          ptr = v3;
          v86 = v70;
        }
        v12 = &v3[12 * v11];
        v13 = HIDWORD(v74);
        v14 = v75;
        *(_DWORD *)v12 = v74;
        *((_DWORD *)v12 + 1) = v13;
        *((_DWORD *)v12 + 2) = v14;
      }
      ++v7;
      v3 = (char *)ptr;
      v11 = ++v85;
    }
    while ( v7 < v10 );
    v69 = *(int **)a2;
    v30 = *(_DWORD *)a2 + 8 * *(_DWORD *)(a2 + 4);
    if ( !v88 )
      goto LABEL_37;
  }
  if ( (unsigned int)v69 < v30 )
  {
    v31 = v85;
    do
    {
      v36 = v31 + 1;
      LOBYTE(v80) = 0;
      v37 = v86;
      v38 = v69[1];
      v78 = *v69;
      v79 = v38;
      if ( v3 <= (char *)&v78 && &v78 < (int *)&v3[12 * v86] )
      {
        v81 = v78;
        v82 = v79;
        v83 = v80;
        if ( v86 < v36 )
        {
          v60 = (char *)sub_77EB0((int)&ptr, nullptr, v31 + 1, 0xCu);
          v61 = v86;
          v3 = v60;
          v86 = v37;
          v62 = ptr;
          v63 = v85 - 1;
          v73 = v61;
          if ( v85 - 1 >= 0 )
          {
            v64 = (char *)ptr + 12;
            v65 = v3 + 12;
            do
            {
              v66 = *((_DWORD *)v64 - 3);
              v67 = *((_DWORD *)v64 - 2);
              v68 = *((_DWORD *)v64 - 1);
              --v63;
              v64 += 12;
              *((_DWORD *)v65 - 3) = v66;
              *((_DWORD *)v65 - 2) = v67;
              *((_DWORD *)v65 - 1) = v68;
              v65 += 12;
            }
            while ( v63 != -1 );
            v62 = ptr;
          }
          sub_77E08(v62);
          v31 = v85;
          ptr = v3;
          v86 = v73;
        }
        v48 = &v3[12 * v31];
        v49 = v82;
        v50 = v83;
        *(_DWORD *)v48 = v81;
        *((_DWORD *)v48 + 1) = v49;
        *((_DWORD *)v48 + 2) = v50;
      }
      else
      {
        if ( v86 < v36 )
        {
          v39 = (char *)sub_77EB0((int)&ptr, nullptr, v31 + 1, 0xCu);
          v40 = v86;
          v3 = v39;
          v86 = v37;
          v41 = ptr;
          v42 = v85 - 1;
          v71 = v40;
          if ( v85 - 1 >= 0 )
          {
            v43 = (char *)ptr + 12;
            v44 = v3 + 12;
            do
            {
              v45 = *((_DWORD *)v43 - 3);
              v46 = *((_DWORD *)v43 - 2);
              v47 = *((_DWORD *)v43 - 1);
              --v42;
              v43 += 12;
              *((_DWORD *)v44 - 3) = v45;
              *((_DWORD *)v44 - 2) = v46;
              *((_DWORD *)v44 - 1) = v47;
              v44 += 12;
            }
            while ( v42 != -1 );
            v41 = ptr;
          }
          sub_77E08(v41);
          v31 = v85;
          ptr = v3;
          v86 = v71;
        }
        v32 = v79;
        v33 = v80;
        v34 = &v3[12 * v31];
        *(_DWORD *)v34 = v78;
        *((_DWORD *)v34 + 1) = v32;
        *((_DWORD *)v34 + 2) = v33;
      }
      v3 = (char *)ptr;
      v35 = (unsigned int)(v69 + 2) >= v30;
      v69 += 2;
      v31 = ++v85;
    }
    while ( !v35 );
  }
LABEL_37:
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(__int64 **)a1;
LABEL_4:
  v8 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v8;
  *(_DWORD *)a2 = v7;
  *(_DWORD *)(a2 + 4) = v6;
  v9 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v9;
  if ( v3 )
  {
    v85 = 0;
    sub_77E08(v3);
  }
}
