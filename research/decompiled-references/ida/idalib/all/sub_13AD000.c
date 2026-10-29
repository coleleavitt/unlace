unsigned __int64 __fastcall sub_13AD000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int *a5,
        __int64 a6,
        char *s,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 result; // rax
  size_t v13; // rax
  char *v14; // rdx
  char v15; // al
  unsigned int v16; // ebx
  __int64 v17; // rdi
  _BYTE *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  bool v21; // zf
  _BYTE *v22; // rax
  __int64 v23; // rax
  char v24; // bl
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  _WORD *v28; // rdx
  char v29; // dl
  _BYTE *v30; // rax
  _BYTE *v31; // rax
  char *v32; // rax
  unsigned __int64 v33; // rcx
  _DWORD *v34; // rdx
  int v35; // eax
  _DWORD *v36; // rbp
  int *v37; // r12
  int v38; // r13d
  int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // esi
  int v44; // edx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 i; // rdx
  unsigned __int64 v51; // rdx
  __int64 v52; // rdi
  char *v53; // rdx
  char *v54; // rax
  bool v55; // cf
  unsigned int v56; // esi
  int v57; // eax
  __int64 v58; // r13
  _BYTE *v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r13
  _BYTE *v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r13
  _BYTE *v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r13
  _BYTE *v80; // rax
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rax
  _BYTE *v84; // rdx
  int v85; // eax
  unsigned __int64 v86; // [rsp+0h] [rbp-98h]
  int v87; // [rsp+8h] [rbp-90h]
  char v88; // [rsp+Ch] [rbp-8Ch]
  int v89; // [rsp+Ch] [rbp-8Ch]
  __int64 v90; // [rsp+20h] [rbp-78h] BYREF
  _DWORD *v91; // [rsp+28h] [rbp-70h]
  unsigned __int64 v92; // [rsp+34h] [rbp-64h]
  int v93; // [rsp+3Ch] [rbp-5Ch]
  int v94; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v95; // [rsp+48h] [rbp-50h]
  int v96; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v97; // [rsp+58h] [rbp-40h]

  v90 = a2;
  v91 = (_DWORD *)a3;
  if ( s )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)result & 0x40) == 0 )
      return result;
    if ( (*(_BYTE *)(result + 2) & 4) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 40) + 24LL))(
        *(_QWORD *)(a1 + 40),
        16,
        1,
        0);
    v13 = strlen(s);
    sub_13ACD70(a1, s, v13, (__int64)v91);
    v14 = *(char **)(a1 + 16);
    v15 = ((unsigned __int8)v14[40] >> 1) & 3;
    if ( v15 == 1 )
    {
      v27 = *(_QWORD *)(a1 + 40);
      v31 = *(_BYTE **)(v27 + 32);
      if ( (unsigned __int64)v31 >= *(_QWORD *)(v27 + 24) )
      {
        v27 = sub_227BA10(v27, 40);
      }
      else
      {
        *(_QWORD *)(v27 + 32) = v31 + 1;
        *v31 = 40;
      }
    }
    else if ( v15 == 2 )
    {
      v27 = *(_QWORD *)(a1 + 40);
      v28 = *(_WORD **)(v27 + 32);
      if ( *(_QWORD *)(v27 + 24) - (_QWORD)v28 > 1u )
      {
        *v28 = 11040;
        *(_QWORD *)(v27 + 32) += 2LL;
      }
      else
      {
        v27 = sub_227BF10(v27, " +", 2);
      }
    }
    else
    {
      v29 = *v14;
      if ( (v29 & 0x10) == 0 )
      {
LABEL_8:
        if ( (v29 & 0x20) != 0 )
        {
          v16 = a9;
          if ( a9 )
          {
            v17 = *(_QWORD *)(a1 + 40);
            v18 = *(_BYTE **)(v17 + 32);
            v19 = *(_QWORD *)(v17 + 24);
            if ( v15 == 1 )
            {
              if ( (unsigned __int64)v18 >= v19 )
              {
                sub_227BA10(v17, 44);
              }
              else
              {
                *(_QWORD *)(v17 + 32) = v18 + 1;
                *v18 = 44;
              }
              v16 = (__PAIR64__(a9, *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL) - 1) - 169999999) >> 32;
            }
            else if ( (unsigned __int64)v18 >= v19 )
            {
              sub_227BA10(v17, 58);
            }
            else
            {
              *(_QWORD *)(v17 + 32) = v18 + 1;
              *v18 = 58;
            }
            sub_227B910(*(_QWORD *)(a1 + 40), v16);
            v15 = (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 40LL) >> 1) & 3;
          }
        }
        v20 = *(_QWORD *)(a1 + 40);
        v21 = v15 == 1;
        v22 = *(_BYTE **)(v20 + 32);
        if ( v21 )
        {
          if ( (unsigned __int64)v22 >= *(_QWORD *)(v20 + 24) )
          {
            sub_227BA10(v20, 41);
          }
          else
          {
            *(_QWORD *)(v20 + 32) = v22 + 1;
            *v22 = 41;
          }
          v20 = *(_QWORD *)(a1 + 40);
          v22 = *(_BYTE **)(v20 + 32);
          v33 = *(_QWORD *)(v20 + 24);
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL) - 1) <= 0xB532B7E )
          {
            if ( v33 <= (unsigned __int64)v22 )
            {
              sub_227BA10(v20, 32);
            }
            else
            {
              *(_QWORD *)(v20 + 32) = v22 + 1;
              *v22 = 32;
            }
            v20 = *(_QWORD *)(a1 + 40);
            v22 = *(_BYTE **)(v20 + 32);
            v33 = *(_QWORD *)(v20 + 24);
          }
          if ( (unsigned __int64)v22 < v33 )
            goto LABEL_16;
        }
        else if ( (unsigned __int64)v22 < *(_QWORD *)(v20 + 24) )
        {
LABEL_16:
          *(_QWORD *)(v20 + 32) = v22 + 1;
          *v22 = 58;
          v23 = *(_QWORD *)(a1 + 16);
LABEL_17:
          v24 = (a6 != 0) & (*(_BYTE *)(v23 + 1) >> 3);
          if ( v24 )
          {
            v96 = sub_101B2B0((__int64)&v90);
            v97 = v34;
            v35 = sub_101B270((__int64)&v96);
            v36 = v91;
            v88 = 0;
            v87 = v35;
            v37 = &a5[3 * a6];
            if ( v37 != a5 )
            {
              do
              {
                v38 = *a5;
                if ( *a5 )
                {
                  v39 = a5[1];
                  if ( v39 )
                  {
                    if ( v38 < 0 )
                    {
                      v85 = sub_10212A0((__int64)v36, v38);
                      v39 = a5[1];
                      v38 = v85;
                    }
                    v92 = sub_101FD20((__int64)v36, v39);
                    v43 = v38 & 0x7FFFFFFF;
                    v93 = v44;
                    v86 = HIDWORD(v92);
                    if ( (v38 & 0x7FFFFFFFu) < v36[119] || v43 >= v36[120] )
                      v45 = sub_101D590((__int64)v36, v43);
                    else
                      v45 = v36[118];
                    if ( v45 == v87 )
                    {
                      v56 = v86 & 0x7FFFFFFF;
                      if ( (v86 & 0x7FFFFFFF) < v36[119] || v56 >= v36[120] )
                        v57 = sub_101D590((__int64)v36, v56);
                      else
                        v57 = v36[118];
                      if ( v57 == v87 )
                      {
                        if ( (_BYTE)v93 )
                          v89 = sub_13DC0F0((unsigned int)v86, v36, *(_QWORD *)(a1 + 8));
                        else
                          v89 = 0;
                        v94 = v38;
                        v58 = *(_QWORD *)(a1 + 40);
                        v95 = v36;
                        v96 = v86;
                        v97 = v36;
                        v59 = *(_BYTE **)(v58 + 32);
                        if ( (unsigned __int64)v59 >= *(_QWORD *)(v58 + 24) )
                        {
                          v58 = sub_227BA10(v58, 123);
                        }
                        else
                        {
                          v60 = (__int64)(v59 + 1);
                          *(_QWORD *)(v58 + 32) = v59 + 1;
                          *v59 = 123;
                        }
                        v61 = sub_101B500((__int64)&v94, 0, v60, v40, v41, v42);
                        v65 = sub_227B910(v58, v61);
                        v66 = *(_BYTE **)(v65 + 32);
                        if ( (unsigned __int64)v66 >= *(_QWORD *)(v65 + 24) )
                        {
                          v65 = sub_227BA10(v65, 58);
                        }
                        else
                        {
                          v67 = (__int64)(v66 + 1);
                          *(_QWORD *)(v65 + 32) = v66 + 1;
                          *v66 = 58;
                        }
                        v68 = sub_101BC00((__int64)&v94, 0, v67, v62, v63, v64);
                        v72 = sub_227B910(v65, v68);
                        v73 = *(_BYTE **)(v72 + 32);
                        if ( (unsigned __int64)v73 >= *(_QWORD *)(v72 + 24) )
                        {
                          v72 = sub_227BA10(v72, 45);
                        }
                        else
                        {
                          v74 = (__int64)(v73 + 1);
                          *(_QWORD *)(v72 + 32) = v73 + 1;
                          *v73 = 45;
                        }
                        v75 = sub_101B500((__int64)&v96, 0, v74, v69, v70, v71);
                        v79 = sub_227B910(v72, v75);
                        v80 = *(_BYTE **)(v79 + 32);
                        if ( (unsigned __int64)v80 >= *(_QWORD *)(v79 + 24) )
                        {
                          v79 = sub_227BA10(v79, 58);
                        }
                        else
                        {
                          v81 = (__int64)(v80 + 1);
                          *(_QWORD *)(v79 + 32) = v80 + 1;
                          *v80 = 58;
                        }
                        v82 = sub_101BC00((__int64)&v96, 0, v81, v76, v77, v78);
                        v83 = sub_227B910(v79, (unsigned int)(v82 + v89));
                        v84 = *(_BYTE **)(v83 + 32);
                        if ( (unsigned __int64)v84 >= *(_QWORD *)(v83 + 24) )
                        {
                          sub_227BA10(v83, 125);
                        }
                        else
                        {
                          *(_QWORD *)(v83 + 32) = v84 + 1;
                          *v84 = 125;
                        }
                        v88 = v24;
                      }
                    }
                  }
                }
                a5 += 3;
              }
              while ( v37 != a5 );
              v25 = *(_QWORD *)(a1 + 40);
              result = *(_QWORD *)(v25 + 32);
              v26 = *(_QWORD *)(v25 + 24);
              if ( !v88 )
                goto LABEL_19;
              if ( result >= v26 )
              {
                sub_227BA10(v25, 58);
                v25 = *(_QWORD *)(a1 + 40);
                result = *(_QWORD *)(v25 + 32);
                v26 = *(_QWORD *)(v25 + 24);
LABEL_19:
                if ( v26 <= result )
                  return sub_227BA10(v25, 32);
                *(_QWORD *)(v25 + 32) = result + 1;
                *(_BYTE *)result = 32;
                return result;
              }
              *(_QWORD *)(v25 + 32) = result + 1;
              *(_BYTE *)result = 58;
            }
          }
          v25 = *(_QWORD *)(a1 + 40);
          result = *(_QWORD *)(v25 + 32);
          v26 = *(_QWORD *)(v25 + 24);
          goto LABEL_19;
        }
        sub_227BA10(v20, 58);
        v23 = *(_QWORD *)(a1 + 16);
        goto LABEL_17;
      }
      v27 = *(_QWORD *)(a1 + 40);
      v30 = *(_BYTE **)(v27 + 32);
      if ( (unsigned __int64)v30 >= *(_QWORD *)(v27 + 24) )
      {
        v27 = sub_227BA10(v27, 58);
      }
      else
      {
        *(_QWORD *)(v27 + 32) = v30 + 1;
        *v30 = 58;
      }
    }
    sub_227B910(v27, HIDWORD(a8));
    v32 = *(char **)(a1 + 16);
    v29 = *v32;
    v15 = ((unsigned __int8)v32[40] >> 1) & 3;
    goto LABEL_8;
  }
  result = sub_101B270((__int64)&v90);
  if ( (_DWORD)result )
  {
    result = sub_101B8C0((__int64)&v90, a2, v46, v47, v48, v49);
    if ( result )
    {
      for ( i = *(_QWORD *)(result + 8); i; i = *(_QWORD *)(v51 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v51 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v51 )
          break;
        result = v51;
      }
      sub_13ACD70(a1, (const void *)(result + 32), *(_QWORD *)result, (__int64)v91);
      v52 = *(_QWORD *)(a1 + 40);
      v53 = *(char **)(v52 + 32);
      v54 = *(char **)(v52 + 24);
      v55 = v54 == v53;
      result = v54 - v53;
      if ( v55 || result == 1 )
      {
        return sub_227BF10(v52, ": ", 2);
      }
      else
      {
        *(_WORD *)v53 = 8250;
        *(_QWORD *)(v52 + 32) += 2LL;
      }
    }
  }
  return result;
}
