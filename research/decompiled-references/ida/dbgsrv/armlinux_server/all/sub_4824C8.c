/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4824C8
// Address: 0x00000000004824C8

//----- (00000000004824C8) ----------------------------------------------------
__int64 __fastcall sub_4824C8(__int64 a1, __int64 a2)
{
  char *v4; // x0
  char *v5; // x1
  __int64 v6; // x22
  __int64 v7; // x19
  __int64 i; // x21
  void *v9; // x0
  char *v10; // x1
  void *v11; // x0
  char *v12; // x1
  __int64 v13; // x22
  __int64 v14; // x19
  __int64 j; // x21
  void *v16; // x0
  char *v17; // x1
  unsigned __int64 v18; // x1
  unsigned int v20; // w0
  __int64 v21; // x22
  void **v22; // x19
  __int64 v23; // x21
  void *v24; // x0
  __int64 v25; // x3
  __int64 v26; // x25
  unsigned __int8 *v27; // x2
  unsigned __int8 *v28; // x26
  unsigned __int8 *v29; // x0
  __int64 *v31; // x25
  __int64 v32; // x1
  unsigned __int64 v33; // x3
  _QWORD *v34; // x0
  __int64 v35; // x3
  void **v36; // x1
  unsigned __int64 v37; // x2
  unsigned __int64 v38; // x0
  void **v39; // x22
  unsigned int v40; // w0
  unsigned __int64 v41; // x21
  void **v42; // x0
  unsigned __int64 v43; // x1
  __int64 v44; // x1
  void **v45; // x2
  unsigned __int64 v46; // x1
  __int64 v47; // x25
  unsigned int v48; // w0
  unsigned __int64 v49; // x24
  unsigned __int64 v50; // x2
  __int64 v51; // x22
  unsigned __int8 *v52; // x21
  unsigned __int8 *v53; // x0
  unsigned int v55; // w0
  __int64 v56; // x25
  __int64 v57; // x22
  char *v58; // x0
  __int64 v59; // x21
  unsigned __int64 v60; // x2
  char *v61; // x21
  void *v62; // x0
  __int64 v63; // x3
  __int64 v64; // x26
  unsigned __int8 *v65; // x2
  unsigned __int8 *v66; // x27
  unsigned __int8 *v67; // x0
  __int64 *v69; // x0
  unsigned int v70; // w0
  size_t v71; // x0
  unsigned __int64 v72; // x28
  size_t v73; // x26
  char *v74; // x0
  __int64 v75; // x3
  __int64 v76; // x2
  __int64 *v77; // x4
  char *v78; // x3
  void *v79; // x7
  __int64 v80; // x1
  unsigned __int64 v81; // x5
  void *v82; // x6
  char *v83; // x0
  unsigned __int64 v84; // x1
  size_t v85; // x0
  size_t v86; // x28
  unsigned __int64 v87; // x4
  void *v88; // x0
  size_t v89; // x0
  size_t v90; // x28
  unsigned __int64 v91; // x4
  void *v92; // x0
  __int64 v93; // x3
  void **v94; // x0
  __int64 v95; // x1
  __int64 v96; // x24
  __int64 v97; // x22
  __int64 v98; // x1
  void *v99; // x0
  __int64 v100; // x1
  void **v101; // x2
  __int64 v102; // [xsp+68h] [xbp-48h]
  unsigned __int64 v103; // [xsp+68h] [xbp-48h]
  unsigned __int64 v104; // [xsp+68h] [xbp-48h]
  __int64 v105; // [xsp+78h] [xbp-38h]
  unsigned __int64 v106; // [xsp+80h] [xbp-30h]
  int v107; // [xsp+8Ch] [xbp-24h]
  void *ptr; // [xsp+90h] [xbp-20h] BYREF
  unsigned __int64 v109; // [xsp+98h] [xbp-18h]
  __int64 v110; // [xsp+A0h] [xbp-10h]
  __int64 v111; // [xsp+A8h] [xbp-8h]

  if ( a1 )
  {
    v4 = *(char **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      j__free(v4);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v5 = *(char **)(a1 + 24);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 )
      {
        v7 = 0;
        for ( i = 0; i != v6; ++i )
        {
          v9 = *(void **)&v5[v7];
          v10 = &v5[v7];
          if ( v9 )
          {
            *((_QWORD *)v10 + 1) = 0;
            j__free(v9);
          }
          v7 += 24;
          v5 = *(char **)(a1 + 24);
        }
      }
      *(_QWORD *)(a1 + 32) = 0;
      j__free(v5);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v11 = *(void **)(a1 + 48);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      j__free(v11);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    v12 = *(char **)(a1 + 72);
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 80);
      if ( v13 )
      {
        v14 = 0;
        for ( j = 0; j != v13; ++j )
        {
          v16 = *(void **)&v12[v14];
          v17 = &v12[v14];
          if ( v16 )
          {
            *((_QWORD *)v17 + 1) = 0;
            j__free(v16);
          }
          v14 += 24;
          v12 = *(char **)(a1 + 72);
        }
      }
      *(_QWORD *)(a1 + 80) = 0;
      j__free(v12);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v18 = *(_QWORD *)(a2 + 8);
    if ( v18 > *(_QWORD *)a2 )
    {
      v20 = sub_48E5A8((unsigned __int8 **)a2, v18);
      if ( (v20 & 0xFFFFFF00) == 0xFFFFFF00 && (v107 = (unsigned __int8)v20, (_BYTE)v20) )
      {
        v21 = (unsigned int)sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
      }
      else
      {
        v21 = v20;
        v107 = 0;
      }
      v22 = (void **)(a1 + 24);
      if ( v21 )
      {
        v23 = 0;
        while ( 1 )
        {
          v24 = *v22;
          v25 = *(_QWORD *)(a1 + 32);
          if ( (unsigned __int64)(v25 + 1) > *(_QWORD *)(a1 + 40) )
          {
            v24 = sub_491288(a1 + 24, *v22, v25 + 1, 0x18u);
            v25 = *(_QWORD *)(a1 + 32);
            *v22 = v24;
          }
          v26 = (__int64)v24 + 24 * v25;
          *(_QWORD *)v26 = 0;
          *(_QWORD *)(v26 + 8) = 0;
          *(_QWORD *)(v26 + 16) = 0;
          ++*(_QWORD *)(a1 + 32);
          v28 = *(unsigned __int8 **)a2;
          v27 = *(unsigned __int8 **)(a2 + 8);
          if ( (unsigned __int64)v27 > *(_QWORD *)a2 )
          {
            v29 = v28 + 1;
            if ( *v28 )
            {
              while ( v27 != v29 )
              {
                if ( !*v29++ )
                  goto LABEL_103;
              }
            }
            else
            {
LABEL_103:
              *(_QWORD *)a2 = v29;
              if ( v28 )
              {
                v85 = strlen((const char *)v28);
                v86 = v85;
                if ( v85 )
                {
                  v87 = v85 + 1;
                  v88 = *(void **)v26;
                  if ( v87 > *(_QWORD *)(v26 + 16) )
                  {
                    v103 = v87;
                    v88 = sub_491288(v26, *(void **)v26, v87, 1u);
                    v87 = v103;
                    *(_QWORD *)v26 = v88;
                  }
                  *(_QWORD *)(v26 + 8) = v87;
                  memmove(v88, v28, v86);
                  *(_BYTE *)(*(_QWORD *)v26 + v86) = 0;
                  if ( *(_QWORD *)(v26 + 8) )
                    v31 = *(__int64 **)v26;
                  else
                    v31 = &qword_4B2D48;
                  goto LABEL_34;
                }
              }
            }
          }
          *(_QWORD *)(v26 + 8) = 0;
          v31 = &qword_4B2D48;
LABEL_34:
          v32 = *(_QWORD *)(a1 + 56);
          v33 = *(_QWORD *)(a1 + 64);
          ptr = v31;
          v34 = *(_QWORD **)(a1 + 48);
          if ( v33 < v32 + 1 )
          {
            v34 = sub_491288(a1 + 48, *(void **)(a1 + 48), v32 + 1, 8u);
            v32 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 48) = v34;
          }
          v34[v32] = v31;
          ++v23;
          v35 = *(_QWORD *)(a1 + 56) + 1LL;
          *(_QWORD *)(a1 + 56) = v35;
          if ( v21 == v23 )
            goto LABEL_37;
        }
      }
      v35 = *(_QWORD *)(a1 + 56);
LABEL_37:
      v36 = *(void ***)(a1 + 48);
      v37 = v35 + 1;
      ptr = nullptr;
      v38 = *(_QWORD *)(a1 + 64);
      if ( v36 > &ptr || &ptr >= &v36[v38] )
      {
        if ( v38 < v37 )
          *(_QWORD *)(a1 + 48) = sub_491288(a1 + 48, v36, v37, 8u);
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * *(_QWORD *)(a1 + 56)) = 0;
      }
      else
      {
        if ( v38 < v37 )
        {
          v94 = (void **)sub_491288(a1 + 48, v36, v37, 8u);
          *(_QWORD *)(a1 + 48) = v94;
          v36 = v94;
          v35 = *(_QWORD *)(a1 + 56);
        }
        v36[v35] = nullptr;
      }
      v39 = (void **)(a1 + 72);
      ++*(_QWORD *)(a1 + 56);
      v40 = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
      v41 = *(_QWORD *)(a1 + 80);
      v106 = v40;
      if ( v40 != v41 )
      {
        ptr = nullptr;
        v109 = 0;
        v110 = 0;
        if ( v40 >= v41 )
        {
          if ( v40 > v41 )
          {
            v42 = *(void ***)(a1 + 72);
            v43 = *(_QWORD *)(a1 + 88);
            if ( v42 <= &ptr && &ptr < &v42[3 * v43] )
            {
              if ( v106 <= v43
                || (v42 = (void **)sub_491288(a1 + 72, *(void **)(a1 + 72), v106, 0x18u),
                    *(_QWORD *)(a1 + 72) = v42,
                    v41 = *(_QWORD *)(a1 + 80),
                    v106 > v41) )
              {
                v100 = 3 * v41;
                while ( 1 )
                {
                  v101 = &v42[v100];
                  v42[v100] = nullptr;
                  ++v41;
                  v100 += 3;
                  v101[1] = nullptr;
                  v101[2] = nullptr;
                  if ( v106 <= v41 )
                    break;
                  v42 = (void **)*v39;
                }
              }
            }
            else if ( v106 <= v43
                   || (v42 = (void **)sub_491288(a1 + 72, *(void **)(a1 + 72), v106, 0x18u),
                       *(_QWORD *)(a1 + 72) = v42,
                       v41 = *(_QWORD *)(a1 + 80),
                       v106 > v41) )
            {
              v44 = 3 * v41;
              while ( 1 )
              {
                v45 = &v42[v44];
                v42[v44] = nullptr;
                ++v41;
                v44 += 3;
                v45[1] = nullptr;
                v45[2] = nullptr;
                if ( v106 <= v41 )
                  break;
                v42 = (void **)*v39;
              }
            }
            *(_QWORD *)(a1 + 80) = v106;
          }
        }
        else
        {
          v96 = v40;
          v97 = 24LL * v40;
          do
          {
            v98 = *(_QWORD *)(a1 + 72) + v97;
            v99 = *(void **)v98;
            if ( *(_QWORD *)v98 )
            {
              *(_QWORD *)(v98 + 8) = 0;
              j__free(v99);
            }
            ++v96;
            v97 += 24;
          }
          while ( v41 != v96 );
          *(_QWORD *)(a1 + 80) = v106;
        }
      }
      v46 = *(_QWORD *)(a2 + 8);
      if ( v106 )
      {
        v102 = 0;
        v105 = 0;
        while ( 1 )
        {
          v47 = *(_QWORD *)(a1 + 72) + v102;
          v48 = sub_48E5A8((unsigned __int8 **)a2, v46);
          ptr = nullptr;
          v49 = v48;
          v50 = *(_QWORD *)(v47 + 8);
          if ( v48 < v50 )
            goto LABEL_102;
          if ( v48 > v50 )
            break;
LABEL_57:
          v46 = *(_QWORD *)(a2 + 8);
          v51 = 0;
          if ( v49 )
          {
            do
            {
              v52 = *(unsigned __int8 **)a2;
              if ( v46 > *(_QWORD *)a2 )
              {
                v53 = v52 + 1;
                if ( *v52 )
                {
                  while ( (unsigned __int8 *)v46 != v53 )
                  {
                    if ( !*v53++ )
                      goto LABEL_86;
                  }
                  goto LABEL_63;
                }
LABEL_86:
                *(_QWORD *)a2 = v53;
                ptr = nullptr;
                v109 = 0;
                v110 = 0;
                if ( v52 )
                {
                  v71 = strlen((const char *)v52);
                  v72 = v71 + 1;
                  v73 = v71;
                  ptr = sub_491288((__int64)&ptr, nullptr, v71 + 1, 1u);
                  v109 = v72;
                  memmove(ptr, v52, v73);
                  *((_BYTE *)ptr + v73) = 0;
                  if ( v109 <= 1 )
                  {
                    if ( ptr )
                    {
                      v109 = 0;
                      j__free(ptr);
                    }
LABEL_96:
                    v46 = *(_QWORD *)(a2 + 8);
                    goto LABEL_63;
                  }
                  v74 = (char *)*v22;
                  v75 = *(_QWORD *)(a1 + 32);
                  if ( (unsigned __int64)(v75 + 1) > *(_QWORD *)(a1 + 40) )
                  {
                    v74 = (char *)sub_491288(a1 + 24, *v22, v75 + 1, 0x18u);
                    v75 = *(_QWORD *)(a1 + 32);
                    *v22 = v74;
                  }
                  v76 = 3 * v75;
                  v77 = &qword_4B2D48;
                  v78 = &v74[24 * v75];
                  *(_QWORD *)&v74[8 * v76] = 0;
                  *((_QWORD *)v78 + 1) = 0;
                  *((_QWORD *)v78 + 2) = 0;
                  v79 = ptr;
                  ++*(_QWORD *)(a1 + 32);
                  v81 = *((_QWORD *)v78 + 1);
                  v80 = *((_QWORD *)v78 + 2);
                  v82 = *(void **)&v74[8 * v76];
                  *(_QWORD *)&v74[8 * v76] = v79;
                  *((_QWORD *)v78 + 1) = v109;
                  *((_QWORD *)v78 + 2) = v110;
                  ptr = v82;
                  v109 = v81;
                  v110 = v80;
                  if ( *((_QWORD *)v78 + 1) )
                    v77 = *(__int64 **)&v74[8 * v76];
                  *(_QWORD *)(*(_QWORD *)v47 + 8 * v51) = v77;
                  if ( !ptr )
                    goto LABEL_96;
                  v109 = 0;
                  j__free(ptr);
                  v46 = *(_QWORD *)(a2 + 8);
                }
              }
LABEL_63:
              ++v51;
            }
            while ( v49 != v51 );
          }
          v102 += 24;
          if ( v106 == ++v105 )
            goto LABEL_65;
        }
        v83 = *(char **)v47;
        v84 = *(_QWORD *)(v47 + 16);
        if ( *(_QWORD *)v47 <= (unsigned __int64)&ptr && &ptr < (void **)&v83[8 * v84] )
        {
          if ( v49 <= v84
            || (v83 = (char *)sub_491288(v47, *(void **)v47, v49, 8u),
                *(_QWORD *)v47 = v83,
                v50 = *(_QWORD *)(v47 + 8),
                v49 > v50) )
          {
            v95 = 8 * v50;
            while ( 1 )
            {
              *(_QWORD *)&v83[v95] = 0;
              ++v50;
              v95 += 8;
              if ( v49 <= v50 )
                break;
              v83 = *(char **)v47;
            }
            *(_QWORD *)(v47 + 8) = v49;
          }
          else
          {
            *(_QWORD *)(v47 + 8) = v49;
          }
          goto LABEL_57;
        }
        if ( v49 <= v84
          || (v83 = (char *)sub_491288(v47, *(void **)v47, v49, 8u),
              *(_QWORD *)v47 = v83,
              v50 = *(_QWORD *)(v47 + 8),
              v49 > v50) )
        {
          v93 = 8 * v50;
          while ( 1 )
          {
            *(_QWORD *)&v83[v93] = 0;
            ++v50;
            v93 += 8;
            if ( v49 <= v50 )
              break;
            v83 = *(char **)v47;
          }
          *(_QWORD *)(v47 + 8) = v49;
          goto LABEL_57;
        }
LABEL_102:
        *(_QWORD *)(v47 + 8) = v49;
        goto LABEL_57;
      }
LABEL_65:
      v55 = sub_48E5A8((unsigned __int8 **)a2, v46);
      v56 = v55;
      if ( !v55 )
      {
LABEL_81:
        if ( v107 )
          *(_DWORD *)(a1 + 96) = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
        return v111 ^ _stack_chk_guard;
      }
      v57 = 0;
      while ( 1 )
      {
        v58 = *(char **)a1;
        v59 = *(_QWORD *)(a1 + 8);
        v60 = v59 + 1;
        if ( (unsigned __int64)(v59 + 1) > *(_QWORD *)(a1 + 16) )
        {
          v58 = (char *)sub_491288(a1, *(void **)a1, v60, 0x20u);
          v59 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v58;
          v60 = v59 + 1;
        }
        *(_QWORD *)(a1 + 8) = v60;
        v61 = &v58[32 * v59];
        v62 = *v22;
        v63 = *(_QWORD *)(a1 + 32);
        if ( (unsigned __int64)(v63 + 1) > *(_QWORD *)(a1 + 40) )
        {
          v62 = sub_491288(a1 + 24, *v22, v63 + 1, 0x18u);
          v63 = *(_QWORD *)(a1 + 32);
          *v22 = v62;
        }
        v64 = (__int64)v62 + 24 * v63;
        *(_QWORD *)v64 = 0;
        *(_QWORD *)(v64 + 8) = 0;
        *(_QWORD *)(v64 + 16) = 0;
        ++*(_QWORD *)(a1 + 32);
        v66 = *(unsigned __int8 **)a2;
        v65 = *(unsigned __int8 **)(a2 + 8);
        if ( (unsigned __int64)v65 > *(_QWORD *)a2 )
        {
          v67 = v66 + 1;
          if ( *v66 )
          {
            while ( v67 != v65 )
            {
              if ( !*v67++ )
                goto LABEL_109;
            }
          }
          else
          {
LABEL_109:
            *(_QWORD *)a2 = v67;
            if ( v66 )
            {
              v89 = strlen((const char *)v66);
              v90 = v89;
              if ( v89 )
              {
                v91 = v89 + 1;
                v92 = *(void **)v64;
                if ( v91 > *(_QWORD *)(v64 + 16) )
                {
                  v104 = v91;
                  v92 = sub_491288(v64, *(void **)v64, v91, 1u);
                  v91 = v104;
                  *(_QWORD *)v64 = v92;
                }
                *(_QWORD *)(v64 + 8) = v91;
                memmove(v92, v66, v90);
                *(_BYTE *)(*(_QWORD *)v64 + v90) = 0;
                if ( *(_QWORD *)(v64 + 8) )
                  v69 = *(__int64 **)v64;
                else
                  v69 = &qword_4B2D48;
                goto LABEL_77;
              }
            }
          }
        }
        v69 = &qword_4B2D48;
        *(_QWORD *)(v64 + 8) = 0;
LABEL_77:
        *(_QWORD *)v61 = v69;
        *((_DWORD *)v61 + 2) = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
        v61[12] = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
        v61[13] = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
        v70 = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
        if ( v70 && (unsigned __int64)v70 <= *(_QWORD *)(a1 + 80) )
          *((_QWORD *)v61 + 2) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24 * (v70 - 1LL));
        else
          *((_QWORD *)v61 + 2) = 0;
        ++v57;
        *((_QWORD *)v61 + 3) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
        if ( v56 == v57 )
          goto LABEL_81;
      }
    }
  }
  return v111 ^ _stack_chk_guard;
}
// 4824C8: could not find valid save-restore pair for x24
// 4824C8: could not find valid save-restore pair for x25
// 4824C8: could not find valid save-restore pair for x26
// 4824C8: could not find valid save-restore pair for x27
// 4824C8: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
