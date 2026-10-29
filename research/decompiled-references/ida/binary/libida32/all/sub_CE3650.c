__int64 __fastcall sub_CE3650(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // r12d
  __int64 v8; // rax
  _BYTE *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // rcx
  int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r8
  char v25; // bl
  __int64 v26; // rax
  int v27; // r12d
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rax
  _BYTE *v33; // rcx
  int v34; // r11d
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // r8
  __int16 v40; // bx
  __int64 v41; // rax
  int v42; // r10d
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // r13
  __int64 v46; // r12
  __int64 v47; // rax
  _BYTE *v48; // rcx
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // r13
  __int64 v53; // r12
  __int64 v54; // r8
  int v55; // ebx
  __int64 v56; // rax
  int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // rax
  _BYTE *v63; // rcx
  __int64 v64; // rax
  int v65; // edi
  __int64 v66; // r15
  __int64 v67; // r13
  __int64 v68; // r12
  __int64 v69; // r8
  __int64 v70; // rbx
  __int64 v71; // rax
  int v72; // esi
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // r13
  __int64 v76; // r12
  int v77; // edx
  __int64 v78; // rax
  __int64 v79; // r15
  __int64 v80; // r13
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // [rsp+8h] [rbp-A0h]
  __int64 v84; // [rsp+8h] [rbp-A0h]
  __int64 v85; // [rsp+8h] [rbp-A0h]
  __int64 v86; // [rsp+8h] [rbp-A0h]
  __int64 v87; // [rsp+8h] [rbp-A0h]
  __int64 v88; // [rsp+10h] [rbp-98h]
  __int64 v89; // [rsp+10h] [rbp-98h]
  __int64 v90; // [rsp+10h] [rbp-98h]
  __int64 v91; // [rsp+10h] [rbp-98h]
  __int64 v92; // [rsp+10h] [rbp-98h]
  __int64 v93; // [rsp+28h] [rbp-80h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int64 v95; // [rsp+38h] [rbp-70h]
  _BYTE v96[104]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *a4;
        v18 = v96;
        *(_QWORD *)(a1 + 1240) = v17;
        v19 = *(_DWORD *)(a3 + 36);
        v84 = a1 + 384;
        v20 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v89 = v20;
        v95 = 0x600000000LL;
        if ( !v19 )
          goto LABEL_70;
        v21 = 0;
        do
        {
          v22 = *(_QWORD *)(a1 + 560);
          ++v21;
          v23 = *(_QWORD *)sub_DFDA20(v22, 8);
          sub_DFDA50(v22, 8);
          sub_CCCBA0((__int64 *)&ptr, v23);
        }
        while ( *(_DWORD *)(a3 + 36) != v21 );
        goto LABEL_15;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v26 = *a4;
        v18 = v96;
        *(_QWORD *)(a1 + 1240) = v26;
        v27 = *(_DWORD *)(a3 + 36);
        v84 = a1 + 384;
        v28 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v89 = v28;
        v95 = 0x600000000LL;
        if ( v27 )
        {
          v29 = 0;
          do
          {
            v30 = *(_QWORD *)(a1 + 560);
            ++v29;
            v31 = *(_QWORD *)sub_DFDA20(v30, 8);
            sub_DFDA50(v30, 8);
            sub_CCCBA0((__int64 *)&ptr, v31);
          }
          while ( *(_DWORD *)(a3 + 36) != v29 );
LABEL_15:
          v18 = ptr;
          v24 = (unsigned int)v95;
        }
        else
        {
LABEL_70:
          v24 = 0;
        }
        v5 = sub_D789B0(v84, v89, a3, v18, v24, &v93);
        if ( (_BYTE)v5 )
        {
          v25 = v93;
          *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v25;
        }
        goto LABEL_18;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v32 = *a4;
        v33 = v96;
        *(_QWORD *)(a1 + 1240) = v32;
        v34 = *(_DWORD *)(a3 + 36);
        v85 = a1 + 384;
        v35 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v90 = v35;
        v95 = 0x600000000LL;
        if ( !v34 )
          goto LABEL_71;
        v36 = 0;
        do
        {
          v37 = *(_QWORD *)(a1 + 560);
          ++v36;
          v38 = *(_QWORD *)sub_DFDA20(v37, 8);
          sub_DFDA50(v37, 8);
          sub_CCCBA0((__int64 *)&ptr, v38);
        }
        while ( *(_DWORD *)(a3 + 36) != v36 );
        goto LABEL_29;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v41 = *a4;
        v33 = v96;
        *(_QWORD *)(a1 + 1240) = v41;
        v42 = *(_DWORD *)(a3 + 36);
        v85 = a1 + 384;
        v43 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v90 = v43;
        v95 = 0x600000000LL;
        if ( v42 )
        {
          v44 = 0;
          do
          {
            v45 = *(_QWORD *)(a1 + 560);
            ++v44;
            v46 = *(_QWORD *)sub_DFDA20(v45, 8);
            sub_DFDA50(v45, 8);
            sub_CCCBA0((__int64 *)&ptr, v46);
          }
          while ( *(_DWORD *)(a3 + 36) != v44 );
LABEL_29:
          v33 = ptr;
          v39 = (unsigned int)v95;
        }
        else
        {
LABEL_71:
          v39 = 0;
        }
        v5 = sub_D789B0(v85, v90, a3, v33, v39, &v93);
        if ( (_BYTE)v5 )
        {
          v40 = v93;
          *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v40;
        }
        goto LABEL_18;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v47 = *a4;
        v48 = v96;
        *(_QWORD *)(a1 + 1240) = v47;
        v49 = *(_DWORD *)(a3 + 36);
        v86 = a1 + 384;
        v50 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v91 = v50;
        v95 = 0x600000000LL;
        if ( !v49 )
          goto LABEL_72;
        v51 = 0;
        do
        {
          v52 = *(_QWORD *)(a1 + 560);
          ++v51;
          v53 = *(_QWORD *)sub_DFDA20(v52, 8);
          sub_DFDA50(v52, 8);
          sub_CCCBA0((__int64 *)&ptr, v53);
        }
        while ( *(_DWORD *)(a3 + 36) != v51 );
        goto LABEL_41;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v56 = *a4;
        v48 = v96;
        *(_QWORD *)(a1 + 1240) = v56;
        v57 = *(_DWORD *)(a3 + 36);
        v86 = a1 + 384;
        v58 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v91 = v58;
        v95 = 0x600000000LL;
        if ( v57 )
        {
          v59 = 0;
          do
          {
            v60 = *(_QWORD *)(a1 + 560);
            ++v59;
            v61 = *(_QWORD *)sub_DFDA20(v60, 8);
            sub_DFDA50(v60, 8);
            sub_CCCBA0((__int64 *)&ptr, v61);
          }
          while ( *(_DWORD *)(a3 + 36) != v59 );
LABEL_41:
          v48 = ptr;
          v54 = (unsigned int)v95;
        }
        else
        {
LABEL_72:
          v54 = 0;
        }
        v5 = sub_D789B0(v86, v91, a3, v48, v54, &v93);
        if ( (_BYTE)v5 )
        {
          v55 = v93;
          *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v55;
        }
        goto LABEL_18;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v62 = *a4;
        v63 = v96;
        *(_QWORD *)(a1 + 1240) = v62;
        v87 = a1 + 384;
        v64 = *(_QWORD *)(a1 + 1232);
        v65 = *(_DWORD *)(a3 + 36);
        ptr = v96;
        v92 = v64;
        v95 = 0x600000000LL;
        if ( !v65 )
          goto LABEL_73;
        v66 = 0;
        do
        {
          v67 = *(_QWORD *)(a1 + 560);
          ++v66;
          v68 = *(_QWORD *)sub_DFDA20(v67, 8);
          sub_DFDA50(v67, 8);
          sub_CCCBA0((__int64 *)&ptr, v68);
        }
        while ( *(_DWORD *)(a3 + 36) != v66 );
        goto LABEL_53;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v71 = *a4;
        v63 = v96;
        *(_QWORD *)(a1 + 1240) = v71;
        v72 = *(_DWORD *)(a3 + 36);
        v87 = a1 + 384;
        v73 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v92 = v73;
        v95 = 0x600000000LL;
        if ( v72 )
        {
          v74 = 0;
          do
          {
            v75 = *(_QWORD *)(a1 + 560);
            ++v74;
            v76 = *(_QWORD *)sub_DFDA20(v75, 8);
            sub_DFDA50(v75, 8);
            sub_CCCBA0((__int64 *)&ptr, v76);
          }
          while ( *(_DWORD *)(a3 + 36) != v74 );
LABEL_53:
          v63 = ptr;
          v69 = (unsigned int)v95;
        }
        else
        {
LABEL_73:
          v69 = 0;
        }
        v5 = sub_D789B0(v87, v92, a3, v63, v69, &v93);
        if ( (_BYTE)v5 )
        {
          v70 = v93;
          *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v70;
        }
        goto LABEL_18;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v77 = *(_DWORD *)(a3 + 36);
        v83 = a1 + 384;
        v78 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v88 = v78;
        v95 = 0x600000000LL;
        if ( v77 )
        {
          v79 = 0;
          do
          {
            v80 = *(_QWORD *)(a1 + 560);
            v81 = *(_QWORD *)sub_DFDA20(v80, 8);
            sub_DFDA50(v80, 8);
            v82 = (unsigned int)v95;
            if ( (unsigned int)v95 >= (unsigned __int64)HIDWORD(v95) )
            {
              if ( HIDWORD(v95) < (unsigned __int64)(unsigned int)v95 + 1 )
              {
                sub_22134E0(&ptr, v96, (unsigned int)v95 + 1LL, 8);
                v82 = (unsigned int)v95;
              }
              *((_QWORD *)ptr + v82) = v81;
              v14 = (unsigned int)(v95 + 1);
              LODWORD(v95) = v95 + 1;
            }
            else
            {
              v14 = (unsigned int)(v95 + 1);
              *((_QWORD *)ptr + (unsigned int)v95) = v81;
              LODWORD(v95) = v14;
            }
            ++v79;
          }
          while ( *(_DWORD *)(a3 + 36) != v79 );
          v9 = ptr;
        }
        else
        {
          v14 = 0;
          v9 = v96;
        }
        goto LABEL_9;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = *a4;
        v9 = v96;
        *(_QWORD *)(a1 + 1240) = v8;
        v83 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 1232);
        ptr = v96;
        v88 = v10;
        v95 = 0x600000000LL;
        if ( *(_DWORD *)(a3 + 36) )
        {
          v11 = 0;
          do
          {
            v12 = *(_QWORD *)(a1 + 560);
            ++v11;
            v13 = *(_QWORD *)sub_DFDA20(v12, 8);
            sub_DFDA50(v12, 8);
            sub_CCCBA0((__int64 *)&ptr, v13);
          }
          while ( *(_DWORD *)(a3 + 36) != v11 );
          v9 = ptr;
          v14 = (unsigned int)v95;
        }
        else
        {
          v14 = 0;
        }
LABEL_9:
        v5 = sub_D789B0(v83, v88, a3, v9, v14, &v93);
        if ( (_BYTE)v5 )
        {
          v15 = v93;
          v16 = sub_DFD980(*(_QWORD *)(a1 + 560), 16);
          *(_QWORD *)v16 = v15;
          *(_DWORD *)(v16 + 8) = 64;
        }
LABEL_18:
        if ( ptr != v96 )
          free(ptr);
      }
      break;
  }
  return v5;
}

