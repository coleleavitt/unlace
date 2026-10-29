/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_slice
// Address: 0x0000000100033A98

//----- (0000000100033A98) ----------------------------------------------------
void __fastcall get_idcv_slice(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int8 *v8; // x22
  char v9; // w23
  int v13; // w8
  __int64 v14; // x8
  __int64 v15; // x22
  unsigned __int8 *v16; // t2
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x24
  __int64 v20; // x10
  size_t v21; // x20
  void *v22; // x0
  void *v23; // x23
  __int64 v24; // x27
  __int64 v25; // x24
  unsigned __int8 *v26; // x27
  __int64 v27; // t1
  void *v28; // x22
  const char *v29; // x23
  unsigned __int8 *v30; // x28
  const char *v31; // x0
  int v32; // w0
  int v33; // w8
  void *v34; // x0
  char *v35; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  __int64 v42; // x8
  unsigned __int8 *v43; // x9
  unsigned int v44; // t1
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  bool v50; // cf
  char v51; // w9
  size_t v52; // x25
  void *v53; // x0
  __int64 *v54; // x0
  unsigned __int8 *v55; // x9
  unsigned __int8 *v56; // x8
  bool v57; // zf
  __int128 v58; // q0
  __int128 v59; // q1
  __int128 v60; // q3
  unsigned __int64 v61; // [xsp+10h] [xbp-F0h] BYREF
  void *v62; // [xsp+18h] [xbp-E8h] BYREF
  __int64 v63; // [xsp+20h] [xbp-E0h]
  __int64 v64; // [xsp+28h] [xbp-D8h]
  void **v65; // [xsp+38h] [xbp-C8h] BYREF
  _BYTE v66[32]; // [xsp+40h] [xbp-C0h] BYREF
  char __s[64]; // [xsp+60h] [xbp-A0h] BYREF
  __int64 vars8; // [xsp+108h] [xbp+8h]

  if ( !a1 || (v8 = a2) == nullptr )
  {
LABEL_30:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    set_qerrno();
    return;
  }
  v9 = a5;
  while ( 1 )
  {
    v13 = *v8;
    if ( v13 != 10 )
      break;
    v8 = deref_idcv(v8, 0);
    if ( !v8 )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      get_qerrno();
      return;
    }
  }
  if ( v13 == 5 )
  {
    if ( (v9 & 1) != 0 )
    {
      qsnprintf(__s, 0x20u, "%llu", a4, a5, a6, a7, a8, a3);
      get_idcv_attr(a1, (__int64)v8, __s, 0);
      return;
    }
    *(_QWORD *)&v66[16] = 0;
    *(_QWORD *)&v66[24] = 0;
    v66[0] = 5;
    v23 = operator new(0x20u);
    sub_10002D324(v23, 0);
    *(_QWORD *)&v66[8] = v23;
    v24 = *((_QWORD *)v8 + 1);
    v62 = nullptr;
    v63 = 0;
    v64 = 0;
    v62 = qvector_reserve(&v62, nullptr, 3u, 1u);
    v63 = 3;
    *(_WORD *)v62 = -209;
    *((_BYTE *)v62 + 2) = 0;
    v27 = *(_QWORD *)(v24 + 8);
    v26 = (unsigned __int8 *)(v24 + 8);
    v25 = v27;
    v28 = v62;
    if ( v27 )
    {
      if ( v63 )
        v29 = (const char *)v62;
      else
        v29 = &byte_10007AE40;
      v30 = v26;
      do
      {
        if ( *(_QWORD *)(v25 + 40) )
          v31 = *(const char **)(v25 + 32);
        else
          v31 = &byte_10007AE40;
        v32 = strcmp(v31, v29);
        if ( v32 >= 0 )
          v30 = (unsigned __int8 *)v25;
        v25 = *(_QWORD *)(v25 + (((unsigned int)v32 >> 28) & 8));
      }
      while ( v25 );
      if ( !v28 )
        goto LABEL_58;
    }
    else
    {
      v30 = v26;
      if ( !v62 )
      {
LABEL_58:
        if ( v30 != v26 )
        {
          do
          {
            if ( *((_QWORD *)v30 + 5) )
              v35 = *((char **)v30 + 4);
            else
              v35 = &byte_10007AE40;
            if ( (strcmp(v35, ":") & 0x80000000) == 0 )
              break;
            v42 = (unsigned __int8)*v35;
            if ( *v35 )
            {
              if ( v42 == 48 )
              {
                if ( !v35[1] )
                {
LABEL_73:
                  qsscanf(v35, "%llu", v36, v37, v38, v39, v40, v41, (char)&v61);
                  v50 = a4 != 0x7FFFFFFF && v61 >= a4;
                  v51 = !v50;
                  if ( v61 >= a3 && (v51 & 1) != 0 )
                  {
                    qsnprintf(__s, 0x20u, "%llu", v45, v46, v47, v48, v49, v61 - a3);
                    if ( v66[0] == 5 )
                    {
                      v62 = nullptr;
                      v63 = 0;
                      v64 = 0;
                      v52 = strlen(__s);
                      v53 = nullptr;
                      if ( v52 != -1 )
                      {
                        v53 = qvector_reserve(&v62, nullptr, v52 + 1, 1u);
                        v62 = v53;
                      }
                      v63 = v52 + 1;
                      memmove(v53, __s, v52);
                      *((_BYTE *)v62 + v52) = 0;
                      v65 = &v62;
                      v54 = sub_10003F09C(
                              *(__int64 ***)&v66[8],
                              (__int64)&v62,
                              (__int64)&byte_10007B637,
                              (__int64 *)&v65);
                      copy_idcv((unsigned __int8 *)v54 + 56, v30 + 56);
                      if ( v62 )
                      {
                        v63 = 0;
                        qfree(v62);
                      }
                    }
                    else if ( (unsigned int)set_qerrno() )
                    {
                      goto LABEL_94;
                    }
                  }
                }
              }
              else
              {
                v43 = (unsigned __int8 *)(v35 + 1);
                while ( (v42 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v42] & 0x400) != 0 )
                {
                  v44 = *v43++;
                  v42 = v44;
                  if ( !v44 )
                    goto LABEL_73;
                }
              }
            }
            v55 = *((unsigned __int8 **)v30 + 1);
            if ( v55 )
            {
              do
              {
                v56 = v55;
                v55 = *(unsigned __int8 **)v55;
              }
              while ( v55 );
            }
            else
            {
              do
              {
                v56 = *((unsigned __int8 **)v30 + 2);
                v57 = *(_QWORD *)v56 == (_QWORD)v30;
                v30 = v56;
              }
              while ( !v57 );
            }
            v30 = v56;
          }
          while ( v56 != v26 );
        }
        v59 = *(_OWORD *)a1;
        v58 = *((_OWORD *)a1 + 1);
        v60 = *(_OWORD *)&v66[16];
        *(_OWORD *)a1 = *(_OWORD *)v66;
        *((_OWORD *)a1 + 1) = v60;
        *(_OWORD *)v66 = v59;
        *(_OWORD *)&v66[16] = v58;
LABEL_94:
        if ( v66[0] == 5 )
        {
          sub_10003307C(*(__int64 *)&v66[8], v66);
        }
        else if ( v66[0] == 7 && *(_QWORD *)&v66[8] )
        {
          *(_QWORD *)&v66[16] = 0;
          qfree(*(void **)&v66[8]);
        }
        return;
      }
    }
    v63 = 0;
    qfree(v28);
    goto LABEL_58;
  }
  if ( v13 != 7 )
    goto LABEL_30;
  v16 = v8 + 8;
  v15 = *((_QWORD *)v8 + 1);
  v14 = *((_QWORD *)v16 + 1);
  v50 = v14 != 0;
  v17 = v14 - 1;
  if ( !v50 )
    v17 = 0;
  v18 = (v17 + a3) & ~((__int64)(v17 + a3) >> 63);
  if ( (a3 & 0x8000000000000000LL) == 0LL )
    v18 = a3;
  if ( v18 >= v17 )
    v19 = v17;
  else
    v19 = v18;
  if ( (v9 & 1) != 0 )
    v20 = v19 + 1;
  else
    v20 = a4;
  if ( v20 < 0 )
    v20 = (v20 + v17) & ~((__int64)(v20 + v17) >> 63);
  if ( v20 >= v19 )
    v18 = v20;
  if ( v18 < v17 )
    v17 = v18;
  memset(v66, 0, 24);
  v21 = v17 - v19;
  if ( v17 != v19 )
  {
    if ( v21 == -1 )
    {
      v22 = nullptr;
    }
    else
    {
      v22 = qvector_reserve(v66, nullptr, v21 + 1, 1u);
      *(_QWORD *)v66 = v22;
    }
    *(_QWORD *)&v66[8] = v21 + 1;
    memmove(v22, (const void *)(v15 + v19), v21);
    *(_BYTE *)(*(_QWORD *)v66 + v21) = 0;
  }
  v33 = *a1;
  if ( v33 == 5 )
  {
    sub_10003307C(*((_QWORD *)a1 + 1), a1);
  }
  else if ( v33 == 7 )
  {
    v34 = *((void **)a1 + 1);
    if ( v34 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v34);
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 3) = 0;
    }
  }
  *a1 = 7;
  *((_QWORD *)a1 + 1) = *(_QWORD *)v66;
  *((_OWORD *)a1 + 1) = *(_OWORD *)&v66[8];
}
// 100033CE8: variable 'a4' is possibly undefined
// 100033CE8: variable 'a5' is possibly undefined
// 100033CE8: variable 'a6' is possibly undefined
// 100033CE8: variable 'a7' is possibly undefined
// 100033CE8: variable 'a8' is possibly undefined
// 100033E78: variable 'v36' is possibly undefined
// 100033E78: variable 'v37' is possibly undefined
// 100033E78: variable 'v38' is possibly undefined
// 100033E78: variable 'v39' is possibly undefined
// 100033E78: variable 'v40' is possibly undefined
// 100033E78: variable 'v41' is possibly undefined
// 100033EB0: variable 'v45' is possibly undefined
// 100033EB0: variable 'v46' is possibly undefined
// 100033EB0: variable 'v47' is possibly undefined
// 100033EB0: variable 'v48' is possibly undefined
// 100033EB0: variable 'v49' is possibly undefined
// 10002D324: using guessed type __int64 __fastcall sub_10002D324(_QWORD, _QWORD);
// 10007AE40: using guessed type char byte_10007AE40;
// 10007B637: using guessed type char byte_10007B637;
