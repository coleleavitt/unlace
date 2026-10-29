/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35628
// Address: 0x00035628

//----- (00035628) --------------------------------------------------------
int __fastcall sub_35628(const char *a1, _DWORD *a2, int a3)
{
  int *v3; // r4
  int v4; // r7
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int *v8; // r7
  int v9; // r2
  int *v10; // r0
  _DWORD *v11; // r7
  char *v12; // r0
  int v13; // r2
  void *v14; // r2
  int v15; // r0
  int v16; // r1
  char *v17; // r1
  int v18; // r2
  unsigned int v19; // r7
  unsigned __int64 v20; // r0
  unsigned __int64 v21; // r0
  int v22; // r0
  unsigned __int64 v23; // r0
  int v24; // r7
  int v25; // r0
  char *v26; // r1
  int v27; // r0
  int v28; // r3
  _BOOL4 v29; // r0
  char *v30; // r1
  int v31; // r0
  int v32; // r3
  int v34; // [sp+0h] [bp-47Ch]
  int v35; // [sp+4h] [bp-478h]
  int v36; // [sp+8h] [bp-474h]
  int v37; // [sp+Ch] [bp-470h]
  int v38; // [sp+10h] [bp-46Ch]
  int *v39; // [sp+2Ch] [bp-450h]
  int v40; // [sp+30h] [bp-44Ch]
  int v41; // [sp+30h] [bp-44Ch]
  int v42; // [sp+30h] [bp-44Ch]
  int v43; // [sp+30h] [bp-44Ch]
  int v44; // [sp+34h] [bp-448h]
  int v45; // [sp+34h] [bp-448h]
  int v46; // [sp+34h] [bp-448h]
  int v48; // [sp+40h] [bp-43Ch] BYREF
  char *v49; // [sp+44h] [bp-438h] BYREF
  int v50; // [sp+48h] [bp-434h]
  int v51; // [sp+4Ch] [bp-430h]
  int v52; // [sp+50h] [bp-42Ch] BYREF
  int v53; // [sp+54h] [bp-428h]
  int v54; // [sp+58h] [bp-424h]
  int v55; // [sp+5Ch] [bp-420h]
  _QWORD v56[8]; // [sp+60h] [bp-41Ch] BYREF
  _QWORD v57[61]; // [sp+A0h] [bp-3DCh] BYREF
  int v58[10]; // [sp+288h] [bp-1F4h] BYREF
  _DWORD v59[4]; // [sp+2B0h] [bp-1CCh] BYREF
  int v60; // [sp+2C0h] [bp-1BCh]
  unsigned int v61; // [sp+2C4h] [bp-1B8h]
  unsigned int v62; // [sp+2E4h] [bp-198h]
  unsigned int v63; // [sp+2F4h] [bp-188h]
  unsigned int v64; // [sp+304h] [bp-178h]
  char v65; // [sp+338h] [bp-144h]
  __int64 v66[2]; // [sp+390h] [bp-ECh] BYREF
  __int64 v67; // [sp+3A0h] [bp-DCh]
  __int64 v68; // [sp+3A8h] [bp-D4h]
  bool (__fastcall *v69)(int, int); // [sp+408h] [bp-74h]
  char v70; // [sp+410h] [bp-6Ch]
  char v71; // [sp+411h] [bp-6Bh]
  __int64 v72; // [sp+42Ch] [bp-50h]

  v3 = open_linput(a1, a3);
  v4 = -1;
  if ( v3 )
  {
    sub_6760C();
    v5 = sub_2BCCC((int)v58, v3, 0, 0);
    v69 = sub_369C8;
    if ( sub_27938(v5) && sub_27A6C((int)v58) && (unsigned __int8)(v70 - 1) <= 1u && (unsigned __int8)(v71 - 1) <= 1u )
    {
      v55 = 0;
      v54 = 0;
      v53 = 0;
      v52 = 0;
      if ( !v72 )
        goto LABEL_9;
      sub_2D12C(v58, HIDWORD(v72) | v72, (int)v58, v6, v34, v35, v36, v37, v38);
      if ( v7 )
      {
        dword_DE334 = v58[7];
LABEL_9:
        sub_2C81C((int)v58);
        v52 = v59[0];
        v53 = v59[1];
        v54 = v59[2];
        v55 = v59[3];
        if ( v59[0] )
        {
          memset(v57, 0, sizeof(v57));
        }
        else
        {
          v55 = v58[3];
          v54 = v58[2];
          v53 = v58[1];
          v52 = v58[0];
          memset(v57, 0, sizeof(v57));
          if ( !v58[0] )
            goto LABEL_37;
        }
        memset(v56, 0, 12);
        LODWORD(v56[0]) = qvector_reserve((int)v56, nullptr, 0xAu, 0x10u);
        if ( !sub_312C0((int)v58, (int)v56, (unsigned int *)&v52)
          || !sub_31584((int)v58, (int)v57, v56)
          || (a2[1] & 4) == 0 )
        {
LABEL_34:
          v14 = (void *)v56[0];
LABEL_35:
          if ( !v14 )
            goto LABEL_37;
          goto LABEL_36;
        }
        if ( v57[0] >= 1LL && v57[2] )
        {
          if ( v66[0] >= 1 && v67 )
          {
            if ( __PAIR64__(v57[0], HIDWORD(v57[0])) == __PAIR64__(v66[0], HIDWORD(v66[0])) )
              goto LABEL_22;
            v35 = HIDWORD(v57[0]);
            sub_2BC80((int)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%"
                           "08llX), using the latter");
          }
          v66[0] = v57[0];
          v66[1] = v57[1];
          v67 = v57[2];
          v68 = v57[3];
        }
LABEL_22:
        v8 = (int *)v56[0];
        if ( 16 * HIDWORD(v56[0]) )
        {
          while ( 1 )
          {
            v50 = 0;
            v49 = nullptr;
            v51 = 0;
            v9 = *v8;
            v40 = v8[1];
            v39 = v8;
            if ( *(_QWORD *)v8 <= 0x1Du && ((1 << v9) & 0x2000C002) != 0 )
            {
              v10 = v8;
              v11 = v8 + 2;
              sub_32154((int)v58, (void **)&v49, v66, v10[2]);
              v9 = *v39;
              v40 = v39[1];
              if ( v50 )
              {
                v12 = v49;
                goto LABEL_29;
              }
            }
            else
            {
              v11 = v8 + 2;
            }
            v12 = &byte_B3CBE;
LABEL_29:
            v13 = (*(int (__fastcall **)(_DWORD *, _DWORD, int, int, char *, int, _DWORD, _DWORD))(*a2 + 12))(
                    a2,
                    *(_DWORD *)(*a2 + 12),
                    v9,
                    v40,
                    v12,
                    v35,
                    *v11,
                    v11[1]);
            if ( v49 )
            {
              v41 = v13;
              v50 = 0;
              qfree(v49);
              v51 = 0;
              v49 = nullptr;
              v13 = v41;
            }
            v8 = v39 + 4;
            if ( v13 )
              goto LABEL_34;
            v14 = (void *)v56[0];
            if ( v8 == (int *)(LODWORD(v56[0]) + 16 * HIDWORD(v56[0])) )
              goto LABEL_35;
          }
        }
        v14 = (void *)v56[0];
        if ( !LODWORD(v56[0]) )
        {
LABEL_37:
          v15 = a2[1];
          if ( (v15 & 2) != 0 && v63 )
          {
            if ( !v65 )
            {
              if ( !under_debugger )
                interr(20099);
              goto LABEL_107;
            }
            if ( v61 > v63 )
            {
              v16 = v60 + (v63 << 6);
              if ( v16 )
              {
                memset(v56, 0, 12);
                sub_2F228((int)v58, v56, *(_DWORD *)(v16 + 24), *(_DWORD *)(v16 + 28));
                if ( HIDWORD(v56[0]) )
                  v17 = (char *)v56[0];
                else
                  v17 = &byte_B3CBE;
                v4 = (*(int (__fastcall **)(_DWORD *, char *))(*a2 + 4))(a2, v17);
                if ( LODWORD(v56[0]) )
                {
                  HIDWORD(v56[0]) = 0;
                  qfree((void *)v56[0]);
                  LODWORD(v56[1]) = 0;
                  LODWORD(v56[0]) = 0;
                }
                if ( v4 )
                  goto LABEL_97;
                v15 = a2[1];
              }
            }
          }
          v18 = 0;
          if ( !(v15 << 31) )
            goto LABEL_67;
          v19 = v62;
          if ( !(v62 | v64) )
          {
            v18 = 0;
            if ( v57[4] < 1LL || !v57[6] )
              goto LABEL_66;
            memset(v56, 0, sizeof(v56));
            v56[3] = v57[4];
            v56[4] = v57[6];
            HIDWORD(v56[0]) = 11;
            v56[2] = v57[5];
            v56[7] = LOWORD(v57[7]);
            HIDWORD(v56[5]) = HIDWORD(v57[7]);
            LODWORD(v23) = v58;
            HIDWORD(v23) = v56;
            v22 = sub_369D4(v23, 2, (int (__fastcall ***)(_DWORD, int, char *))a2);
            goto LABEL_65;
          }
          v18 = 0;
          if ( v64 )
          {
            if ( !v65 )
            {
              if ( !under_debugger )
                interr(20099);
              goto LABEL_107;
            }
            HIDWORD(v20) = v60 + (v64 << 6);
            if ( v61 <= v64 )
              HIDWORD(v20) = 0;
            LODWORD(v20) = v58;
            v18 = sub_369D4(v20, 1, (int (__fastcall ***)(_DWORD, int, char *))a2);
          }
          if ( !v19 || v18 )
            goto LABEL_66;
          if ( v65 )
          {
            HIDWORD(v21) = v60 + (v19 << 6);
            if ( v61 <= v19 )
              HIDWORD(v21) = 0;
            LODWORD(v21) = v58;
            v22 = sub_369D4(v21, 2, (int (__fastcall ***)(_DWORD, int, char *))a2);
LABEL_65:
            v18 = v22;
LABEL_66:
            v15 = a2[1];
LABEL_67:
            memset(&v56[1], 0, 9);
            HIDWORD(v56[0]) = 0;
            LODWORD(v56[0]) = v58;
            if ( (v15 & 0x10) == 0 )
            {
              v4 = 0;
              if ( (v15 & 0x20) == 0 )
              {
LABEL_94:
                v4 = v18;
LABEL_95:
                if ( HIDWORD(v56[0]) )
                {
                  sub_36040((int *)v56 + 1, 0);
                  qfree((void *)HIDWORD(v56[0]));
                  HIDWORD(v56[1]) = 0;
                  HIDWORD(v56[0]) = 0;
                }
                goto LABEL_97;
              }
LABEL_82:
              v50 = 0;
              v49 = nullptr;
              v51 = 0;
              if ( v65 )
              {
                v45 = v18;
                v29 = sub_32868((int)v59, (int)&v49, &v48);
                v18 = v45;
                if ( v29 )
                {
                  if ( v50 )
                    v30 = v49;
                  else
                    v30 = &byte_B3CBE;
                  v31 = (*(int (__fastcall **)(_DWORD *, char *, int))(*a2 + 20))(a2, v30, v48);
                  v18 = v31;
                  if ( v31 )
                  {
                    v4 = v31;
                    v32 = 0;
                    goto LABEL_91;
                  }
                  v18 = 0;
                }
              }
              v32 = 1;
LABEL_91:
              if ( v49 )
              {
                v43 = v32;
                v46 = v18;
                v50 = 0;
                qfree(v49);
                v51 = 0;
                v49 = nullptr;
                v18 = v46;
                v32 = v43;
              }
              if ( !v32 )
                goto LABEL_95;
              goto LABEL_94;
            }
            v24 = v18;
            sub_2DBC4((int)v58, (int)v56);
            v50 = 0;
            v49 = nullptr;
            v51 = 0;
            v25 = sub_332CC((int)v56, (int)&v49);
            v18 = v24;
            if ( v25 )
            {
              if ( v50 )
                v26 = v49;
              else
                v26 = &byte_B3CBE;
              v27 = (*(int (__fastcall **)(_DWORD *, char *))(*a2 + 16))(a2, v26);
              v18 = v27;
              v28 = 0;
              if ( v27 )
              {
                v4 = v27;
                goto LABEL_78;
              }
              v18 = 0;
            }
            v28 = 1;
            v4 = 0;
LABEL_78:
            if ( v49 )
            {
              v42 = v28;
              v44 = v18;
              v50 = 0;
              qfree(v49);
              v51 = 0;
              v49 = nullptr;
              v18 = v44;
              v28 = v42;
            }
            if ( !v28 )
              goto LABEL_95;
            if ( (a2[1] & 0x20) == 0 )
              goto LABEL_94;
            goto LABEL_82;
          }
          if ( !under_debugger )
            interr(20099);
LABEL_107:
          __debugbreak();
        }
LABEL_36:
        HIDWORD(v56[0]) = 0;
        qfree(v14);
        LODWORD(v56[1]) = 0;
        LODWORD(v56[0]) = 0;
        goto LABEL_37;
      }
    }
LABEL_97:
    sub_283E4(v58);
    sub_67610();
    close_linput(v3);
  }
  return v4;
}
// 356BC: variable 'v6' is possibly undefined
// 356BC: variable 'v34' is possibly undefined
// 356BC: variable 'v35' is possibly undefined
// 356BC: variable 'v36' is possibly undefined
// 356BC: variable 'v37' is possibly undefined
// 356BC: variable 'v38' is possibly undefined
// 356C2: variable 'v7' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
// DE334: using guessed type int dword_DE334;
// E0550: using guessed type char under_debugger;
