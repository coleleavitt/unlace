/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809C160
// Address: 0x0809C160

//----- (0809C160) --------------------------------------------------------
int __cdecl sub_809C160(int a1, unsigned int a2, int a3)
{
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // edi
  unsigned __int8 v13; // si
  int v14; // edx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  int v17; // ecx
  _DWORD *v18; // ebx
  size_t v19; // edi
  size_t v20; // esi
  size_t v21; // esi
  size_t v22; // ecx
  unsigned int v23; // edx
  _DWORD *v24; // eax
  _DWORD *v25; // edx
  unsigned int v26; // eax
  int v27; // eax
  _DWORD *v28; // edi
  int result; // eax
  int v30; // edi
  bool v31; // zf
  int v32; // edx
  int v33; // ebx
  unsigned int v34; // edx
  int v35; // esi
  unsigned int v36; // ecx
  _DWORD *v37; // edx
  unsigned int v38; // ebx
  unsigned int v39; // edi
  unsigned int v40; // ecx
  int v41; // edi
  unsigned __int8 v42; // si
  int v43; // edx
  unsigned __int8 v44; // al
  unsigned __int8 v45; // al
  unsigned int v46; // edx
  _DWORD *v47; // eax
  _DWORD *v48; // edx
  unsigned int v49; // eax
  void *c; // [esp+0h] [ebp-9Ch]
  int v51; // [esp+14h] [ebp-88h]
  _DWORD *v52; // [esp+1Ch] [ebp-80h]
  unsigned int v53; // [esp+20h] [ebp-7Ch]
  unsigned int *v54; // [esp+24h] [ebp-78h]
  int v55; // [esp+28h] [ebp-74h]
  int v56; // [esp+28h] [ebp-74h]
  unsigned int v57; // [esp+2Ch] [ebp-70h]
  unsigned int v58; // [esp+30h] [ebp-6Ch]
  int v59; // [esp+30h] [ebp-6Ch]
  unsigned int v60; // [esp+34h] [ebp-68h]
  int v61; // [esp+38h] [ebp-64h]
  unsigned int v62; // [esp+3Ch] [ebp-60h]
  _DWORD *v63; // [esp+3Ch] [ebp-60h]
  unsigned int v64; // [esp+44h] [ebp-58h]
  unsigned int *v65; // [esp+44h] [ebp-58h]
  int v66; // [esp+48h] [ebp-54h]
  int v67; // [esp+48h] [ebp-54h]
  int v68; // [esp+4Ch] [ebp-50h]
  unsigned int *v69; // [esp+4Ch] [ebp-50h]
  unsigned int v70; // [esp+4Ch] [ebp-50h]
  char v71; // [esp+50h] [ebp-4Ch]
  char v72; // [esp+50h] [ebp-4Ch]
  int v73; // [esp+54h] [ebp-48h]
  int v74; // [esp+54h] [ebp-48h]
  int v75; // [esp+58h] [ebp-44h]
  unsigned int *v76; // [esp+58h] [ebp-44h]
  size_t v77; // [esp+58h] [ebp-44h]
  unsigned __int64 v78; // [esp+58h] [ebp-44h]
  int v79; // [esp+58h] [ebp-44h]
  unsigned __int64 v80; // [esp+58h] [ebp-44h]
  int v81; // [esp+60h] [ebp-3Ch]
  int v82; // [esp+60h] [ebp-3Ch]
  size_t v83; // [esp+60h] [ebp-3Ch]
  unsigned int v84; // [esp+60h] [ebp-3Ch]
  int v85; // [esp+68h] [ebp-34h]
  int v86; // [esp+68h] [ebp-34h]
  unsigned int v87; // [esp+68h] [ebp-34h]
  int v88; // [esp+6Ch] [ebp-30h] BYREF
  char *v89; // [esp+70h] [ebp-2Ch]
  int v90; // [esp+74h] [ebp-28h]
  char *v91; // [esp+78h] [ebp-24h]
  unsigned int v92; // [esp+7Ch] [ebp-20h]
  unsigned int v93; // [esp+A4h] [ebp+8h]
  unsigned int v94; // [esp+A4h] [ebp+8h]
  unsigned int v95; // [esp+A4h] [ebp+8h]

  v92 = __readgsdword(0x14u);
  v4 = (a3 - 1) & 0xFFFFF000;
  *(_DWORD *)(a1 + 4120) = v4;
  v60 = a3 - v4;
  v61 = a1 + 24;
LABEL_2:
  v51 = 1000;
  while ( 1 )
  {
    if ( a2 >= (unsigned int)&dword_811DFF4[-33846269] + v4 )
    {
      result = -1;
      goto LABEL_57;
    }
    if ( (*(_BYTE *)(a1 + 16) & 2) == 0 )
    {
      v90 = 0;
      v91 = nullptr;
      v89 = (char *)&qword_811CFF4 - 3932;
      off_811E568(&v88);
      v30 = v88;
      v89 = (char *)&qword_811CFF4 - 1372;
      sub_80D0D50(v91);
      if ( v30 )
        goto LABEL_106;
      v4 = *(int *)((char *)&dword_811E00C + a1 - 135385076);
    }
    v5 = (*(int (__cdecl **)(_DWORD, unsigned int, int, int, _DWORD))(**(_DWORD **)(a1 + 8) + 144))(
           *(_DWORD *)(a1 + 8),
           v4,
           v61,
           4096,
           *(_DWORD *)(a1 + 20));
    v62 = *(_DWORD *)(a1 + 4120);
    if ( v5 != 4096 )
      break;
    v6 = a2 - v62;
    if ( v62 >= a2 )
      v6 = 0;
    v64 = v6;
    *(_DWORD *)(a1 + 4168) = v6;
    v52 = (_DWORD *)(a1 + 4124);
    if ( *(_DWORD *)(a1 + 4124) != a1 + 4124 )
    {
      v93 = a2;
      v7 = *(_DWORD **)(a1 + 4124);
      while ( 1 )
      {
        v55 = v7[4];
        v8 = (_DWORD *)(**(_DWORD **)(a1 + 12) + 40 * v7[3]);
        v9 = v8[1] - v55;
        v10 = 4096 - v64;
        v58 = v9;
        if ( v9 <= 4096 - v64 )
          v10 = v8[1] - v55;
        v85 = 4096 - v10 + v61;
        v75 = v9 - v10 + *v8;
        v11 = 0;
        if ( v8[4] )
          v11 = v8[3] + v9 - v10;
        if ( v10 )
          break;
LABEL_26:
        if ( 4096 - v64 >= v58 )
        {
          **(_DWORD **)(a1 + 4) = v7[2];
          goto LABEL_56;
        }
        if ( v64 )
        {
LABEL_54:
          v28 = (_DWORD *)*v7;
          *(_DWORD *)v7[1] = *v7;
          v28[1] = v7[1];
          c = v7;
          v7 = v28;
          sub_80CF780(c);
          *(_UNKNOWN **)((char *)&off_811E018 + a1 - 135385076) = (_UNKNOWN *)(*(char **)((char *)&off_811E018
                                                                                        + a1
                                                                                        - 135385076)
                                                                             - 1);
        }
        else
        {
          v7[4] = v55 + 4096;
          v7 = (_DWORD *)*v7;
        }
        v64 = *(int *)((char *)&dword_811E03C + a1 - 135385076);
        if ( v52 == v7 )
        {
          a2 = v93;
          v62 = *(int *)((char *)&dword_811E00C + a1 - 135385076);
          goto LABEL_31;
        }
      }
      v63 = v7;
      v66 = *(_DWORD *)(a1 + 16) & 0x20;
      v81 = *(_DWORD *)(a1 + 16) & 1;
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_BYTE *)(v75 + v12);
        v14 = *(unsigned __int8 *)(v85 + v12);
        if ( v81 )
          goto LABEL_18;
        while ( 1 )
        {
          v68 = v11;
          v71 = toupper(v14);
          v15 = toupper(v13);
          v11 = v68;
          LOBYTE(v14) = v71;
          v13 = v15;
LABEL_18:
          if ( !v11 )
          {
LABEL_23:
            if ( (_BYTE)v14 != v13 )
              goto LABEL_53;
            goto LABEL_24;
          }
          v16 = v13;
          if ( v66 )
            break;
          do
          {
            if ( v11 == 255 )
            {
              while ( v16 == 0xFF )
              {
                if ( v10 == ++v12 )
                  goto LABEL_25;
                v16 = *(_BYTE *)(v75 + v12);
                v14 = *(unsigned __int8 *)(v85 + v12);
                if ( !v81 )
                  goto LABEL_47;
              }
LABEL_22:
              v13 = v16;
              goto LABEL_23;
            }
            if ( *(_BYTE *)(v11 + v12) )
              goto LABEL_22;
            if ( ++v12 == v10 )
              goto LABEL_25;
            v14 = *(unsigned __int8 *)(v85 + v12);
            v16 = *(_BYTE *)(v75 + v12);
          }
          while ( v81 );
LABEL_47:
          v13 = v16;
        }
        if ( (*(_BYTE *)(v11 + v12) & (unsigned __int8)(v14 ^ v13)) != 0 )
        {
LABEL_53:
          v7 = v63;
          goto LABEL_54;
        }
LABEL_24:
        if ( ++v12 == v10 )
        {
LABEL_25:
          v7 = v63;
          goto LABEL_26;
        }
      }
    }
LABEL_31:
    v86 = v64 + v61;
    v17 = *(int *)((char *)&off_811E024 + a1 - 135385076);
    v76 = *(unsigned int **)((char *)&dword_811E020 + a1 - 135385076);
    v69 = v76;
    if ( 4 * v17 )
    {
      v94 = a2;
      while ( 1 )
      {
        v18 = (_DWORD *)(**(_DWORD **)(a1 + 12) + 40 * *v69);
        v19 = v18[1];
        v20 = v60 - v64;
        if ( v60 != v64 )
        {
          v73 = *(unsigned __int8 *)(*v18 + v19 - 1);
          do
          {
            v27 = memrchr(v86, v73, v20);
            if ( !v27 )
              break;
            v82 = v27 + 1;
            v21 = v27 + 1 - v86;
            v22 = v21;
            if ( v19 <= v21 )
              v22 = v19;
            v77 = v22;
            if ( !memcmp((const void *)(1 - v22 + v27), (const void *)(*v18 + v19 - v22), v22) )
            {
              v23 = v62 - v19 + v82 - v61;
              if ( v21 >= v19 )
              {
                **(_DWORD **)(a1 + 4) = v23;
                goto LABEL_56;
              }
              v83 = v77;
              v78 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(*v69)).m128i_u64[0];
              v24 = sub_80CF8B0(0x14u);
              *v24 = v52;
              v24[4] = v83;
              *((_QWORD *)v24 + 1) = v78;
              v25 = *(_DWORD **)(a1 + 4128);
              v24[1] = v25;
              *v25 = v24;
              *(_DWORD *)(a1 + 4128) = v24;
              v26 = *(_DWORD *)(a1 + 4120);
              ++*(_DWORD *)(a1 + 4132);
              v62 = v26;
            }
            v20 = v21 - 1;
          }
          while ( v20 );
          v17 = *(int *)((char *)&off_811E024 + a1 - 135385076);
          v76 = *(unsigned int **)((char *)&dword_811E020 + a1 - 135385076);
        }
        if ( ++v69 == &v76[v17] )
          break;
        v64 = *(int *)((char *)&dword_811E03C + a1 - 135385076);
      }
      a2 = v94;
    }
    v56 = *(int *)((char *)&dword_811E030 + a1 - 135385076);
    if ( v56 )
    {
      v34 = *(int *)((char *)&dword_811E03C + a1 - 135385076);
      if ( v34 < v60 )
      {
        v95 = a2;
        v54 = *(unsigned int **)((char *)&off_811E02C + a1 - 135385076);
        while ( 1 )
        {
          v57 = v60 - v34;
          v65 = v54;
          if ( !(4 * v56) )
            goto LABEL_92;
          v35 = a1;
          do
          {
            v36 = v57;
            v53 = *v65;
            v37 = (_DWORD *)(**(_DWORD **)(v35 + 12) + 40 * *v65);
            v38 = v37[1];
            if ( v57 > v38 )
              v36 = v37[1];
            v39 = v37[1] - v36;
            v87 = v36;
            v79 = v61 + v60 - v36;
            v84 = v39 + *v37;
            v40 = 0;
            if ( v37[4] )
              v40 = v39 + v37[3];
            if ( !v87 )
              goto LABEL_88;
            v67 = *(_DWORD *)(v35 + 16) & 0x20;
            v59 = v35;
            v74 = *(_DWORD *)(v35 + 16) & 1;
            v41 = 0;
            while ( 1 )
            {
              v42 = *(_BYTE *)(v84 + v41);
              v43 = *(unsigned __int8 *)(v79 + v41);
              if ( v74 )
                goto LABEL_80;
LABEL_79:
              while ( 1 )
              {
                v70 = v40;
                v72 = toupper(v43);
                v44 = toupper(v42);
                v40 = v70;
                LOBYTE(v43) = v72;
                v42 = v44;
LABEL_80:
                if ( !v40 )
                {
LABEL_85:
                  if ( (_BYTE)v43 != v42 )
                    goto LABEL_102;
                  goto LABEL_86;
                }
                v45 = v42;
                if ( v67 )
                  break;
                do
                {
                  if ( v40 == 255 )
                  {
                    while ( v45 == 0xFF )
                    {
                      if ( v87 == ++v41 )
                        goto LABEL_87;
                      v43 = *(unsigned __int8 *)(v79 + v41);
                      v45 = *(_BYTE *)(v84 + v41);
                      if ( !v74 )
                      {
                        v42 = *(_BYTE *)(v84 + v41);
                        goto LABEL_79;
                      }
                    }
LABEL_84:
                    v42 = v45;
                    goto LABEL_85;
                  }
                  if ( *(_BYTE *)(v40 + v41) )
                    goto LABEL_84;
                  if ( v87 == ++v41 )
                    goto LABEL_87;
                  v45 = *(_BYTE *)(v84 + v41);
                  v43 = *(unsigned __int8 *)(v79 + v41);
                }
                while ( v74 );
                v42 = *(_BYTE *)(v84 + v41);
              }
              if ( (*(_BYTE *)(v40 + v41) & (unsigned __int8)(v43 ^ v42)) != 0 )
                break;
LABEL_86:
              if ( v87 == ++v41 )
              {
LABEL_87:
                v35 = v59;
LABEL_88:
                v46 = v60 + v62;
                if ( v57 < v38 )
                {
                  v80 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v46 - v38), _mm_cvtsi32_si128(v53)).m128i_u64[0];
                  v47 = sub_80CF8B0(0x14u);
                  v47[4] = v87;
                  *((_QWORD *)v47 + 1) = v80;
                  *v47 = v52;
                  v48 = *(_DWORD **)(v35 + 4128);
                  v47[1] = v48;
                  *v48 = v47;
                  *(_DWORD *)(v35 + 4128) = v47;
                  v49 = *(_DWORD *)(v35 + 4120);
                  ++*(_DWORD *)(v35 + 4132);
                  v62 = v49;
                  v56 = *(_DWORD *)(v35 + 4156);
                  v54 = *(unsigned int **)(v35 + 4152);
                  goto LABEL_90;
                }
                **(_DWORD **)(a1 + 4) = v46 - v87;
LABEL_56:
                result = 1;
                goto LABEL_57;
              }
            }
LABEL_102:
            v35 = v59;
LABEL_90:
            ++v65;
          }
          while ( v65 != &v54[v56] );
          v34 = *(int *)((char *)&dword_811E03C + a1 - 135385076);
LABEL_92:
          if ( v34 >= --v60 )
          {
            a2 = v95;
            break;
          }
        }
      }
    }
    v60 = 4096;
    v4 = v62 - 4096;
    v31 = v51-- == 1;
    *(_DWORD *)(a1 + 4120) = v62 - 4096;
    if ( v31 )
    {
      sub_80D0330();
      v33 = v32;
      if ( (unsigned int)(v32 - *(_DWORD *)(a1 + 4164)) > 4 )
      {
        sub_8058E20(*(_DWORD *)(a1 + 8), "");
        *(_DWORD *)(a1 + 4164) = v33;
      }
      v4 = *(_DWORD *)(a1 + 4120);
      goto LABEL_2;
    }
  }
  *(int *)((char *)&dword_811E01C + a1 - 135385076) = *(_DWORD *)(a1 + 4120);
LABEL_106:
  result = -7;
LABEL_57:
  if ( v92 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 809C688: variable 'v32' is possibly undefined
// 804B730: using guessed type int __cdecl memrchr(_DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811DFF4: using guessed type int dword_811DFF4[4];
// 811E00C: using guessed type int dword_811E00C;
// 811E018: using guessed type _UNKNOWN *off_811E018;
// 811E01C: using guessed type int dword_811E01C;
// 811E020: using guessed type int dword_811E020;
// 811E024: using guessed type char **off_811E024;
// 811E02C: using guessed type _UNKNOWN *off_811E02C;
// 811E030: using guessed type int dword_811E030;
// 811E03C: using guessed type int dword_811E03C;
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
