__int64 __fastcall sub_1BD2CB0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5)
{
  __int64 v5; // r9
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r10d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 *v22; // r15
  __int64 *v23; // r14
  __int64 v24; // rdi
  unsigned __int8 v25; // al
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  __int64 v29; // rcx
  char v30; // al
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rsi
  char v40; // al
  int v41; // r14d
  unsigned int v42; // r13d
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned __int8 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  _QWORD *v61; // r15
  __int64 v62; // rax
  __int64 v63; // r13
  bool v64; // r10
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int8 v68; // al
  unsigned __int8 v69; // al
  __int64 v70; // rax
  bool v72; // [rsp+8h] [rbp-68h]
  __int64 v73; // [rsp+8h] [rbp-68h]
  __int64 v74; // [rsp+8h] [rbp-68h]
  __int64 v75; // [rsp+8h] [rbp-68h]
  unsigned __int8 v76; // [rsp+8h] [rbp-68h]
  unsigned __int8 v77; // [rsp+8h] [rbp-68h]
  bool v78; // [rsp+8h] [rbp-68h]
  __int64 v80; // [rsp+18h] [rbp-58h]
  unsigned __int8 v81; // [rsp+20h] [rbp-50h]
  __int64 v82; // [rsp+20h] [rbp-50h]
  __int64 v83[8]; // [rsp+30h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 4) != 0 )
  {
    v5 = 0;
    v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v7 & 8) != 0 )
      v5 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
    v8 = a3;
    v9 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v12 = v5 | ((unsigned __int8)v7 | (unsigned __int8)a2) & 7;
    v80 = v12;
    if ( *(_BYTE *)(v11 + 16) == 34 )
    {
      v13 = *v6;
      if ( *(_BYTE *)(*v6 + 16) == 34 )
      {
LABEL_6:
        if ( sub_1BC70C0(*(_QWORD *)(v11 + 32), *(_QWORD *)(v13 + 32)) )
          return 0;
        v76 = sub_AABC90(v14, v11, v13, v14, v15);
        if ( v76 )
        {
          v50 = sub_F67A50(v11, v11, v47, v48, v49);
          v54 = sub_F67A50(v13, v11, v51, v52, v53);
          v56 = v76;
          v57 = *(_QWORD *)(a1 + 248);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && v50 && v54 )
          {
            v58 = *(_QWORD *)(v13 + 32);
            v59 = *(_QWORD *)(a1 + 248);
            v83[0] = *(_QWORD *)(v11 + 32);
            if ( !sub_16A8D90(v83, v58, v59, v57, v55) )
              return 0;
            v57 = *(_QWORD *)(a1 + 248);
            v56 = v76;
          }
          v77 = v56;
          goto LABEL_43;
        }
        v12 = v13;
        v69 = sub_AABC90(*(_QWORD *)(a1 + 248), v13, v11, v48, v49);
        a3 = 1;
        v72 = 1;
        if ( v69 )
        {
          v77 = v69;
          *a5 = 1;
          v57 = *(_QWORD *)(a1 + 248);
LABEL_43:
          v60 = sub_1BCCCA0(v13, *(_QWORD *)(v11 + 32), v8, v57, 0);
          v61 = a4;
LABEL_44:
          *v61 = v60;
          v62 = sub_1BCCC00(*(_QWORD *)(a1 + 248), v60, v80);
          v16 = v77;
          *v61 = v62;
          return v16;
        }
LABEL_13:
        v19 = *(_QWORD *)v9;
        v81 = a3;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) == 42 || (v19 = sub_1BC7590(v19, v12, a3, (__int64)a4), a3 = v81, v19) )
        {
          v20 = *(_QWORD *)(v19 + 32);
        }
        else
        {
          v63 = *(_QWORD *)v9;
          if ( *(_BYTE *)(v63 + 16) != 11 )
          {
            v70 = sub_1BC75C0(v63, v12, v81, (__int64)a4);
            a3 = v81;
            v63 = v70;
            if ( !v70 )
            {
              if ( *(_BYTE *)(*v6 + 16) != 11 && !sub_1BC75C0(*v6, v12, v81, (__int64)a4) )
                return 0;
              if ( !v72 )
                return 0;
              v64 = sub_1BCC270(v11, v12, a3, (__int64)a4);
              if ( !v64 )
                return 0;
LABEL_51:
              v78 = v64;
              v65 = sub_1BCCC00(*(_QWORD *)(a1 + 248), v8, v80);
              v16 = v78;
              *a4 = v65;
              return v16;
            }
          }
          if ( (_BYTE)a3 )
          {
            v64 = sub_1BCC270(v13, v12, a3, (__int64)a4);
            if ( v64 )
              goto LABEL_51;
          }
          v20 = *(_QWORD *)(v63 + 32);
        }
        v21 = *v6;
        if ( *(_BYTE *)(*v6 + 16) != 42 )
        {
          v21 = sub_1BC7590(*v6, v12, a3, (__int64)a4);
          if ( !v21 )
          {
            v21 = *v6;
            if ( *(_BYTE *)(*v6 + 16) != 11 )
            {
              v21 = sub_1BC75C0(*v6, v12, a3, (__int64)a4);
              if ( !v21 )
                return 0;
            }
          }
        }
        v22 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
        v73 = *(_QWORD *)(v21 + 32);
        v23 = (__int64 *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
        v24 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
        {
          v12 = *(_QWORD *)(v21 + 32);
          v68 = sub_1BD2CB0(a1, v73, v20, a4, a5);
          if ( v68 )
          {
            v77 = v68;
            *a5 = 1;
            goto LABEL_78;
          }
          v24 = *v23;
        }
        if ( *(_BYTE *)(v24 + 16) != 34 && !sub_1BC7620(v24, v12, a3, (__int64)a4)
          || *(_BYTE *)(*v22 + 16) != 34 && !sub_1BC7620(*v22, v12, a3, (__int64)a4)
          || (v12 = v73, (v25 = sub_1BD2CB0(a1, v73, v20, a4, a5)) == 0) )
        {
          v27 = *v23;
          if ( *(_BYTE *)(*v23 + 16) == 26 )
          {
            v28 = *v22;
            if ( *(_BYTE *)(*v22 + 16) == 26 )
              goto LABEL_22;
          }
          else
          {
            v66 = sub_1BC7360(*v23, v12, a3, (__int64)a4);
            v28 = *v22;
            v27 = v66;
            if ( *(_BYTE *)(*v22 + 16) == 26 )
            {
LABEL_62:
              if ( !v27 || !v28 )
                return 0;
LABEL_22:
              v29 = *(_QWORD *)&byte_8[v73 & 0xFFFFFFFFFFFFFFF0LL];
              v30 = v29 | v73;
              v31 = v29 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v31 | v30 & 7) == (*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                     | ((unsigned __int8)*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL]
                                      | (unsigned __int8)v20)
                                     & 7) )
                return 0;
              if ( *(_WORD *)(v28 + 22) != *(_WORD *)(v27 + 22) )
                return 0;
              v32 = *(_QWORD *)(v28 + 16) >> 24;
              LOBYTE(v32) = (unsigned __int8)v32 >> 7;
              if ( (_BYTE)v32 != (unsigned __int8)BYTE3(*(_QWORD *)(v27 + 16)) >> 7 )
                return 0;
              v74 = v27;
              v33 = sub_A5DBE0(v28, v12, v32, v31, v26);
              if ( sub_A5DBE0(v74, v12, v34, v35, v36) != v33 )
                return 0;
              v37 = *(_QWORD *)(v28 + 24);
              v38 = v74;
              v39 = *(_QWORD *)(v74 + 24);
              if ( (*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)v39 | (unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v37 | (unsigned __int8)*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
              {
                v41 = *(unsigned __int16 *)(v74 + 22);
                if ( !*(_WORD *)(v74 + 22) )
                  return 0;
                v40 = 0;
              }
              else
              {
                v40 = sub_1BD2CB0(a1, v39, v37, a4, a5);
                if ( !v40 )
                  return 0;
                v38 = v74;
                v41 = *(unsigned __int16 *)(v74 + 22);
                if ( !*(_WORD *)(v74 + 22) )
                {
LABEL_34:
                  v46 = sub_1BCCC00(*(_QWORD *)(a1 + 248), v8, v80);
                  v16 = 1;
                  *a4 = v46;
                  *a5 = 1;
                  return v16;
                }
              }
              v42 = 0;
              while ( 1 )
              {
                v43 = 8LL * v42;
                v44 = *(_QWORD *)(v38 + v43 + 48);
                v45 = *(_QWORD *)(v28 + v43 + 48);
                if ( (*(_QWORD *)&byte_8[v44 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                    | ((unsigned __int8)v44 | (unsigned __int8)*(_QWORD *)&byte_8[v44 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (((unsigned __int8)v45 | (unsigned __int8)*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL]) & 7 | *(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL) )
                {
                  v75 = v38;
                  v40 = sub_1BD2CB0(a1, v44, v45, a4, a5);
                  v38 = v75;
                  if ( !v40 )
                    return 0;
                }
                if ( ++v42 == v41 )
                {
                  if ( !v40 )
                    return 0;
                  goto LABEL_34;
                }
              }
            }
          }
          v82 = v27;
          v67 = sub_1BC7360(v28, v12, a3, (__int64)a4);
          v27 = v82;
          v28 = v67;
          goto LABEL_62;
        }
        v77 = v25;
LABEL_78:
        v61 = a4;
        v60 = sub_A70010(*(_QWORD *)(a1 + 248), *a4);
        goto LABEL_44;
      }
      v72 = 1;
    }
    else
    {
      v18 = sub_1BC7620(v11, v12, a3, (__int64)a4);
      v13 = *v6;
      v11 = v18;
      if ( *(_BYTE *)(*v6 + 16) == 34 )
      {
        v72 = v18 != 0;
LABEL_11:
        LOBYTE(a3) = v13 != 0;
        if ( !v13 || !v72 )
          goto LABEL_13;
        goto LABEL_6;
      }
      v72 = v18 != 0;
    }
    v13 = sub_1BC7620(v13, v12, a3, (__int64)a4);
    goto LABEL_11;
  }
  return 0;
}
