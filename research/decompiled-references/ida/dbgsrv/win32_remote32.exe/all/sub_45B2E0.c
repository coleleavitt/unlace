/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B2E0
// Address: 0x0045B2E0

//----- (0045B2E0) --------------------------------------------------------
int __stdcall sub_45B2E0(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // ecx
  _DWORD *v4; // edi
  _BYTE *v5; // eax
  unsigned int v6; // ebx
  _BYTE *v7; // eax
  unsigned int v8; // eax
  const char *v9; // eax
  const char *v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  _DWORD *v16; // edi
  char *v17; // ecx
  unsigned int v18; // edx
  unsigned int *v19; // eax
  unsigned int v20; // ebx
  _DWORD *v21; // eax
  __int64 v22; // xmm0_8
  int v23; // eax
  _DWORD *v24; // eax
  const char *v25; // ebx
  _DWORD *v26; // eax
  _BYTE *v27; // eax
  unsigned int v28; // edi
  _DWORD *v29; // eax
  const char *v30; // edi
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // ebx
  int v34; // edi
  _DWORD *v35; // ecx
  int v36; // eax
  bool v37; // cf
  _DWORD *v38; // eax
  char *v39; // ecx
  unsigned int v40; // ebx
  char v41; // al
  _BYTE *v42; // eax
  unsigned int v43; // ecx
  const char *v44; // eax
  const char *v45; // ecx
  unsigned int v46; // eax
  bool v47; // zf
  unsigned int v48; // eax
  unsigned int v49; // ebx
  unsigned int v50; // edi
  _BYTE *v51; // eax
  unsigned __int8 *v52; // ebx
  const char *v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // ebx
  unsigned int v57; // edi
  _BYTE *v58; // eax
  _BYTE *v59; // eax
  _BYTE *v60; // eax
  unsigned int v61; // edi
  _DWORD *v62; // ecx
  _BYTE *v63; // eax
  unsigned int v64; // ecx
  int v65; // eax
  _BYTE *v66; // eax
  _BYTE *v67; // eax
  _DWORD *v68; // [esp-Ch] [ebp-98h]
  int v69; // [esp-8h] [ebp-94h]
  _DWORD v70[2]; // [esp+10h] [ebp-7Ch] BYREF
  int v71; // [esp+18h] [ebp-74h]
  _DWORD *v72; // [esp+1Ch] [ebp-70h]
  void **v73; // [esp+20h] [ebp-6Ch]
  _DWORD *v74; // [esp+24h] [ebp-68h]
  _DWORD *v75; // [esp+28h] [ebp-64h] BYREF
  int v76; // [esp+2Ch] [ebp-60h]
  _DWORD *v77; // [esp+30h] [ebp-5Ch] BYREF
  int v78; // [esp+34h] [ebp-58h]
  unsigned __int8 *v79; // [esp+38h] [ebp-54h]
  unsigned int v80; // [esp+3Ch] [ebp-50h]
  const char *v81; // [esp+40h] [ebp-4Ch]
  char v82; // [esp+47h] [ebp-45h]
  __int64 v83; // [esp+48h] [ebp-44h] BYREF
  int v84; // [esp+50h] [ebp-3Ch] BYREF
  int v85; // [esp+54h] [ebp-38h] BYREF
  char v86[3]; // [esp+59h] [ebp-33h] BYREF
  unsigned int v87; // [esp+5Ch] [ebp-30h] BYREF
  const char *v88; // [esp+60h] [ebp-2Ch] BYREF
  const char *v89; // [esp+64h] [ebp-28h] BYREF
  _BYTE v90[3]; // [esp+69h] [ebp-23h] BYREF
  int v91; // [esp+6Ch] [ebp-20h] BYREF
  char v92[3]; // [esp+71h] [ebp-1Bh] BYREF
  char *i; // [esp+74h] [ebp-18h] BYREF
  char v94[3]; // [esp+79h] [ebp-13h] BYREF
  int v95; // [esp+88h] [ebp-4h]

  v72 = a2;
  result = a2[1];
  v3 = *a2;
  v4 = (_DWORD *)a2[6];
  v80 = result;
  v85 = v3;
  v74 = v4;
  if ( result && v3 && v4 )
  {
    v5 = sub_4540B0(&v89, (unsigned int)v90, 0xFFFFFF01);
    sub_401600(a1, (unsigned int)&v89, v5 - (_BYTE *)&v89);
    v6 = 0;
    v91 = 0;
    if ( *v4 )
    {
      do
        ++v6;
      while ( v4[v6] );
      v91 = v6;
    }
    v7 = sub_4540B0(&v89, (unsigned int)v90, v6);
    sub_401600(a1, (unsigned int)&v89, v7 - (_BYTE *)&v89);
    v8 = 0;
    for ( i = nullptr; v8 < v6; i = (char *)v8 )
    {
      v9 = (const char *)v4[v8];
      v10 = pNodeName;
      if ( v9 )
        v10 = v9;
      v81 = v10;
      v11 = strlen(v10);
      v12 = v11 + 1;
      v79 = (unsigned __int8 *)(v11 + 1);
      if ( v11 == -1 )
        goto LABEL_21;
      v13 = *(_DWORD *)(a1 + 4);
      v14 = v13 + v12;
      if ( v13 + v12 < v13 )
        v14 = 0x7FFFFFFF;
      if ( v14 <= v13 )
      {
        if ( v14 == v13 )
          goto LABEL_20;
        v82 = 0;
        if ( v14 >= v13 )
          goto LABEL_20;
      }
      else
      {
        if ( v14 > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v14, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v14 - *(_DWORD *)(a1 + 4));
        v12 = (unsigned int)v79;
        v82 = 0;
      }
      *(_DWORD *)(a1 + 4) = v14;
LABEL_20:
      sub_464310(v13 + *(_DWORD *)a1, (unsigned int)v81, v12);
      v6 = v91;
      v4 = v74;
LABEL_21:
      v8 = (unsigned int)(i + 1);
    }
    v15 = 0;
    v81 = nullptr;
    v78 = 0;
    v16 = sub_4627C2(0x18u);
    *v16 = v16;
    v16[1] = v16;
    v16[2] = v16;
    *((_WORD *)v16 + 6) = 257;
    v77 = v16;
    v17 = nullptr;
    v95 = 0;
    i = nullptr;
    if ( v80 )
    {
      v18 = v80;
      v19 = (unsigned int *)(v85 + 12);
      v91 = v85 + 12;
      do
      {
        v20 = *v19;
        if ( *v19 )
        {
          v88 = v81;
          v87 = v20;
          v21 = sub_408C10((int *)&v77, v70, &v87);
          v22 = *(_QWORD *)v21;
          v23 = v21[2];
          v83 = v22;
          if ( *(_BYTE *)(v23 + 13) || v20 < *(_DWORD *)(v23 + 16) )
          {
            if ( v78 == 178956970 )
LABEL_100:
              sub_403E20();
            v73 = (void **)&v77;
            LOBYTE(v95) = 1;
            v74 = nullptr;
            v24 = sub_4627C2(0x18u);
            LOBYTE(v95) = 0;
            v74 = nullptr;
            v24[4] = v20;
            v25 = v81;
            v69 = HIDWORD(v83);
            v24[5] = v81;
            v68 = (_DWORD *)v83;
            *v24 = v16;
            v24[1] = v16;
            v24[2] = v16;
            *((_WORD *)v24 + 6) = 0;
            sub_403C10(&v77, v68, v69, (int)v24);
            v16 = v77;
            v15 = (unsigned int)(v25 + 1);
            v19 = (unsigned int *)v91;
            v17 = i;
            v18 = v80;
            v81 = (const char *)v15;
            goto LABEL_31;
          }
          v19 = (unsigned int *)v91;
          v17 = i;
          v18 = v80;
        }
        v15 = (unsigned int)v81;
LABEL_31:
        ++v17;
        v19 += 5;
        i = v17;
        v91 = (int)v19;
      }
      while ( (unsigned int)v17 < v18 );
    }
    v75 = nullptr;
    v76 = 0;
    v26 = sub_4627C2(0x14u);
    *v26 = v26;
    v26[1] = v26;
    v26[2] = v26;
    *((_WORD *)v26 + 6) = 257;
    v75 = v26;
    LOBYTE(v95) = 3;
    v27 = sub_4540B0(&v89, (unsigned int)v90, v15);
    sub_401600(a1, (unsigned int)&v89, v27 - (_BYTE *)&v89);
    v28 = v80;
    v79 = nullptr;
    if ( v80 )
    {
      v29 = v75;
      v30 = (const char *)(v85 + 12);
      v31 = v80;
      v81 = (const char *)(v85 + 12);
      i = (char *)v75;
      do
      {
        v32 = *(_DWORD *)v30;
        if ( *(_DWORD *)v30 )
        {
          v33 = v29[1];
          v34 = 0;
          v35 = v29;
          v91 = (int)v29;
          if ( !*(_BYTE *)(v33 + 13) )
          {
            v36 = v33;
            do
            {
              v33 = v36;
              v37 = *(_DWORD *)(v36 + 16) < v32;
              if ( *(_DWORD *)(v36 + 16) >= v32 )
              {
                v91 = v36;
                v36 = *(_DWORD *)v36;
              }
              else
              {
                v36 = *(_DWORD *)(v36 + 8);
              }
              v34 = 1 - v37;
            }
            while ( !*(_BYTE *)(v36 + 13) );
            v35 = (_DWORD *)v91;
          }
          if ( *((_BYTE *)v35 + 13) || *(_DWORD *)v81 < v35[4] )
          {
            if ( v76 == 214748364 )
              goto LABEL_100;
            HIDWORD(v83) = &v75;
            LOBYTE(v95) = 4;
            v84 = 0;
            v38 = sub_4627C2(0x14u);
            LOBYTE(v95) = 3;
            v84 = 0;
            v38[4] = *(_DWORD *)v81;
            v39 = i;
            *v38 = i;
            v38[1] = v39;
            v38[2] = v39;
            *((_WORD *)v38 + 6) = 0;
            sub_403C10(&v75, (_DWORD *)v33, v34, (int)v38);
            v30 = v81;
            if ( (*((_DWORD *)v81 - 2) & 0x100) != 0 )
            {
              v40 = 1;
              v91 = 1;
            }
            else
            {
              v41 = *(v81 - 3);
              if ( v41 == 1 )
              {
                v40 = 16;
                v91 = 16;
              }
              else
              {
                v40 = 0;
                if ( v41 == 2 )
                  v40 = 32;
                v91 = v40;
                if ( v41 != 2 )
                {
                  if ( byte_4B70F0 )
                    __debugbreak();
                  sub_4533F0(1783);
                }
              }
            }
            v42 = sub_4540B0(&v87, (unsigned int)&v88 + 1, v40);
            sub_401600(a1, (unsigned int)&v87, v42 - (_BYTE *)&v87);
            v43 = 0;
            for ( i = nullptr; v43 < v40; i = (char *)v43 )
            {
              v44 = *(const char **)(*(_DWORD *)v30 + 4 * v43);
              v45 = pNodeName;
              if ( v44 )
                v45 = v44;
              v89 = v45;
              v46 = strlen(v45);
              v47 = v46 == -1;
              v48 = v46 + 1;
              v74 = (_DWORD *)v48;
              if ( v47 )
                goto LABEL_66;
              v49 = *(_DWORD *)(a1 + 4);
              v50 = v49 + v48;
              if ( v49 + v48 < v49 )
                v50 = 0x7FFFFFFF;
              if ( v50 <= v49 )
              {
                if ( v50 == v49 )
                  goto LABEL_65;
                v82 = 0;
                if ( v50 >= v49 )
                  goto LABEL_65;
              }
              else
              {
                if ( v50 > *(_DWORD *)(a1 + 8) )
                  *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v50, 1u);
                sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v50 - *(_DWORD *)(a1 + 4));
                v48 = (unsigned int)v74;
                v82 = 0;
              }
              *(_DWORD *)(a1 + 4) = v50;
LABEL_65:
              sub_464310(v49 + *(_DWORD *)a1, (unsigned int)v89, v48);
              v40 = v91;
              v30 = v81;
LABEL_66:
              v43 = (unsigned int)(i + 1);
            }
            v29 = v75;
            i = (char *)v75;
          }
          else
          {
            v29 = i;
            v30 = v81;
          }
          v31 = v80;
        }
        v30 += 20;
        v81 = v30;
        ++v79;
      }
      while ( (unsigned int)v79 < v31 );
      v28 = v80;
    }
    v51 = sub_4540B0(&v87, (unsigned int)&v88 + 1, v28);
    sub_401600(a1, (unsigned int)&v87, v51 - (_BYTE *)&v87);
    if ( v28 )
    {
      v52 = (unsigned __int8 *)(v85 + 8);
      v79 = (unsigned __int8 *)(v85 + 8);
      do
      {
        v53 = pNodeName;
        if ( *((_DWORD *)v52 - 2) )
          v53 = *((const char **)v52 - 2);
        v74 = v53;
        v54 = strlen(v53);
        v55 = v54 + 1;
        v89 = (const char *)(v54 + 1);
        if ( v54 == -1 )
          goto LABEL_87;
        v56 = *(_DWORD *)(a1 + 4);
        v57 = v56 + v55;
        if ( v56 + v55 < v56 )
          v57 = 0x7FFFFFFF;
        if ( v57 <= v56 )
        {
          if ( v57 == v56 )
            goto LABEL_86;
          v82 = 0;
          if ( v57 >= v56 )
            goto LABEL_86;
        }
        else
        {
          if ( v57 > *(_DWORD *)(a1 + 8) )
            *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v57, 1u);
          sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v57 - *(_DWORD *)(a1 + 4));
          v55 = (unsigned int)v89;
          v82 = 0;
        }
        *(_DWORD *)(a1 + 4) = v57;
LABEL_86:
        sub_464310(v56 + *(_DWORD *)a1, (unsigned int)v74, v55);
        v52 = v79;
LABEL_87:
        v58 = sub_4540B0(&v87, (unsigned int)&v88 + 1, *((_DWORD *)v52 - 1));
        sub_401600(a1, (unsigned int)&v87, v58 - (_BYTE *)&v87);
        v59 = sub_4540B0(&v85, (unsigned int)v86, *v52);
        sub_401600(a1, (unsigned int)&v85, v59 - (_BYTE *)&v85);
        v60 = sub_4540B0(&v91, (unsigned int)v92, v52[1]);
        sub_401600(a1, (unsigned int)&v91, v60 - (_BYTE *)&v91);
        v61 = 0;
        sub_408C10((int *)&v77, v70, (unsigned int *)v52 + 1);
        v62 = (_DWORD *)v71;
        if ( *(_BYTE *)(v71 + 13) || *((_DWORD *)v52 + 1) < *(_DWORD *)(v71 + 16) )
          v62 = v77;
        if ( v62 != v77 )
          v61 = v62[5] + 1;
        v63 = sub_4540B0(&i, (unsigned int)v94, v61);
        sub_401600(a1, (unsigned int)&i, v63 - (_BYTE *)&i);
        v64 = *((_DWORD *)v52 + 2);
        v65 = 0;
        if ( v64 == -1 )
          v65 = -1;
        v66 = sub_454140(&v83, (unsigned int)&v84 + 2, v64 + 1, (__PAIR64__(v65, v64) + 1) >> 32);
        sub_401600(a1, (unsigned int)&v83, v66 - (_BYTE *)&v83);
        v52 += 20;
        v47 = v80-- == 1;
        v79 = v52;
      }
      while ( !v47 );
    }
    v67 = sub_4540B0(&v87, (unsigned int)&v88 + 1, v72[12]);
    sub_401600(a1, (unsigned int)&v87, v67 - (_BYTE *)&v87);
    sub_402EB0((void **)&v75);
    return sub_44C420((void **)&v77);
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
