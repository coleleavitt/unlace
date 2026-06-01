__int64 __fastcall sub_14B8B0(__int64 a1, __int64 a2)
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
  int v56; // r12d
  __int64 v57; // rbp
  int v58; // eax
  int v59; // eax
  int v60; // eax
  char v61; // al
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // r8d
  int v65; // r9d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // [rsp+0h] [rbp-D8h]
  unsigned int *v71; // [rsp+8h] [rbp-D0h]
  int v72; // [rsp+8h] [rbp-D0h]
  int v73; // [rsp+8h] [rbp-D0h]
  __int64 v74; // [rsp+10h] [rbp-C8h]
  __int64 v75; // [rsp+18h] [rbp-C0h]
  unsigned int v76; // [rsp+2Ch] [rbp-ACh] BYREF
  _BYTE v77[8]; // [rsp+30h] [rbp-A8h] BYREF
  int v78; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD *v79; // [rsp+40h] [rbp-98h]
  int *v80; // [rsp+48h] [rbp-90h]
  int *v81; // [rsp+50h] [rbp-88h]
  __int64 v82; // [rsp+58h] [rbp-80h]
  _QWORD v83[5]; // [rsp+60h] [rbp-78h] BYREF
  char v84; // [rsp+88h] [rbp-50h]
  unsigned __int64 v85; // [rsp+98h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  LODWORD(v2) = 0;
  if ( (*(_BYTE *)(a1 + 2) & 9) == 0 && *(int *)(a1 + 312) <= 6 )
  {
    v4 = time(nullptr);
    v2 = *(_QWORD *)(a1 + 1496);
    *(_DWORD *)(v2 + 1000) = v4;
    v7 = *(unsigned int *)(*(_QWORD *)(a1 + 520) + 76LL);
    if ( (_DWORD)v7 || (v26 = sub_13C380(a1, a2), (v2 = v26) == 0) )
    {
      HIBYTE(v74) = 1;
      v8 = 1;
      v9 = 1;
      v80 = &v78;
      v10 = 1;
      v11 = 1;
      v81 = &v78;
      v78 = 0;
      v79 = nullptr;
      v82 = 0;
      HIDWORD(v75) = 0;
      v71 = &v76;
      while ( 1 )
      {
        v12 = sub_1443F0(a1, v9, v2, v7, v5, v6);
        v76 = v12;
        v13 = 3;
        LOBYTE(v12) = v12 > 0;
        v8 |= v12;
        v14 = sub_330F20(a1, 3);
        v2 = v14;
        if ( v14 )
        {
LABEL_36:
          v72 = v2;
          sub_136F50(v79);
          LODWORD(v2) = v72;
          return (unsigned int)v2;
        }
        if ( v10 )
        {
          v13 = (__int64)v71;
          v36 = sub_13B0F0(a1, v71, v14, v15, v16, v17);
          v2 = v76;
          v10 = v36 != 0;
          LOBYTE(v36) = v76 != 0;
          v8 |= v36;
        }
        if ( v11 )
        {
          v29 = sub_FA4C0(a1, 31, v2);
          if ( v29 < 0 )
          {
            LODWORD(v2) = -12;
            goto LABEL_36;
          }
          sub_1443F0(a1, 2u, v27, v28, v30, v31);
          if ( *(char *)(*(_QWORD *)(a1 + 1496) + 605LL) >= 0 )
            sub_F8530(a1);
          if ( v29 )
          {
            sub_F7F40(a1, 2, v32, v33, v34, v35);
            sub_13BDF0(a1);
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 605LL) & 1) != 0 && (int)sub_F7FE0(a1, v77) > 0 )
              sub_F7F40(a1, (__int64)v77, v41, v42, v43, v44);
          }
          else
          {
            sub_13BDF0(a1);
          }
          sub_13A580(a1);
          v13 = 4;
          LODWORD(v2) = sub_330F20(a1, 4);
          if ( (_DWORD)v2 )
            goto LABEL_36;
        }
        v18 = !(*(_BYTE *)(a1 + 1) >> 7);
        v9 = 4 * v18;
        if ( sub_6A500(a1) )
        {
          if ( (int)sub_F7FE0(a1, v77) > 0 )
            sub_F7F40(a1, (__int64)v77, v37, v38, v39, v40);
        }
        else
        {
          v22 = v10;
          if ( !(_BYTE)v8 )
            goto LABEL_14;
        }
        v13 = 5;
        v76 = sub_14A660(a1, 15);
        v23 = v76;
        LOBYTE(v8) = v76 != 0;
        v24 = sub_330F20(a1, 5);
        v2 = v24;
        if ( v24 )
          goto LABEL_36;
        v22 = v10 && v23 == 0;
LABEL_14:
        if ( v22 )
        {
          v13 = (__int64)v71;
          v10 = (unsigned int)sub_13B0F0(a1, v71, v2, v19, v20, v21) != 0;
          LOBYTE(v8) = v76 != 0;
        }
        if ( (unsigned __int8)sub_14AB10(*(_QWORD *)(a1 + 784)) || (unsigned int)sub_139BF0(a1) )
          goto LABEL_29;
        if ( HIBYTE(v74) )
        {
          for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
          {
            if ( sub_330DE0(i) )
              *(_DWORD *)(i + 24) |= 0x40u;
          }
          HIBYTE(v74) = 0;
          v11 = 0;
        }
        else
        {
          HIBYTE(v74) = sub_F9180(a1);
          if ( HIBYTE(v74) )
            goto LABEL_76;
          if ( v18 || (_BYTE)v8 )
          {
LABEL_25:
            v11 = 0;
          }
          else
          {
            if ( (unsigned __int8)callui(27, v13, &callui, v7, v5, v6, v70, v71, v74, v75) )
            {
              LODWORD(v2) = -18;
              goto LABEL_36;
            }
            v25 = sub_179C90(a1);
            HIBYTE(v74) = sub_19F770(*(_QWORD *)(a1 + 936)) | (v25 != 0);
            if ( HIBYTE(v74) )
            {
LABEL_24:
              HIBYTE(v74) = 0;
              v8 = 1;
              goto LABEL_25;
            }
            if ( *(char *)(*(_QWORD *)(a1 + 1504) + 49LL) < 0 && (*(_BYTE *)(a1 + 5) & 8) == 0 )
            {
              memset(&v83[1], 0, 32);
              v84 = 0;
              v83[0] = off_4DDBE8;
              sub_11FBB0(a1, (__int64)v83);
              *(_DWORD *)(a1 + 4) &= ~0x800u;
            }
            sub_220320(a1);
            v49 = sub_33E140(*(_QWORD *)(a1 + 1496), 6, a1, v46, v47, v48);
            v2 = (unsigned int)v49;
            if ( v49 < 0 || *(int *)(a1 + 312) > 6 )
              goto LABEL_36;
            if ( v49 )
              goto LABEL_29;
            LODWORD(v2) = sub_330F20(a1, 6);
            if ( (_DWORD)v2 )
              goto LABEL_36;
            *(_DWORD *)a1 &= ~0x40000u;
            v50 = *(_DWORD *)(a1 + 912);
            v51 = sub_1FAB30(a1, 6, 0);
            v2 = (unsigned int)v51;
            if ( v51 < 0 )
              goto LABEL_36;
            if ( v51 )
              goto LABEL_24;
            if ( ++HIDWORD(v75) == 2 )
              *(_DWORD *)a1 &= ~0x800u;
            v52 = *(_QWORD *)(a1 + 520);
            v53 = 0;
            if ( v52 )
            {
              do
              {
                LODWORD(v75) = v2;
                v54 = sub_13B2C0(v52);
                v52 = *(_QWORD *)(v52 + 8);
                v53 += v54;
                v2 = (unsigned int)v75;
              }
              while ( v52 );
              if ( v53 > 0 )
                goto LABEL_28;
              if ( v53 )
                goto LABEL_29;
            }
            if ( *(_DWORD *)(a1 + 912) == v50 )
              goto LABEL_69;
            *(_DWORD *)a1 &= ~0x20000u;
            LODWORD(v75) = v2;
            sub_670E0((_QWORD *)a1);
            v55 = sub_670E0((_QWORD *)a1);
            v56 = sub_181F80(v55, 0);
            if ( v56 || (*(_BYTE *)(a1 + 2) & 2) != 0 )
              goto LABEL_29;
            v57 = *(_QWORD *)(a1 + 520);
            LODWORD(v2) = v75;
            if ( !v57 )
              goto LABEL_69;
            do
            {
              LODWORD(v75) = v2;
              v58 = sub_13B2C0(v57);
              v57 = *(_QWORD *)(v57 + 8);
              v56 += v58;
              v2 = (unsigned int)v75;
            }
            while ( v57 );
            if ( v56 > 0 )
            {
LABEL_28:
              sub_66FA0(a1, 1u, (__int64)"delete_assertions");
              goto LABEL_29;
            }
            if ( v56 )
            {
LABEL_29:
              v8 = 1;
              v11 = 0;
            }
            else
            {
LABEL_69:
              LODWORD(v75) = v2;
              v59 = sub_13A4A0(a1);
              v2 = (unsigned int)v75;
              if ( v59 < 0 )
              {
                LODWORD(v2) = -22;
                *(_QWORD *)(a1 + 488) = *(_QWORD *)(a1 + 40);
                goto LABEL_36;
              }
              if ( !v59 || (v60 = *(_DWORD *)a1, (*(_DWORD *)a1 & 0x100000) != 0) )
              {
                v61 = sub_13A360(a1);
                v2 = (unsigned int)v75;
                if ( v61 )
                {
                  v62 = sub_1CE9E0(a1);
                  if ( v62 )
                  {
                    v63 = *(_QWORD *)(a1 + 88);
                    if ( *(_QWORD *)(v62 + 32) != v63 )
                    {
LABEL_76:
                      LODWORD(v2) = -17;
                      goto LABEL_36;
                    }
                  }
                  *(_DWORD *)a1 |= 0x40000u;
                  sub_321ED0(a1, 0, v75, v63, v64, v65, v70, v75, v74, v75);
                  sub_F84B0(a1, 0, v66, v67, v68, v69);
                  LODWORD(v2) = v73;
                  goto LABEL_36;
                }
                v60 = *(_DWORD *)a1;
              }
              v9 = 0;
              v8 = 1;
              v11 = 0;
              *(_DWORD *)a1 = v60 | 0x100000;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
