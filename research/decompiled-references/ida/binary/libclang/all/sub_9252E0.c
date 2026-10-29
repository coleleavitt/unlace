__int64 __fastcall sub_9252E0(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // r12d
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  _BYTE *v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdx
  _BYTE *v26; // rdx
  char v27; // bp
  __int64 v28; // rax
  int v29; // r11d
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // r10d
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rdx
  _BYTE *v43; // rdx
  __int16 v44; // bp
  __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // r12
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // r12
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rax
  _BYTE *v60; // rdx
  int v61; // ebp
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // edi
  __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rax
  int v71; // esi
  __int64 v72; // r12
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rax
  _BYTE *v78; // rdx
  __int64 v79; // rbp
  __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // r12
  __int64 v83; // r14
  __int64 v84; // r15
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // r12
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r14
  __int64 v93; // r15
  __int64 v94; // rdx
  _BYTE *v95; // rdx
  __int64 v96; // rbp
  __int64 v97; // rax
  __int64 v98; // [rsp+0h] [rbp-A8h]
  __int64 v99; // [rsp+0h] [rbp-A8h]
  __int64 v100; // [rsp+0h] [rbp-A8h]
  __int64 v101; // [rsp+0h] [rbp-A8h]
  __int64 v102; // [rsp+8h] [rbp-A0h]
  __int64 v103; // [rsp+8h] [rbp-A0h]
  __int64 v104; // [rsp+8h] [rbp-A0h]
  __int64 v105; // [rsp+8h] [rbp-A0h]
  __int64 v106; // [rsp+8h] [rbp-A0h]
  __int64 v107; // [rsp+8h] [rbp-A0h]
  __int64 v108; // [rsp+18h] [rbp-90h] BYREF
  __int64 v109; // [rsp+20h] [rbp-88h] BYREF
  int v110; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int64 v112; // [rsp+38h] [rbp-70h]
  _BYTE v113[104]; // [rsp+40h] [rbp-68h] BYREF

  v4 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v18 = *a4;
        ptr = v113;
        *(_QWORD *)(a1 + 800) = v18;
        v19 = *(_DWORD *)(a3 + 36);
        v98 = a1 + 384;
        v103 = *(_QWORD *)(a1 + 792);
        v112 = 0x600000000LL;
        if ( !v19 )
          goto LABEL_89;
        v20 = 0;
        do
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(a1 + 568);
            v24 = *(_QWORD *)sub_A1A5A0(v23, 8);
            sub_A1A5E0(v23, 8);
            if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
              break;
            ++v20;
            *((_QWORD *)ptr + (unsigned int)v112) = v24;
            v21 = *(unsigned int *)(a3 + 36);
            v22 = (unsigned int)(v112 + 1);
            LODWORD(v112) = v112 + 1;
            if ( v20 == v21 )
              goto LABEL_19;
          }
          ++v20;
          sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
          *((_QWORD *)ptr + (unsigned int)v112) = v24;
          v25 = *(unsigned int *)(a3 + 36);
          v22 = (unsigned int)(v112 + 1);
          LODWORD(v112) = v112 + 1;
        }
        while ( v25 != v20 );
        goto LABEL_19;
      }
      return v4;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v28 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v28;
      v29 = *(_DWORD *)(a3 + 36);
      v98 = a1 + 384;
      v103 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( v29 )
      {
        v30 = 0;
        do
        {
          while ( 1 )
          {
            v32 = *(_QWORD *)(a1 + 568);
            v33 = *(_QWORD *)sub_A1A5A0(v32, 8);
            sub_A1A5E0(v32, 8);
            if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
              break;
            ++v30;
            *((_QWORD *)ptr + (unsigned int)v112) = v33;
            v31 = *(unsigned int *)(a3 + 36);
            v22 = (unsigned int)(v112 + 1);
            LODWORD(v112) = v112 + 1;
            if ( v30 == v31 )
              goto LABEL_19;
          }
          ++v30;
          sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
          *((_QWORD *)ptr + (unsigned int)v112) = v33;
          v34 = *(unsigned int *)(a3 + 36);
          v22 = (unsigned int)(v112 + 1);
          LODWORD(v112) = v112 + 1;
        }
        while ( v34 != v30 );
LABEL_19:
        v26 = ptr;
      }
      else
      {
LABEL_89:
        v22 = 0;
        v26 = v113;
      }
      v4 = sub_98F6A0(v98, v103, a3, v26, v22, &v109);
      if ( (_BYTE)v4 )
      {
        v27 = v109;
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v27;
      }
      goto LABEL_70;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v35 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v35;
      v36 = *(_DWORD *)(a3 + 36);
      v99 = a1 + 384;
      v104 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( !v36 )
        goto LABEL_90;
      v37 = 0;
      do
      {
        while ( 1 )
        {
          v40 = *(_QWORD *)(a1 + 568);
          v41 = *(_QWORD *)sub_A1A5A0(v40, 8);
          sub_A1A5E0(v40, 8);
          if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
            break;
          ++v37;
          *((_QWORD *)ptr + (unsigned int)v112) = v41;
          v38 = *(unsigned int *)(a3 + 36);
          v39 = (unsigned int)(v112 + 1);
          LODWORD(v112) = v112 + 1;
          if ( v37 == v38 )
            goto LABEL_35;
        }
        ++v37;
        sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
        *((_QWORD *)ptr + (unsigned int)v112) = v41;
        v42 = *(unsigned int *)(a3 + 36);
        v39 = (unsigned int)(v112 + 1);
        LODWORD(v112) = v112 + 1;
      }
      while ( v42 != v37 );
LABEL_35:
      v43 = ptr;
LABEL_36:
      v4 = sub_98F6A0(v99, v104, a3, v43, v39, &v109);
      if ( (_BYTE)v4 )
      {
        v44 = v109;
        *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v44;
      }
      goto LABEL_70;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v45 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v45;
      v46 = *(_DWORD *)(a3 + 36);
      v99 = a1 + 384;
      v104 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( !v46 )
      {
LABEL_90:
        v39 = 0;
        v43 = v113;
        goto LABEL_36;
      }
      v47 = 0;
      do
      {
        v48 = *(_QWORD *)(a1 + 568);
        v49 = *(_QWORD *)sub_A1A5A0(v48, 8);
        sub_A1A5E0(v48, 8);
        v50 = (unsigned int)v112;
        if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
        {
          sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
          v50 = (unsigned int)v112;
        }
        ++v47;
        *((_QWORD *)ptr + v50) = v49;
        v51 = *(unsigned int *)(a3 + 36);
        v39 = (unsigned int)(v112 + 1);
        LODWORD(v112) = v112 + 1;
      }
      while ( v47 != v51 );
      goto LABEL_35;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v52 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v52;
      v53 = *(_DWORD *)(a3 + 36);
      v100 = a1 + 384;
      v105 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( !v53 )
        goto LABEL_88;
      v54 = 0;
      do
      {
        v55 = *(_QWORD *)(a1 + 568);
        v56 = *(_QWORD *)sub_A1A5A0(v55, 8);
        sub_A1A5E0(v55, 8);
        v57 = (unsigned int)v112;
        if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
        {
          sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
          v57 = (unsigned int)v112;
        }
        ++v54;
        *((_QWORD *)ptr + v57) = v56;
        v58 = *(unsigned int *)(a3 + 36);
        v59 = (unsigned int)(v112 + 1);
        LODWORD(v112) = v112 + 1;
      }
      while ( v54 != v58 );
      goto LABEL_51;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v62 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v62;
      v100 = a1 + 384;
      v63 = *(_QWORD *)(a1 + 792);
      v64 = *(_DWORD *)(a3 + 36);
      v105 = v63;
      v112 = 0x600000000LL;
      if ( v64 )
      {
        v65 = 0;
        do
        {
          v66 = *(_QWORD *)(a1 + 568);
          v67 = *(_QWORD *)sub_A1A5A0(v66, 8);
          sub_A1A5E0(v66, 8);
          v68 = (unsigned int)v112;
          if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
          {
            sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
            v68 = (unsigned int)v112;
          }
          ++v65;
          *((_QWORD *)ptr + v68) = v67;
          v69 = *(unsigned int *)(a3 + 36);
          v59 = (unsigned int)(v112 + 1);
          LODWORD(v112) = v112 + 1;
        }
        while ( v65 != v69 );
LABEL_51:
        v60 = ptr;
      }
      else
      {
LABEL_88:
        v59 = 0;
        v60 = v113;
      }
      v4 = sub_98F6A0(v100, v105, a3, v60, v59, &v109);
      if ( (_BYTE)v4 )
      {
        v61 = v109;
        *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v61;
      }
      goto LABEL_70;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v70 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v70;
      v71 = *(_DWORD *)(a3 + 36);
      v101 = a1 + 384;
      v106 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( !v71 )
        goto LABEL_87;
      v72 = 0;
      do
      {
        v73 = *(_QWORD *)(a1 + 568);
        v74 = *(_QWORD *)sub_A1A5A0(v73, 8);
        sub_A1A5E0(v73, 8);
        v75 = (unsigned int)v112;
        if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
        {
          sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
          v75 = (unsigned int)v112;
        }
        ++v72;
        *((_QWORD *)ptr + v75) = v74;
        v76 = *(unsigned int *)(a3 + 36);
        v77 = (unsigned int)(v112 + 1);
        LODWORD(v112) = v112 + 1;
      }
      while ( v72 != v76 );
      goto LABEL_67;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v80 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v80;
      v81 = *(_DWORD *)(a3 + 36);
      v101 = a1 + 384;
      v106 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( v81 )
      {
        v82 = 0;
        do
        {
          v83 = *(_QWORD *)(a1 + 568);
          v84 = *(_QWORD *)sub_A1A5A0(v83, 8);
          sub_A1A5E0(v83, 8);
          v85 = (unsigned int)v112;
          if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
          {
            sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
            v85 = (unsigned int)v112;
          }
          ++v82;
          *((_QWORD *)ptr + v85) = v84;
          v86 = *(unsigned int *)(a3 + 36);
          v77 = (unsigned int)(v112 + 1);
          LODWORD(v112) = v112 + 1;
        }
        while ( v82 != v86 );
LABEL_67:
        v78 = ptr;
      }
      else
      {
LABEL_87:
        v77 = 0;
        v78 = v113;
      }
      v4 = sub_98F6A0(v101, v106, a3, v78, v77, &v109);
      if ( (_BYTE)v4 )
      {
        v79 = v109;
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v79;
      }
      goto LABEL_70;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v87 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v87;
      v88 = *(_DWORD *)(a3 + 36);
      v107 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( v88 )
      {
        v89 = 0;
        while ( 1 )
        {
          v92 = *(_QWORD *)(a1 + 568);
          v93 = *(_QWORD *)sub_A1A5A0(v92, 8);
          sub_A1A5E0(v92, 8);
          if ( (unsigned int)v112 < (unsigned __int64)HIDWORD(v112) )
          {
            ++v89;
            *((_QWORD *)ptr + (unsigned int)v112) = v93;
            v90 = *(unsigned int *)(a3 + 36);
            v91 = (unsigned int)(v112 + 1);
            LODWORD(v112) = v112 + 1;
            if ( v89 == v90 )
              goto LABEL_84;
          }
          else
          {
            ++v89;
            sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
            *((_QWORD *)ptr + (unsigned int)v112) = v93;
            v94 = *(unsigned int *)(a3 + 36);
            v91 = (unsigned int)(v112 + 1);
            LODWORD(v112) = v112 + 1;
            if ( v94 == v89 )
            {
LABEL_84:
              v95 = ptr;
              goto LABEL_85;
            }
          }
        }
      }
      v91 = 0;
      v95 = v113;
LABEL_85:
      v4 = sub_98F6A0(a1 + 384, v107, a3, v95, v91, &v109);
      if ( (_BYTE)v4 )
      {
        v96 = v109;
        v97 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
        *(_DWORD *)(v97 + 8) = 0;
        *(_QWORD *)v97 = v96;
      }
LABEL_70:
      if ( ptr != v113 )
        free(ptr);
      return v4;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v4;
      v8 = *a4;
      ptr = v113;
      *(_QWORD *)(a1 + 800) = v8;
      v102 = *(_QWORD *)(a1 + 792);
      v112 = 0x600000000LL;
      if ( *(_DWORD *)(a3 + 36) )
      {
        v9 = 0;
        do
        {
          v10 = *(_QWORD *)(a1 + 568);
          v11 = *(_QWORD *)sub_A1A5A0(v10, 8);
          sub_A1A5E0(v10, 8);
          v12 = (unsigned int)v112;
          if ( (unsigned int)v112 >= (unsigned __int64)HIDWORD(v112) )
          {
            sub_25D6060(&ptr, v113, (unsigned int)v112 + 1LL, 8);
            v12 = (unsigned int)v112;
          }
          ++v9;
          *((_QWORD *)ptr + v12) = v11;
          v13 = *(unsigned int *)(a3 + 36);
          v14 = (unsigned int)(v112 + 1);
          LODWORD(v112) = v112 + 1;
        }
        while ( v9 != v13 );
        v15 = ptr;
      }
      else
      {
        v14 = 0;
        v15 = v113;
      }
      v4 = sub_98F6A0(a1 + 384, v102, a3, v15, v14, &v108);
      if ( (_BYTE)v4 )
      {
        v16 = *(_QWORD *)(a1 + 568);
        sub_9251F0((__int64)&v109, v108, 0);
        v17 = sub_A1A4E0(v16, 16);
        *(_DWORD *)(v17 + 8) = v110;
        *(_QWORD *)v17 = v109;
      }
      goto LABEL_70;
  }
}

