/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406DE0
// Address: 0x00406DE0

//----- (00406DE0) --------------------------------------------------------
// bad sp value at call has been detected, the output may be wrong!
bool __usercall sub_406DE0@<al>(_DWORD *a1@<ecx>, __m128i a2@<xmm0>)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  HMODULE *v9; // ecx
  HMODULE *v10; // eax
  int v11; // eax
  int v12; // ecx
  int **v13; // edi
  int *v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  void (__noreturn **v21)(); // ebx
  int v22; // eax
  _BYTE *v23; // eax
  _BYTE *v24; // eax
  _BYTE *v25; // eax
  _BYTE *v26; // eax
  _BYTE *v27; // eax
  _BYTE *v28; // eax
  _BYTE *v29; // eax
  char v30; // bl
  unsigned int v31; // eax
  unsigned int v32; // eax
  void (__noreturn **v33)(); // eax
  int v34; // eax
  int v35; // eax
  int v36; // edx
  int v37; // eax
  void **v38; // edi
  const char *v39; // ecx
  unsigned int v40; // ecx
  bool v41; // zf
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ebx
  int v45; // ebx
  int v46; // eax
  int v47; // eax
  const CHAR *v48; // eax
  unsigned int v49; // ebx
  unsigned int i; // edi
  _BYTE *v51; // eax
  int v53; // [esp-8h] [ebp-90h]
  int v54; // [esp-4h] [ebp-8Ch]
  int v55; // [esp+0h] [ebp-88h] BYREF
  unsigned int v56; // [esp+14h] [ebp-74h]
  unsigned int v57; // [esp+18h] [ebp-70h]
  void (__noreturn **v58)(); // [esp+1Ch] [ebp-6Ch] BYREF
  unsigned int v59; // [esp+20h] [ebp-68h]
  _DWORD *v60; // [esp+24h] [ebp-64h]
  int v61; // [esp+28h] [ebp-60h]
  char v62; // [esp+2Eh] [ebp-5Ah]
  char v63; // [esp+2Fh] [ebp-59h]
  int v64; // [esp+30h] [ebp-58h]
  int v65; // [esp+34h] [ebp-54h] BYREF
  _BYTE v66[5]; // [esp+38h] [ebp-50h] BYREF
  char v67[3]; // [esp+3Dh] [ebp-4Bh] BYREF
  _BYTE v68[5]; // [esp+40h] [ebp-48h] BYREF
  char v69[3]; // [esp+45h] [ebp-43h] BYREF
  _BYTE v70[5]; // [esp+48h] [ebp-40h] BYREF
  char v71[3]; // [esp+4Dh] [ebp-3Bh] BYREF
  _BYTE v72[5]; // [esp+50h] [ebp-38h] BYREF
  char v73[3]; // [esp+55h] [ebp-33h] BYREF
  _BYTE v74[5]; // [esp+58h] [ebp-30h] BYREF
  _BYTE v75[3]; // [esp+5Dh] [ebp-2Bh] BYREF
  const char *v76; // [esp+60h] [ebp-28h] BYREF
  unsigned int v77; // [esp+64h] [ebp-24h]
  int v78; // [esp+68h] [ebp-20h] BYREF
  int **v79; // [esp+6Ch] [ebp-1Ch] BYREF
  char v80[3]; // [esp+71h] [ebp-17h] BYREF
  int *v81; // [esp+78h] [ebp-10h]
  int v82; // [esp+84h] [ebp-4h]

  v81 = &v55;
  v3 = a1[24];
  if ( (!v3 || !*(_DWORD *)(v3 + 8)) && a1[10] != 1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(628);
  }
  if ( a1[11] == -1 && a1[10] != 1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(629);
  }
  v4 = a1[10];
  v5 = 0;
  a1[48] = 0;
  v64 = 0;
  v65 = 0;
  if ( v4 == 3 || v4 == 2 || v4 == 6 || v4 == 7 )
  {
    v63 = 1;
    sub_401600((int)(a1 + 47), (unsigned int)&v65, 4u);
    v5 = v65;
    v64 = v65;
  }
  else
  {
    v63 = 0;
  }
  v6 = a1[10];
  v82 = 0;
  v65 = -2147467259;
  if ( v6 == 1 )
  {
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a1[24] + 8);
    v8 = v6 - 1;
  }
  switch ( v8 )
  {
    case 0:
      if ( sub_406000(a1 + 24) )
      {
        v12 = 0;
      }
      else
      {
        a1[45] = a1;
        v9 = (HMODULE *)a1[24];
        if ( v9 )
        {
          if ( v9[2] )
          {
            v65 = 0;
LABEL_26:
            sub_402760("PDB: successfully opened %s (%d)\n");
            goto LABEL_91;
          }
        }
        else
        {
          v10 = (HMODULE *)sub_4627C2(0x34u);
          v9 = v10;
          if ( v10 )
          {
            *v10 = nullptr;
            v10[1] = (HMODULE)1;
            v10[2] = nullptr;
            v10[3] = nullptr;
            v10[4] = nullptr;
            v10[5] = nullptr;
            v10[6] = nullptr;
            v10[7] = nullptr;
            v10[8] = nullptr;
            v10[9] = nullptr;
            v10[10] = nullptr;
            v10[11] = nullptr;
            v10[12] = nullptr;
            ++dword_4B69A8;
          }
          else
          {
            v9 = nullptr;
          }
          a1[24] = v9;
        }
        v11 = sub_405940(v9, a2, (int)(a1 + 29));
        v12 = v11;
        v65 = v11;
        if ( v11 >= 0 )
          goto LABEL_26;
        if ( v11 == -2147467262 )
        {
          sub_402760("<< It appears that MS DIA SDK is not installed.\n");
          sub_402760("Please try installing a recent \"Microsoft Visual C++ Redistributable Package / x86\" >>\n");
          goto LABEL_91;
        }
      }
      goto LABEL_92;
    case 1:
      v13 = (int **)sub_404AB0(v7, a2, a1[11]);
      v79 = v13;
      v14 = *v13;
      LOBYTE(v82) = 1;
      if ( ((int (__thiscall *)(int **))v14[34])(v13) )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1552);
      }
      if ( !sub_406200(a1, v13[2]) )
      {
        v65 = 0;
        v64 = v5 + 1;
      }
      ((void (__thiscall *)(int **, int))(*v13)[36])(v13, 1);
      goto LABEL_91;
    case 2:
      v15 = sub_404AB0(v7, a2, a1[11]);
      v79 = (int **)v15;
      v59 = 0;
      v58 = (void (__noreturn **)())&off_48A088;
      v60 = a1;
      v61 = 0;
      v16 = a1[24];
      v53 = a1[19];
      LOBYTE(v82) = 3;
      v17 = *(_DWORD *)(v16 + 8);
      v59 = v15;
      v12 = (*(int (__thiscall **)(int, int, int, void (__noreturn ***)()))(*(_DWORD *)v17 + 4))(v17, v15, v53, &v58);
      v58 = &off_489998;
      v65 = v12;
      if ( v12 >= 0 )
        v5 = v61;
      v64 = v5;
      if ( !v15 )
        goto LABEL_92;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 144))(v15, 1);
      goto LABEL_91;
    case 3:
    case 4:
      v58 = nullptr;
      v59 = 0;
      v60 = nullptr;
      LOBYTE(v61) = 0;
      v18 = *(_DWORD *)v7;
      LOBYTE(v82) = 4;
      if ( v6 == 4 )
        v12 = (*(int (__thiscall **)(int, void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(v18 + 16))(
                v7,
                &v58,
                a1[12],
                0,
                a1[14],
                a1[15]);
      else
        v12 = (*(int (__thiscall **)(int, void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(v18 + 20))(
                v7,
                &v58,
                a1[16],
                a1[17],
                a1[18]);
      v65 = v12;
      if ( v12 >= 0 )
      {
        v19 = v59;
        v56 = v59;
        sub_402780(a1 + 47, v59);
        v20 = 0;
        while ( 1 )
        {
          v57 = v20;
          if ( v20 >= v19 )
            break;
          v21 = &v58[10 * v20];
          v22 = (int)v21[1];
          if ( *v21 == (void (__noreturn *)())-1 && !v22 )
            v22 = -1;
          v23 = sub_454140(&v76, (unsigned int)&v78 + 2, (unsigned int)*v21 + 1, (__PAIR64__(v22, *v21) + 1) >> 32);
          sub_401600((int)(a1 + 47), (unsigned int)&v76, v23 - (_BYTE *)&v76);
          v24 = sub_4540B0(&v79, (unsigned int)v80, (unsigned int)v21[2]);
          sub_401600((int)(a1 + 47), (unsigned int)&v79, v24 - (_BYTE *)&v79);
          v25 = sub_4540B0(v72, (unsigned int)v73, (unsigned int)v21[3]);
          sub_401600((int)(a1 + 47), (unsigned int)v72, v25 - v72);
          v26 = sub_4540B0(v70, (unsigned int)v71, (unsigned int)v21[4]);
          sub_401600((int)(a1 + 47), (unsigned int)v70, v26 - v70);
          v27 = sub_4540B0(v68, (unsigned int)v69, (unsigned int)v21[5]);
          sub_401600((int)(a1 + 47), (unsigned int)v68, v27 - v68);
          v28 = sub_4540B0(v66, (unsigned int)v67, (unsigned int)v21[6]);
          sub_401600((int)(a1 + 47), (unsigned int)v66, v28 - v66);
          v29 = sub_4540B0(v74, (unsigned int)v75, (unsigned int)v21[7]);
          sub_401600((int)(a1 + 47), (unsigned int)v74, v29 - v74);
          v30 = *((_BYTE *)v21 + 32);
          v31 = a1[48] + 1;
          if ( v31 > a1[49] )
            a1[47] = sub_453B00((int)(a1 + 47), (void *)a1[47], v31, 1u);
          *(_BYTE *)(a1[47] + a1[48]) = v30;
          v32 = v57;
          ++a1[48];
          v20 = v32 + 1;
          v19 = v56;
        }
        v12 = v65;
      }
      v33 = v58;
      LOBYTE(v82) = 5;
      if ( !v58 )
        goto LABEL_92;
      v59 = 0;
      goto LABEL_90;
    case 5:
    case 6:
      v59 = 0;
      v58 = (void (__noreturn **)())&off_48A088;
      v60 = a1;
      v61 = 0;
      v34 = *(_DWORD *)v7;
      LOBYTE(v82) = 6;
      if ( v6 == 6 )
        v35 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, void (__noreturn ***)()))(v34 + 24))(
                v7,
                a1[12],
                0,
                a1[14],
                a1[15],
                a1[19],
                &v58);
      else
        v35 = (*(int (__thiscall **)(int, _DWORD, void (__noreturn ***)()))(v34 + 28))(v7, a1[16], &v58);
      v12 = v35;
      if ( v35 < 0 )
        goto LABEL_92;
      v36 = v61;
      goto LABEL_93;
    case 7:
      v76 = nullptr;
      v77 = 0;
      v78 = 0;
      v54 = a1[16];
      v37 = *(_DWORD *)v7;
      LOBYTE(v82) = 7;
      v12 = (*(int (__thiscall **)(int, const char **, _DWORD, int))(v37 + 32))(v7, &v76, 0, v54);
      v65 = v12;
      if ( v12 < 0 )
        goto LABEL_75;
      v38 = (void **)(a1 + 47);
      if ( v77 )
      {
        v39 = pNodeName;
        if ( v76 )
          v39 = v76;
      }
      else
      {
        v39 = MultiByteStr;
      }
      v57 = (unsigned int)v39;
      v40 = strlen(v39);
      v41 = v40 == -1;
      v42 = v40 + 1;
      v56 = v42;
      if ( v41 )
        goto LABEL_74;
      v43 = a1[48];
      v79 = (int **)v43;
      v44 = v43 + v42;
      if ( v43 + v42 < v43 )
        v44 = 0x7FFFFFFF;
      if ( v44 > v43 )
      {
        if ( v44 > a1[49] )
          *v38 = sub_453B00((int)(a1 + 47), *v38, v44, 1u);
        sub_464890((__m128i *)(a1[48] + a1[47]), 0, v44 - a1[48]);
        v42 = v56;
        v62 = 0;
        goto LABEL_72;
      }
      if ( v44 != v43 )
      {
        v62 = 0;
        if ( v44 < v43 )
LABEL_72:
          a1[48] = v44;
      }
      sub_464310((unsigned int)*v38 + (_DWORD)v79, v57, v42);
LABEL_74:
      v12 = v65;
LABEL_75:
      LOBYTE(v82) = 8;
LABEL_88:
      v33 = (void (__noreturn **)())v76;
      if ( v76 )
      {
        v77 = 0;
LABEL_90:
        sub_453A20(v33);
LABEL_91:
        v12 = v65;
      }
LABEL_92:
      v36 = v64;
LABEL_93:
      if ( v63 )
        *(_DWORD *)a1[47] = v36;
      return v12 == 0;
    case 8:
    case 9:
      v76 = nullptr;
      v77 = 0;
      v78 = 0;
      LOBYTE(v82) = 9;
      if ( v6 == 9 )
      {
        v45 = sub_404AB0(v7, a2, a1[11]);
        v79 = (int **)v45;
        v46 = *(_DWORD *)v7;
        LOBYTE(v82) = 10;
        v47 = (*(int (__thiscall **)(int, const char **, int))(v46 + 36))(v7, &v76, v45);
        LOBYTE(v82) = 9;
        v12 = v47;
        v65 = v47;
        if ( v45 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v45 + 144))(v45, 1);
          v12 = v65;
        }
      }
      else
      {
        v48 = MultiByteStr;
        if ( a1[21] )
          v48 = (const CHAR *)a1[20];
        v12 = (*(int (__thiscall **)(int, const char **, const CHAR *))(*(_DWORD *)v7 + 40))(v7, &v76, v48);
        v65 = v12;
      }
      if ( v12 >= 0 )
      {
        v49 = v77;
        sub_402780(a1 + 47, v77);
        for ( i = 0; i < v49; ++i )
        {
          v51 = sub_4540B0(v74, (unsigned int)v75, *(_DWORD *)&v76[4 * i]);
          sub_401600((int)(a1 + 47), (unsigned int)v74, v51 - v74);
        }
        v12 = v65;
      }
      LOBYTE(v82) = 11;
      goto LABEL_88;
    default:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(630);
  }
}
// 4072A7: bad sp value at call
// 406EE5: conditional instruction was optimized away because ecx.4!=0
// 489998: using guessed type void (__noreturn *off_489998)();
// 48A088: using guessed type int (__stdcall *off_48A088)(int);
// 4B69A8: using guessed type int dword_4B69A8;
// 4B70F0: using guessed type char byte_4B70F0;
