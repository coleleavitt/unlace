__int64 __fastcall sub_791180(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rbp
  char v8; // dl
  char v9; // al
  __int64 *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // r14
  bool v15; // zf
  __int64 v16; // rax
  int v17; // edx
  _QWORD *v18; // rax
  __int64 *v19; // rbp
  unsigned __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // rsi
  unsigned int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  __int64 *v30; // rax
  _QWORD *v31; // rbp
  int v32; // edx
  unsigned int v33; // ecx
  __int64 v34; // r15
  _DWORD *v35; // rax
  unsigned int v36; // edx
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rax
  char v40; // r14
  __int64 *v41; // r14
  unsigned __int64 v42; // r15
  __int64 v43; // rsi
  char *v44; // rdi
  int v45; // ecx
  char *v46; // rdx
  unsigned int v47; // esi
  unsigned int v48; // ebx
  __int64 v49; // rbp
  void *v50; // rcx
  char *v51; // rdi
  int v52; // ecx
  __int64 v53; // rsi
  char *v54; // rdx
  unsigned int v55; // ebx
  __int64 v56; // rbp
  _QWORD *v57; // rdx
  char *v58; // rdi
  int v59; // edx
  __int64 v60; // rsi
  char *v61; // rcx
  unsigned int v62; // ebx
  unsigned int v63; // ebx
  _QWORD *v64; // rdx
  _QWORD *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // edx
  __int64 *v69; // rax
  __int64 v70; // rax
  unsigned int v71; // ebp
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rax
  int v75; // ecx
  _QWORD *v76; // rax
  char **exception; // rbp
  char **v78; // rbp
  __int64 *v79; // [rsp+0h] [rbp-B8h]
  _QWORD *v80; // [rsp+0h] [rbp-B8h]
  unsigned int v82; // [rsp+10h] [rbp-A8h]
  __int64 v83; // [rsp+10h] [rbp-A8h]
  __int64 v84; // [rsp+10h] [rbp-A8h]
  __int64 v85; // [rsp+18h] [rbp-A0h]
  __int64 v86; // [rsp+20h] [rbp-98h]
  unsigned int i; // [rsp+28h] [rbp-90h]
  unsigned int v88; // [rsp+2Ch] [rbp-8Ch]
  _QWORD *v89; // [rsp+48h] [rbp-70h] BYREF
  __int64 v90; // [rsp+50h] [rbp-68h]
  __int64 v91[11]; // [rsp+60h] [rbp-58h] BYREF

  sub_7E7480(a2, a1 + 168);
  result = *(_QWORD *)(a1 + 8);
  v7 = a2[9];
  v8 = *(_BYTE *)(a1 + 273);
  v85 = result;
  if ( !v7 )
  {
    v89 = nullptr;
    v90 = result;
    if ( !v8 )
      goto LABEL_90;
    sub_789F10(a1);
    goto LABEL_169;
  }
  v9 = *(_BYTE *)(v7 + 3) >> 6;
  if ( !v9 )
  {
    do
    {
      v7 = *(_QWORD *)(v7 + 16);
      v9 = *(_BYTE *)(v7 + 3) >> 6;
    }
    while ( !v9 );
    if ( v9 != 1 )
      goto LABEL_4;
LABEL_166:
    v88 = *(_DWORD *)(v7 + 4) + 1;
    goto LABEL_6;
  }
  if ( v9 == 1 )
    goto LABEL_166;
LABEL_4:
  if ( v9 == 2 )
    v88 = *(_DWORD *)(v7 + 4) - 1;
  else
    v88 = *(_DWORD *)(v7 + 4);
LABEL_6:
  v89 = nullptr;
  result = v85;
  v90 = v85;
  if ( !v8 )
  {
    if ( !v88 )
      goto LABEL_90;
    goto LABEL_8;
  }
  sub_789F10(a1);
  v3 = v88;
  if ( !v88 )
  {
LABEL_169:
    result = (__int64)v89;
    goto LABEL_90;
  }
LABEL_8:
  v86 = 0;
  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  for ( i = 0; i < v88; ++i )
  {
    v13 = *a2;
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v14 = *(_QWORD *)(v13 + 864);
      goto LABEL_11;
    }
    v67 = a2[9];
    v68 = 17;
    while ( 1 )
    {
      v3 = *(unsigned __int8 *)(v67 + 3);
      if ( (v3 & 0x80u) != 0LL )
      {
        if ( *(_BYTE *)(v67 + 3) >> 6 != 2 )
        {
          v69 = (__int64 *)(*(_QWORD *)(v67 + 16) + v86);
          goto LABEL_151;
        }
        goto LABEL_153;
      }
      v3 = i;
      if ( i == *(_DWORD *)(v67 + 4) )
        break;
LABEL_153:
      v67 = *(_QWORD *)(v67 + 16);
      if ( !--v68 )
      {
        sub_233F80((__int64 *)(v13 + 616), (_DWORD *)a2 + 18);
        v69 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + v86);
        goto LABEL_151;
      }
    }
    v69 = (__int64 *)(v67 + 8);
LABEL_151:
    v14 = *v69;
LABEL_11:
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    if ( v12 )
    {
      v15 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v85, v12);
    }
    if ( (*((_BYTE *)a2 + 123) & 0x10) == 0 )
      goto LABEL_68;
    v16 = a2[13];
    v79 = a2 + 13;
    v17 = 17;
    while ( 2 )
    {
      v3 = *(unsigned __int8 *)(v16 + 3);
      if ( (v3 & 0x80u) != 0LL )
      {
        if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
        {
          v18 = (_QWORD *)(*(_QWORD *)(v16 + 16) + v86);
          goto LABEL_21;
        }
        goto LABEL_66;
      }
      if ( i != *(_DWORD *)(v16 + 4) )
      {
LABEL_66:
        v16 = *(_QWORD *)(v16 + 16);
        if ( !--v17 )
        {
          sub_236900((_QWORD *)(*a2 + 672), v79);
          v3 = *(_QWORD *)(a2[13] + 16) + v86;
          if ( !*(_QWORD *)v3 )
            goto LABEL_68;
LABEL_22:
          if ( v89 )
            *((_DWORD *)v89 - 1) = 0;
          if ( v10 )
          {
            v19 = v10;
            v20 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
            if ( (unsigned __int64)v10 < v20 )
            {
              do
              {
                while ( 1 )
                {
                  v21 = *v19;
                  if ( *v19 )
                  {
                    v15 = (*(_DWORD *)(v21 + 8))-- == 1;
                    if ( v15 )
                      break;
                  }
                  if ( (unsigned __int64)++v19 >= v20 )
                    goto LABEL_31;
                }
                sub_15D7BC0(v85, v21);
                ++v19;
              }
              while ( (unsigned __int64)v19 < v20 );
            }
LABEL_31:
            *((_DWORD *)v10 - 1) = 0;
          }
          v22 = *(_QWORD *)(a1 + 8);
          if ( (*((_BYTE *)a2 + 123) & 0x10) == 0 )
          {
            v26 = 0;
            goto LABEL_38;
          }
          v23 = a2[13];
          v24 = 17;
          while ( 1 )
          {
            if ( *(char *)(v23 + 3) >= 0 )
            {
              if ( i == *(_DWORD *)(v23 + 4) )
              {
                v25 = (__int64 *)(v23 + 8);
LABEL_37:
                v26 = *v25;
LABEL_38:
                sub_15D6A80(v22, v26, &v89);
                if ( v14 )
                  ++*(_DWORD *)(v14 + 8);
                if ( v10 )
                {
                  v27 = *((_DWORD *)v10 - 1);
                  if ( v27 == *((_DWORD *)v10 - 2) )
                  {
                    v71 = (3 * v27 + 1) >> 1;
                    v72 = 8 * v71 + 8;
                    if ( 8 * v27 + 8 >= (unsigned int)v72 || v27 >= v71 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v91, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v91);
                      sub_233E40((__int64)v91);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v73 = (unsigned int *)sub_186B300(v10 - 1, v72);
                    v10 = (__int64 *)(v73 + 2);
                    *v73 = v71;
                    v74 = v73[1];
                    v75 = v74;
                    v30 = &v10[v74];
                    v29 = v75 + 1;
                  }
                  else
                  {
                    v28 = v27;
                    v29 = v27 + 1;
                    v30 = &v10[v28];
                  }
                }
                else
                {
                  v76 = (_QWORD *)sub_186B270(0x18u);
                  v10 = v76 + 1;
                  *v76 = 2;
                  v29 = 1;
                  v30 = v76 + 1;
                }
                v31 = v89;
                *v30 = v14;
                *((_DWORD *)v10 - 1) = v29;
                if ( !v31 || (v80 = &v31[*((unsigned int *)v31 - 1)], v80 == v31) )
                {
LABEL_155:
                  v70 = sub_15E1AF0(*(_QWORD *)(a1 + 8));
                  v12 = v70;
                  if ( v70 )
                    ++*(_DWORD *)(v70 + 8);
                  if ( v14 )
                  {
                    v15 = (*(_DWORD *)(v14 + 8))-- == 1;
                    if ( v15 )
                      sub_15D7BC0(v85, v14);
                  }
                  goto LABEL_69;
                }
                while ( 2 )
                {
                  v34 = *v31;
                  if ( !*(_WORD *)(*v31 + 4LL)
                    && (v35 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL)) != nullptr
                    && !*v35
                    && v35[1] == 8
                    && *(_DWORD *)(v34 + 24) == 1 )
                  {
                    v84 = *(_QWORD *)(v34 + 32);
                    sub_7906C0(a1, *v31, v84, 1);
                    v66 = v84;
                    if ( v34 == v14 )
                    {
LABEL_143:
                      v12 = v14;
                      goto LABEL_73;
                    }
                  }
                  else
                  {
                    sub_7906C0(a1, *v31, *v31, 0);
                    if ( v34 == v14 )
                      goto LABEL_143;
                    v66 = sub_15E1A70(*(_QWORD *)(a1 + 8));
                  }
                  if ( v66 )
                  {
                    v32 = *(_DWORD *)(v66 + 8) + 1;
                    *(_DWORD *)(v66 + 8) = v32;
                    if ( v11 )
                    {
                      v15 = (*(_DWORD *)(v11 + 8))-- == 1;
                      if ( v15 )
                      {
                        v83 = v66;
                        sub_15D7BC0(v85, v11);
                        v66 = v83;
                      }
                      v32 = *(_DWORD *)(v66 + 8);
                      v11 = v66;
                    }
                    else
                    {
                      v11 = v66;
                    }
                    *(_DWORD *)(v66 + 8) = v32 + 1;
                    v33 = *((_DWORD *)v10 - 1);
                    if ( v33 == *((_DWORD *)v10 - 2) )
                    {
LABEL_62:
                      v36 = (3 * v33 + 1) >> 1;
                      v37 = 8 * v36 + 8;
                      if ( 8 * v33 + 8 >= (unsigned int)v37 || v33 >= v36 )
                      {
                        v78 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v91, "Overflow encountered when expanding vector");
                        *v78 = (char *)off_1C63128;
                        sub_2333C0(v78 + 1, v91);
                        sub_233E40((__int64)v91);
                        __cxa_throw(
                          v78,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v82 = (3 * v33 + 1) >> 1;
                      v38 = (unsigned int *)sub_186B300(v10 - 1, v37);
                      v33 = v38[1];
                      v10 = (__int64 *)(v38 + 2);
                      *v38 = v82;
                    }
                  }
                  else
                  {
                    if ( v11 )
                    {
                      v15 = (*(_DWORD *)(v11 + 8))-- == 1;
                      if ( v15 )
                        sub_15D7BC0(v85, v11);
                    }
                    v33 = *((_DWORD *)v10 - 1);
                    v11 = 0;
                    if ( v33 == *((_DWORD *)v10 - 2) )
                      goto LABEL_62;
                  }
                  ++v31;
                  v10[v33] = v11;
                  *((_DWORD *)v10 - 1) = v33 + 1;
                  if ( v80 == v31 )
                    goto LABEL_155;
                  continue;
                }
              }
            }
            else if ( *(_BYTE *)(v23 + 3) >> 6 != 2 )
            {
              v25 = (__int64 *)(*(_QWORD *)(v23 + 16) + v86);
              goto LABEL_37;
            }
            v23 = *(_QWORD *)(v23 + 16);
            if ( !--v24 )
            {
              sub_236900((_QWORD *)(*a2 + 672), v79);
              v25 = (__int64 *)(*(_QWORD *)(a2[13] + 16) + v86);
              goto LABEL_37;
            }
          }
        }
        continue;
      }
      break;
    }
    v18 = (_QWORD *)(v16 + 8);
LABEL_21:
    if ( *v18 )
      goto LABEL_22;
LABEL_68:
    v12 = v14;
LABEL_69:
    v39 = *(_QWORD *)(a1 + 88);
    v40 = *(_BYTE *)(a1 + 274);
    *(_BYTE *)(a1 + 274) = 1;
    if ( v39 && *(_DWORD *)(v39 - 4) )
    {
      sub_1872CE0("");
      sub_1873130(114, 891);
    }
    sub_78F200(a1, v12, 1u, v3, v4, v5);
    *(_BYTE *)(a1 + 274) = v40;
LABEL_73:
    v86 += 8;
  }
  if ( v10 )
  {
    v41 = v10;
    v42 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v42 )
    {
      do
      {
        while ( 1 )
        {
          v43 = *v41;
          if ( *v41 )
          {
            v15 = (*(_DWORD *)(v43 + 8))-- == 1;
            if ( v15 )
              break;
          }
          if ( (unsigned __int64)++v41 >= v42 )
            goto LABEL_81;
        }
        ++v41;
        sub_15D7BC0(v85, v43);
      }
      while ( (unsigned __int64)v41 < v42 );
    }
LABEL_81:
    sub_186B220(v10 - 1);
  }
  result = (__int64)v89;
  if ( v89 )
    result = sub_186B220(v89 - 1);
  if ( v11 )
  {
    v15 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v85, v11);
  }
  if ( v12 )
  {
    v15 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v85, v12);
  }
LABEL_90:
  if ( *(_DWORD *)(a1 + 180) || *(_DWORD *)(a1 + 184) )
  {
    v44 = *(char **)(a1 + 168);
    v45 = 0;
    v46 = &v44[8 * *(unsigned int *)(a1 + 176)];
    v47 = *(_DWORD *)(a1 + 176);
    result = *(_QWORD *)(a1 + 168);
    if ( v44 != v46 )
    {
      do
      {
        while ( *(_QWORD *)result )
        {
          *(_QWORD *)result = 0;
          result += 8;
          if ( v46 == (char *)result )
            goto LABEL_97;
        }
        result += 8;
        ++v45;
      }
      while ( v46 != (char *)result );
LABEL_97:
      if ( v47 > 0x10 )
      {
        result = 3 * v47;
        if ( (unsigned int)result < 4 * v45 )
        {
          if ( v44 )
          {
            sub_186B220(v44);
            v48 = *(_DWORD *)(a1 + 176);
            *(_QWORD *)(a1 + 168) = 0;
            v48 >>= 1;
            *(_DWORD *)(a1 + 176) = v48;
            v49 = v48;
            result = sub_186B270(8LL * v48);
            v50 = (void *)result;
            if ( v48 )
              goto LABEL_101;
          }
          else
          {
            *(_QWORD *)(a1 + 168) = 0;
            *(_DWORD *)(a1 + 176) = v47 >> 1;
            v49 = v47 >> 1;
            v50 = (void *)sub_186B270(8 * v49);
LABEL_101:
            result = (__int64)memset(v50, 0, 8 * v49);
            v50 = (void *)result;
          }
          *(_QWORD *)(a1 + 168) = v50;
        }
      }
    }
    *(_QWORD *)(a1 + 180) = 0;
  }
  if ( *(_DWORD *)(a1 + 108) || *(_DWORD *)(a1 + 112) )
  {
    v51 = *(char **)(a1 + 96);
    v52 = 0;
    v53 = *(unsigned int *)(a1 + 104);
    result = (__int64)v51;
    v54 = &v51[16 * v53];
    if ( v51 != v54 )
    {
      do
      {
        while ( *(_QWORD *)result )
        {
          *(_QWORD *)result = 0;
          result += 16;
          if ( v54 == (char *)result )
            goto LABEL_111;
        }
        result += 16;
        ++v52;
      }
      while ( v54 != (char *)result );
LABEL_111:
      if ( (unsigned int)v53 > 0x10 )
      {
        result = (unsigned int)(3 * v53);
        if ( (unsigned int)result < 4 * v52 )
        {
          if ( !v51 )
          {
            *(_QWORD *)(a1 + 96) = 0;
            v56 = (unsigned int)v53 >> 1;
            *(_DWORD *)(a1 + 104) = (unsigned int)v53 >> 1;
            result = sub_186B270(16 * v56);
            goto LABEL_115;
          }
          sub_186B220(v51);
          v55 = *(_DWORD *)(a1 + 104);
          *(_QWORD *)(a1 + 96) = 0;
          v55 >>= 1;
          v56 = v55;
          *(_DWORD *)(a1 + 104) = v55;
          result = sub_186B270(16LL * v55);
          if ( v55 )
          {
LABEL_115:
            v57 = (_QWORD *)result;
            do
            {
              *v57 = 0;
              v57 += 2;
              *((_DWORD *)v57 - 2) = -2;
            }
            while ( v57 != (_QWORD *)(result + 16 * v56) );
          }
          *(_QWORD *)(a1 + 96) = result;
        }
      }
    }
    *(_QWORD *)(a1 + 108) = 0;
  }
  if ( *(_DWORD *)(a1 + 132) || *(_DWORD *)(a1 + 136) )
  {
    v58 = *(char **)(a1 + 120);
    v59 = 0;
    v60 = *(unsigned int *)(a1 + 128);
    v61 = &v58[24 * v60];
    result = (__int64)v58;
    if ( v58 != v61 )
    {
      do
      {
        while ( *(_DWORD *)(result + 4) )
        {
          *(_DWORD *)(result + 4) = 0;
          result += 24;
          if ( v61 == (char *)result )
            goto LABEL_126;
        }
        result += 24;
        ++v59;
      }
      while ( v61 != (char *)result );
LABEL_126:
      if ( (unsigned int)v60 > 0x10 )
      {
        result = (unsigned int)(3 * v60);
        if ( (unsigned int)result < 4 * v59 )
        {
          if ( !v58 )
          {
            *(_QWORD *)(a1 + 120) = 0;
            v63 = (unsigned int)v60 >> 1;
            *(_DWORD *)(a1 + 128) = (unsigned int)v60 >> 1;
            result = sub_186B270(24LL * ((unsigned int)v60 >> 1));
            goto LABEL_131;
          }
          sub_186B220(v58);
          v62 = *(_DWORD *)(a1 + 128);
          *(_QWORD *)(a1 + 120) = 0;
          v63 = v62 >> 1;
          *(_DWORD *)(a1 + 128) = v63;
          result = sub_186B270(24LL * v63);
          if ( v63 )
          {
            if ( v63 == 1 )
            {
              v65 = (_QWORD *)result;
LABEL_135:
              *v65 = 0;
            }
            else
            {
LABEL_131:
              v64 = (_QWORD *)result;
              do
              {
                *v64 = 0;
                v64 += 6;
                *(v64 - 3) = 0;
              }
              while ( (_QWORD *)(result + 48LL * (v63 >> 1)) != v64 );
              if ( (v63 & 1) != 0 )
              {
                v65 = (_QWORD *)(result + 24LL * (v63 & 0x7FFFFFFE));
                goto LABEL_135;
              }
            }
          }
          *(_QWORD *)(a1 + 120) = result;
        }
      }
    }
    *(_QWORD *)(a1 + 132) = 0;
  }
  return result;
}

