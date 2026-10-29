/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4476B0
// Address: 0x004476B0

//----- (004476B0) --------------------------------------------------------
unsigned int __thiscall sub_4476B0(_BYTE *this, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // eax
  char *v8; // ecx
  char *v9; // esi
  int v10; // eax
  int v11; // ecx
  char *v12; // edx
  int v13; // esi
  int v14; // eax
  unsigned __int8 v15; // dl
  int v16; // ecx
  unsigned __int8 *v17; // ecx
  bool v18; // cf
  unsigned __int8 *v19; // eax
  unsigned int v20; // eax
  bool v21; // cf
  unsigned __int8 *v22; // ecx
  unsigned __int8 *v23; // eax
  char *v24; // edi
  unsigned int v25; // eax
  _BYTE *v26; // ecx
  int v27; // edi
  int v28; // ecx
  char *v29; // eax
  _BYTE *v30; // esi
  char *v31; // edi
  char *v32; // ecx
  _BYTE *v33; // eax
  _BYTE *v34; // eax
  char *i; // edi
  unsigned int v36; // eax
  int v37; // eax
  char v38; // cl
  unsigned int v39; // eax
  LPVOID v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // eax
  _BYTE *v46; // eax
  unsigned int v47; // esi
  _BYTE *v49; // eax
  unsigned int v50; // [esp-Ch] [ebp-BCh]
  unsigned int v51; // [esp-4h] [ebp-B4h]
  unsigned int v52; // [esp-4h] [ebp-B4h]
  unsigned int v53; // [esp-4h] [ebp-B4h]
  int v54; // [esp+Ch] [ebp-A4h] BYREF
  void *v55; // [esp+10h] [ebp-A0h]
  int v56; // [esp+14h] [ebp-9Ch]
  _QWORD v57[2]; // [esp+30h] [ebp-80h] BYREF
  int v58; // [esp+40h] [ebp-70h]
  __int64 v59; // [esp+44h] [ebp-6Ch]
  int v60; // [esp+4Ch] [ebp-64h]
  int v61; // [esp+50h] [ebp-60h]
  int v62; // [esp+54h] [ebp-5Ch]
  unsigned int v63; // [esp+58h] [ebp-58h] BYREF
  void *v64; // [esp+5Ch] [ebp-54h] BYREF
  int v65; // [esp+60h] [ebp-50h]
  int v66; // [esp+64h] [ebp-4Ch]
  unsigned int v67; // [esp+68h] [ebp-48h]
  int v68; // [esp+6Ch] [ebp-44h]
  char *v69; // [esp+70h] [ebp-40h] BYREF
  unsigned int v70; // [esp+74h] [ebp-3Ch]
  int v71; // [esp+78h] [ebp-38h]
  _BYTE *v72; // [esp+7Ch] [ebp-34h]
  unsigned int v73; // [esp+80h] [ebp-30h]
  unsigned int v74; // [esp+84h] [ebp-2Ch]
  unsigned __int8 v75; // [esp+8Bh] [ebp-25h]
  char *v76; // [esp+8Ch] [ebp-24h]
  int v77; // [esp+90h] [ebp-20h]
  char v78; // [esp+97h] [ebp-19h]
  char *j; // [esp+98h] [ebp-18h] BYREF
  _BYTE v80[3]; // [esp+9Dh] [ebp-13h] BYREF
  int v81; // [esp+ACh] [ebp-4h]

  v72 = this;
  v3 = a2;
  v67 = a2;
  v69 = nullptr;
  v70 = 0;
  v71 = 0;
  v51 = *(_DWORD *)(a3 + 4);
  v81 = 0;
  v4 = sub_4541E0((unsigned __int8 **)a3, v51);
  v52 = *(_DWORD *)(a3 + 4);
  v77 = v4;
  v5 = sub_4541E0((unsigned __int8 **)a3, v52);
  v6 = v77;
  v68 = v5;
  if ( v77 < 0 || v5 < 0 || (v62 = 0x7FFFFFFF, 0x7FFFFFFF - v5 < v77) )
  {
    v49 = sub_4540B0(&j, (unsigned int)v80, 0);
    sub_401600(a2, (unsigned int)&j, v49 - (_BYTE *)&j);
    if ( v72[104] )
      sub_402760("update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n");
    v47 = 0;
  }
  else
  {
    if ( v5 + v77 != v70 )
    {
      v57[0] = 0xFFFFFFFFLL;
      v57[1] = 0;
      v58 = 4;
      v59 = 0;
      v60 = -1;
      v61 = 0;
      LOBYTE(v81) = 3;
      if ( v5 + v77 >= v70 )
      {
        if ( v5 + v77 > v70 )
        {
          if ( v57 < (_QWORD *)v69 || v57 >= (_QWORD *)&v69[36 * v71] )
          {
            sub_4473D0((int)&v69, v5 + v77, (int)v57);
          }
          else
          {
            v7 = sub_43A710(&v54, (int)v57);
            LOBYTE(v81) = 4;
            sub_4473D0((int)&v69, v77 + v68, (int)v7);
            LOBYTE(v81) = 5;
            if ( v55 )
            {
              v56 = 0;
              sub_453A20(v55);
            }
          }
        }
      }
      else
      {
        sub_415EF0(&v69, v5 + v77);
      }
      LOBYTE(v81) = 6;
      if ( HIDWORD(v57[0]) )
        sub_453A20((void *)HIDWORD(v57[0]));
      v6 = v77;
      LOBYTE(v81) = 0;
    }
    v73 = 0;
    v8 = v69;
    v74 = (unsigned int)&v69[36 * v6];
    if ( v69 != (char *)v74 )
    {
      v9 = v69;
      do
      {
        v9[24] = 0;
        v10 = sub_4542B0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v11 = v10 + v73 - 1;
        *(_DWORD *)v9 = v11;
        v53 = *(_DWORD *)(a3 + 4);
        v73 = v11;
        *((_DWORD *)v9 + 5) = sub_4541E0((unsigned __int8 **)a3, v53);
        *((_DWORD *)v9 + 4) = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        *((_DWORD *)v9 + 7) = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        *((_DWORD *)v9 + 8) = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v9 += 36;
      }
      while ( v9 != (char *)v74 );
      v76 = v9;
      v3 = v67;
      v8 = v76;
    }
    v73 = 0;
    v12 = v69;
    v76 = (char *)(v74 + 36 * v68);
    if ( v8 != v76 )
    {
      v13 = (int)(v8 + 4);
      while ( 1 )
      {
        v14 = sub_4542B0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v15 = 0;
        v75 = 0;
        v16 = v14 + v73 - 1;
        *(_DWORD *)(v13 - 4) = v16;
        v73 = v16;
        v17 = *(unsigned __int8 **)a3;
        v18 = *(_DWORD *)a3 < *(_DWORD *)(a3 + 4);
        if ( *(_DWORD *)a3 < *(_DWORD *)(a3 + 4) )
        {
          v15 = *v17;
          v75 = *v17;
        }
        v19 = v17 + 1;
        if ( !v18 )
          v19 = v17;
        *(_DWORD *)a3 = v19;
        if ( !v15 )
          goto LABEL_37;
        v20 = v15;
        v74 = v15;
        v21 = (unsigned int)v15 < *(_DWORD *)(v13 + 4);
        if ( (unsigned int)v15 > *(_DWORD *)(v13 + 4) )
          break;
        if ( v15 != *(_DWORD *)(v13 + 4) )
        {
          v78 = 0;
          if ( v21 )
            goto LABEL_33;
        }
LABEL_34:
        v22 = *(unsigned __int8 **)a3;
        v74 = *(_DWORD *)v13;
        v23 = &v22[v15];
        if ( v23 >= v22 && (unsigned int)v23 <= *(_DWORD *)(a3 + 4) )
        {
          v50 = v74;
          *(_DWORD *)a3 = v23;
          sub_464310(v50, (unsigned int)v22, v15);
        }
LABEL_37:
        *(_DWORD *)(v13 + 12) = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        *(_DWORD *)(v13 + 24) = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        *(_DWORD *)(v13 + 28) = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v13 += 36;
        if ( (char *)(v13 - 4) == v76 )
        {
          v12 = v69;
          v3 = v67;
          goto LABEL_39;
        }
      }
      if ( (unsigned int)v15 > *(_DWORD *)(v13 + 8) )
      {
        *(_DWORD *)v13 = sub_453B00(v13, *(void **)v13, v15, 1u);
        v20 = v74;
      }
      sub_464890((__m128i *)(*(_DWORD *)(v13 + 4) + *(_DWORD *)v13), 0, v20 - *(_DWORD *)(v13 + 4));
      v20 = v74;
      v15 = v75;
      v78 = 0;
LABEL_33:
      *(_DWORD *)(v13 + 4) = v20;
      goto LABEL_34;
    }
LABEL_39:
    v24 = &v12[36 * v77];
    v25 = (unsigned int)v76;
    if ( v24 != v76 )
    {
      v26 = v72;
      do
      {
        if ( v26[104] )
        {
          sub_402760("del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n");
          v25 = (unsigned int)v76;
          v26 = v72;
        }
        v24 += 36;
      }
      while ( v24 != (char *)v25 );
      v12 = v69;
    }
    v64 = nullptr;
    v65 = 0;
    v66 = 0;
    v27 = v77;
    v28 = *((_DWORD *)v72 + 64);
    LOBYTE(v81) = 7;
    v76 = (char *)(*(int (__stdcall **)(int, unsigned int *, char *, int, int, void **))(*(_DWORD *)v28 + 160))(
                    v28,
                    &v63,
                    v12,
                    v77,
                    v68,
                    &v64);
    v29 = &v69[36 * v27];
    v77 = (int)v29;
    if ( v69 != v29 )
    {
      v30 = v72;
      v31 = v69 + 20;
      v32 = v29;
      do
      {
        if ( v30[104] )
        {
          sub_402760("add_bpt(ea=%a type=%d len=%d) => %s\n");
          v32 = (char *)v77;
        }
        v31 += 36;
      }
      while ( v31 - 20 != v32 );
      v3 = v67;
    }
    v33 = sub_4540B0(&j, (unsigned int)v80, (unsigned int)v76);
    sub_401600(v3, (unsigned int)&j, v33 - (_BYTE *)&j);
    v34 = sub_4540B0(&j, (unsigned int)v80, v63);
    sub_401600(v3, (unsigned int)&j, v34 - (_BYTE *)&j);
    for ( i = v69; i != (char *)v77; i += 36 )
    {
      v78 = i[24];
      v36 = *(_DWORD *)(v3 + 4) + 1;
      if ( v36 > *(_DWORD *)(v3 + 8) )
        *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v36, 1u);
      *(_BYTE *)(*(_DWORD *)v3 + *(_DWORD *)(v3 + 4)) = v78;
      v37 = *(_DWORD *)(v3 + 4) + 1;
      *(_DWORD *)(v3 + 4) = v37;
      if ( i[24] || *((_DWORD *)i + 4) != 4 )
        continue;
      v38 = i[8];
      v39 = v37 + 1;
      v78 = v38;
      if ( v39 > *(_DWORD *)(v3 + 8) )
      {
        v40 = sub_453B00(v3, *(void **)v3, v39, 1u);
        v38 = v78;
        *(_DWORD *)v3 = v40;
      }
      *(_BYTE *)(*(_DWORD *)v3 + *(_DWORD *)(v3 + 4)) = v38;
      v41 = *(_DWORD *)(v3 + 4) + 1;
      *(_DWORD *)(v3 + 4) = v41;
      v42 = *((_DWORD *)i + 2);
      v43 = *((_DWORD *)i + 1);
      v73 = v41;
      j = (char *)v42;
      v67 = v43;
      if ( !v42 )
        continue;
      v44 = v41 + v42;
      if ( v44 < v41 )
        v44 = v62;
      v74 = v44;
      if ( v44 <= v41 )
      {
        if ( v44 == v41 )
          goto LABEL_68;
        v78 = 0;
        if ( v44 >= v41 )
          goto LABEL_68;
      }
      else
      {
        if ( v44 > *(_DWORD *)(v3 + 8) )
        {
          *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v44, 1u);
          v44 = v74;
        }
        sub_464890((__m128i *)(*(_DWORD *)(v3 + 4) + *(_DWORD *)v3), 0, v44 - *(_DWORD *)(v3 + 4));
        v44 = v74;
        v41 = v73;
        v43 = v67;
        v78 = 0;
      }
      *(_DWORD *)(v3 + 4) = v44;
LABEL_68:
      sub_464310(v41 + *(_DWORD *)v3, v43, (unsigned int)j);
    }
    for ( j = (char *)(v77 + 36 * v68); i != j; i += 36 )
    {
      v78 = i[24];
      v45 = *(_DWORD *)(v3 + 4) + 1;
      if ( v45 > *(_DWORD *)(v3 + 8) )
        *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v45, 1u);
      *(_BYTE *)(*(_DWORD *)v3 + *(_DWORD *)(v3 + 4)) = v78;
      v46 = v72;
      ++*(_DWORD *)(v3 + 4);
      if ( v46[104] )
        sub_402760("del_bpt(ea=%a) => %s\n");
    }
    if ( v76 != (char *)1 )
      sub_406150(v3, (int)&v64);
    LOBYTE(v81) = 8;
    if ( v64 )
    {
      v65 = 0;
      sub_453A20(v64);
      v64 = nullptr;
      v66 = 0;
    }
    v47 = (unsigned int)v76;
  }
  v81 = 9;
  if ( v69 )
  {
    sub_415EF0(&v69, 0);
    sub_453A20(v69);
  }
  return v47;
}
