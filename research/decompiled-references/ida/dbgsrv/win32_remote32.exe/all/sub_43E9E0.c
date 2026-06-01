/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E9E0
// Address: 0x0043E9E0

//----- (0043E9E0) --------------------------------------------------------
int __thiscall sub_43E9E0(_DWORD *this, int a2, unsigned int a3)
{
  _DWORD *v3; // ebx
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  int v11; // edx
  int v12; // ebx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  _DWORD *v15; // ebx
  int *v16; // esi
  int v17; // eax
  unsigned int v18; // eax
  unsigned __int8 *v19; // edx
  unsigned int v20; // ebx
  int v21; // eax
  unsigned __int8 *v22; // esi
  int v23; // ecx
  unsigned __int8 *v24; // eax
  unsigned __int8 v25; // al
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned __int8 *v28; // ebx
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // esi
  bool v32; // cf
  int v33; // ecx
  int v34; // esi
  _DWORD *v35; // edx
  _BYTE *v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // edx
  char *v39; // ecx
  unsigned int v40; // eax
  int *v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  unsigned __int8 *v45; // ebx
  unsigned __int8 *v46; // esi
  _BYTE *v47; // edx
  int *v48; // ebx
  int *v49; // esi
  unsigned __int8 v50; // bh
  int v51; // eax
  unsigned __int8 v52; // bl
  unsigned __int8 *v53; // ecx
  bool v54; // zf
  int v55; // ebx
  int v56; // esi
  _DWORD *v57; // edx
  unsigned __int8 *v58; // eax
  int v59; // edi
  int v60; // edx
  int v61; // esi
  _DWORD *v63; // [esp-Ch] [ebp-64h]
  int v64; // [esp+0h] [ebp-58h]
  int v65; // [esp+4h] [ebp-54h]
  void (__noreturn **v66)(); // [esp+10h] [ebp-48h] BYREF
  int v67; // [esp+14h] [ebp-44h]
  HANDLE hObject; // [esp+18h] [ebp-40h]
  unsigned int v69; // [esp+1Ch] [ebp-3Ch]
  int v70; // [esp+20h] [ebp-38h]
  unsigned int v71; // [esp+24h] [ebp-34h]
  unsigned __int8 *v72; // [esp+28h] [ebp-30h]
  unsigned int v73; // [esp+2Ch] [ebp-2Ch]
  _BYTE *v74; // [esp+30h] [ebp-28h]
  int v75; // [esp+34h] [ebp-24h]
  unsigned int v76; // [esp+38h] [ebp-20h]
  int *v77; // [esp+3Ch] [ebp-1Ch]
  unsigned __int8 *v78; // [esp+40h] [ebp-18h]
  int *v79; // [esp+44h] [ebp-14h]
  _DWORD *v80; // [esp+48h] [ebp-10h]
  int v81; // [esp+54h] [ebp-4h]
  unsigned int v82; // [esp+60h] [ebp+8h]

  v3 = this;
  v80 = this;
  v4 = a3;
  v5 = a2 & 0xFFFFF000;
  *(this + 1030) = a2 & 0xFFFFF000;
  v82 = a2 - (a2 & 0xFFFFF000);
  v75 = 0;
  if ( v5 >= a3 )
    return -1;
  while ( 1 )
  {
    if ( (v3[4] & 2) == 0 )
    {
      v67 = 0;
      hObject = nullptr;
      v66 = (void (__noreturn **)())&off_48DA78;
      v81 = 0;
      v6 = off_4B46B0(86, &v66, 0, v64, v65);
      v81 = 1;
      v66 = &off_48DA64;
      sub_456330(hObject);
      hObject = nullptr;
      v67 = 0;
      v81 = -1;
      if ( v6 )
        return -7;
      v4 = a3;
    }
    v7 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v3[2] + 140))(
           v3[2],
           v3[1030],
           v3 + 6,
           4096,
           v3[5]);
    v8 = v3[1030];
    if ( v7 != 4096 )
      break;
    v3[1042] = v4 - v8;
    if ( v4 - v8 > 0x1000 )
      v3[1042] = 4096;
    v9 = (_DWORD *)v3[1031];
    v10 = v3 + 1031;
    if ( v9 != v3 + 1031 )
    {
      do
      {
        v11 = v9[4];
        v12 = *(_DWORD *)v3[3] + 40 * v9[3];
        v13 = *(_DWORD *)(v12 + 4) - v11;
        v76 = v13;
        if ( v13 >= v80[1042] )
          v13 = v80[1042];
        v63 = (_DWORD *)v12;
        v3 = v80;
        if ( !sub_43EF80(v80, (int)(v80 + 6), v63, v11, v13) )
          goto LABEL_15;
        v14 = v3[1042];
        if ( v76 <= v14 )
        {
          *(_DWORD *)v3[1] = v9[2];
          return 1;
        }
        if ( v14 == 4096 )
        {
          v9[4] += 4096;
          v9 = (_DWORD *)*v9;
        }
        else
        {
LABEL_15:
          v15 = (_DWORD *)*v9;
          *(_DWORD *)v9[1] = *v9;
          *(_DWORD *)(*v9 + 4) = v9[1];
          sub_453A20(v9);
          v9 = v15;
          v3 = v80;
          --v80[1033];
        }
      }
      while ( v9 != v10 );
      v10 = v3 + 1031;
    }
    v16 = (int *)v3[1035];
    v17 = v3[1036];
    v79 = v16;
    if ( v16 != &v16[v17] )
    {
      v18 = v82;
      v19 = (unsigned __int8 *)v3 + v82 + 24;
      v78 = v19;
      while ( 1 )
      {
        v20 = v3[1042] - v18;
        v21 = *v16;
        v22 = v19;
        v23 = *(_DWORD *)v80[3] + 40 * v21;
        v76 = *(_DWORD *)(v23 + 4);
        v24 = *(unsigned __int8 **)v23;
        v72 = (unsigned __int8 *)v23;
        v25 = *v24;
        if ( !v20 )
          goto LABEL_40;
        v71 = v25;
        do
        {
          v26 = sub_4665F0(v22, v25, v20);
          v77 = (int *)v26;
          if ( !v26 )
            break;
          v27 = v76;
          v28 = &v22[v20 - v26];
          v29 = v26;
          if ( (unsigned int)v28 < v76 )
            v27 = (unsigned int)v28;
          v74 = (_BYTE *)v27;
          v30 = *(_DWORD *)v72;
          v31 = v27 - 4;
          if ( v27 >= 4 )
          {
            while ( *(_DWORD *)v29 == *(_DWORD *)v30 )
            {
              v29 += 4;
              v30 += 4;
              v32 = v31 < 4;
              v31 -= 4;
              if ( v32 )
                goto LABEL_28;
            }
LABEL_29:
            if ( *(_BYTE *)v29 != *(_BYTE *)v30
              || v31 != -3
              && (*(_BYTE *)(v29 + 1) != *(_BYTE *)(v30 + 1)
               || v31 != -2
               && (*(_BYTE *)(v29 + 2) != *(_BYTE *)(v30 + 2) || v31 != -1 && *(_BYTE *)(v29 + 3) != *(_BYTE *)(v30 + 3))) )
            {
              goto LABEL_38;
            }
            goto LABEL_36;
          }
LABEL_28:
          if ( v31 != -4 )
            goto LABEL_29;
LABEL_36:
          v33 = (int)v77 + v80[1030] - (_DWORD)v80 - 24;
          v73 = v33;
          if ( v76 <= (unsigned int)v28 )
          {
            *(_DWORD *)v80[1] = v33;
            return 1;
          }
          v34 = *v79;
          v35 = sub_4539E0(20);
          v35[2] = v73;
          v36 = v74;
          v35[3] = v34;
          v35[4] = v36;
          *v35 = v10;
          v35[1] = v10[1];
          *(_DWORD *)v10[1] = v35;
          v10[1] = v35;
          ++v10[2];
LABEL_38:
          v25 = v71;
          v22 = (unsigned __int8 *)v77 + 1;
          v20 = (unsigned int)(v28 - 1);
        }
        while ( v20 );
        v19 = v78;
LABEL_40:
        v3 = v80;
        v16 = v79 + 1;
        v79 = v16;
        v18 = v82;
        if ( v16 == (int *)(v80[1035] + 4 * v80[1036]) )
        {
          v10 = v80 + 1031;
          break;
        }
      }
    }
    if ( !v3[1039] )
      goto LABEL_70;
    v37 = v3[1042];
    v38 = v82;
    if ( v82 >= v37 )
      goto LABEL_70;
    v39 = (char *)v3 + v82 + 24;
    v76 = (unsigned int)v39;
    do
    {
      v40 = v37 - v38;
      v41 = (int *)v3[1038];
      v73 = v40;
      v42 = v3[1039];
      v77 = v41;
      if ( v41 == &v41[v42] )
        goto LABEL_69;
      do
      {
        v43 = 5 * *v41;
        v44 = *(_DWORD *)v3[3];
        v45 = *(unsigned __int8 **)(v44 + 40 * *v41 + 4);
        v46 = v45;
        v47 = *(_BYTE **)(v44 + 40 * *v41);
        if ( v73 < (unsigned int)v45 )
          v46 = (unsigned __int8 *)v73;
        v54 = *(_DWORD *)(v44 + 8 * v43 + 16) == 0;
        v69 = (unsigned int)v45;
        v72 = v46;
        v74 = v47;
        if ( v54 )
          v48 = nullptr;
        else
          v48 = *(int **)(v44 + 8 * v43 + 12);
        v79 = v48;
        v78 = nullptr;
        if ( v46 )
        {
          v49 = v48;
          v71 = v76 - (_DWORD)v48;
          while ( 1 )
          {
            v50 = *v47;
            v51 = v80[4];
            v52 = *((_BYTE *)v49 + v71);
            v53 = v78;
            v70 = v51;
            if ( (v51 & 1) == 0 )
            {
              v52 = sub_4692E4(v52);
              LOBYTE(v51) = sub_4692E4(v50);
              v53 = v78;
              v50 = v51;
              LOBYTE(v51) = v70;
              v47 = v74;
            }
            if ( !v79 )
              break;
            if ( (v51 & 0x20) != 0 )
            {
              v54 = ((unsigned __int8)(v50 ^ v52) & *(_BYTE *)v49) == 0;
              goto LABEL_63;
            }
            if ( v79 == (int *)255 )
            {
              if ( v50 != 0xFF )
                break;
            }
            else if ( *(_BYTE *)v49 )
            {
              break;
            }
LABEL_64:
            ++v47;
            v49 = (int *)((char *)v49 + 1);
            v78 = v53 + 1;
            v74 = v47;
            if ( v53 + 1 >= v72 )
              goto LABEL_65;
          }
          v54 = v52 == v50;
LABEL_63:
          if ( !v54 )
            goto LABEL_67;
          goto LABEL_64;
        }
LABEL_65:
        v55 = v80[1030];
        if ( v69 <= v73 )
        {
          *(_DWORD *)v80[1] = v55 + v82;
          return 1;
        }
        v56 = *v77;
        v57 = sub_4539E0(20);
        v58 = v72;
        v57[2] = v55 + v82;
        v57[3] = v56;
        v57[4] = v58;
        *v57 = v10;
        v57[1] = v10[1];
        *(_DWORD *)v10[1] = v57;
        v10[1] = v57;
        ++v10[2];
LABEL_67:
        v3 = v80;
        v41 = v77 + 1;
        v77 = v41;
      }
      while ( v41 != (int *)(v80[1038] + 4 * v80[1039]) );
      v39 = (char *)v76;
LABEL_69:
      ++v39;
      v37 = v3[1042];
      v38 = v82 + 1;
      v82 = v38;
      v76 = (unsigned int)v39;
    }
    while ( v38 < v37 );
LABEL_70:
    v59 = v75;
    v3[1030] += 4096;
    v82 = 0;
    v75 = v59 + 1;
    if ( (unsigned int)(v59 + 1) >= 0x3E8 )
    {
      v75 = 0;
      sub_453720();
      v61 = v60;
      if ( (unsigned int)(v60 - v3[1041]) >= 5 )
      {
        sub_4104E0(v3[2], (int)pNodeName);
        v3[1041] = v61;
      }
    }
    v4 = a3;
    if ( v3[1030] >= a3 )
      return -1;
  }
  v3[1034] = v8;
  return -7;
}
// 43EA68: variable 'v64' is possibly undefined
// 43EA68: variable 'v65' is possibly undefined
// 43EEA6: variable 'v60' is possibly undefined
// 48DA64: using guessed type void (__noreturn *off_48DA64)();
// 48DA78: using guessed type _UNKNOWN *off_48DA78;
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
