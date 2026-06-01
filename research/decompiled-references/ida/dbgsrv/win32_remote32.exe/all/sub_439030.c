/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439030
// Address: 0x00439030

//----- (00439030) --------------------------------------------------------
unsigned __int8 *__userpurge sub_439030@<eax>(_DWORD *a1@<ecx>, __m128i a2@<xmm0>, int a3, int a4)
{
  _DWORD *v4; // ebx
  unsigned __int8 *result; // eax
  int v6; // ecx
  unsigned __int8 *v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  _DWORD *v11; // esi
  unsigned int v12; // ebx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // edi
  unsigned int v16; // edx
  unsigned __int8 *v17; // esi
  unsigned __int8 *v18; // edi
  int v19; // esi
  int v20; // eax
  unsigned __int8 *v21; // edx
  unsigned int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  char *v27; // edi
  int v28; // esi
  int v29; // eax
  __int8 *v30; // edi
  unsigned int v31; // eax
  int v32; // esi
  int v33; // eax
  unsigned __int8 *v34; // esi
  unsigned int v35; // eax
  unsigned __int8 *v36; // edi
  unsigned int v37; // eax
  int v38; // edi
  char *v39; // eax
  _DWORD *v40; // esi
  int v41; // eax
  unsigned __int8 *v42; // ecx
  unsigned int v43; // eax
  _DWORD *v44; // edi
  unsigned int v45; // edx
  unsigned __int8 *v46; // eax
  const char **v47; // esi
  const char *v48; // ecx
  int v49; // eax
  const char **v50; // edi
  int v51; // eax
  unsigned __int8 *v52; // edi
  unsigned int v53; // eax
  int v54; // esi
  int v55; // eax
  unsigned __int8 *v56; // ecx
  unsigned __int8 *v57; // edi
  int v58; // esi
  int v59; // eax
  unsigned int v60; // eax
  unsigned __int8 *v61; // edi
  int v62; // esi
  int v63; // eax
  unsigned __int8 *v64; // edi
  int v65; // esi
  int v66; // eax
  unsigned __int8 *v67; // edi
  unsigned int v68; // ecx
  int v69; // esi
  int v70; // eax
  unsigned int v71; // ecx
  int v72; // esi
  int v73; // eax
  int v74; // eax
  unsigned __int8 *v75; // edi
  int v76; // esi
  int v77; // eax
  int v78; // eax
  unsigned __int8 *v79; // edi
  unsigned __int8 *v80; // esi
  int v81; // eax
  int v82; // ecx
  int v83; // eax
  int v84; // eax
  unsigned int v85; // edi
  int v86; // esi
  int v87; // eax
  int v88; // esi
  int v89; // eax
  unsigned __int8 *v90; // edi
  int v91; // esi
  int v92; // eax
  int v93; // [esp-8h] [ebp-68h]
  char *v94; // [esp+10h] [ebp-50h] BYREF
  int v95; // [esp+14h] [ebp-4Ch]
  int v96; // [esp+18h] [ebp-48h]
  unsigned __int8 *v97; // [esp+1Ch] [ebp-44h]
  unsigned __int8 *v98; // [esp+20h] [ebp-40h] BYREF
  const char *v99; // [esp+24h] [ebp-3Ch] BYREF
  unsigned __int8 *v100; // [esp+28h] [ebp-38h]
  int v101; // [esp+2Ch] [ebp-34h]
  const char *v102; // [esp+30h] [ebp-30h]
  unsigned int v103; // [esp+34h] [ebp-2Ch] BYREF
  unsigned __int8 *v104; // [esp+38h] [ebp-28h]
  unsigned __int8 *v105; // [esp+3Ch] [ebp-24h] BYREF
  unsigned __int8 *i; // [esp+40h] [ebp-20h] BYREF
  _DWORD *v107; // [esp+44h] [ebp-1Ch]
  unsigned __int8 *v108; // [esp+48h] [ebp-18h] BYREF
  __m128i *v109; // [esp+4Ch] [ebp-14h] BYREF
  char v110; // [esp+53h] [ebp-Dh]
  int v111; // [esp+5Ch] [ebp-4h]
  int v112; // [esp+6Ch] [ebp+Ch]
  int v113; // [esp+6Ch] [ebp+Ch]

  v4 = a1;
  v107 = a1;
  result = *(unsigned __int8 **)a4;
  v6 = *(_DWORD *)a4 + *(_DWORD *)(a4 + 4);
  v100 = result;
  v109 = (__m128i *)result;
  v101 = v6;
  if ( !result )
    return result;
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a3 + 16))(a3, 0);
  v7 = (unsigned __int8 *)v109;
  v4[22] = v109;
  v4[23] = v7;
  v8 = (*(int (__stdcall **)(int))(*(_DWORD *)a3 + 8))(a3);
  v103 = v8;
  if ( v8 <= 0 )
  {
    v4[24] = 0;
  }
  else
  {
    v9 = v8 & 0xF;
    if ( v9 )
      sub_438EE0(v4, a2, a3, v9 - 1, (const __m128i **)&v109);
    if ( (v103 & 0x10) != 0 )
      sub_438F90((int)v4, a3, (char **)&v109);
  }
LABEL_8:
  v103 = (unsigned int)v109;
  v10 = sub_45A040((int *)&v103);
  v103 = v10;
  if ( v10 < 0x80 )
  {
    if ( sub_46B7F0((int)v4, (unsigned __int8)v10) )
      goto LABEL_10;
    v10 = v103;
  }
  if ( v10 )
  {
    v11 = v107;
    v12 = 0;
    v13 = (unsigned __int8 *)v109;
    v97 = (unsigned __int8 *)v109;
    if ( !v107[12] )
    {
LABEL_20:
      v4 = v11;
      goto LABEL_21;
    }
    v14 = nullptr;
    v104 = nullptr;
    while ( 1 )
    {
      v15 = &v14[v11[11]];
      v16 = *((_DWORD *)v15 + 1);
      if ( v16 > 1 )
      {
        if ( !sub_467F80((int)v13, *(_DWORD **)v15, v16 - 1) )
        {
          v21 = (unsigned __int8 *)v109;
          v103 = v11[24];
          v22 = v11[23];
          v104 = (unsigned __int8 *)v109;
          if ( v22 < (unsigned int)v109 )
          {
            v23 = sub_4399B0(v11[22], v22);
            v24 = sub_4399B0(v107[23], (unsigned int)v104);
            (*(void (__stdcall **)(int, int, int, unsigned int))(*(_DWORD *)a3 + 4))(a3, v23, v24, v103);
            v21 = (unsigned __int8 *)v109;
            v107[23] = v104;
          }
          v93 = v12;
          v4 = v107;
          v109 = (__m128i *)&v21[*((_DWORD *)v15 + 1) != 0 ? *((_DWORD *)v15 + 1) - 1 : 0];
          sub_438EE0(v107, a2, a3, v93, (const __m128i **)&v109);
          v13 = (unsigned __int8 *)v109;
LABEL_21:
          v103 = (unsigned int)v13;
          if ( sub_45A040((int *)&v103) == *((char *)v4 + 105) )
          {
            v17 = (unsigned __int8 *)v4[23];
            if ( v17 == *(unsigned __int8 **)a4 )
            {
LABEL_27:
              v18 = (unsigned __int8 *)v109;
            }
            else
            {
              v18 = (unsigned __int8 *)v109;
              if ( v17 != (unsigned __int8 *)v109 )
              {
                while ( (*v17 & 0x80u) == 0 && sub_46B7F0((int)v4, *v17) )
                {
                  if ( ++v17 == v18 )
                    goto LABEL_27;
                }
                goto LABEL_35;
              }
            }
            v103 = v4[24];
            if ( v4[23] < (unsigned int)v18 )
            {
              v19 = sub_4399B0(v4[22], v4[23]);
              v20 = sub_4399B0(v4[23], (unsigned int)v18);
              (*(void (__stdcall **)(int, int, int, unsigned int))(*(_DWORD *)a3 + 4))(a3, v19, v20, v103);
              v4[23] = v18;
            }
            sub_438F90((int)v4, a3, (char **)&v109);
          }
          else
          {
LABEL_35:
            v103 = (unsigned int)v109;
            v25 = sub_45A040((int *)&v103);
            if ( v25 == *((char *)v4 + 102) || v25 == *((char *)v4 + 100) )
            {
              v75 = (unsigned __int8 *)v109;
              *((_BYTE *)v4 + 56) = v25;
              v97 = (unsigned __int8 *)v4[24];
              if ( v4[23] < (unsigned int)v75 )
              {
                v76 = sub_4399B0(v4[22], v4[23]);
                v77 = sub_4399B0(v4[23], (unsigned int)v75);
                (*(void (__stdcall **)(int, int, int, unsigned __int8 *))(*(_DWORD *)a3 + 4))(a3, v76, v77, v97);
                v4[23] = v75;
              }
              v78 = sub_45A040((int *)&v109);
              v79 = (unsigned __int8 *)v109;
              if ( v78 == -1 )
              {
                v79 = &v109->m128i_u8[1];
                v109 = (__m128i *)((char *)v109 + 1);
              }
              v110 = *((_BYTE *)v4 + 56);
              v108 = v79;
              do
              {
                while ( 1 )
                {
                  v80 = v79;
                  v103 = (unsigned int)v79;
                  v81 = sub_45A040((int *)&v108);
                  v79 = v108;
                  v82 = v81;
                  if ( v81 == -1 )
                  {
                    v82 = (char)*v108;
                    v79 = ++v108;
                  }
                  if ( !v82 )
                  {
LABEL_124:
                    v112 = v4[24];
                    result = (unsigned __int8 *)v4[23];
                    if ( result < v80 )
                    {
                      v84 = sub_4399B0(v4[22], v4[23]);
                      v85 = v103;
                      v86 = v84;
                      v87 = sub_4399B0(v4[23], v103);
                      result = (unsigned __int8 *)(*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)a3 + 4))(
                                                    a3,
                                                    v86,
                                                    v87,
                                                    v112);
                      v4[23] = v85;
                    }
                    v109 = nullptr;
                    return result;
                  }
                  if ( v82 != *((char *)v4 + 104) )
                    break;
                  v103 = (unsigned int)v79;
                  v80 = v79;
                  v83 = sub_45A040((int *)&v108);
                  v79 = v108;
                  if ( v83 == -1 )
                  {
                    v83 = (char)*v108;
                    v79 = ++v108;
                  }
                  if ( !v83 )
                    goto LABEL_124;
                }
              }
              while ( v82 != v110 );
              v97 = (unsigned __int8 *)v4[17];
              result = (unsigned __int8 *)v4[23];
              if ( result < v79 )
              {
                v88 = sub_4399B0(v4[22], v4[23]);
                v89 = sub_4399B0(v4[23], (unsigned int)v79);
                result = (unsigned __int8 *)(*(int (__stdcall **)(int, int, int, unsigned __int8 *))(*(_DWORD *)a3 + 4))(
                                              a3,
                                              v88,
                                              v89,
                                              v97);
                v4[23] = v79;
                v79 = v108;
              }
              v109 = (__m128i *)v79;
              if ( !v79 )
                return result;
            }
            else
            {
              v26 = v4[9];
              if ( v26 > 1 && !sub_467F80((int)v109, (_DWORD *)v4[8], v26 - 1) )
              {
                v27 = (char *)v109;
                v103 = v4[24];
                if ( v4[23] < (unsigned int)v109 )
                {
                  v28 = sub_4399B0(v4[22], v4[23]);
                  v29 = sub_4399B0(v4[23], (unsigned int)v27);
                  (*(void (__stdcall **)(int, int, int, unsigned int))(*(_DWORD *)a3 + 4))(a3, v28, v29, v103);
                  v4[23] = v27;
                  v27 = (char *)v109;
                }
                v30 = sub_464F10(v27, 0);
                v103 = v4[16];
                v31 = v4[23];
                v109 = (__m128i *)v30;
                if ( v31 < (unsigned int)v30 )
                {
                  v32 = sub_4399B0(v4[22], v31);
                  v33 = sub_4399B0(v4[23], (unsigned int)v30);
                  (*(void (__stdcall **)(int, int, int, unsigned int))(*(_DWORD *)a3 + 4))(a3, v32, v33, v103);
                  v4[23] = v30;
                }
                v4[24] = v4[15];
                goto LABEL_8;
              }
              v34 = (unsigned __int8 *)v109;
              i = (unsigned __int8 *)v109;
              v35 = sub_45A040((int *)&i);
              if ( v35 >= 0x61 && v35 <= 0x7A || v35 >= 0x41 && v35 <= 0x5A || v35 == 95 )
              {
                do
                {
                  do
                  {
                    v36 = i;
                    v37 = sub_45A040((int *)&i);
                  }
                  while ( v37 >= 0x61 && v37 <= 0x7A );
                }
                while ( v37 >= 0x41 && v37 <= 0x5A || v37 == 95 || v37 - 48 <= 9 );
                v38 = v36 - v34;
                v108 = (unsigned __int8 *)v38;
                if ( v38 )
                {
                  v39 = nullptr;
                  v94 = nullptr;
                  v95 = 0;
                  v96 = 0;
                  v111 = 0;
                  if ( v38 != -1 )
                  {
                    v94 = (char *)sub_453B00((int)&v94, nullptr, v38 + 1, 1u);
                    sub_464890((__m128i *)&v94[v95], 0, v38 + 1 - v95);
                    v39 = v94;
                    v95 = v38 + 1;
                  }
                  v39[v38] = 0;
                  sub_45ACB0((unsigned int)v94, v109->m128i_i8, v38 + 1);
                  v40 = (_DWORD *)v4[19];
                  v41 = v4[20];
                  v42 = (unsigned __int8 *)v4[24];
                  i = v42;
                  v105 = v42;
                  v43 = (unsigned int)&v40[v41];
                  v108 = (unsigned __int8 *)v38;
                  v103 = v43;
                  if ( v40 != (_DWORD *)v43 )
                  {
                    v108 = (unsigned __int8 *)v38;
                    v44 = (_DWORD *)v43;
                    do
                    {
                      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned __int8 **, char **))(*(_DWORD *)*v40 + 8))(
                             *v40,
                             &v105,
                             &v94) )
                      {
                        break;
                      }
                      ++v40;
                    }
                    while ( v40 != v44 );
                    v42 = v105;
                    i = v105;
                  }
                  if ( (unsigned __int8 *)v4[24] == v42 )
                  {
                    v45 = 0;
                    v103 = 0;
                    if ( v4[6] )
                    {
                      v46 = (unsigned __int8 *)v4[5];
                      v104 = v46;
                      while ( 1 )
                      {
                        v47 = *(const char ***)v46;
                        v48 = MultiByteStr;
                        v49 = *((_DWORD *)v46 + 1);
                        if ( v95 )
                          v48 = v94;
                        v50 = &v47[v49];
                        v102 = v48;
                        if ( v47 != v50 )
                          break;
LABEL_74:
                        ++v45;
                        v46 = v104 + 16;
                        v103 = v45;
                        v104 += 16;
                        if ( v45 >= v4[6] )
                        {
                          v42 = i;
                          goto LABEL_76;
                        }
                      }
                      while ( 1 )
                      {
                        v51 = strcmp(v48, *v47);
                        if ( v51 )
                          v51 = v51 < 0 ? -1 : 1;
                        if ( !v51 )
                          break;
                        v48 = v102;
                        if ( ++v47 == v50 )
                        {
                          v45 = v103;
                          goto LABEL_74;
                        }
                      }
                      v42 = *((unsigned __int8 **)v104 + 3);
                      i = v42;
                      v105 = v42;
                    }
                  }
LABEL_76:
                  v102 = (const char *)v4[24];
                  if ( v102 != (const char *)v42 )
                  {
                    v52 = (unsigned __int8 *)v109;
                    v53 = v4[23];
                    if ( v53 < (unsigned int)v109 )
                    {
                      v54 = sub_4399B0(v4[22], v4[23]);
                      v55 = sub_4399B0(v4[23], (unsigned int)v52);
                      (*(void (__stdcall **)(int, int, int, const char *))(*(_DWORD *)a3 + 4))(a3, v54, v55, v102);
                      v56 = v105;
                      v53 = (unsigned int)v52;
                      v4[23] = v52;
                      v52 = (unsigned __int8 *)v109;
                      i = v56;
                    }
                    v57 = &v52[(_DWORD)v108];
                    v109 = (__m128i *)v57;
                    if ( v53 < (unsigned int)v57 )
                    {
                      v58 = sub_4399B0(v4[22], v53);
                      v59 = sub_4399B0(v4[23], (unsigned int)v57);
                      (*(void (__stdcall **)(int, int, int, unsigned __int8 *))(*(_DWORD *)a3 + 4))(a3, v58, v59, i);
                      v4[23] = v57;
                    }
                    v111 = 1;
                    if ( v94 )
                    {
                      v95 = 0;
                      sub_453A20(v94);
                      v94 = nullptr;
                      v96 = 0;
                    }
                    v111 = -1;
                    goto LABEL_8;
                  }
                  v111 = 2;
                  if ( v94 )
                  {
                    v95 = 0;
                    sub_453A20(v94);
                    v94 = nullptr;
                    v96 = 0;
                  }
                  v111 = -1;
                }
              }
              else
              {
                v108 = nullptr;
              }
              v60 = sub_438C30((unsigned int)v100, v101, (unsigned __int8 *)v109);
              v103 = v60;
              if ( v60 )
              {
                v61 = (unsigned __int8 *)v109;
                v102 = (const char *)v4[24];
                if ( v4[23] < (unsigned int)v109 )
                {
                  v62 = sub_4399B0(v4[22], v4[23]);
                  v63 = sub_4399B0(v4[23], (unsigned int)v61);
                  (*(void (__stdcall **)(int, int, int, const char *))(*(_DWORD *)a3 + 4))(a3, v62, v63, v102);
                  v60 = v103;
                  v4[23] = v61;
                }
                sub_45A590((unsigned __int8 **)&v109, v60);
                v64 = (unsigned __int8 *)v109;
                if ( v4[23] < (unsigned int)v109 )
                {
                  v65 = sub_4399B0(v4[22], v4[23]);
                  v66 = sub_4399B0(v4[23], (unsigned int)v64);
                  (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)a3 + 4))(a3, v65, v66, 7);
                  v4[23] = v64;
                }
                goto LABEL_8;
              }
              v67 = (unsigned __int8 *)v4[19];
              for ( i = &v67[4 * v4[20]]; v67 != i; v67 += 4 )
              {
                v104 = (unsigned __int8 *)(*(int (__thiscall **)(_DWORD, const char **, __m128i *))(**(_DWORD **)v67 + 4))(
                                            *(_DWORD *)v67,
                                            &v99,
                                            v109);
                if ( (int)v104 > 0 )
                {
                  v68 = v4[23];
                  v102 = (const char *)v4[24];
                  v103 = (unsigned int)v109;
                  if ( v68 < (unsigned int)v109 )
                  {
                    v69 = sub_4399B0(v4[22], v68);
                    v70 = sub_4399B0(v4[23], v103);
                    (*(void (__stdcall **)(int, int, int, const char *))(*(_DWORD *)a3 + 4))(a3, v69, v70, v102);
                    v4[23] = v103;
                  }
                  sub_45A590((unsigned __int8 **)&v109, (int)v104);
                  v71 = v4[23];
                  v102 = v99;
                  v103 = (unsigned int)v109;
                  if ( v71 < (unsigned int)v109 )
                  {
                    v72 = sub_4399B0(v4[22], v71);
                    v73 = sub_4399B0(v4[23], v103);
                    (*(void (__stdcall **)(int, int, int, const char *))(*(_DWORD *)a3 + 4))(a3, v72, v73, v102);
                    v4[23] = v103;
                  }
                  v4[24] = v4[15];
                }
              }
              if ( v108 )
              {
                v109 = (__m128i *)((char *)v109 + (_DWORD)v108);
              }
              else
              {
                while ( 1 )
                {
                  v98 = (unsigned __int8 *)v109;
                  v74 = sub_45A040((int *)&v98);
                  if ( (unsigned int)(v74 - 97) > 0x19
                    && (unsigned int)(v74 - 65) > 0x19
                    && (unsigned int)(v74 - 48) > 9
                    && v74 != 46 )
                  {
                    break;
                  }
                  if ( sub_45A040((int *)&v109) == -1 )
                    v109 = (__m128i *)((char *)v109 + 1);
                }
              }
              if ( v97 == (unsigned __int8 *)v109 )
              {
LABEL_10:
                if ( sub_45A040((int *)&v109) == -1 )
                  v109 = (__m128i *)((char *)v109 + 1);
                goto LABEL_8;
              }
            }
          }
          goto LABEL_8;
        }
        v13 = (unsigned __int8 *)v109;
        v14 = v104;
      }
      ++v12;
      v14 += 24;
      v104 = v14;
      if ( v12 >= v11[12] )
        goto LABEL_20;
    }
  }
  result = (unsigned __int8 *)v4[23];
  v90 = (unsigned __int8 *)v109;
  if ( v109 != (__m128i *)result )
  {
    v113 = v4[24];
    if ( v109 > (__m128i *)result )
    {
      v91 = sub_4399B0(v4[22], (unsigned int)result);
      v92 = sub_4399B0(v4[23], (unsigned int)v90);
      result = (unsigned __int8 *)(*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)a3 + 4))(a3, v91, v92, v113);
      v4[23] = v90;
    }
  }
  return result;
}
// 4390E2: conditional instruction was optimized away because al.1>=0
