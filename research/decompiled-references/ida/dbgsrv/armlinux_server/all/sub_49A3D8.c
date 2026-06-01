/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A3D8
// Address: 0x000000000049A3D8

//----- (000000000049A3D8) ----------------------------------------------------
__int64 __fastcall sub_49A3D8(__int64 a1, __int64 a2)
{
  int v4; // w0
  char v5; // w0
  __int64 *v6; // x19
  __int64 *v7; // x21
  __int64 v8; // x25
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  __int64 *v16; // x19
  __int64 v17; // x3
  unsigned __int64 v18; // x2
  unsigned __int64 v19; // x24
  unsigned __int64 v20; // x28
  char *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x1
  char *v24; // x4
  __int64 *v25; // x3
  __int64 v26; // x7
  __int64 v27; // x1
  __int64 v28; // x3
  __int64 *v29; // x19
  __int64 *v30; // x21
  unsigned __int64 v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  __int64 *v35; // x19
  __int64 v36; // x3
  unsigned __int64 v37; // x2
  unsigned __int64 v38; // x24
  unsigned __int64 v39; // x27
  char *v40; // x0
  __int64 v41; // x2
  __int64 v42; // x1
  char *v43; // x4
  __int64 *v44; // x3
  __int64 v45; // x7
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 *v48; // x19
  __int64 v49; // x2
  char *v50; // x0
  __int64 v51; // x1
  char *v52; // x4
  __int64 *v53; // x3
  __int64 v54; // x7
  __int64 v55; // x2
  char *v56; // x0
  __int64 v57; // x1
  char *v58; // x4
  __int64 *v59; // x3
  __int64 v60; // x7
  unsigned __int64 v61; // [xsp+60h] [xbp-A0h]
  unsigned __int64 v62; // [xsp+68h] [xbp-98h]
  __int64 v63; // [xsp+78h] [xbp-88h] BYREF
  __int64 v64; // [xsp+80h] [xbp-80h]
  __int64 v65; // [xsp+88h] [xbp-78h]
  __int64 v66; // [xsp+90h] [xbp-70h]
  __int64 v67; // [xsp+98h] [xbp-68h]
  __int64 v68; // [xsp+A0h] [xbp-60h]
  __int64 v69; // [xsp+A8h] [xbp-58h] BYREF
  __int64 v70; // [xsp+B0h] [xbp-50h]
  __int64 v71; // [xsp+B8h] [xbp-48h]
  __int64 v72; // [xsp+C0h] [xbp-40h]
  __int64 v73; // [xsp+C8h] [xbp-38h]
  __int64 v74; // [xsp+D0h] [xbp-30h]
  void *ptr; // [xsp+D8h] [xbp-28h] BYREF
  __int64 v76; // [xsp+E0h] [xbp-20h]
  unsigned __int64 v77; // [xsp+E8h] [xbp-18h]
  int v78; // [xsp+F0h] [xbp-10h]
  char v79; // [xsp+F4h] [xbp-Ch]
  __int64 v80; // [xsp+F8h] [xbp-8h]

  v4 = *(_DWORD *)(a1 + 32);
  ptr = nullptr;
  v76 = 0;
  v77 = 0;
  v78 = v4;
  if ( v4 == -1 )
  {
    v79 = 0;
    v6 = nullptr;
    v7 = *(__int64 **)a1;
    v8 = *(_QWORD *)(a1 + 8);
    goto LABEL_4;
  }
  v5 = sub_47DBD8();
  v6 = (__int64 *)ptr;
  v7 = *(__int64 **)a1;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    v79 = 0;
    goto LABEL_4;
  }
  v12 = &v7[2 * v8];
  v79 = 1;
  if ( v12 <= v7 )
  {
    v30 = *(__int64 **)a2;
    v31 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  }
  else
  {
    v13 = v76;
    do
    {
      while ( 1 )
      {
        v17 = v7[1];
        v63 = *v7;
        v64 = v17;
        LOBYTE(v65) = 1;
        v18 = v13 + 1;
        v19 = v77;
        if ( v6 <= &v63 && &v63 < &v6[3 * v77] )
          break;
        if ( v77 < v18 )
        {
          v6 = (__int64 *)sub_491288((__int64)&ptr, nullptr, v18, 0x18u);
          v20 = v77;
          v21 = (char *)ptr;
          v77 = v19;
          v22 = v76 - 1;
          if ( v76 - 1 >= 0 )
          {
            v23 = 0;
            do
            {
              v24 = &v21[v23 * 8];
              v25 = &v6[v23];
              --v22;
              v23 += 3;
              v26 = *((_QWORD *)v24 + 1);
              *v25 = *(_QWORD *)v24;
              v25[1] = v26;
              v25[2] = *((_QWORD *)v24 + 2);
            }
            while ( v22 != -1 );
            v21 = (char *)ptr;
          }
          j__free(v21);
          v13 = v76;
          ptr = v6;
          v77 = v20;
        }
        v14 = v65;
        v15 = v64;
        v16 = &v6[3 * v13];
        v7 += 2;
        *v16 = v63;
        v16[1] = v15;
        v16[2] = v14;
        v6 = (__int64 *)ptr;
        v13 = ++v76;
        if ( v7 >= v12 )
          goto LABEL_21;
      }
      v66 = v63;
      v67 = v64;
      v68 = v65;
      if ( v77 < v18 )
      {
        v6 = (__int64 *)sub_491288((__int64)&ptr, nullptr, v18, 0x18u);
        v62 = v77;
        v77 = v19;
        v49 = v76 - 1;
        v50 = (char *)ptr;
        if ( v76 - 1 >= 0 )
        {
          v51 = 0;
          do
          {
            v52 = &v50[v51 * 8];
            v53 = &v6[v51];
            --v49;
            v51 += 3;
            v54 = *((_QWORD *)v52 + 1);
            *v53 = *(_QWORD *)v52;
            v53[1] = v54;
            v53[2] = *((_QWORD *)v52 + 2);
          }
          while ( v49 != -1 );
          v50 = (char *)ptr;
        }
        j__free(v50);
        v13 = v76;
        ptr = v6;
        v77 = v62;
      }
      v27 = v68;
      v28 = v67;
      v29 = &v6[3 * v13];
      v7 += 2;
      *v29 = v66;
      v29[1] = v28;
      v29[2] = v27;
      v6 = (__int64 *)ptr;
      v13 = ++v76;
    }
    while ( v7 < v12 );
LABEL_21:
    v30 = *(__int64 **)a2;
    v31 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
    if ( !v79 )
      goto LABEL_35;
  }
  if ( (unsigned __int64)v30 < v31 )
  {
    v32 = v76;
    do
    {
      while ( 1 )
      {
        v36 = v30[1];
        v69 = *v30;
        v70 = v36;
        LOBYTE(v71) = 0;
        v37 = v32 + 1;
        v38 = v77;
        if ( v6 <= &v69 && &v69 < &v6[3 * v77] )
          break;
        if ( v77 < v37 )
        {
          v6 = (__int64 *)sub_491288((__int64)&ptr, nullptr, v37, 0x18u);
          v39 = v77;
          v40 = (char *)ptr;
          v77 = v38;
          v41 = v76 - 1;
          if ( v76 - 1 >= 0 )
          {
            v42 = 0;
            do
            {
              v43 = &v40[v42 * 8];
              v44 = &v6[v42];
              --v41;
              v42 += 3;
              v45 = *((_QWORD *)v43 + 1);
              *v44 = *(_QWORD *)v43;
              v44[1] = v45;
              v44[2] = *((_QWORD *)v43 + 2);
            }
            while ( v41 != -1 );
            v40 = (char *)ptr;
          }
          j__free(v40);
          v32 = v76;
          ptr = v6;
          v77 = v39;
        }
        v33 = v71;
        v34 = v70;
        v35 = &v6[3 * v32];
        v30 += 2;
        *v35 = v69;
        v35[1] = v34;
        v35[2] = v33;
        v6 = (__int64 *)ptr;
        v32 = ++v76;
        if ( (unsigned __int64)v30 >= v31 )
          goto LABEL_35;
      }
      v72 = v69;
      v73 = v70;
      v74 = v71;
      if ( v77 < v37 )
      {
        v6 = (__int64 *)sub_491288((__int64)&ptr, nullptr, v37, 0x18u);
        v61 = v77;
        v77 = v38;
        v55 = v76 - 1;
        v56 = (char *)ptr;
        if ( v76 - 1 >= 0 )
        {
          v57 = 0;
          do
          {
            v58 = &v56[v57 * 8];
            v59 = &v6[v57];
            --v55;
            v57 += 3;
            v60 = *((_QWORD *)v58 + 1);
            *v59 = *(_QWORD *)v58;
            v59[1] = v60;
            v59[2] = *((_QWORD *)v58 + 2);
          }
          while ( v55 != -1 );
          v56 = (char *)ptr;
        }
        j__free(v56);
        v32 = v76;
        ptr = v6;
        v77 = v61;
      }
      v46 = v74;
      v47 = v73;
      v48 = &v6[3 * v32];
      v30 += 2;
      *v48 = v72;
      v48[1] = v47;
      v48[2] = v46;
      v6 = (__int64 *)ptr;
      v32 = ++v76;
    }
    while ( (unsigned __int64)v30 < v31 );
  }
LABEL_35:
  v7 = *(__int64 **)a1;
  v8 = *(_QWORD *)(a1 + 8);
LABEL_4:
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = v8;
  *(_QWORD *)(a2 + 16) = v9;
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v10;
  if ( v6 )
  {
    v76 = 0;
    j__free(v6);
  }
  return v80 ^ _stack_chk_guard;
}
// 49A3D8: could not find valid save-restore pair for x24
// 49A3D8: could not find valid save-restore pair for x27
// 49A3D8: could not find valid save-restore pair for x28
