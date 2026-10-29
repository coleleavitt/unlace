/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809C9B0
// Address: 0x0809C9B0

//----- (0809C9B0) --------------------------------------------------------
int __cdecl sub_809C9B0(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  unsigned int i; // esi
  char *v8; // ebx
  _DWORD *v9; // ecx
  unsigned int v10; // eax
  char *v11; // edx
  int v12; // edi
  int v13; // ecx
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // si
  unsigned __int8 v16; // al
  char v17; // al
  char **v18; // esi
  int v19; // edi
  unsigned __int8 **v20; // ebx
  size_t v21; // edx
  size_t v22; // esi
  size_t v23; // ecx
  _DWORD *v24; // eax
  _DWORD *v25; // ebx
  int v26; // eax
  _BYTE *v27; // eax
  _BYTE *v28; // edi
  int v29; // edx
  int v30; // ebx
  int result; // eax
  int v32; // edi
  unsigned int v33; // eax
  unsigned int v34; // ebx
  int *v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // esi
  int v38; // edx
  int v39; // edi
  int v40; // ecx
  unsigned __int8 v41; // bl
  unsigned __int8 v42; // al
  unsigned __int8 v43; // si
  unsigned __int8 v44; // al
  unsigned __int64 v45; // xmm0_8
  _DWORD *v46; // eax
  _DWORD *v47; // edx
  int v48; // esi
  unsigned int *v49; // eax
  int v50; // esi
  int v51; // [esp+14h] [ebp-88h]
  int v52; // [esp+18h] [ebp-84h]
  unsigned int v53; // [esp+1Ch] [ebp-80h]
  unsigned int v54; // [esp+20h] [ebp-7Ch]
  unsigned int v55; // [esp+24h] [ebp-78h]
  unsigned int *v56; // [esp+28h] [ebp-74h]
  int v57; // [esp+2Ch] [ebp-70h]
  char **v58; // [esp+30h] [ebp-6Ch]
  int v59; // [esp+34h] [ebp-68h]
  unsigned int v60; // [esp+34h] [ebp-68h]
  unsigned int v61; // [esp+38h] [ebp-64h]
  int v62; // [esp+38h] [ebp-64h]
  int v63; // [esp+3Ch] [ebp-60h]
  char *v64; // [esp+3Ch] [ebp-60h]
  unsigned int v65; // [esp+40h] [ebp-5Ch]
  int v66; // [esp+40h] [ebp-5Ch]
  unsigned int *v67; // [esp+40h] [ebp-5Ch]
  char **v68; // [esp+48h] [ebp-54h]
  int v69; // [esp+48h] [ebp-54h]
  int v70; // [esp+4Ch] [ebp-50h]
  unsigned int *v71; // [esp+4Ch] [ebp-50h]
  int v72; // [esp+4Ch] [ebp-50h]
  int v73; // [esp+50h] [ebp-4Ch]
  const void **v74; // [esp+50h] [ebp-4Ch]
  int v75; // [esp+50h] [ebp-4Ch]
  char *v76; // [esp+54h] [ebp-48h]
  int v77; // [esp+54h] [ebp-48h]
  int v78; // [esp+54h] [ebp-48h]
  char *v79; // [esp+58h] [ebp-44h]
  unsigned __int64 v80; // [esp+58h] [ebp-44h]
  size_t v81; // [esp+58h] [ebp-44h]
  int v82; // [esp+58h] [ebp-44h]
  unsigned int v83; // [esp+64h] [ebp-38h]
  int v84; // [esp+64h] [ebp-38h]
  const void *v85; // [esp+64h] [ebp-38h]
  size_t v86; // [esp+64h] [ebp-38h]
  unsigned int v87; // [esp+64h] [ebp-38h]
  char **v88; // [esp+68h] [ebp-34h]
  unsigned __int8 v89; // [esp+68h] [ebp-34h]
  unsigned __int8 *v90; // [esp+68h] [ebp-34h]
  int v91; // [esp+68h] [ebp-34h]
  unsigned __int8 v92; // [esp+68h] [ebp-34h]
  int v93; // [esp+6Ch] [ebp-30h] BYREF
  char *v94; // [esp+70h] [ebp-2Ch]
  int v95; // [esp+74h] [ebp-28h]
  char *v96; // [esp+78h] [ebp-24h]
  unsigned int v97; // [esp+7Ch] [ebp-20h]

  v97 = __readgsdword(0x14u);
  v3 = a2 & 0xFFFFF000;
  *(_DWORD *)(a1 + 4120) = a2 & 0xFFFFF000;
  v53 = a2 - (a2 & 0xFFFFF000);
  v52 = a1 + 24;
LABEL_2:
  v4 = 1000;
  v58 = (char **)(a1 + 4124);
  while ( 1 )
  {
    if ( v3 >= a3 )
    {
      result = -1;
      goto LABEL_63;
    }
    if ( (*(_BYTE *)(a1 + 16) & 2) == 0 )
    {
      v95 = 0;
      v96 = nullptr;
      v94 = (char *)&qword_811CFF4 - 3932;
      off_811E568(&v93);
      v32 = v93;
      v94 = (char *)&qword_811CFF4 - 1372;
      sub_80D0D50(v96);
      if ( v32 )
        goto LABEL_107;
      v3 = *(int *)((char *)&dword_811E00C + a1 - 135385076);
    }
    v5 = (*(int (__cdecl **)(_DWORD, unsigned int, int, int, _DWORD))(**(_DWORD **)(a1 + 8) + 144))(
           *(_DWORD *)(a1 + 8),
           v3,
           v52,
           4096,
           *(_DWORD *)(a1 + 20));
    v63 = *(_DWORD *)(a1 + 4120);
    if ( v5 != 4096 )
      break;
    v6 = a3 - v63;
    if ( a3 - v63 > 0x1000 )
      v6 = 4096;
    *(int *)((char *)&dword_811E03C + a1 - 135385076) = v6;
    if ( v58 != *(char ***)((char *)&off_811E010 + a1 - 135385076) )
    {
      v88 = *(char ***)((char *)&off_811E010 + a1 - 135385076);
      v59 = v4;
      for ( i = v6; ; i = *(int *)((char *)&dword_811E03C + a1 - 135385076) )
      {
        v8 = v88[4];
        v9 = (_DWORD *)(**(_DWORD **)(a1 + 12) + 40 * (_DWORD)v88[3]);
        v10 = v9[1] - (_DWORD)v8;
        v65 = v10;
        if ( v10 > i )
          v10 = i;
        v79 = &v8[*v9];
        v11 = nullptr;
        v83 = v10;
        if ( v9[4] )
          v11 = &v8[v9[3]];
        if ( v10 )
          break;
LABEL_57:
        if ( i >= v65 )
        {
          **(_DWORD **)(a1 + 4) = v88[2];
LABEL_62:
          result = 1;
          goto LABEL_63;
        }
        if ( i == 4096 )
        {
          v88[4] = v8 + 4096;
          v88 = (char **)*v88;
          if ( v58 == v88 )
          {
LABEL_29:
            v4 = v59;
            v63 = *(int *)((char *)&dword_811E00C + a1 - 135385076);
            goto LABEL_30;
          }
        }
        else
        {
LABEL_28:
          v18 = (char **)*v88;
          *(_DWORD *)v88[1] = *v88;
          v18[1] = v88[1];
          sub_80CF780(v88);
          v88 = v18;
          *(_UNKNOWN **)((char *)&off_811E018 + a1 - 135385076) = (_UNKNOWN *)(*(char **)((char *)&off_811E018
                                                                                        + a1
                                                                                        - 135385076)
                                                                             - 1);
          if ( v58 == v18 )
            goto LABEL_29;
        }
      }
      v64 = v88[4];
      v12 = 0;
      v70 = *(_DWORD *)(a1 + 16) & 0x20;
      v13 = *(_DWORD *)(a1 + 16) & 1;
      v61 = i;
      v68 = v88;
      while ( 1 )
      {
        v89 = v79[v12];
        v15 = *(_BYTE *)(a1 + v12 + 24);
        if ( v13 )
          goto LABEL_24;
        while ( 1 )
        {
          v73 = v13;
          v76 = v11;
          v15 = toupper(v15);
          v16 = toupper(v89);
          v13 = v73;
          v11 = v76;
          v89 = v16;
LABEL_24:
          if ( !v11 )
            break;
          v17 = v89;
          if ( v70 )
          {
            if ( ((unsigned __int8)v11[v12] & (unsigned __int8)(v15 ^ v89)) != 0 )
            {
LABEL_27:
              v88 = v68;
              goto LABEL_28;
            }
            goto LABEL_21;
          }
          v14 = v15;
          do
          {
            if ( v11 == (char *)255 )
            {
              while ( v17 == -1 )
              {
                if ( v83 == ++v12 )
                  goto LABEL_56;
                v17 = v79[v12];
                v14 = *(_BYTE *)(a1 + v12 + 24);
                if ( !v13 )
                  goto LABEL_55;
              }
LABEL_19:
              v89 = v17;
              v15 = v14;
              goto LABEL_20;
            }
            if ( v11[v12] )
              goto LABEL_19;
            if ( v83 == ++v12 )
              goto LABEL_56;
            v17 = v79[v12];
            v14 = *(_BYTE *)(a1 + v12 + 24);
          }
          while ( v13 );
LABEL_55:
          v89 = v17;
          v15 = v14;
        }
LABEL_20:
        if ( v89 != v15 )
          goto LABEL_27;
LABEL_21:
        if ( ++v12 == v83 )
        {
LABEL_56:
          v8 = v64;
          i = v61;
          v88 = v68;
          goto LABEL_57;
        }
      }
    }
LABEL_30:
    v71 = *(unsigned int **)((char *)&dword_811E020 + a1 - 135385076);
    if ( 4 * *(_DWORD *)((char *)&off_811E024 + a1 - 135385076) )
    {
      v66 = v4;
      v84 = *(int *)((char *)&dword_811E020 + a1 - 135385076);
      v19 = *(int *)((char *)&off_811E024 + a1 - 135385076);
      do
      {
        v20 = (unsigned __int8 **)(**(_DWORD **)(a1 + 12) + 40 * *v71);
        if ( *(int *)((char *)&dword_811E03C + a1 - 135385076) != v53 )
        {
          v90 = v20[1];
          v21 = *(int *)((char *)&dword_811E03C + a1 - 135385076) - v53;
          v77 = **v20;
          v74 = (const void **)(**(_DWORD **)(a1 + 12) + 40 * *v71);
          v85 = (const void *)(v53 + v52);
          do
          {
            v81 = v21;
            v27 = memchr(v85, v77, v21);
            v28 = v27;
            if ( !v27 )
              break;
            v22 = v81 - (v27 - (_BYTE *)v85);
            v23 = (size_t)v90;
            if ( (unsigned int)v90 > v22 )
              v23 = v81 - (v27 - (_BYTE *)v85);
            v86 = v23;
            if ( !memcmp(v27, *v74, v23) )
            {
              if ( v22 >= (unsigned int)v90 )
              {
                **(_DWORD **)(a1 + 4) = &v28[v63 - v52];
                goto LABEL_62;
              }
              v80 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)&v28[v63 - v52]), _mm_cvtsi32_si128(*v71)).m128i_u64[0];
              v24 = sub_80CF8B0(0x14u);
              v24[4] = v86;
              *((_QWORD *)v24 + 1) = v80;
              *v24 = v58;
              v25 = *(_DWORD **)(a1 + 4128);
              v24[1] = v25;
              *v25 = v24;
              *(_DWORD *)(a1 + 4128) = v24;
              v26 = *(_DWORD *)(a1 + 4120);
              ++*(_DWORD *)(a1 + 4132);
              v63 = v26;
            }
            v85 = v28 + 1;
            v21 = v22 - 1;
          }
          while ( v22 != 1 );
          v19 = *(int *)((char *)&off_811E024 + a1 - 135385076);
          v84 = *(int *)((char *)&dword_811E020 + a1 - 135385076);
        }
        ++v71;
      }
      while ( v71 != (unsigned int *)(v84 + 4 * v19) );
      v4 = v66;
    }
    v57 = *(int *)((char *)&dword_811E030 + a1 - 135385076);
    if ( v57 )
    {
      v33 = *(int *)((char *)&dword_811E03C + a1 - 135385076);
      if ( v53 < v33 )
      {
        v51 = v4;
        v56 = *(unsigned int **)(a1 + 4152);
        while ( 1 )
        {
          v78 = v53 + v52;
          v67 = v56;
          v60 = v33 - v53;
          if ( !(4 * v57) )
            goto LABEL_102;
          v91 = a1;
          do
          {
            v34 = *v67;
            v35 = (int *)(**(_DWORD **)(v91 + 12) + 40 * *v67);
            v36 = v60;
            v37 = v35[1];
            v82 = *v35;
            if ( v60 > v37 )
              v36 = v35[1];
            v38 = 0;
            v87 = v36;
            if ( v35[4] )
              v38 = v35[3];
            if ( v36 )
            {
              v55 = *v67;
              v39 = 0;
              v69 = *(_DWORD *)(v91 + 16) & 0x20;
              v40 = *(_DWORD *)(v91 + 16) & 1;
              v54 = v37;
              v62 = v91;
              while ( 1 )
              {
                v92 = *(_BYTE *)(v82 + v39);
                v43 = *(_BYTE *)(v78 + v39);
                if ( v40 )
                  goto LABEL_86;
                while ( 1 )
                {
                  v72 = v40;
                  v75 = v38;
                  v43 = toupper(v43);
                  v44 = toupper(v92);
                  v40 = v72;
                  v38 = v75;
                  v92 = v44;
LABEL_86:
                  if ( !v38 )
                    break;
                  if ( v69 )
                  {
                    if ( (*(_BYTE *)(v38 + v39) & (unsigned __int8)(v43 ^ v92)) != 0 )
                    {
LABEL_89:
                      v91 = v62;
                      goto LABEL_100;
                    }
                    goto LABEL_83;
                  }
                  v41 = v92;
                  v42 = v43;
                  do
                  {
                    if ( v38 == 255 )
                    {
                      while ( v41 == 0xFF )
                      {
                        if ( v87 == ++v39 )
                          goto LABEL_97;
                        v41 = *(_BYTE *)(v82 + v39);
                        v42 = *(_BYTE *)(v78 + v39);
                        if ( !v40 )
                          goto LABEL_93;
                      }
LABEL_81:
                      v92 = v41;
                      v43 = v42;
                      goto LABEL_82;
                    }
                    if ( *(_BYTE *)(v38 + v39) )
                      goto LABEL_81;
                    if ( v87 == ++v39 )
                      goto LABEL_97;
                    v41 = *(_BYTE *)(v82 + v39);
                    v42 = *(_BYTE *)(v78 + v39);
                  }
                  while ( v40 );
LABEL_93:
                  v92 = v41;
                  v43 = v42;
                }
LABEL_82:
                if ( v92 != v43 )
                  goto LABEL_89;
LABEL_83:
                if ( v87 == ++v39 )
                {
LABEL_97:
                  v34 = v55;
                  v37 = v54;
                  v91 = v62;
                  break;
                }
              }
            }
            v45 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v53 + v63), _mm_cvtsi32_si128(v34)).m128i_u64[0];
            if ( v60 >= v37 )
            {
              **(_DWORD **)(a1 + 4) = v53 + v63;
              goto LABEL_62;
            }
            v46 = sub_80CF8B0(0x14u);
            v46[4] = v87;
            *((_QWORD *)v46 + 1) = v45;
            *v46 = v58;
            v47 = *(_DWORD **)(v91 + 4128);
            v46[1] = v47;
            *v47 = v46;
            v48 = *(_DWORD *)(v91 + 4120);
            *(_DWORD *)(v91 + 4128) = v46;
            v49 = *(unsigned int **)(v91 + 4152);
            v63 = v48;
            v50 = *(_DWORD *)(v91 + 4156);
            ++*(_DWORD *)(v91 + 4132);
            v57 = v50;
            v56 = v49;
LABEL_100:
            ++v67;
          }
          while ( v67 != &v56[v57] );
          v33 = *(int *)((char *)&dword_811E03C + a1 - 135385076);
LABEL_102:
          if ( ++v53 >= v33 )
          {
            v4 = v51;
            break;
          }
        }
      }
    }
    v53 = 0;
    v3 = v63 + 4096;
    *(_DWORD *)(a1 + 4120) = v63 + 4096;
    if ( !--v4 )
    {
      sub_80D0330();
      v30 = v29;
      if ( (unsigned int)(v29 - *(_DWORD *)(a1 + 4164)) > 4 )
      {
        sub_8058E20(*(_DWORD *)(a1 + 8), "");
        *(_DWORD *)(a1 + 4164) = v30;
      }
      v3 = *(_DWORD *)(a1 + 4120);
      goto LABEL_2;
    }
  }
  *(int *)((char *)&dword_811E01C + a1 - 135385076) = *(_DWORD *)(a1 + 4120);
LABEL_107:
  result = -7;
LABEL_63:
  if ( v97 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 809CD95: variable 'v29' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E00C: using guessed type int dword_811E00C;
// 811E010: using guessed type char **off_811E010;
// 811E018: using guessed type _UNKNOWN *off_811E018;
// 811E01C: using guessed type int dword_811E01C;
// 811E020: using guessed type int dword_811E020;
// 811E024: using guessed type char **off_811E024;
// 811E030: using guessed type int dword_811E030;
// 811E03C: using guessed type int dword_811E03C;
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
