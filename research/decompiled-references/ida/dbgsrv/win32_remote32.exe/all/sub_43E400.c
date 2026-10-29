/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E400
// Address: 0x0043E400

//----- (0043E400) --------------------------------------------------------
int __thiscall sub_43E400(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // ebx
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // esi
  int v7; // eax
  unsigned int v8; // edx
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ebx
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // esi
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // ebx
  int v24; // eax
  char v25; // cl
  _BYTE *v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // ecx
  int v29; // esi
  int v30; // edx
  unsigned int v31; // ebx
  bool v32; // cf
  int v33; // ebx
  int v34; // esi
  _DWORD *v35; // edx
  _BYTE *v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  _DWORD *v39; // edx
  unsigned int v40; // ecx
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned int v43; // esi
  int *v44; // edx
  char *v45; // edx
  int v46; // eax
  char *v47; // ebx
  int v48; // ecx
  _BYTE *v49; // esi
  unsigned __int8 v50; // bh
  int v51; // eax
  unsigned __int8 v52; // bl
  _DWORD *v53; // edx
  bool v54; // zf
  bool v55; // zf
  int v56; // ebx
  int v57; // esi
  _DWORD *v58; // ecx
  unsigned int v59; // eax
  int v60; // edi
  int v61; // edx
  int v62; // esi
  int v64; // [esp+0h] [ebp-58h]
  int v65; // [esp+4h] [ebp-54h]
  void (__noreturn **v66)(); // [esp+10h] [ebp-48h] BYREF
  int v67; // [esp+14h] [ebp-44h]
  HANDLE hObject; // [esp+18h] [ebp-40h]
  int v69; // [esp+1Ch] [ebp-3Ch]
  int v70; // [esp+20h] [ebp-38h]
  int *v71; // [esp+24h] [ebp-34h]
  unsigned int v72; // [esp+28h] [ebp-30h]
  _BYTE *v73; // [esp+2Ch] [ebp-2Ch]
  _BYTE *v74; // [esp+30h] [ebp-28h]
  int v75; // [esp+34h] [ebp-24h]
  _DWORD *v76; // [esp+38h] [ebp-20h]
  unsigned int v77; // [esp+3Ch] [ebp-1Ch]
  _DWORD *v78; // [esp+40h] [ebp-18h]
  _DWORD *v79; // [esp+44h] [ebp-14h]
  char v80; // [esp+4Bh] [ebp-Dh]
  int v81; // [esp+54h] [ebp-4h]
  unsigned int v82; // [esp+64h] [ebp+Ch]

  v3 = this;
  v79 = this;
  v4 = a2;
  v5 = (a3 - 1) & 0xFFFFF000;
  *(this + 1030) = v5;
  v82 = a3 - v5;
  v75 = 0;
  if ( a2 >= v5 + 4096 )
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
      v4 = a2;
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
    v9 = v3 + 1031;
    v3[1042] = v8 < v4 ? v4 - v8 : 0;
    v10 = (_DWORD *)v3[1031];
    if ( v10 != v3 + 1031 )
    {
      do
      {
        v11 = *(_DWORD *)v3[3];
        v12 = *(_DWORD *)(v11 + 40 * v10[3] + 4) - v10[4];
        v13 = v12;
        if ( v12 >= 4096 - v79[1042] )
          v13 = 4096 - v79[1042];
        if ( !sub_43EF80(v79, (int)v79 - v13 + 4120, (_DWORD *)(v11 + 40 * v10[3]), v12 - v13, v13) )
          goto LABEL_13;
        v14 = v79[1042];
        if ( v12 <= 4096 - v14 )
        {
          *(_DWORD *)v79[1] = v10[2];
          return 1;
        }
        if ( v14 )
        {
LABEL_13:
          v15 = (_DWORD *)*v10;
          *(_DWORD *)v10[1] = *v10;
          *(_DWORD *)(*v10 + 4) = v10[1];
          sub_453A20(v10);
          v10 = v15;
          --v79[1033];
        }
        else
        {
          v10[4] += 4096;
          v10 = (_DWORD *)*v10;
        }
        v3 = v79;
      }
      while ( v10 != v9 );
      v9 = v79 + 1031;
    }
    v16 = (_DWORD *)v3[1035];
    v17 = v3[1036];
    v18 = v3[1042] + 24;
    v78 = v16;
    v19 = (unsigned int)v3 + v18;
    v77 = v19;
    if ( v16 != &v16[v17] )
    {
      do
      {
        v20 = v82 - v3[1042];
        v54 = v82 == v3[1042];
        v21 = 5 * *v16;
        v22 = *(_DWORD *)v3[3];
        v23 = *(_DWORD **)(v22 + 8 * v21 + 4);
        v71 = (int *)(v22 + 8 * v21);
        v24 = *v71;
        v76 = v23;
        v25 = *((_BYTE *)v23 + v24 - 1);
        v80 = v25;
        if ( !v54 )
        {
          do
          {
            v26 = (_BYTE *)(v20 + v19 - 1);
            if ( (unsigned int)v26 < v19 )
              break;
            while ( *v26 != v25 )
            {
              if ( (unsigned int)--v26 < v19 )
                goto LABEL_39;
            }
            if ( !v26 )
              break;
            v74 = &v26[-v19];
            v27 = (unsigned int)&v26[-v19 + 1];
            v28 = (unsigned int)v23;
            v72 = v27;
            if ( v27 < (unsigned int)v23 )
              v28 = v27;
            v73 = (_BYTE *)v28;
            v29 = (int)v23 + *v71 - v28;
            v30 = (int)&v26[-v28 + 1];
            v31 = v28 - 4;
            if ( v28 < 4 )
            {
LABEL_28:
              if ( v31 == -4 )
                goto LABEL_36;
            }
            else
            {
              while ( *(_DWORD *)v30 == *(_DWORD *)v29 )
              {
                v30 += 4;
                v29 += 4;
                v32 = v31 < 4;
                v31 -= 4;
                if ( v32 )
                  goto LABEL_28;
              }
            }
            if ( *(_BYTE *)v30 == *(_BYTE *)v29
              && (v31 == -3
               || *(_BYTE *)(v30 + 1) == *(_BYTE *)(v29 + 1)
               && (v31 == -2
                || *(_BYTE *)(v30 + 2) == *(_BYTE *)(v29 + 2)
                && (v31 == -1 || *(_BYTE *)(v30 + 3) == *(_BYTE *)(v29 + 3)))) )
            {
LABEL_36:
              v33 = v26 - (_BYTE *)v76 - (_DWORD)v79 + v79[1030] - 23;
              if ( (unsigned int)v76 <= v72 )
              {
                *(_DWORD *)v79[1] = v33;
                return 1;
              }
              v34 = *v78;
              v35 = sub_4539E0(20);
              v36 = v73;
              v35[2] = v33;
              v35[3] = v34;
              v35[4] = v36;
              *v35 = v9;
              v35[1] = v9[1];
              *(_DWORD *)v9[1] = v35;
              v9[1] = v35;
              ++v9[2];
            }
            v20 = (unsigned int)v74;
            v19 = v77;
            v25 = v80;
            v23 = v76;
          }
          while ( v74 );
        }
LABEL_39:
        v3 = v79;
        v16 = ++v78;
      }
      while ( v78 != (_DWORD *)(v79[1035] + 4 * v79[1036]) );
      v9 = v79 + 1031;
    }
    if ( v3[1039] )
    {
      v37 = v3[1042];
      v38 = v82;
      if ( v37 < v82 )
      {
        while ( 1 )
        {
          v39 = (_DWORD *)v3[1038];
          v40 = v38 - v37;
          v41 = v3[1039];
          v72 = v40;
          v76 = v39;
          if ( v39 != &v39[v41] )
            break;
LABEL_67:
          v37 = v3[1042];
          v38 = v82 - 1;
          v82 = v38;
          if ( v37 >= v38 )
            goto LABEL_68;
        }
        while ( 1 )
        {
          v42 = (_DWORD *)(*(_DWORD *)v3[3] + 40 * *v39);
          v44 = (int *)v42[1];
          v71 = v44;
          v43 = (unsigned int)v44;
          if ( v72 < (unsigned int)v44 )
            v43 = v72;
          v45 = (char *)v44 - v43;
          v77 = v43;
          v46 = (int)v3 + v82 - v43 + 24;
          v47 = &v45[*v42];
          v54 = v42[4] == 0;
          v73 = v47;
          v48 = v54 ? 0 : (int)&v45[v42[3]];
          v74 = (_BYTE *)v48;
          v78 = nullptr;
          if ( v43 )
            break;
LABEL_64:
          v56 = v79[1030];
          if ( (unsigned int)v71 <= v72 )
          {
            *(_DWORD *)v79[1] = v82 + v56 - v43;
            return 1;
          }
          v57 = *v76;
          v58 = sub_4539E0(20);
          v59 = v77;
          v58[2] = v82 + v56 - (_DWORD)v71;
          v58[3] = v57;
          v58[4] = v59;
          *v58 = v9;
          v58[1] = v9[1];
          *(_DWORD *)v9[1] = v58;
          v9[1] = v58;
          ++v9[2];
LABEL_66:
          v3 = v79;
          v39 = v76 + 1;
          v76 = v39;
          if ( v39 == (_DWORD *)(v79[1038] + 4 * v79[1039]) )
            goto LABEL_67;
        }
        v49 = (_BYTE *)v48;
        v70 = v46 - v48;
        while ( 2 )
        {
          v50 = *v47;
          v51 = v79[4];
          v52 = v49[v70];
          v53 = v78;
          v69 = v51;
          if ( (v51 & 1) == 0 )
          {
            v52 = sub_4692E4(v52);
            LOBYTE(v51) = sub_4692E4(v50);
            v48 = (int)v74;
            v50 = v51;
            LOBYTE(v51) = v69;
            v53 = v78;
          }
          if ( v48 )
          {
            if ( (v51 & 0x20) != 0 )
            {
              v54 = ((unsigned __int8)(v50 ^ v52) & *v49) == 0;
LABEL_61:
              if ( !v54 )
                goto LABEL_66;
LABEL_62:
              v47 = v73 + 1;
              v78 = (_DWORD *)((char *)v53 + 1);
              ++v49;
              ++v73;
              if ( (unsigned int)v53 + 1 >= v77 )
              {
                v43 = v77;
                goto LABEL_64;
              }
              continue;
            }
            if ( v48 == 255 )
              v55 = v50 == 0xFF;
            else
              v55 = *v49 == 0;
            if ( v55 )
              goto LABEL_62;
          }
          break;
        }
        v54 = v52 == v50;
        goto LABEL_61;
      }
    }
LABEL_68:
    v60 = v75;
    v3[1030] -= 4096;
    v82 = 4096;
    v75 = v60 + 1;
    if ( (unsigned int)(v60 + 1) >= 0x3E8 )
    {
      v75 = 0;
      sub_453720();
      v62 = v61;
      if ( (unsigned int)(v61 - v3[1041]) >= 5 )
      {
        sub_4104E0(v3[2], (int)pNodeName);
        v3[1041] = v62;
      }
    }
    v4 = a2;
    if ( a2 >= v3[1030] + 4096 )
      return -1;
  }
  v3[1034] = v8;
  return -7;
}
// 43E48E: variable 'v64' is possibly undefined
// 43E48E: variable 'v65' is possibly undefined
// 43E900: variable 'v61' is possibly undefined
// 48DA64: using guessed type void (__noreturn *off_48DA64)();
// 48DA78: using guessed type _UNKNOWN *off_48DA78;
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
