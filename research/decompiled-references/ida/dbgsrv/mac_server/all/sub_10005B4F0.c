/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B4F0
// Address: 0x000000010005B4F0

//----- (000000010005B4F0) ----------------------------------------------------
__int64 __fastcall sub_10005B4F0(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  const char *v4; // r14
  unsigned __int64 v5; // r12
  _QWORD *v6; // rax
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  char **v11; // r13
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r13
  char *v23; // r13
  size_t v24; // rax
  unsigned __int64 v25; // rdx
  void *v26; // rax
  const char *v27; // rdi
  int v28; // eax
  _BYTE *v29; // rax
  __int64 v30; // rax
  size_t v31; // r14
  bool v32; // cf
  size_t v33; // rax
  __int64 v34; // rbx
  _BYTE *v35; // rax
  char **v37; // [rsp+0h] [rbp-300h]
  _QWORD *v38; // [rsp+8h] [rbp-2F8h]
  size_t __len; // [rsp+10h] [rbp-2F0h]
  unsigned __int64 v40; // [rsp+18h] [rbp-2E8h]
  int v41; // [rsp+28h] [rbp-2D8h]
  const void **v42; // [rsp+30h] [rbp-2D0h]
  char v43; // [rsp+3Fh] [rbp-2C1h] BYREF
  void **p_p; // [rsp+40h] [rbp-2C0h]
  void *__p; // [rsp+48h] [rbp-2B8h] BYREF
  __int128 v46; // [rsp+50h] [rbp-2B0h] BYREF
  __int128 v47; // [rsp+60h] [rbp-2A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-290h]
  __int128 v49; // [rsp+80h] [rbp-280h]
  __int128 v50; // [rsp+90h] [rbp-270h]
  __int128 v51; // [rsp+A0h] [rbp-260h]
  __int128 v52; // [rsp+B0h] [rbp-250h]
  __int64 v53; // [rsp+C0h] [rbp-240h]
  _QWORD v54[2]; // [rsp+C8h] [rbp-238h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-228h] BYREF
  __int128 v56; // [rsp+E0h] [rbp-220h]
  int v57; // [rsp+F0h] [rbp-210h]
  char v58; // [rsp+F4h] [rbp-20Ch]
  _QWORD *v59; // [rsp+F8h] [rbp-208h]
  char v60; // [rsp+100h] [rbp-200h]
  __int128 v61; // [rsp+110h] [rbp-1F0h]
  __int128 v62; // [rsp+120h] [rbp-1E0h]
  __int64 v63; // [rsp+130h] [rbp-1D0h]
  char v64; // [rsp+138h] [rbp-1C8h]
  __int64 v65; // [rsp+140h] [rbp-1C0h]
  __int128 v66; // [rsp+148h] [rbp-1B8h]
  __int128 v67; // [rsp+158h] [rbp-1A8h]
  __int16 v68; // [rsp+168h] [rbp-198h]
  __int128 v69; // [rsp+190h] [rbp-170h]
  __int128 v70; // [rsp+1A0h] [rbp-160h]
  __int128 v71; // [rsp+1B0h] [rbp-150h]
  __int128 v72; // [rsp+1C0h] [rbp-140h]
  __int128 v73; // [rsp+1D0h] [rbp-130h]
  __int128 v74; // [rsp+1E0h] [rbp-120h]
  __int128 v75; // [rsp+1F0h] [rbp-110h]
  __int128 v76; // [rsp+200h] [rbp-100h]
  __int128 v77; // [rsp+210h] [rbp-F0h]
  __int128 v78; // [rsp+220h] [rbp-E0h]
  __int128 v79; // [rsp+230h] [rbp-D0h]
  __int128 v80; // [rsp+240h] [rbp-C0h]
  __int128 v81; // [rsp+250h] [rbp-B0h]
  __int128 v82; // [rsp+260h] [rbp-A0h]
  _BYTE v83[19]; // [rsp+270h] [rbp-90h] BYREF
  int v84; // [rsp+284h] [rbp-7Ch]
  __int128 v85; // [rsp+288h] [rbp-78h]
  __int128 v86; // [rsp+298h] [rbp-68h]
  int v87; // [rsp+2A8h] [rbp-58h]
  __int128 v88; // [rsp+2B0h] [rbp-50h]
  __int128 v89; // [rsp+2C0h] [rbp-40h]

  v2 = *a1;
  if ( *a1 && *(_DWORD *)(v2 + 8) == 1 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v4 = *(const char **)(v2 + 16);
    else
      v4 = _s1;
    v6 = open_linput(v4, 0);
    __p = v6;
    if ( v6 )
    {
      p_p = &__p;
      v54[0] = &off_1000A7F20;
      v54[1] = &v55;
      v55 = 0xFFFFFFFFLL;
      v56 = -1;
      v57 = 8;
      v58 = 1;
      v59 = v6;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = -1;
      v64 = 0;
      v65 = -1;
      v84 = 0;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      memset(v83, 0, sizeof(v83));
      v85 = -1;
      v86 = 0;
      v87 = 0;
      v89 = 0;
      v88 = 0;
      if ( (unsigned __int8)sub_10000FA10((__int64)v54) )
      {
        if ( a2 )
        {
          v7 = a2[6];
          if ( v7 > 0x12 || (v8 = 265216, !_bittest(&v8, v7)) )
          {
            v43 = 0;
            v9 = sub_10000F3B0(a2[522], (unsigned int)a2[523], &v43);
            v10 = sub_100051640((__int64)v54, v9, v43);
            if ( v10 == -1 || !(unsigned __int8)sub_100010140((__int64)v54, v10, 0, 0) )
            {
              LODWORD(v5) = 0;
              sub_100000AE0((int)"No matching architecture found in Mach-O file at: %s\n", v4);
            }
            else
            {
              v11 = (char **)(a1 + 13);
              v12 = (char *)a1[13];
              v13 = a1[14];
              if ( a1[15] < (unsigned __int64)(v13 + 1) )
              {
                v12 = (char *)qvector_reserve((__int64)(a1 + 13), v12, v13 + 1, 0x78u);
                a1[13] = (__int64)v12;
                v13 = a1[14];
              }
              v14 = 120 * v13;
              *(_OWORD *)&v12[v14 + 96] = 0;
              *(_OWORD *)&v12[v14 + 80] = 0;
              *(_OWORD *)&v12[v14 + 64] = 0;
              *(_OWORD *)&v12[v14 + 48] = 0;
              *(_OWORD *)&v12[v14 + 32] = 0;
              *(_OWORD *)&v12[v14 + 16] = 0;
              *(_OWORD *)&v12[v14] = 0;
              *(_QWORD *)&v12[v14 + 112] = 0;
              ++a1[14];
              v15 = (_QWORD *)sub_1000127B0((__int64)v54);
              v16 = v15[1];
              if ( a1[14] != v16 )
              {
                v17 = v15;
                v52 = 0;
                v51 = 0;
                v50 = 0;
                v49 = 0;
                v48 = 0;
                v47 = 0;
                v46 = 0;
                v53 = 0;
                sub_10005C270((__int64)(a1 + 13), v16, (unsigned __int64)&v46);
                if ( (_QWORD)v47 )
                {
                  *((_QWORD *)&v47 + 1) = 0;
                  qfree((void *)v47);
                }
                v15 = v17;
                v16 = v17[1];
              }
              v41 = 0;
              if ( v16 )
              {
                v18 = 0;
                LODWORD(v5) = 0;
                v37 = v11;
                v38 = v15;
                while ( 1 )
                {
                  v52 = 0;
                  v51 = 0;
                  v50 = 0;
                  v49 = 0;
                  v48 = 0;
                  v47 = 0;
                  v46 = 0;
                  v53 = 0;
                  v19 = (__int64)&(*v11)[120 * v18];
                  v20 = *v15;
                  *(_QWORD *)v19 = *(_QWORD *)(*v15 + 80 * v18 + 32);
                  *(_DWORD *)(v19 + 8) = *(_DWORD *)(v20 + 80 * v18 + 40);
                  *(_QWORD *)(v19 + 40) = 0;
                  v21 = v20 + 80 * v18;
                  *(_QWORD *)(v19 + 48) = v65 + *(unsigned int *)(v21 + 48);
                  v42 = (const void **)(v19 + 16);
                  v22 = 1;
                  while ( strncmp(off_1000A9320[v22 - 1], (const char *)v21, 0x10u) )
                  {
                    v22 += 2;
                    if ( v22 == 45 )
                      goto LABEL_33;
                  }
                  v23 = off_1000A9320[v22];
                  if ( v23 && (v24 = strlen(v23)) != 0 )
                  {
                    __len = v24;
                    v25 = v24 + 1;
                    v26 = *(void **)(v19 + 16);
                    if ( *(_QWORD *)(v19 + 32) < v25 )
                    {
                      v40 = v25;
                      v26 = qvector_reserve((__int64)v42, *(void **)(v19 + 16), v25, 1u);
                      *v42 = v26;
                      v25 = v40;
                    }
                    *(_QWORD *)(v19 + 24) = v25;
                    memmove(v26, v23, __len);
                    *(_BYTE *)(*(_QWORD *)(v19 + 16) + __len) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v19 + 24) = 0;
                  }
LABEL_33:
                  *(_OWORD *)(v19 + 56) = 0;
                  v27 = _s1;
                  if ( *(_QWORD *)(v19 + 24) )
                    v27 = (const char *)*v42;
                  v28 = strncmp(v27, ".debug_", 7u);
                  v11 = v37;
                  if ( !v28 )
                  {
                    if ( *(_DWORD *)(v21 + 60) )
                      break;
                  }
                  if ( !v28 )
                    goto LABEL_49;
LABEL_51:
                  if ( (_QWORD)v47 )
                  {
                    *((_QWORD *)&v47 + 1) = 0;
                    qfree((void *)v47);
                  }
                  v18 = ++v41;
                  v15 = v38;
                  if ( v38[1] <= (unsigned __int64)v41 )
                    goto LABEL_57;
                }
                v29 = (_BYTE *)v47;
                if ( (unsigned __int64)v48 <= 5 )
                {
                  v29 = qvector_reserve((__int64)&v47, (void *)v47, 6u, 1u);
                  *(_QWORD *)&v47 = v29;
                }
                *((_QWORD *)&v47 + 1) = 6;
                v29[4] = 97;
                *(_DWORD *)v29 = 1818587694;
                *(_BYTE *)(v47 + 5) = 0;
                v30 = *(_QWORD *)(v19 + 24);
                v31 = 0;
                v32 = v30 == 0;
                v33 = v30 - 1;
                if ( !v32 )
                  v31 = v33;
                if ( !v32 && v33 != 0 )
                {
                  v34 = 0;
                  if ( *((_QWORD *)&v47 + 1) )
                    v34 = *((_QWORD *)&v47 + 1) - 1LL;
                  v35 = (_BYTE *)v47;
                  v5 = v34 + v31 + 1;
                  if ( (unsigned __int64)v48 < v5 )
                  {
                    v35 = qvector_reserve((__int64)&v47, (void *)v47, v34 + v31 + 1, 1u);
                    *(_QWORD *)&v47 = v35;
                  }
                  *((_QWORD *)&v47 + 1) = v34 + v31 + 1;
                  v35[v34 + v31] = 0;
                  memcpy((void *)(v47 + v34), *v42, v31);
                }
                *((_QWORD *)&v49 + 1) = 4;
                *(_QWORD *)&v50 = v41 + 1;
                DWORD2(v46) = 1;
LABEL_49:
                LOBYTE(v5) = 1;
                if ( *((_QWORD *)&v47 + 1) >= 2u )
                  sub_10005C0B0(v37, (__int64 *)&v46);
                goto LABEL_51;
              }
              LODWORD(v5) = 0;
LABEL_57:
              *((_WORD *)a1 + 84) = __ROL2__(v68, 8);
            }
            goto LABEL_58;
          }
          if ( under_debugger != 1 )
            interr(0x782Au);
        }
        else if ( under_debugger != 1 )
        {
          interr(0x76FDu);
        }
        BUG();
      }
      LODWORD(v5) = 0;
      sub_100000AE0((int)"Failed to read Mach-O header from: %s\n", v4);
LABEL_58:
      sub_10001CA40((__int64)v54);
      close_linput(__p);
      return (unsigned int)v5;
    }
    LODWORD(v5) = 0;
    sub_100000AE0((int)"Cannot open file: %s.\n", v4);
  }
  else
  {
    LODWORD(v5) = 0;
    sub_100000AE0((int)"Input source is not local file.\n");
  }
  return (unsigned int)v5;
}
// 10005BC1B: masking with 0x1 was optimized away because r12.1 <= 0x1
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
// 1000A9320: using guessed type char *off_1000A9320[44];
// 1000AE23D: using guessed type char under_debugger;
