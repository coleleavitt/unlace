/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C5B4
// Address: 0x0003C5B4

//----- (0003C5B4) --------------------------------------------------------
int __fastcall sub_3C5B4(int a1, int a2, void **a3, char a4)
{
  int v6; // r0
  int v7; // r3
  int v8; // r6
  _DWORD *v9; // r8
  void *v10; // r0
  int v11; // r7
  unsigned __int8 *v12; // r0
  int v13; // r9
  int v14; // r8
  char *v15; // r3
  int v16; // r10
  int v17; // r7
  int v18; // r8
  void *v19; // r0
  char *v20; // r3
  char *v21; // r3
  int v22; // r10
  int v23; // r7
  int v24; // r8
  void *v25; // r0
  char *v26; // r3
  char *v27; // r3
  int v28; // r10
  int v29; // r7
  int v30; // r8
  void *v31; // r0
  char *v32; // r3
  _DWORD v34[4]; // [sp+0h] [bp-108h] BYREF
  char v35; // [sp+10h] [bp-F8h]
  void *v36; // [sp+18h] [bp-F0h] BYREF
  int v37; // [sp+1Ch] [bp-ECh]
  int v38; // [sp+20h] [bp-E8h]
  __int16 v39; // [sp+24h] [bp-E4h]
  int v40; // [sp+28h] [bp-E0h]
  char v41; // [sp+2Ch] [bp-DCh]
  int v42; // [sp+30h] [bp-D8h]
  int v43; // [sp+34h] [bp-D4h]
  int v44; // [sp+38h] [bp-D0h]
  int v45; // [sp+3Ch] [bp-CCh]
  int v46; // [sp+40h] [bp-C8h]
  char *v47; // [sp+44h] [bp-C4h]
  int v48; // [sp+48h] [bp-C0h]
  int v49; // [sp+4Ch] [bp-BCh]
  char *v50; // [sp+50h] [bp-B8h]
  int v51; // [sp+54h] [bp-B4h]
  int v52; // [sp+58h] [bp-B0h]
  char *v53; // [sp+5Ch] [bp-ACh]
  int v54; // [sp+60h] [bp-A8h]
  int v55; // [sp+64h] [bp-A4h]
  int v56; // [sp+68h] [bp-A0h]
  int v57; // [sp+6Ch] [bp-9Ch]
  _DWORD *v58; // [sp+70h] [bp-98h]
  int v59; // [sp+74h] [bp-94h]
  char v60; // [sp+78h] [bp-90h]
  int v61; // [sp+7Ch] [bp-8Ch]
  char v62; // [sp+80h] [bp-88h]
  void *v63; // [sp+84h] [bp-84h]
  int v64; // [sp+88h] [bp-80h]
  int v65; // [sp+8Ch] [bp-7Ch]
  void *v66; // [sp+90h] [bp-78h]
  int v67; // [sp+94h] [bp-74h]
  int v68; // [sp+98h] [bp-70h]
  void *v69; // [sp+9Ch] [bp-6Ch]
  int v70; // [sp+A0h] [bp-68h]
  int v71; // [sp+A4h] [bp-64h]
  void *v72; // [sp+A8h] [bp-60h]
  int v73; // [sp+ACh] [bp-5Ch]
  int v74; // [sp+B0h] [bp-58h]
  void *v75; // [sp+B4h] [bp-54h]
  int v76; // [sp+B8h] [bp-50h]
  int v77; // [sp+BCh] [bp-4Ch]
  void *v78; // [sp+C0h] [bp-48h]
  int v79; // [sp+C4h] [bp-44h]
  int v80; // [sp+C8h] [bp-40h]
  void *v81; // [sp+CCh] [bp-3Ch]
  int v82; // [sp+D0h] [bp-38h]
  int v83; // [sp+D4h] [bp-34h]
  void *v84; // [sp+D8h] [bp-30h]
  int v85; // [sp+DCh] [bp-2Ch]
  int v86; // [sp+E0h] [bp-28h]
  int v87; // [sp+E4h] [bp-24h]
  unsigned __int8 *v88; // [sp+E8h] [bp-20h]
  int v89; // [sp+ECh] [bp-1Ch]
  int v90; // [sp+F0h] [bp-18h]
  int v91; // [sp+F4h] [bp-14h]
  char v92; // [sp+F8h] [bp-10h]

  v34[0] = sub_37B60;
  v34[2] = &off_D09E8;
  v46 = a1;
  v47 = nullptr;
  v48 = 0;
  v34[3] = &off_D0650;
  v34[1] = 0;
  v35 = 0;
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v49 = 0;
  v50 = nullptr;
  v51 = 0;
  v52 = 0;
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = nullptr;
  v59 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v87 = a2;
  v60 = -90;
  v61 = 0;
  v62 = 0;
  v63 = nullptr;
  v64 = 0;
  v65 = 0;
  v66 = nullptr;
  v67 = 0;
  v68 = 0;
  v69 = nullptr;
  v70 = 0;
  v71 = 0;
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  v75 = nullptr;
  v76 = 0;
  v77 = 0;
  v78 = nullptr;
  v79 = 0;
  v80 = 0;
  v81 = nullptr;
  v82 = 0;
  v83 = 0;
  v84 = nullptr;
  v85 = 0;
  v86 = 0;
  v88 = nullptr;
  v89 = 0;
  v90 = 0;
  v92 = a4;
  v91 = -1;
  sub_4C85C(*(_DWORD *)(a1 + 16), (int)v34);
  sub_70B98(0);
  v6 = sub_519CC((int)v34, 0);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = v6;
  if ( !v6 )
  {
    sub_3C418(*(_DWORD **)(a1 + 16), (int)&v36, a3);
    v9 = v58;
    if ( v58 )
    {
      v10 = (void *)*v58;
      if ( *v58 )
      {
        v58[1] = 0;
        sub_77F70(v10);
        *v9 = 0;
        v9[2] = 0;
      }
    }
    sub_39A8C(v34);
    v7 = *(_DWORD *)(a1 + 16);
  }
  sub_4C85C(v7, 0);
  v11 = 0;
  sub_39A8C(v34);
  v12 = v88;
  v56 = 0;
  if ( v88 )
  {
    v13 = v89;
    if ( v89 )
    {
      v14 = 0;
      do
      {
        ++v14;
        sub_45758(&v12[v11]);
        v11 += 24;
        v12 = v88;
      }
      while ( v13 != v14 );
    }
    v89 = 0;
    sub_77F70(v12);
  }
  if ( v84 )
  {
    v85 = 0;
    sub_77F70(v84);
  }
  if ( v81 )
  {
    v82 = 0;
    sub_77F70(v81);
  }
  if ( v78 )
  {
    v79 = 0;
    sub_77F70(v78);
  }
  if ( v75 )
  {
    v76 = 0;
    sub_77F70(v75);
  }
  if ( v72 )
  {
    v73 = 0;
    sub_77F70(v72);
  }
  if ( v69 )
  {
    v70 = 0;
    sub_77F70(v69);
  }
  if ( v66 )
  {
    v67 = 0;
    sub_77F70(v66);
  }
  if ( v63 )
  {
    v64 = 0;
    sub_77F70(v63);
  }
  v15 = v53;
  if ( v53 )
  {
    v16 = v54;
    if ( v54 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = *(void **)&v15[v17];
        v20 = &v15[v17];
        if ( v19 )
        {
          *((_DWORD *)v20 + 1) = 0;
          sub_77F70(v19);
        }
        ++v18;
        v17 += 12;
        v15 = v53;
      }
      while ( v16 != v18 );
    }
    v54 = 0;
    sub_77F70(v15);
  }
  v21 = v50;
  if ( v50 )
  {
    v22 = v51;
    if ( v51 )
    {
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = *(void **)&v21[v23];
        v26 = &v21[v23];
        if ( v25 )
        {
          *((_DWORD *)v26 + 1) = 0;
          sub_77F70(v25);
        }
        ++v24;
        v23 += 12;
        v21 = v50;
      }
      while ( v22 != v24 );
    }
    v51 = 0;
    sub_77F70(v21);
  }
  v27 = v47;
  if ( v47 )
  {
    v28 = v48;
    if ( v48 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = *(void **)&v27[v29];
        v32 = &v27[v29];
        if ( v31 )
        {
          *((_DWORD *)v32 + 1) = 0;
          sub_77F70(v31);
        }
        ++v30;
        v29 += 12;
        v27 = v47;
      }
      while ( v28 != v30 );
    }
    v48 = 0;
    sub_77F70(v27);
  }
  if ( v36 )
  {
    v37 = 0;
    sub_77F70(v36);
  }
  return v8;
}
// 37B60: using guessed type int sub_37B60();
// D0650: using guessed type _UNKNOWN *off_D0650;
// D09E8: using guessed type _UNKNOWN *off_D09E8;
