/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003F360
// Address: 0x000000014003F360

//----- (000000014003F360) ----------------------------------------------------
void __fastcall sub_14003F360(__int64 a1, __int64 a2, char **a3)
{
  char **v3; // r14
  __int64 v4; // r12
  char *v6; // rax
  int v7; // eax
  char v8; // di
  __int64 v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // edi
  char *v12; // rcx
  int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  char *v19; // rdi
  char *v20; // rsi
  unsigned int v21; // r14d
  unsigned __int64 v22; // rdx
  unsigned int v23; // edi
  unsigned int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // r8
  char *v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int8 *v29; // r12
  int v30; // eax
  unsigned __int64 v31; // rcx
  unsigned __int8 *v32; // r12
  char *v33; // rax
  unsigned int v34; // r15d
  _QWORD *v35; // rdi
  _QWORD *v36; // rsi
  char *v37; // r13
  int v38; // r12d
  __int64 v39; // r15
  const char *v40; // r14
  const char **v41; // rdi
  __int64 v42; // rsi
  unsigned int v43; // r14d
  char *v44; // rsi
  unsigned __int64 v45; // rdx
  unsigned int v46; // edi
  unsigned int v47; // eax
  char *v48; // rsi
  unsigned int v49; // edi
  unsigned int v50; // eax
  __int64 v51; // r14
  unsigned int v52; // r15d
  char *v53; // rsi
  unsigned __int64 v54; // rdx
  unsigned int v55; // edi
  unsigned int v56; // eax
  char *v57; // rsi
  unsigned __int64 v58; // rdx
  unsigned int v59; // edi
  unsigned int v60; // eax
  _QWORD *v61; // rsi
  _QWORD *i; // r13
  __int64 v63; // r15
  unsigned int v64; // r12d
  char *v65; // r14
  unsigned __int64 v66; // rdx
  unsigned int v67; // edi
  unsigned int v68; // eax
  __int64 v69; // r9
  __int64 v70; // r12
  unsigned int v71; // r15d
  char *v72; // r14
  unsigned __int64 v73; // rdx
  unsigned int v74; // edi
  unsigned int v75; // eax
  int v76; // eax
  unsigned int v77; // r14d
  char *v78; // rsi
  unsigned __int64 v79; // rdx
  unsigned int v80; // edi
  unsigned int v81; // eax
  int v82; // eax
  unsigned __int8 *v83; // r8
  int v84; // esi
  unsigned __int8 *v85; // rdi
  int v86; // ecx
  int v87; // eax
  char *v88; // r8
  char *Str1; // [rsp+20h] [rbp-49h] BYREF
  char *v90; // [rsp+28h] [rbp-41h] BYREF
  char *v91; // [rsp+30h] [rbp-39h] BYREF
  char *v92; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int8 *v93; // [rsp+40h] [rbp-29h]
  __int64 v94; // [rsp+48h] [rbp-21h]
  char *v95; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v96; // [rsp+58h] [rbp-11h] BYREF
  char *v97; // [rsp+60h] [rbp-9h] BYREF
  char *v98; // [rsp+68h] [rbp-1h] BYREF
  char *v99; // [rsp+70h] [rbp+7h]
  char *v100; // [rsp+78h] [rbp+Fh]
  char *v101; // [rsp+80h] [rbp+17h] BYREF
  char *v102; // [rsp+88h] [rbp+1Fh]
  unsigned int v105; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a3;
  v4 = a2;
  v100 = *a3;
  Str1 = v100;
  v99 = &a3[1][(_QWORD)v100];
  if ( !v100 )
    return;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, 0);
  v6 = Str1;
  *(_QWORD *)(a1 + 160) = Str1;
  *(_QWORD *)(a1 + 168) = v6;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v8 = v7;
  if ( v7 <= 0 )
  {
    *(_DWORD *)(a1 + 176) = 0;
  }
  else
  {
    if ( (v7 & 0xF) != 0 )
      sub_14003F290(a1, v4, (v7 & 0xF) - 1, (const __m128i **)&Str1);
    if ( (v8 & 0x10) != 0 )
    {
      Str1 = sub_14006CA14((__int64)Str1, 0);
      sub_14003ED40(a1, v4, (unsigned __int64)Str1, *(_DWORD *)(a1 + 128));
      if ( *(Str1 - 1) == *(_BYTE *)(a1 + 184) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, 16);
        *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 128);
      }
      else
      {
        *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
      }
    }
  }
LABEL_10:
  v9 = 0x3FFFFFF43FFFFFFLL;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v91 = Str1;
          v10 = sub_1400615C0((unsigned __int8 **)&v91);
          v11 = v10;
          if ( v10 >= 0x80 || !isspace((unsigned __int8)v10) )
            break;
          if ( (unsigned int)sub_1400615C0((unsigned __int8 **)&Str1) == -1 )
            ++Str1;
        }
        if ( !v11 )
        {
          v88 = Str1;
          if ( Str1 != *(char **)(a1 + 168) )
LABEL_126:
            sub_14003ED40(a1, v4, (unsigned __int64)v88, *(_DWORD *)(a1 + 176));
          return;
        }
        v12 = Str1;
        v102 = Str1;
        v13 = 0;
        if ( !*(_QWORD *)(a1 + 96) )
          goto LABEL_27;
        v14 = 0;
        while ( 1 )
        {
          v15 = *(_QWORD *)(a1 + 88);
          v16 = *(_QWORD *)(v15 + v14 + 8);
          if ( v16 > 1 )
            break;
LABEL_21:
          ++v13;
          v14 += 48;
          if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 96) )
            goto LABEL_26;
        }
        if ( strncmp(v12, *(const char **)(v15 + v14), v16 - 1) )
        {
          v12 = Str1;
          goto LABEL_21;
        }
        sub_14003ED40(a1, v4, (unsigned __int64)Str1, *(_DWORD *)(a1 + 176));
        v17 = *(_QWORD *)(v15 + v14 + 8);
        v18 = v17 - 1;
        if ( !v17 )
          v18 = 0;
        Str1 += v18;
        sub_14003F290(a1, v4, v13, (const __m128i **)&Str1);
        v12 = Str1;
LABEL_26:
        v3 = a3;
LABEL_27:
        v95 = v12;
        if ( (unsigned int)sub_1400615C0((unsigned __int8 **)&v95) == *(char *)(a1 + 185) )
        {
          v19 = *(char **)(a1 + 168);
          if ( v19 == *v3 )
          {
LABEL_33:
            v20 = Str1;
          }
          else
          {
            v20 = Str1;
            if ( v19 != Str1 )
            {
              while ( *v19 >= 0 && isspace((unsigned __int8)*v19) )
              {
                if ( ++v19 == v20 )
                  goto LABEL_33;
              }
              break;
            }
          }
          v21 = *(_DWORD *)(a1 + 176);
          v22 = *(_QWORD *)(a1 + 168);
          if ( v22 < (unsigned __int64)v20 )
          {
            v23 = sub_14003FD60(*(void **)(a1 + 160), v22);
            v24 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v20);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, v23, v24, v21);
            *(_QWORD *)(a1 + 168) = v20;
            v20 = Str1;
          }
          Str1 = sub_14006CA14((__int64)v20, 0);
          sub_14003ED40(a1, v4, (unsigned __int64)Str1, *(_DWORD *)(a1 + 128));
          if ( *(Str1 - 1) == *(_BYTE *)(a1 + 184) )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, 16);
            *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 128);
          }
          else
          {
            *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
          }
          v3 = a3;
          continue;
        }
        break;
      }
      v98 = Str1;
      v25 = sub_1400615C0((unsigned __int8 **)&v98);
      if ( v25 != *(char *)(a1 + 182) && v25 != *(char *)(a1 + 180) )
      {
        v26 = *(_QWORD *)(a1 + 72);
        if ( v26 > 1 && !strncmp(Str1, *(const char **)(a1 + 64), v26 - 1) )
        {
          sub_14003ED40(a1, v4, (unsigned __int64)Str1, *(_DWORD *)(a1 + 176));
          Str1 = sub_14006CA14((__int64)Str1, 0);
          sub_14003ED40(a1, v4, (unsigned __int64)Str1, *(_DWORD *)(a1 + 120));
          *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
          continue;
        }
        v27 = Str1;
        v97 = Str1;
        v28 = (unsigned int)sub_1400615C0((unsigned __int8 **)&v97) - 65;
        if ( (unsigned int)v28 <= 0x39 && _bittest64(&v9, v28) )
        {
          do
          {
            do
            {
              v29 = (unsigned __int8 *)v97;
              v30 = sub_1400615C0((unsigned __int8 **)&v97);
              v31 = (unsigned int)(v30 - 65);
            }
            while ( (unsigned int)v31 <= 0x39 && _bittest64(&v9, v31) );
          }
          while ( (unsigned int)(v30 - 48) <= 9 );
          v32 = (unsigned __int8 *)(v29 - (unsigned __int8 *)v27);
        }
        else
        {
          v32 = nullptr;
        }
        v91 = (char *)v32;
        if ( v32 )
        {
          v33 = nullptr;
          v92 = nullptr;
          v93 = nullptr;
          v94 = 0;
          if ( v32 != (unsigned __int8 *)-1LL )
          {
            v92 = (char *)sub_14005ABE0((__int64)&v92, nullptr, (unsigned __int64)(v32 + 1), 1u);
            memset(&v93[(_QWORD)v92], 0, v32 + 1 - v93);
            v93 = v32 + 1;
            v33 = v92;
          }
          v32[(_QWORD)v33] = 0;
          sub_1400621E0(v92, Str1, (__int64)(v32 + 1));
          v34 = *(_DWORD *)(a1 + 176);
          LODWORD(v95) = v34;
          v105 = v34;
          v35 = *(_QWORD **)(a1 + 136);
          v36 = &v35[*(_QWORD *)(a1 + 144)];
          if ( v35 != v36 )
          {
            do
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *, char **))(*(_QWORD *)*v35 + 16LL))(
                     *v35,
                     &v105,
                     &v92) )
              {
                break;
              }
              ++v35;
            }
            while ( v35 != v36 );
            v34 = v105;
            LODWORD(v95) = v105;
          }
          v37 = v92;
          if ( *(_DWORD *)(a1 + 176) == v34 )
          {
            v38 = 0;
            if ( *(_QWORD *)(a1 + 48) )
            {
              v39 = *(_QWORD *)(a1 + 40);
              while ( 1 )
              {
                v40 = ::Str1;
                if ( v93 )
                  v40 = v37;
                v41 = *(const char ***)v39;
                v42 = *(_QWORD *)v39 + 8LL * *(_QWORD *)(v39 + 8);
                if ( *(_QWORD *)v39 != v42 )
                  break;
LABEL_67:
                ++v38;
                v39 += 32;
                if ( (unsigned __int64)v38 >= *(_QWORD *)(a1 + 48) )
                {
                  v34 = (unsigned int)v95;
                  goto LABEL_69;
                }
              }
              while ( strcmp(v40, *v41) )
              {
                if ( ++v41 == (const char **)v42 )
                  goto LABEL_67;
              }
              v34 = *(_DWORD *)(v39 + 24);
              v105 = v34;
            }
LABEL_69:
            v32 = (unsigned __int8 *)v91;
          }
          v43 = *(_DWORD *)(a1 + 176);
          if ( v43 != v34 )
          {
            v44 = Str1;
            v45 = *(_QWORD *)(a1 + 168);
            if ( v45 < (unsigned __int64)Str1 )
            {
              v46 = sub_14003FD60(*(void **)(a1 + 160), v45);
              v47 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v44);
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, v46, v47, v43);
              *(_QWORD *)(a1 + 168) = v44;
              v45 = (unsigned __int64)v44;
              v44 = Str1;
              v37 = v92;
              v34 = v105;
            }
            v48 = &v44[(_QWORD)v32];
            Str1 = v48;
            if ( v45 >= (unsigned __int64)v48 )
            {
              v4 = a2;
            }
            else
            {
              v49 = sub_14003FD60(*(void **)(a1 + 160), v45);
              v50 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v48);
              v4 = a2;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, v49, v50, v34);
              *(_QWORD *)(a1 + 168) = v48;
              v37 = v92;
            }
            if ( v37 )
            {
              v93 = nullptr;
              j_free(v37);
              v92 = nullptr;
              v94 = 0;
            }
            v3 = a3;
            goto LABEL_10;
          }
          if ( v37 )
          {
            v93 = nullptr;
            j_free(v37);
            v92 = nullptr;
            v94 = 0;
          }
          v9 = 0x3FFFFFF43FFFFFFLL;
        }
        v51 = sub_14003EE50(v100, (__int64)v99, (unsigned __int8 *)Str1);
        if ( v51 )
        {
          v52 = *(_DWORD *)(a1 + 176);
          v53 = Str1;
          v54 = *(_QWORD *)(a1 + 168);
          if ( v54 >= (unsigned __int64)Str1 )
          {
            v4 = a2;
          }
          else
          {
            v55 = sub_14003FD60(*(void **)(a1 + 160), v54);
            v56 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v53);
            v4 = a2;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, v55, v56, v52);
            *(_QWORD *)(a1 + 168) = v53;
          }
          sub_140061BD0((unsigned __int8 **)&Str1, v51);
          v57 = Str1;
          v58 = *(_QWORD *)(a1 + 168);
          v3 = a3;
          if ( v58 < (unsigned __int64)Str1 )
          {
            v59 = sub_14003FD60(*(void **)(a1 + 160), v58);
            v60 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v57);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 8LL))(v4, v59, v60, 7);
            *(_QWORD *)(a1 + 168) = v57;
          }
        }
        else
        {
          v61 = *(_QWORD **)(a1 + 136);
          for ( i = &v61[*(_QWORD *)(a1 + 144)]; v61 != i; ++v61 )
          {
            v63 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, char *))(*(_QWORD *)*v61 + 8LL))(*v61, &v96, Str1);
            if ( v63 > 0 )
            {
              v64 = *(_DWORD *)(a1 + 176);
              v65 = Str1;
              v66 = *(_QWORD *)(a1 + 168);
              if ( v66 >= (unsigned __int64)Str1 )
              {
                v70 = a2;
              }
              else
              {
                v67 = sub_14003FD60(*(void **)(a1 + 160), v66);
                v68 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v65);
                v69 = v64;
                v70 = a2;
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 8LL))(a2, v67, v68, v69);
                *(_QWORD *)(a1 + 168) = v65;
              }
              sub_140061BD0((unsigned __int8 **)&Str1, v63);
              v71 = v96;
              v72 = Str1;
              v73 = *(_QWORD *)(a1 + 168);
              if ( v73 < (unsigned __int64)Str1 )
              {
                v74 = sub_14003FD60(*(void **)(a1 + 160), v73);
                v75 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v72);
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v70 + 8LL))(v70, v74, v75, v71);
                *(_QWORD *)(a1 + 168) = v72;
              }
              *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
            }
          }
          if ( v91 )
          {
            Str1 = &Str1[(_QWORD)v91];
          }
          else
          {
            while ( 1 )
            {
              v101 = Str1;
              v76 = sub_1400615C0((unsigned __int8 **)&v101);
              if ( (unsigned int)(v76 - 97) > 0x19
                && (unsigned int)(v76 - 65) > 0x19
                && (unsigned int)(v76 - 48) > 9
                && v76 != 46 )
              {
                break;
              }
              if ( (unsigned int)sub_1400615C0((unsigned __int8 **)&Str1) == -1 )
                ++Str1;
            }
          }
          v4 = a2;
          v3 = a3;
          v9 = 0x3FFFFFF43FFFFFFLL;
          if ( v102 == Str1 && (unsigned int)sub_1400615C0((unsigned __int8 **)&Str1) == -1 )
            ++Str1;
        }
        continue;
      }
      break;
    }
    *(_BYTE *)(a1 + 112) = v25;
    v77 = *(_DWORD *)(a1 + 176);
    v78 = Str1;
    v79 = *(_QWORD *)(a1 + 168);
    if ( v79 < (unsigned __int64)Str1 )
    {
      v80 = sub_14003FD60(*(void **)(a1 + 160), v79);
      v81 = sub_14003FD60(*(void **)(a1 + 168), (unsigned __int64)v78);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, v80, v81, v77);
      *(_QWORD *)(a1 + 168) = v78;
    }
    v82 = sub_1400615C0((unsigned __int8 **)&Str1);
    v83 = (unsigned __int8 *)Str1;
    if ( v82 == -1 )
      v83 = (unsigned __int8 *)++Str1;
    v84 = *(char *)(a1 + 112);
    v90 = (char *)v83;
    do
    {
      while ( 1 )
      {
        v85 = v83;
        v86 = sub_1400615C0((unsigned __int8 **)&v90);
        v83 = (unsigned __int8 *)v90;
        if ( v86 == -1 )
        {
          v86 = *v90;
          v83 = (unsigned __int8 *)++v90;
        }
        if ( !v86 )
        {
LABEL_121:
          v88 = (char *)v85;
          goto LABEL_126;
        }
        if ( v86 != *(char *)(a1 + 184) )
          break;
        v85 = v83;
        v87 = sub_1400615C0((unsigned __int8 **)&v90);
        v83 = (unsigned __int8 *)v90;
        if ( v87 == -1 )
        {
          v87 = *v90;
          v83 = (unsigned __int8 *)++v90;
        }
        if ( !v87 )
          goto LABEL_121;
      }
    }
    while ( v86 != v84 );
    sub_14003ED40(a1, v4, (unsigned __int64)v83, *(_DWORD *)(a1 + 124));
    Str1 = v90;
    if ( v90 )
    {
      v3 = a3;
      continue;
    }
    break;
  }
}
// 14003F48D: conditional instruction was optimized away because al.1>=0
