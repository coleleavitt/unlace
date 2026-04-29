__int64 __fastcall sub_149350(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // r12d
  unsigned int v9; // r13d
  bool v10; // r14
  char v11; // bp
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  bool v18; // bp
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  bool v22; // al
  unsigned int v23; // r15d
  unsigned int v24; // eax
  int v25; // r12d
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebp
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 i; // rbp
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  int v49; // eax
  int v50; // r15d
  int v51; // eax
  __int64 v52; // r12
  int v53; // ebp
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  char v59; // al
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // [rsp+0h] [rbp-D8h]
  unsigned int *v69; // [rsp+8h] [rbp-D0h]
  int v70; // [rsp+8h] [rbp-D0h]
  int v71; // [rsp+8h] [rbp-D0h]
  __int64 v72; // [rsp+10h] [rbp-C8h]
  __int64 v73; // [rsp+18h] [rbp-C0h]
  unsigned int v74; // [rsp+2Ch] [rbp-ACh] BYREF
  _BYTE v75[8]; // [rsp+30h] [rbp-A8h] BYREF
  int v76; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD *v77; // [rsp+40h] [rbp-98h]
  int *v78; // [rsp+48h] [rbp-90h]
  int *v79; // [rsp+50h] [rbp-88h]
  __int64 v80; // [rsp+58h] [rbp-80h]
  _QWORD v81[5]; // [rsp+60h] [rbp-78h] BYREF
  char v82; // [rsp+88h] [rbp-50h]
  unsigned __int64 v83; // [rsp+98h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  LODWORD(v2) = 0;
  if ( (*(_BYTE *)(a1 + 2) & 9) == 0 && *(int *)(a1 + 312) <= 6 )
  {
    v4 = time(0);
    v2 = *(_QWORD *)(a1 + 1496);
    *(_DWORD *)(v2 + 992) = v4;
    v7 = *(unsigned int *)(*(_QWORD *)(a1 + 520) + 76LL);
    if ( (_DWORD)v7 || (v26 = sub_139F20(a1, a2), (v2 = v26) == 0) )
    {
      HIBYTE(v72) = 1;
      v8 = 1;
      v9 = 1;
      v78 = &v76;
      v10 = 1;
      v11 = 1;
      v79 = &v76;
      v76 = 0;
      v77 = 0;
      v80 = 0;
      HIDWORD(v73) = 0;
      v69 = &v74;
      while ( 1 )
      {
        v12 = sub_141F10(a1, v9, v2, v7, v5, v6);
        v74 = v12;
        v13 = 3;
        LOBYTE(v12) = v12 > 0;
        v8 |= v12;
        v14 = sub_32DA80(a1, 3);
        v2 = v14;
        if ( v14 )
        {
LABEL_36:
          v70 = v2;
          sub_134A30(v77);
          LODWORD(v2) = v70;
          return (unsigned int)v2;
        }
        if ( v10 )
        {
          v13 = (__int64)v69;
          v36 = sub_138C10(a1, v69, v14, v15, v16, v17);
          v2 = v74;
          v10 = v36 != 0;
          LOBYTE(v36) = v74 != 0;
          v8 |= v36;
        }
        if ( v11 )
        {
          v29 = sub_FD880(a1, 31, v2);
          if ( v29 < 0 )
          {
            LODWORD(v2) = -12;
            goto LABEL_36;
          }
          sub_141F10(a1, 2u, v27, v28, v30, v31);
          if ( *(char *)(*(_QWORD *)(a1 + 1496) + 605LL) >= 0 )
            sub_E6070(a1);
          if ( v29 )
          {
            sub_E5CD0(a1, 2, v32, v33, v34, v35);
            sub_139980(a1);
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 605LL) & 1) != 0 && (int)sub_E5D70(a1, v75) > 0 )
              sub_E5CD0(a1, (__int64)v75, v41, v42, v43, v44);
          }
          else
          {
            sub_139980(a1);
          }
          sub_1380A0(a1);
          v13 = 4;
          LODWORD(v2) = sub_32DA80(a1, 4);
          if ( (_DWORD)v2 )
            goto LABEL_36;
        }
        v18 = !(*(_BYTE *)(a1 + 1) >> 7);
        v9 = 4 * v18;
        if ( sub_69B80(a1) )
        {
          if ( (int)sub_E5D70(a1, v75) > 0 )
            sub_E5CD0(a1, (__int64)v75, v37, v38, v39, v40);
        }
        else
        {
          v22 = v10;
          if ( !(_BYTE)v8 )
            goto LABEL_14;
        }
        v13 = 5;
        v74 = sub_148100(a1, 15);
        v23 = v74;
        LOBYTE(v8) = v74 != 0;
        v24 = sub_32DA80(a1, 5);
        v2 = v24;
        if ( v24 )
          goto LABEL_36;
        v22 = v10 && v23 == 0;
LABEL_14:
        if ( v22 )
        {
          v13 = (__int64)v69;
          v10 = (unsigned int)sub_138C10(a1, v69, v2, v19, v20, v21) != 0;
          LOBYTE(v8) = v74 != 0;
        }
        if ( (unsigned __int8)sub_1485B0(*(_QWORD *)(a1 + 784)) || (unsigned int)sub_137710(a1) )
          goto LABEL_29;
        if ( HIBYTE(v72) )
        {
          for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
          {
            if ( sub_32D940(i) )
              *(_DWORD *)(i + 24) |= 0x40u;
          }
          HIBYTE(v72) = 0;
          v11 = 0;
        }
        else
        {
          HIBYTE(v72) = sub_F25A0(a1);
          if ( HIBYTE(v72) )
            goto LABEL_73;
          if ( v18 || (_BYTE)v8 )
          {
LABEL_25:
            v11 = 0;
          }
          else
          {
            if ( (unsigned __int8)callui(27, v13, &callui, v7, v5, v6, v68, v69, v72, v73) )
            {
              LODWORD(v2) = -18;
              goto LABEL_36;
            }
            v25 = sub_177460(a1);
            HIBYTE(v72) = sub_19CF30(*(_QWORD *)(a1 + 936)) | (v25 != 0);
            if ( HIBYTE(v72) )
            {
LABEL_24:
              HIBYTE(v72) = 0;
              v8 = 1;
              goto LABEL_25;
            }
            if ( *(char *)(*(_QWORD *)(a1 + 1504) + 49LL) < 0 && (*(_BYTE *)(a1 + 5) & 8) == 0 )
            {
              memset(&v81[1], 0, 32);
              v82 = 0;
              v81[0] = off_4DD320;
              sub_11D770(a1, (__int64)v81);
              *(_DWORD *)(a1 + 4) &= ~0x800u;
            }
            sub_21DB50(a1);
            v49 = sub_33ACA0(*(_QWORD *)(a1 + 1496), 6, a1, v46, v47, v48);
            v2 = (unsigned int)v49;
            if ( v49 < 0 || *(int *)(a1 + 312) > 6 )
              goto LABEL_36;
            if ( v49 )
              goto LABEL_29;
            LODWORD(v2) = sub_32DA80(a1, 6);
            if ( (_DWORD)v2 )
              goto LABEL_36;
            *(_DWORD *)a1 &= ~0x40000u;
            v50 = *(_DWORD *)(a1 + 912);
            v51 = sub_1F7BC0(a1, 6, 0);
            v2 = (unsigned int)v51;
            if ( v51 < 0 )
              goto LABEL_36;
            if ( v51 )
              goto LABEL_24;
            if ( ++HIDWORD(v73) == 2 )
              *(_DWORD *)a1 &= ~0x800u;
            v52 = *(_QWORD *)(a1 + 520);
            v53 = 0;
            if ( v52 )
            {
              do
              {
                LODWORD(v73) = v2;
                v54 = sub_138DE0(v52);
                v52 = *(_QWORD *)(v52 + 8);
                v53 += v54;
                v2 = (unsigned int)v73;
              }
              while ( v52 );
              if ( v53 > 0 )
              {
                sub_666A0(a1, 1u, (__int64)"delete_assertions");
                goto LABEL_29;
              }
              if ( v53 )
                goto LABEL_29;
            }
            if ( *(_DWORD *)(a1 + 912) != v50
              && ((*(_DWORD *)a1 &= ~0x20000u,
                   LODWORD(v73) = v2,
                   sub_667E0((_QWORD *)a1),
                   v55 = sub_667E0((_QWORD *)a1),
                   (unsigned int)sub_17F6A0(v55, 0))
               || (*(_BYTE *)(a1 + 2) & 2) != 0
               || (v56 = sub_138EE0(a1), v2 = (unsigned int)v73, v56)) )
            {
LABEL_29:
              v8 = 1;
              v11 = 0;
            }
            else
            {
              LODWORD(v73) = v2;
              v57 = sub_137FC0(a1);
              v2 = (unsigned int)v73;
              if ( v57 < 0 )
              {
                LODWORD(v2) = -22;
                *(_QWORD *)(a1 + 488) = *(_QWORD *)(a1 + 40);
                goto LABEL_36;
              }
              if ( !v57 || (v58 = *(_DWORD *)a1, (*(_DWORD *)a1 & 0x100000) != 0) )
              {
                v59 = sub_137E80(a1);
                v2 = (unsigned int)v73;
                if ( v59 )
                {
                  v60 = sub_1CBEA0(a1);
                  if ( v60 )
                  {
                    v61 = *(_QWORD *)(a1 + 88);
                    if ( *(_QWORD *)(v60 + 32) != v61 )
                    {
LABEL_73:
                      LODWORD(v2) = -17;
                      goto LABEL_36;
                    }
                  }
                  *(_DWORD *)a1 |= 0x40000u;
                  sub_31E900(a1, 0, v73, v61, v62, v63, v68, v73, v72, v73);
                  sub_E5FF0(a1, 0, v64, v65, v66, v67);
                  LODWORD(v2) = v71;
                  goto LABEL_36;
                }
                v58 = *(_DWORD *)a1;
              }
              v9 = 0;
              v8 = 1;
              v11 = 0;
              *(_DWORD *)a1 = v58 | 0x100000;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
