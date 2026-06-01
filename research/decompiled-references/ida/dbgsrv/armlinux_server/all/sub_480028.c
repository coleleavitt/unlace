/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480028
// Address: 0x0000000000480028

//----- (0000000000480028) ----------------------------------------------------
__int64 __fastcall sub_480028(__int64 a1, _QWORD *a2, _BYTE *a3, unsigned __int64 a4)
{
  _BYTE *v5; // x25
  int v6; // w21
  int v7; // w19
  unsigned __int8 *v8; // x22
  _BOOL4 v9; // w0
  bool v10; // zf
  int v11; // w19
  char *v13; // x0
  __int64 v14; // x3
  __int64 v15; // x2
  char *v16; // x3
  void *v17; // x6
  void *v18; // x5
  unsigned __int64 v19; // x1
  unsigned __int64 v20; // x4
  _BYTE *v21; // x0
  unsigned __int64 v22; // x20
  __int64 v23; // x19
  void *v24; // x0
  unsigned __int64 v28; // x25
  unsigned __int64 v29; // x20
  void *v30; // x0
  int v31; // w0
  unsigned __int64 v32; // x20
  unsigned __int64 v33; // x25
  void *v34; // x0
  int v35; // w0
  char *v36; // x1
  void **v37; // x2
  void *v38; // x5
  unsigned __int64 v39; // x3
  void *v40; // x4
  __int64 v41; // x0
  char *v42; // x1
  void **v43; // x3
  void *v44; // x7
  void *v45; // x6
  unsigned __int64 v46; // x4
  void *v47; // x5
  int v48; // w0
  _BOOL4 v49; // w0
  _BYTE *v50; // x0
  int v51; // w27
  unsigned __int8 *v52; // x20
  int v53; // w19
  int v55; // w0
  unsigned __int8 *v56; // x21
  unsigned __int64 v57; // x25
  unsigned __int64 v58; // x20
  void *v59; // x0
  unsigned __int8 *v60; // x23
  unsigned __int8 v61; // w26
  int v62; // t1
  unsigned __int64 v63; // x25
  __int64 v64; // x0
  unsigned __int64 v65; // x19
  _QWORD *v66; // x20
  void *v67; // x6
  char *v68; // x19
  void *v69; // x3
  unsigned __int64 v70; // x5
  unsigned __int64 v71; // x4
  void *v72; // x0
  unsigned __int64 v73; // x19
  void *v74; // x23
  __int64 v75; // x23
  __int64 v76; // x26
  __int64 v77; // x26
  _QWORD *v78; // x19
  _QWORD *v79; // x25
  void *v80; // x0
  void *v81; // x0
  int v82; // w1
  unsigned int v83; // w1
  __int64 v84; // [xsp+60h] [xbp-90h]
  int v85; // [xsp+60h] [xbp-90h]
  int v87; // [xsp+78h] [xbp-78h]
  int v88; // [xsp+90h] [xbp-60h]
  void *ptr; // [xsp+A0h] [xbp-50h] BYREF
  unsigned __int64 v90; // [xsp+A8h] [xbp-48h]
  unsigned __int64 v91; // [xsp+B0h] [xbp-40h]
  void *v92; // [xsp+B8h] [xbp-38h] BYREF
  unsigned __int64 v93; // [xsp+C0h] [xbp-30h]
  unsigned __int64 v94; // [xsp+C8h] [xbp-28h]
  void *v95; // [xsp+D0h] [xbp-20h] BYREF
  unsigned __int64 v96; // [xsp+D8h] [xbp-18h]
  unsigned __int64 v97; // [xsp+E0h] [xbp-10h]

  v87 = (int)a3;
  if ( !a3 )
    return 0;
  v84 = (a4 >> 2) & 1;
  ptr = nullptr;
  v90 = 0;
  v91 = 0;
  v5 = sub_49BBA0(a3);
  v6 = 0;
  v7 = (unsigned __int8)*v5;
LABEL_3:
  if ( v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v5 + 1;
        v9 = v7 == 39;
        if ( v7 == 34 )
          v9 = 1;
        if ( v9 )
          break;
        if ( !v6 && (v7 & 0x80) == 0 && isspace(v7) )
        {
          v42 = *(char **)a1;
          v41 = *(_QWORD *)(a1 + 8);
          if ( (unsigned __int64)(v41 + 1) > *(_QWORD *)(a1 + 16) )
          {
            v42 = (char *)sub_491288(a1, v42, v41 + 1, 0x18u);
            v41 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v42;
          }
          v43 = (void **)&v42[24 * v41];
          *v43 = nullptr;
          v43[1] = nullptr;
          v43[2] = nullptr;
          v44 = ptr;
          ++*(_QWORD *)(a1 + 8);
          v45 = *v43;
          v47 = v43[1];
          v46 = (unsigned __int64)v43[2];
          *v43 = v44;
          v43[1] = (void *)v90;
          ptr = v45;
          v90 = (unsigned __int64)v47;
          v43[2] = (void *)v91;
          v91 = v46;
          LODWORD(v84) = 0;
          v5 = sub_49BBA0(v5 + 1);
          v7 = (unsigned __int8)*v5;
          goto LABEL_3;
        }
LABEL_31:
        v22 = v90;
        if ( v7 != 92 || v6 == 39 )
          goto LABEL_41;
        v7 = (unsigned __int8)v5[1];
        v8 = v5 + 2;
        if ( v7 == 34 || v7 == 92 )
        {
          if ( !v5[1] )
            goto LABEL_23;
          goto LABEL_41;
        }
        if ( v90 )
        {
          v33 = v90 - 1;
          v32 = v90 + 1;
          v34 = ptr;
          if ( v91 >= v90 + 1 )
            goto LABEL_52;
        }
        else
        {
          v32 = 2;
          v33 = 0;
          v34 = ptr;
          if ( v91 >= 2 )
            goto LABEL_52;
        }
        v34 = sub_491288((__int64)&ptr, v34, v32, 1u);
        ptr = v34;
LABEL_52:
        v90 = v32;
        *((_BYTE *)v34 + v33) = 92;
        *((_BYTE *)ptr + v33 + 1) = 0;
        v22 = v90;
        if ( !v7 )
          goto LABEL_23;
LABEL_41:
        if ( v22 )
        {
          v28 = v22 - 1;
          v29 = v22 + 1;
          v30 = ptr;
          if ( v91 < v29 )
            goto LABEL_56;
        }
        else
        {
          v29 = 2;
          v28 = 0;
          v30 = ptr;
          if ( v91 < 2 )
          {
LABEL_56:
            v30 = sub_491288((__int64)&ptr, v30, v29, 1u);
            ptr = v30;
          }
        }
        v90 = v29;
        *((_BYTE *)v30 + v28) = v7;
        *((_BYTE *)ptr + v28 + 1) = 0;
        if ( (v7 & 0xFD) != 0x3C )
          goto LABEL_54;
        v31 = v84 ^ 1;
        if ( v6 )
          v31 = 0;
        if ( !v31 )
        {
LABEL_54:
          v7 = *v8;
          v5 = v8;
          goto LABEL_3;
        }
        if ( !v90 )
          goto LABEL_59;
        LODWORD(v84) = a2 != nullptr && v90 - 1 <= 2;
        if ( a2 == nullptr || v90 - 1 > 2 )
          goto LABEL_49;
        v85 = v90 - 1;
        v88 = (_DWORD)v8 + 1 - v90;
        if ( v90 == 1 )
          goto LABEL_59;
        v48 = (unsigned __int8)*((char *)ptr + v90 - 2);
        if ( v48 != 62 )
        {
          v49 = v48 == 60;
          if ( (_DWORD)v90 != 2 )
            v49 = 0;
          LODWORD(v84) = v49;
          if ( !v49 )
          {
LABEL_49:
            v7 = *v8;
            v5 = v8;
            v6 = 0;
            goto LABEL_3;
          }
          v50 = v8;
          v51 = 0;
          v85 = 1;
LABEL_75:
          v92 = nullptr;
          v93 = 0;
          v94 = 0;
          v52 = sub_49BBA0(v50);
          v53 = *v52;
          if ( v53 != 34 && v53 != 39 )
          {
            v56 = v52;
            if ( *v52 )
            {
              do
              {
                if ( (v53 & 0x80) == 0 && isspace(v53) )
                  break;
                if ( (v53 & 0xFFFFFFFD) == 0x3C )
                  break;
                v62 = *++v56;
                v53 = v62;
              }
              while ( v62 );
              if ( v56 > v52 )
              {
                v95 = nullptr;
                v96 = 0;
                v73 = 0;
                v97 = 0;
                v74 = nullptr;
                v63 = v56 - v52;
                if ( v56 != v52 )
                {
                  v81 = nullptr;
                  if ( v63 != -1 )
                  {
                    v81 = sub_491288((__int64)&v95, nullptr, v63 + 1, 1u);
                    v95 = v81;
                  }
                  v96 = v63 + 1;
                  memmove(v81, v52, v56 - v52);
                  *((_BYTE *)v95 + v63) = 0;
                  v74 = v95;
                  v63 = v96;
                  v73 = v97;
                }
                v95 = nullptr;
                v96 = 0;
                v97 = 0;
                if ( !v92 )
                {
                  v92 = v74;
                  v93 = v63;
                  v94 = v73;
                  goto LABEL_103;
                }
                v93 = 0;
                j__free(v92);
                v92 = v74;
                v93 = v63;
                v94 = v73;
                if ( !v95 )
                  goto LABEL_103;
                v96 = 0;
                j__free(v95);
              }
            }
            v63 = v93;
            goto LABEL_103;
          }
          v55 = v52[1];
          v56 = v52 + 1;
          if ( !v52[1] )
          {
LABEL_118:
            if ( !v53 )
            {
              v63 = v93;
              goto LABEL_120;
            }
            v93 = 0;
            goto LABEL_115;
          }
          while ( 2 )
          {
            v60 = v56 + 1;
            if ( v55 == 92 )
            {
              v61 = v56[1];
              if ( !v61 )
              {
                ++v56;
                goto LABEL_118;
              }
              v56 += 2;
LABEL_87:
              if ( v93 )
              {
                v57 = v93 - 1;
                v58 = v93 + 1;
                v59 = v92;
                if ( v94 < v93 + 1 )
                  goto LABEL_89;
              }
              else
              {
                v58 = 2;
                v57 = 0;
                v59 = v92;
                if ( v94 < 2 )
                {
LABEL_89:
                  v59 = sub_491288((__int64)&v92, v59, v58, 1u);
                  v92 = v59;
                }
              }
              v93 = v58;
              *((_BYTE *)v59 + v57) = v61;
              *((_BYTE *)v92 + v57 + 1) = 0;
              v55 = v60[1];
              if ( !v60[1] )
                goto LABEL_118;
              continue;
            }
            break;
          }
          if ( v55 != v53 )
          {
            v61 = *v56;
            v60 = v56++;
            goto LABEL_87;
          }
          ++v56;
          v63 = v93;
LABEL_120:
          v85 |= 8u;
LABEL_103:
          if ( v63 <= 1 )
          {
LABEL_115:
            if ( !v92 )
              goto LABEL_59;
            v93 = 0;
            v5 = v8;
            j__free(v92);
            v6 = 0;
            v7 = *v8;
            LODWORD(v84) = 0;
          }
          else
          {
            v64 = a2[1];
            v65 = a2[2];
            if ( v64 + 1 > v65 )
            {
              v66 = sub_491288((__int64)a2, nullptr, v64 + 1, 0x30u);
              v76 = a2[1];
              v75 = a2[2];
              a2[2] = v65;
              v77 = v76 - 1;
              v78 = (_QWORD *)*a2;
              if ( v77 >= 0 )
              {
                v79 = v66;
                do
                {
                  *(_DWORD *)v79 = *(_DWORD *)v78;
                  v79[1] = v78[1];
                  v78[1] = 0;
                  v79[2] = v78[2];
                  v78[2] = 0;
                  v79[3] = v78[3];
                  v78[3] = 0;
                  *((_DWORD *)v79 + 8) = *((_DWORD *)v78 + 8);
                  *((_DWORD *)v79 + 9) = *((_DWORD *)v78 + 9);
                  *((_DWORD *)v79 + 10) = *((_DWORD *)v78 + 10);
                  v80 = (void *)v78[1];
                  if ( v80 )
                  {
                    v78[2] = 0;
                    j__free(v80);
                  }
                  --v77;
                  v78 += 6;
                  v79 += 6;
                }
                while ( v77 != -1 );
                v78 = (_QWORD *)*a2;
              }
              j__free(v78);
              v64 = a2[1];
              *a2 = v66;
              a2[2] = v75;
            }
            else
            {
              v66 = (_QWORD *)*a2;
            }
            v67 = v92;
            v68 = (char *)&v66[6 * v64];
            *((_QWORD *)v68 + 1) = 0;
            *((_QWORD *)v68 + 2) = 0;
            *((_QWORD *)v68 + 3) = 0;
            ++a2[1];
            *((_DWORD *)v68 + 8) = v85;
            v69 = *((void **)v68 + 1);
            v70 = *((_QWORD *)v68 + 2);
            *((_QWORD *)v68 + 1) = v67;
            v92 = v69;
            *((_QWORD *)v68 + 2) = v93;
            v71 = *((_QWORD *)v68 + 3);
            *((_QWORD *)v68 + 3) = v94;
            v93 = v70;
            v94 = v71;
            *(_DWORD *)v68 = v51;
            v5 = sub_49BBA0(v56);
            v72 = v92;
            *((_DWORD *)v68 + 9) = v88 - v87;
            *((_DWORD *)v68 + 10) = (_DWORD)v5 - v88;
            if ( v72 )
            {
              v93 = 0;
              j__free(v72);
            }
            if ( !v5 )
            {
LABEL_59:
              v7 = *v8;
              v5 = v8;
              v6 = 0;
              LODWORD(v84) = 0;
              goto LABEL_3;
            }
            LODWORD(v84) = 0;
            v6 = 0;
            v90 = 0;
            v7 = (unsigned __int8)*v5;
          }
          goto LABEL_3;
        }
        v7 = *v8;
        if ( v90 == 2 )
        {
          if ( v7 == 62 )
          {
            v50 = v8 + 1;
            v51 = 1;
            v85 = 6;
          }
          else
          {
            v50 = v8;
            v51 = 1;
            v85 = 2;
          }
          goto LABEL_75;
        }
        if ( (_DWORD)v90 == 3 )
        {
          v82 = *(unsigned __int8 *)ptr;
          if ( (v82 & 0x80) == 0 )
          {
            v83 = v82 - 48;
            if ( v83 <= 9 )
            {
              v51 = v83;
              v50 = v8;
              if ( v7 == 62 )
              {
                v50 = v8 + 1;
                v85 = 6;
              }
              goto LABEL_75;
            }
          }
        }
        LODWORD(v84) = 0;
        v6 = 0;
        v5 = v8;
        if ( v7 != 62 )
          goto LABEL_3;
      }
      if ( v6 )
        v10 = v6 == v7;
      else
        v10 = 0;
      if ( !v10 )
      {
        if ( !v6 )
        {
          v35 = (unsigned __int8)v5[1];
          v6 = v7;
          ++v5;
          v7 = v35;
          goto LABEL_3;
        }
        goto LABEL_31;
      }
      v11 = (unsigned __int8)v5[1];
      if ( (v11 & 0x80) == 0 && (isspace(v11) || v11 == 0) )
      {
        v13 = *(char **)a1;
        v14 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(a1 + 16) )
        {
          v13 = (char *)sub_491288(a1, *(void **)a1, v14 + 1, 0x18u);
          v14 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v13;
        }
        v15 = 3 * v14;
        LODWORD(v84) = 0;
        v16 = &v13[24 * v14];
        *(_QWORD *)&v13[8 * v15] = 0;
        *((_QWORD *)v16 + 1) = 0;
        *((_QWORD *)v16 + 2) = 0;
        v17 = ptr;
        ++*(_QWORD *)(a1 + 8);
        v18 = *(void **)&v13[8 * v15];
        v20 = *((_QWORD *)v16 + 1);
        v19 = *((_QWORD *)v16 + 2);
        *(_QWORD *)&v13[8 * v15] = v17;
        *((_QWORD *)v16 + 1) = v90;
        ptr = v18;
        v90 = v20;
        *((_QWORD *)v16 + 2) = v91;
        v91 = v19;
      }
      v21 = sub_49BBA0(v5 + 1);
      v7 = (unsigned __int8)*v21;
      v5 = v21;
      v6 = 0;
    }
    while ( *v21 );
  }
  v22 = v90;
LABEL_23:
  v23 = *(_QWORD *)(a1 + 8);
  if ( v22 > 1 )
  {
    v36 = *(char **)a1;
    if ( (unsigned __int64)(v23 + 1) > *(_QWORD *)(a1 + 16) )
    {
      v36 = (char *)sub_491288(a1, v36, v23 + 1, 0x18u);
      v23 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v36;
    }
    v37 = (void **)&v36[24 * v23];
    *v37 = nullptr;
    v37[1] = nullptr;
    v37[2] = nullptr;
    v38 = ptr;
    ++*(_QWORD *)(a1 + 8);
    v24 = *v37;
    v40 = v37[1];
    v39 = (unsigned __int64)v37[2];
    *v37 = v38;
    v37[1] = (void *)v90;
    ptr = v24;
    v90 = (unsigned __int64)v40;
    v37[2] = (void *)v91;
    v91 = v39;
    v23 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v24 = ptr;
  }
  if ( v24 )
  {
    v90 = 0;
    j__free(v24);
  }
  return v23;
}
// 4808E0: conditional instruction was optimized away because w1.4<Au
