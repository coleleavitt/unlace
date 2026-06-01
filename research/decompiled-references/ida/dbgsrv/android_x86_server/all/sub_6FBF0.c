/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FBF0
// Address: 0x0006FBF0

//----- (0006FBF0) --------------------------------------------------------
int __cdecl sub_6FBF0(int a1, int a2)
{
  int v2; // esi
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // eax
  unsigned int v6; // eax
  _BYTE *v7; // eax
  unsigned int v8; // ecx
  int v9; // esi
  int v10; // edx
  unsigned __int8 v11; // cf
  unsigned int v12; // edx
  char *v13; // ecx
  int v14; // ecx
  int v15; // eax
  char v16; // cl
  char *v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  bool v23; // cc
  size_t v24; // eax
  unsigned int v25; // ecx
  _BYTE *v26; // eax
  int v27; // eax
  char v28; // si
  _DWORD *v29; // edx
  int v30; // ecx
  int v31; // esi
  char *v32; // eax
  int v33; // eax
  char *v34; // ecx
  int v35; // ecx
  int v36; // esi
  int v37; // ecx
  char *v38; // eax
  int v39; // eax
  int qerrno; // eax
  int v41; // eax
  int v43; // [esp+0h] [ebp-5Ch]
  int v44; // [esp+0h] [ebp-5Ch]
  char *v45; // [esp+4h] [ebp-58h]
  char *v46; // [esp+4h] [ebp-58h]
  char v47; // [esp+8h] [ebp-54h]
  char *v48; // [esp+8h] [ebp-54h]
  size_t v49; // [esp+8h] [ebp-54h]
  int v50; // [esp+8h] [ebp-54h]
  size_t v51; // [esp+Ch] [ebp-50h]
  const void *v52; // [esp+10h] [ebp-4Ch]
  int v53; // [esp+10h] [ebp-4Ch]
  unsigned int v54; // [esp+14h] [ebp-48h]
  char *v55; // [esp+14h] [ebp-48h]
  unsigned int v56; // [esp+18h] [ebp-44h]
  int v57; // [esp+1Ch] [ebp-40h]
  int v58[5]; // [esp+20h] [ebp-3Ch] BYREF
  char v59; // [esp+34h] [ebp-28h]
  int v60; // [esp+38h] [ebp-24h]
  int v61; // [esp+3Ch] [ebp-20h]
  int v62; // [esp+40h] [ebp-1Ch]
  int v63; // [esp+44h] [ebp-18h]
  unsigned int v64; // [esp+48h] [ebp-14h]

  v2 = a2;
  v64 = __readgsdword(0x14u);
  v58[4] = 0;
  v59 = 0;
  v61 = 0;
  v60 = 0;
  v63 = 0;
  v62 = 0;
  memset(v58, 0, 14);
  v47 = 0;
  while ( 2 )
  {
    v7 = *(_BYTE **)(a1 + 4);
LABEL_7:
    switch ( *v7++ )
    {
      case 0:
        v6 = *(_DWORD *)(a1 + 32);
        if ( v6 < 2 )
          goto LABEL_58;
        v3 = *(_DWORD *)(a1 + 28);
        v4 = v6 - 1;
        v5 = v6 + 27 * (v6 - 1) - 1;
        *(_DWORD *)a1 = *(_DWORD *)(v3 + v5 + 12);
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(v3 + v5 + 16);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(v3 + v5 + 24);
        *(_DWORD *)(a1 + 32) = v4;
        v2 = a2;
        sub_1BC40((char **)(v3 + v5));
        continue;
      case 9:
      case 0xA:
      case 0x20:
        *(_DWORD *)(a1 + 4) = v7;
        goto LABEL_7;
      case 0x23:
        if ( *v7 != 35 )
          goto LABEL_58;
        v8 = *(unsigned __int16 *)(v2 + 12);
        v9 = 0;
        if ( v8 > 8 )
        {
          v12 = 0;
          v13 = nullptr;
        }
        else
        {
          v10 = 392;
          v11 = _bittest(&v10, v8);
          v12 = 0;
          v13 = nullptr;
          if ( v11 )
          {
            v13 = *(char **)(a1 + 16);
            v12 = *(_DWORD *)(a1 + 20);
            v9 = *(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 16) = 0;
            *(_DWORD *)(a1 + 20) = 0;
            *(_DWORD *)(a1 + 24) = 0;
          }
        }
        v54 = v12;
        v45 = v13;
        v57 = *(_DWORD *)(a1 + 8);
        v14 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 4) = v7 + 1;
        v15 = sub_6EB10(a1, (int)v58, v14, nullptr);
        v16 = 1;
        if ( v15 )
        {
          v43 = v15;
LABEL_14:
          v2 = a2;
          goto LABEL_15;
        }
        v17 = v45;
        switch ( LOWORD(v58[3]) )
        {
          case 1u:
            v2 = a2;
            v16 = 3;
            if ( !v45 )
              goto LABEL_47;
            goto LABEL_46;
          case 0x3Bu:
            v16 = 3;
            if ( (*(_BYTE *)(a1 + 276) & 8) != 0 )
              goto LABEL_27;
LABEL_44:
            *(_DWORD *)(a1 + 8) = v57;
            *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 12);
            goto LABEL_45;
          case 0x2Fu:
            v16 = 3;
            if ( *(_WORD *)(a2 + 12) == 47 && (*(_BYTE *)(a1 + 276) & 4) != 0 )
            {
LABEL_27:
              while ( 1 )
              {
                v21 = *(_DWORD *)(a1 + 32);
                if ( !v21 )
                  break;
                v18 = *(_DWORD *)(a1 + 28);
                v19 = v21 - 1;
                v20 = v21 + 27 * (v21 - 1) - 1;
                *(_DWORD *)a1 = *(_DWORD *)(v18 + v20 + 12);
                *(_DWORD *)(a1 + 4) = *(_DWORD *)(v18 + v20 + 16);
                *(_DWORD *)(a1 + 40) = *(_DWORD *)(v18 + v20 + 24);
                *(_DWORD *)(a1 + 32) = v19;
                sub_1BC40((char **)(v18 + v20));
              }
              v2 = a2;
              *(_WORD *)(a2 + 12) = 1;
              v43 = 0;
              v16 = 1;
LABEL_15:
              v17 = v45;
              if ( !v45 )
                goto LABEL_47;
              goto LABEL_46;
            }
            goto LABEL_44;
        }
        v52 = *(const void **)(a1 + 12);
        v16 = 3;
        if ( (unsigned __int16)(LOWORD(v58[3]) - 6) < 3u )
          goto LABEL_34;
        if ( LOWORD(v58[3]) != 2 )
        {
          if ( LOWORD(v58[3]) == 3 )
          {
LABEL_34:
            if ( !v52 )
              goto LABEL_44;
            v22 = *(_DWORD *)(a1 + 4);
            v23 = v22 <= (unsigned int)v52;
            v24 = v22 - (_DWORD)v52;
            if ( v23 )
              goto LABEL_44;
            v58[1] = 0;
            v51 = v24;
            v25 = v24 + 1;
            v26 = (_BYTE *)v58[0];
            if ( v58[2] < v25 )
            {
              v56 = v25;
              v26 = qvector_reserve((int)v58, (void *)v58[0], v25, 1u);
              v58[0] = (int)v26;
              v25 = v56;
            }
            v58[1] = v25;
            v26[v51] = 0;
            memmove((void *)v58[0], v52, v51);
            v17 = v45;
          }
          else if ( LOWORD(v58[3]) <= 0x7Fu )
          {
            goto LABEL_44;
          }
        }
        v27 = *(unsigned __int16 *)(a2 + 12);
        if ( v27 != 2 && (unsigned __int16)v27 <= 0x7Fu )
        {
          if ( v54 <= 1 )
          {
            v43 = set_qerrno(29);
            v16 = 1;
            goto LABEL_14;
          }
          v48 = *(char **)a2;
          *(_DWORD *)a2 = v17;
          *(_DWORD *)(a2 + 4) = v54;
          *(_DWORD *)(a2 + 8) = v9;
          v17 = v48;
        }
        if ( v58[1] >= 2u )
        {
          v49 = v58[1] - 1;
          v46 = v17;
          v29 = (_DWORD *)a2;
          v55 = *(char **)a2;
          v30 = *(_DWORD *)(a2 + 4);
          v31 = v30 - 1;
          if ( !v30 )
            v31 = 0;
          v53 = v31 + v58[1];
          if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v31 + v58[1]) )
          {
            v32 = (char *)qvector_reserve(a2, v55, v31 + v58[1], 1u);
            v29 = (_DWORD *)a2;
            *(_DWORD *)a2 = v32;
            v55 = v32;
          }
          v29[1] = v53;
          v55[v31 + v49] = 0;
          memcpy((void *)(*v29 + v31), (const void *)v58[0], v49);
          v17 = v46;
        }
        *(_DWORD *)(a1 + 8) = v57;
        v47 = 1;
        v16 = 0;
LABEL_45:
        v2 = a2;
        if ( !v17 )
          goto LABEL_47;
LABEL_46:
        v28 = v16;
        qfree(v17);
        v16 = v28;
        v2 = a2;
LABEL_47:
        if ( !v16 )
          continue;
        if ( v16 != 3 )
          goto LABEL_80;
LABEL_58:
        if ( (v47 & 1) == 0 )
          goto LABEL_59;
        v33 = *(_DWORD *)(v2 + 4);
        if ( v33 )
          v34 = *(char **)v2;
        else
          v34 = byte_13BD21;
        v35 = (unsigned __int8)*v34;
        if ( (v35 & 0x80u) == 0 && (unsigned int)(v35 - 48) < 0xA )
          goto LABEL_67;
        if ( !v33 )
        {
          if ( byte_13BD21[0] != 46 )
            goto LABEL_70;
LABEL_67:
          v36 = *(_DWORD *)a1;
          v44 = *(_DWORD *)(a1 + 4);
          v50 = *(_DWORD *)(a1 + 8);
          if ( v33 )
          {
            v37 = a2;
            v38 = *(char **)a2;
          }
          else
          {
            v38 = byte_EF875;
            v37 = a2;
          }
          *(_DWORD *)(a1 + 4) = v38;
          *(_DWORD *)a1 = v38;
          v41 = sub_6EB10(a1, v37, 0, nullptr);
          *(_DWORD *)a1 = v36;
          *(_DWORD *)(a1 + 4) = v44;
          *(_DWORD *)(a1 + 8) = v50;
          v43 = v41;
          if ( v41 )
            goto LABEL_80;
          goto LABEL_59;
        }
        if ( **(_BYTE **)v2 == 46 )
          goto LABEL_67;
LABEL_70:
        v39 = sub_6E940((_DWORD *)a1, 1, v2);
        if ( v39 != -1 )
        {
          if ( v39 == 1 )
          {
            v43 = sub_6EB10(a1, v2, 0, nullptr);
            if ( !v43 && *(_DWORD *)(a1 + 32) )
            {
              qerrno = sub_6FBF0(a1, v2);
              goto LABEL_79;
            }
            goto LABEL_80;
          }
LABEL_59:
          v43 = 0;
          goto LABEL_80;
        }
        qerrno = get_qerrno();
LABEL_79:
        v43 = qerrno;
LABEL_80:
        if ( v58[0] )
        {
          v58[1] = 0;
          qfree((void *)v58[0]);
          v58[0] = 0;
          v58[2] = 0;
        }
        return v43;
      default:
        goto LABEL_58;
    }
  }
}
// 70139: variable 'v43' is possibly undefined
