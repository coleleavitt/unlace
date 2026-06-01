/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42CA10
// Address: 0x0042CA10

//----- (0042CA10) --------------------------------------------------------
char __userpurge sub_42CA10@<al>(int a1@<ecx>, int a2@<ebx>, int a3, int a4, char a5)
{
  int v5; // esi
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // edi
  char *v9; // esi
  void *v10; // eax
  int v11; // ecx
  int v12; // edi
  char *v13; // esi
  void *v14; // eax
  int v15; // ecx
  int v16; // edi
  char *v17; // esi
  void *v18; // eax
  void *v19; // eax
  int v20; // edi
  int v21; // esi
  void *v23; // [esp-4h] [ebp-124h]
  _DWORD v25[3]; // [esp+1Ch] [ebp-104h] BYREF
  char v26; // [esp+28h] [ebp-F8h]
  void *v27; // [esp+2Ch] [ebp-F4h] BYREF
  int v28; // [esp+30h] [ebp-F0h]
  int v29; // [esp+34h] [ebp-ECh]
  __int16 v30; // [esp+38h] [ebp-E8h]
  int v31; // [esp+3Ch] [ebp-E4h]
  char v32; // [esp+40h] [ebp-E0h]
  __int128 v33; // [esp+44h] [ebp-DCh]
  int v34; // [esp+54h] [ebp-CCh]
  char *v35; // [esp+58h] [ebp-C8h] BYREF
  int v36; // [esp+5Ch] [ebp-C4h]
  int v37; // [esp+60h] [ebp-C0h]
  char *v38; // [esp+64h] [ebp-BCh] BYREF
  int v39; // [esp+68h] [ebp-B8h]
  int v40; // [esp+6Ch] [ebp-B4h]
  void *v41; // [esp+70h] [ebp-B0h] BYREF
  int v42; // [esp+74h] [ebp-ACh]
  int v43; // [esp+78h] [ebp-A8h]
  int v44; // [esp+7Ch] [ebp-A4h]
  int v45; // [esp+80h] [ebp-A0h]
  _DWORD *v46; // [esp+84h] [ebp-9Ch]
  int v47; // [esp+88h] [ebp-98h]
  char v48; // [esp+8Ch] [ebp-94h]
  int v49; // [esp+90h] [ebp-90h]
  char v50; // [esp+94h] [ebp-8Ch]
  void *v51; // [esp+98h] [ebp-88h]
  int v52; // [esp+9Ch] [ebp-84h]
  int v53; // [esp+A0h] [ebp-80h]
  void *v54; // [esp+A4h] [ebp-7Ch]
  int v55; // [esp+A8h] [ebp-78h]
  int v56; // [esp+ACh] [ebp-74h]
  void *v57; // [esp+B0h] [ebp-70h]
  int v58; // [esp+B4h] [ebp-6Ch]
  int v59; // [esp+B8h] [ebp-68h]
  void *v60; // [esp+BCh] [ebp-64h]
  int v61; // [esp+C0h] [ebp-60h]
  int v62; // [esp+C4h] [ebp-5Ch]
  void *v63; // [esp+C8h] [ebp-58h]
  int v64; // [esp+CCh] [ebp-54h]
  int v65; // [esp+D0h] [ebp-50h]
  void *v66; // [esp+D4h] [ebp-4Ch]
  int v67; // [esp+D8h] [ebp-48h]
  int v68; // [esp+DCh] [ebp-44h]
  void *v69; // [esp+E0h] [ebp-40h]
  int v70; // [esp+E4h] [ebp-3Ch]
  int v71; // [esp+E8h] [ebp-38h]
  void *v72; // [esp+ECh] [ebp-34h]
  int v73; // [esp+F0h] [ebp-30h]
  int v74; // [esp+F4h] [ebp-2Ch]
  int v75; // [esp+F8h] [ebp-28h]
  void *v76; // [esp+FCh] [ebp-24h]
  int v77; // [esp+100h] [ebp-20h]
  int v78; // [esp+104h] [ebp-1Ch]
  int v79; // [esp+108h] [ebp-18h]
  char v80; // [esp+10Ch] [ebp-14h]
  int v81; // [esp+11Ch] [ebp-4h]
  int v82; // [esp+128h] [ebp+8h]
  int v83; // [esp+128h] [ebp+8h]
  int v84; // [esp+128h] [ebp+8h]
  char v85; // [esp+133h] [ebp+13h]

  v5 = a1;
  v25[0] = sub_42DD60;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v35 = nullptr;
  v36 = 0;
  v37 = 0;
  v38 = nullptr;
  v39 = 0;
  v40 = 0;
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = nullptr;
  v47 = 0;
  v49 = 0;
  v50 = 0;
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  v54 = nullptr;
  v55 = 0;
  v56 = 0;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  v60 = nullptr;
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
  v75 = a3;
  v25[1] = &off_48C988;
  v25[2] = off_48C088;
  v26 = 0;
  v27 = nullptr;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v34 = a1;
  v48 = -90;
  v76 = nullptr;
  v77 = 0;
  v78 = 0;
  v79 = -1;
  v80 = a5;
  v81 = 0;
  sub_437A30(*(_DWORD *)(a1 + 16), (int)v25);
  sub_45CC20(0);
  v85 = sub_439A70((unsigned __int16 *)v25, 0);
  if ( !v85 )
  {
    sub_42DAC0(a2, (__m128i)0LL, *(_DWORD **)(v5 + 16), -1, (int)&v27, a4);
    v6 = v46;
    if ( v46 && *v46 )
    {
      v23 = (void *)*v46;
      v46[1] = 0;
      sub_453A20(v23);
      *v6 = 0;
      v6[2] = 0;
      v6 = v46;
    }
    v7 = v36;
    v82 = v36;
    if ( v36 )
    {
      v8 = 0;
      do
      {
        v9 = &v35[v8];
        v10 = *(void **)&v35[v8];
        LOBYTE(v81) = 3;
        if ( v10 )
        {
          *((_DWORD *)v9 + 1) = 0;
          sub_453A20(v10);
          v7 = v82;
          *(_DWORD *)v9 = 0;
          *((_DWORD *)v9 + 2) = 0;
        }
        v8 += 12;
        v82 = --v7;
      }
      while ( v7 );
      v6 = v46;
      v36 = 0;
      LOBYTE(v81) = 0;
    }
    v11 = v39;
    v83 = v39;
    if ( v39 )
    {
      v12 = 0;
      do
      {
        v13 = &v38[v12];
        v14 = *(void **)&v38[v12];
        LOBYTE(v81) = 11;
        if ( v14 )
        {
          *((_DWORD *)v13 + 1) = 0;
          sub_453A20(v14);
          v11 = v83;
          *(_DWORD *)v13 = 0;
          *((_DWORD *)v13 + 2) = 0;
        }
        v12 += 12;
        v83 = --v11;
      }
      while ( v11 );
      v6 = v46;
      v39 = 0;
      LOBYTE(v81) = 0;
    }
    if ( v6 && v6[1] )
    {
      if ( v42 )
        goto LABEL_82;
      if ( v52 )
        goto LABEL_85;
      if ( v55 )
        goto LABEL_88;
      if ( v58 )
        goto LABEL_91;
      if ( v61 )
        goto LABEL_94;
      if ( v64 )
        goto LABEL_97;
      if ( v67 )
        goto LABEL_100;
      if ( v70 )
        goto LABEL_103;
    }
    if ( v45 )
    {
      if ( *(_DWORD *)(v45 + 68) != -1 )
        goto LABEL_106;
      *(_DWORD *)(v45 + 68) = 0;
      v45 = 0;
    }
    v5 = a1;
    v46 = nullptr;
    v47 = -1;
    v75 = 0;
  }
  sub_437A30(*(_DWORD *)(v5 + 16), 0);
  v15 = v36;
  v81 = 17;
  v84 = v36;
  if ( v36 )
  {
    v16 = 0;
    do
    {
      v17 = &v35[v16];
      v18 = *(void **)&v35[v16];
      LOBYTE(v81) = 19;
      if ( v18 )
      {
        *((_DWORD *)v17 + 1) = 0;
        sub_453A20(v18);
        v15 = v84;
        *(_DWORD *)v17 = 0;
        *((_DWORD *)v17 + 2) = 0;
      }
      v16 += 12;
      v84 = --v15;
    }
    while ( v15 );
    v36 = 0;
    LOBYTE(v81) = 17;
  }
  if ( v39 )
  {
    sub_415F90(&v38, 0);
    LOBYTE(v81) = 17;
  }
  if ( v46 && v46[1] )
  {
    if ( !v42 )
    {
      if ( !v52 )
      {
        if ( !v55 )
        {
          if ( !v58 )
          {
            if ( !v61 )
            {
              if ( !v64 )
              {
                if ( !v67 )
                {
                  if ( !v70 )
                    goto LABEL_49;
LABEL_103:
                  if ( byte_4B70F0 )
                    __debugbreak();
                  sub_4533F0(269);
                }
LABEL_100:
                if ( byte_4B70F0 )
                  __debugbreak();
                sub_4533F0(268);
              }
LABEL_97:
              if ( byte_4B70F0 )
                __debugbreak();
              sub_4533F0(267);
            }
LABEL_94:
            if ( byte_4B70F0 )
              __debugbreak();
            sub_4533F0(266);
          }
LABEL_91:
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(265);
        }
LABEL_88:
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(264);
      }
LABEL_85:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(263);
    }
LABEL_82:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(262);
  }
LABEL_49:
  if ( !v45 )
    goto LABEL_52;
  if ( *(_DWORD *)(v45 + 68) != -1 )
  {
LABEL_106:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(485);
  }
  *(_DWORD *)(v45 + 68) = 0;
  v45 = 0;
LABEL_52:
  v46 = nullptr;
  v47 = -1;
  v75 = 0;
  v44 = 0;
  v19 = v76;
  LOBYTE(v81) = 24;
  if ( v76 )
  {
    v20 = v77;
    if ( v77 )
    {
      v21 = 0;
      do
      {
        LOBYTE(v81) = 25;
        sub_423B70((int)v19 + v21);
        v19 = v76;
        v21 += 24;
        LOBYTE(v81) = 24;
        --v20;
      }
      while ( v20 );
    }
    v77 = 0;
    sub_453A20(v19);
    v76 = nullptr;
    v78 = 0;
  }
  LOBYTE(v81) = 26;
  if ( v72 )
  {
    v73 = 0;
    sub_453A20(v72);
    v72 = nullptr;
    v74 = 0;
  }
  LOBYTE(v81) = 27;
  if ( v69 )
  {
    v70 = 0;
    sub_453A20(v69);
    v69 = nullptr;
    v71 = 0;
  }
  LOBYTE(v81) = 28;
  if ( v66 )
  {
    v67 = 0;
    sub_453A20(v66);
    v66 = nullptr;
    v68 = 0;
  }
  LOBYTE(v81) = 29;
  if ( v63 )
  {
    v64 = 0;
    sub_453A20(v63);
    v63 = nullptr;
    v65 = 0;
  }
  LOBYTE(v81) = 30;
  if ( v60 )
  {
    v61 = 0;
    sub_453A20(v60);
    v60 = nullptr;
    v62 = 0;
  }
  LOBYTE(v81) = 31;
  if ( v57 )
  {
    v58 = 0;
    sub_453A20(v57);
    v57 = nullptr;
    v59 = 0;
  }
  LOBYTE(v81) = 32;
  if ( v54 )
  {
    v55 = 0;
    sub_453A20(v54);
    v54 = nullptr;
    v56 = 0;
  }
  LOBYTE(v81) = 33;
  if ( v51 )
  {
    v52 = 0;
    sub_453A20(v51);
    v51 = nullptr;
    v53 = 0;
  }
  LOBYTE(v81) = 34;
  if ( v41 )
  {
    sub_415F90(&v41, 0);
    sub_453A20(v41);
    v41 = nullptr;
    v43 = 0;
  }
  LOBYTE(v81) = 35;
  if ( v38 )
  {
    sub_415F90(&v38, 0);
    sub_453A20(v38);
    v38 = nullptr;
    v40 = 0;
  }
  LOBYTE(v81) = 36;
  if ( v35 )
  {
    sub_415F90(&v35, 0);
    sub_453A20(v35);
    v35 = nullptr;
    v37 = 0;
  }
  LOBYTE(v81) = 37;
  if ( v27 )
  {
    v28 = 0;
    sub_453A20(v27);
  }
  return v85;
}
// 48C088: using guessed type int (__stdcall *off_48C088[115])(int);
// 48C988: using guessed type int (*off_48C988)[9];
// 4B70F0: using guessed type char byte_4B70F0;
