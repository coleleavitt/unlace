__int64 __fastcall sub_3AAF00(const char *ptr, _DWORD *a2, unsigned int a3)
{
  _QWORD *v5; // r14
  int v6; // eax
  _QWORD *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rbp
  __int64 *i; // r13
  __int64 result; // rax
  __int64 v16; // r12
  const char *v17; // r14
  unsigned int v18; // eax
  __int64 bpt_kernel_interface; // rdi
  const char *(__fastcall *v20)(__int64, int); // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r12d
  char *v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 (__fastcall *v29)(__int64, char *, void **, __int64, __int64, __int64); // rax
  int v30; // eax
  const char *v31; // rdi
  __int64 v32; // r14
  __int64 *v33; // rax
  __int64 *v34; // r13
  unsigned int v35; // edx
  __int64 v36; // rcx
  signed int v37; // eax
  __int64 (__fastcall *v38)(__int64, __int64, int *); // rax
  _DWORD *v39; // rax
  int v40; // edx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  const char *(__fastcall *v45)(__int64, int); // rax
  char *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  char *v51; // r12
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 (__fastcall *v56)(__int64, char *, void **, __int64, __int64, __int64); // rax
  int v57; // eax
  char *v58; // rbp
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 (__fastcall *v63)(__int64, char *, void **, __int64, __int64, __int64); // rax
  int v64; // eax
  const char *ptra; // [rsp+8h] [rbp-80h]
  int ptrb; // [rsp+8h] [rbp-80h]
  __int64 v67; // [rsp+10h] [rbp-78h]
  __int64 v68; // [rsp+10h] [rbp-78h]
  __int64 v69; // [rsp+10h] [rbp-78h]
  char *v70; // [rsp+10h] [rbp-78h]
  int *v71; // [rsp+18h] [rbp-70h] BYREF
  __int64 v72; // [rsp+20h] [rbp-68h]
  char *s2; // [rsp+28h] [rbp-60h]
  int v74; // [rsp+38h] [rbp-50h] BYREF
  __int64 v75; // [rsp+3Ch] [rbp-4Ch]
  int v76; // [rsp+44h] [rbp-44h]
  unsigned __int64 v77; // [rsp+48h] [rbp-40h]

  ptra = ptr;
  v77 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(qword_2CA1698 + 1384);
  v6 = a3 & 0x30;
  switch ( v6 )
  {
    case 32:
      v7 = v5 + 15;
LABEL_5:
      v8 = v7[2];
      if ( v8 )
      {
        v9 = a2[2];
        v10 = (__int64)(v7 + 1);
        do
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v8 + 16);
            v12 = *(_QWORD *)(v8 + 24);
            if ( *(_DWORD *)(v8 + 32) < v9 )
              break;
            v10 = v8;
            v8 = *(_QWORD *)(v8 + 16);
            if ( !v11 )
              goto LABEL_10;
          }
          v8 = *(_QWORD *)(v8 + 24);
        }
        while ( v12 );
LABEL_10:
        if ( v7 + 1 != (_QWORD *)v10 )
        {
          v71 = (int *)(v7 + 1);
          v67 = v10;
          while ( *(_DWORD *)(v67 + 32) < a2[3] )
          {
            v13 = *(__int64 **)(v67 + 40);
            for ( i = &v13[*(_QWORD *)(v67 + 48)]; i != v13; ++v13 )
            {
              v16 = *v13;
              v17 = *((const char **)a2 + 2);
              v18 = *(_DWORD *)(*v13 + 40);
              if ( v17 && v18 )
              {
                ptrb = *(_DWORD *)(v16 + 36);
                bpt_kernel_interface = get_bpt_kernel_interface(ptr, (unsigned int)ptrb);
                v20 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)bpt_kernel_interface + 80LL);
                if ( v20 == sub_3A4F10 )
                {
                  ptr = &byte_22CD811;
                  if ( ptrb > 0 )
                  {
                    v21 = *(_QWORD *)(qword_2CA1698 + 1384);
                    if ( (unsigned __int64)ptrb < *(_QWORD *)(v21 + 224) )
                    {
                      ptr = haystack;
                      v22 = *(_QWORD *)(v21 + 216) + 24LL * ptrb;
                      if ( *(_QWORD *)(v22 + 8) )
                        ptr = *(const char **)v22;
                    }
                  }
                }
                else
                {
                  ptr = v20(bpt_kernel_interface, ptrb);
                }
                if ( strcmp(ptr, v17) > 0 )
                  break;
                v18 = *(_DWORD *)(v16 + 40);
              }
              if ( _bittest((const int *)&a3, v18) )
              {
                ptr = (const char *)a2;
                result = (**(__int64 (__fastcall ***)(_DWORD *, __int64))a2)(a2, v16);
                if ( (_DWORD)result )
                  return result;
              }
            }
            ptr = (const char *)v67;
            v67 = std::_Rb_tree_increment();
            if ( v71 == (int *)v67 )
              return 0;
          }
        }
      }
      return 0;
    case 48:
      v7 = v5 + 21;
      goto LABEL_5;
    case 16:
      v7 = v5 + 9;
      goto LABEL_5;
  }
  v76 = 0;
  v75 = 0xFFFFFFFFLL;
  if ( (a3 & 1) != 0 )
  {
    LODWORD(v75) = a2[2];
    if ( (a3 & 8) != 0 )
    {
LABEL_80:
      v23 = 3;
      goto LABEL_45;
    }
    if ( (a3 & 4) == 0 )
    {
      v23 = (a3 >> 1) & 1;
      goto LABEL_45;
    }
LABEL_44:
    v23 = 2;
    goto LABEL_45;
  }
  if ( (a3 & 2) != 0 )
  {
    v58 = *((char **)a2 + 2);
    v60 = get_bpt_kernel_interface(ptr, a2);
    v63 = *(__int64 (__fastcall **)(__int64, char *, void **, __int64, __int64, __int64))(*(_QWORD *)v60 + 72LL);
    if ( v63 == sub_3A98B0 )
      v64 = sub_3A9350(v58, nullptr, (void **)sub_3A98B0, v59, v61, v62);
    else
      v64 = ((__int64 (__fastcall *)(__int64, char *))v63)(v60, v58);
    HIDWORD(v75) = v64;
    LODWORD(v75) = 0;
    v76 = 1;
    if ( (a3 & 8) != 0 )
      goto LABEL_80;
    v23 = 1;
    if ( (a3 & 4) == 0 )
    {
LABEL_45:
      v31 = (char *)&v71 + 4;
      v32 = *v5 + 8LL * v5[1];
      v33 = sub_3AAB40((__int64)&v71 + 4);
      v71 = &v74;
      v34 = v33;
      if ( v33 == (__int64 *)v32 )
        return 0;
      while ( 1 )
      {
        v36 = *v34;
        v37 = *(_DWORD *)(*v34 + 40);
        v35 = v37;
        if ( v37 < v23 )
          goto LABEL_48;
        if ( v37 > v23 )
          return 0;
        if ( *((_QWORD *)a2 + 2) && v37 )
        {
          v41 = *(unsigned int *)(v36 + 36);
          s2 = *((char **)a2 + 2);
          v72 = v36;
          v42 = get_bpt_kernel_interface(v31, v41);
          v43 = v72;
          v44 = v42;
          v45 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)v42 + 80LL);
          v46 = s2;
          if ( v45 == sub_3A4F10 )
          {
            v31 = &byte_22CD811;
            if ( (int)v41 > 0 )
            {
              v47 = *(_QWORD *)(qword_2CA1698 + 1384);
              if ( (unsigned __int64)(int)v41 < *(_QWORD *)(v47 + 224) )
              {
                v31 = haystack;
                v48 = *(_QWORD *)(v47 + 216) + 24LL * (int)v41;
                if ( *(_QWORD *)(v48 + 8) )
                  v31 = *(const char **)v48;
              }
            }
          }
          else
          {
            v70 = s2;
            v50 = (__int64)v45(v44, v41);
            v43 = v72;
            v46 = v70;
            v31 = (const char *)v50;
          }
          v69 = v43;
          v49 = strcmp(v31, v46);
          v36 = v69;
          if ( v49 > 0 )
            return 0;
        }
        if ( a2[3] == -1 )
          break;
        v38 = *(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)ptra + 104LL);
        v68 = v36;
        v39 = (_DWORD *)(v38 == sub_3A7880 ? sub_3A5530(v36, v71) : v38((__int64)ptra, v36, &v74));
        v36 = v68;
        v31 = (const char *)(unsigned int)v74;
        if ( v74 <= 0 )
        {
          v40 = 0;
        }
        else
        {
          v40 = 0;
          while ( *v39 < a2[2] || *v39 >= a2[3] )
          {
            ++v40;
            ++v39;
            if ( v40 == v74 )
              goto LABEL_63;
          }
        }
        if ( v40 != v74 )
          break;
LABEL_63:
        if ( !v23 && *(_DWORD *)(v68 + 52) >= a2[3] )
          return 0;
LABEL_50:
        if ( ++v34 == (__int64 *)v32 )
          return 0;
      }
      v35 = *(_DWORD *)(v36 + 40);
LABEL_48:
      if ( _bittest((const int *)&a3, v35) )
      {
        v31 = (const char *)a2;
        result = (**(__int64 (__fastcall ***)(_DWORD *, __int64))a2)(a2, v36);
        if ( (_DWORD)result )
          return result;
      }
      goto LABEL_50;
    }
    goto LABEL_44;
  }
  if ( (a3 & 4) != 0 )
  {
    v24 = *((char **)a2 + 2);
    v26 = get_bpt_kernel_interface(ptr, a2);
    v29 = *(__int64 (__fastcall **)(__int64, char *, void **, __int64, __int64, __int64))(*(_QWORD *)v26 + 72LL);
    if ( v29 == sub_3A98B0 )
      v30 = sub_3A9350(v24, nullptr, (void **)sub_3A98B0, v25, v27, v28);
    else
      v30 = ((__int64 (__fastcall *)(__int64, char *))v29)(v26, v24);
    HIDWORD(v75) = v30;
    LODWORD(v75) = 0;
    v76 = 2;
    if ( (a3 & 8) != 0 )
      goto LABEL_80;
    goto LABEL_44;
  }
  if ( (a3 & 8) != 0 )
  {
    v51 = *((char **)a2 + 2);
    v53 = get_bpt_kernel_interface(ptr, a2);
    v56 = *(__int64 (__fastcall **)(__int64, char *, void **, __int64, __int64, __int64))(*(_QWORD *)v53 + 72LL);
    if ( v56 == sub_3A98B0 )
      v57 = sub_3A9350(v51, nullptr, (void **)sub_3A98B0, v52, v54, v55);
    else
      v57 = ((__int64 (__fastcall *)(__int64, char *))v56)(v53, v51);
    HIDWORD(v75) = v57;
    LODWORD(v75) = 0;
    v76 = 3;
    goto LABEL_80;
  }
  return 0;
}

