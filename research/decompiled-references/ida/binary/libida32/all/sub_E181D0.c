char __fastcall sub_E181D0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char v7; // dl
  char result; // al
  unsigned int v9; // ebx
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // bl
  void *v12; // rbp
  unsigned int v13; // ebx
  bool v14; // al
  unsigned int v15; // ebx
  __int64 *v16; // rdi
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  _DWORD *v33; // rax
  __int64 v34; // rdi
  int v35; // edx
  __int64 v36; // rdi
  __int64 v37; // r13
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r13
  __int64 v45; // r14
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // r13
  _QWORD *v59; // rcx
  __int64 v60; // r13
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // r14
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  _DWORD *v70; // rcx
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rdi
  int v74; // eax
  __int64 v75; // r14
  unsigned int v76; // ebx
  __int64 v77; // r15
  __int64 v78; // rax
  __int64 v79; // rdi
  int v80; // r12d
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // rax
  unsigned int v83; // r12d
  __int64 v84; // rdi
  __int64 v85; // rdi
  char v86; // [rsp+Fh] [rbp-59h]
  void *v87; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v88; // [rsp+18h] [rbp-50h]
  char v89; // [rsp+1Ch] [rbp-4Ch]
  void *v90; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v91; // [rsp+28h] [rbp-40h]

  v4 = a2;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
    case 1:
    case 0xD:
      return 0;
    case 2:
      v9 = *(_DWORD *)(a2 + 16);
      if ( v9 <= 0x40 )
        return *(_QWORD *)(a2 + 8) == 0;
      else
        return v9 == (unsigned int)sub_21E2A40(a2 + 8);
    case 3:
      if ( *(_QWORD *)(a2 + 8) == sub_21D5390(a1, a2, a3) )
        v10 = *(_QWORD *)(a2 + 16);
      else
        v10 = a2 + 8;
      goto LABEL_12;
    case 4:
      v11 = *(_BYTE *)(a2 + 27);
      v91 = *(_DWORD *)(a2 + 16);
      if ( v91 <= 0x40 )
      {
        v12 = *(void **)(a2 + 8);
        return v12 == nullptr;
      }
      sub_21E17D0(&v90);
      v83 = v91;
      v12 = v90;
      v88 = v91;
      v87 = v90;
      v89 = ((v11 >> 5) ^ 1) & 1;
      if ( v91 <= 0x40 )
        return v12 == nullptr;
      result = (unsigned int)sub_21E2A40(&v87) == v83;
      if ( v12 )
      {
        v86 = result;
        operator delete[](v12);
        return v86;
      }
      return result;
    case 5:
      v13 = *(_DWORD *)(a2 + 16);
      if ( v13 <= 0x40 )
        v14 = *(_QWORD *)(a2 + 8) == 0;
      else
        v14 = v13 == (unsigned int)sub_21E2A40(a2 + 8);
      if ( !v14 )
        return 0;
      v15 = *(_DWORD *)(a2 + 32);
      if ( v15 <= 0x40 )
        return *(_QWORD *)(a2 + 24) == 0;
      else
        return v15 == (unsigned int)sub_21E2A40(a2 + 24);
    case 6:
      v5 = sub_21D5390(a1, a2, a3);
      v6 = a2 + 8;
      if ( *(_QWORD *)(a2 + 8) == v5 )
        v6 = *(_QWORD *)(a2 + 16);
      v7 = *(_BYTE *)(v6 + 20);
      if ( (v7 & 7) != 3 || (v7 & 8) != 0 )
        return 0;
      if ( v5 == *(_QWORD *)(a2 + 32) )
        v10 = *(_QWORD *)(a2 + 40);
      else
        v10 = a2 + 32;
LABEL_12:
      if ( (*(_BYTE *)(v10 + 20) & 7) != 3 )
        return 0;
      return ((*(_BYTE *)(v10 + 20) >> 3) ^ 1) & 1;
    case 7:
      return sub_A2D380(a2);
    case 8:
      v16 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
      v17 = *v16;
      if ( (unsigned int)*(unsigned __int8 *)(*v16 + 16) - 57 > 1 )
        v17 = sub_F3F310(*v16, a2, a3, a4);
      v18 = *(_DWORD *)(a2 + 16);
      if ( !v18 )
        return 1;
      v19 = 0;
      v20 = 56 * ((unsigned int)(v18 - 1) + 1LL);
      while ( (unsigned __int8)sub_E181D0(*(_QWORD *)(v17 + 32), v19 + *(_QWORD *)(a2 + 8)) )
      {
        v19 += 56;
        if ( v19 == v20 )
          return 1;
      }
      return 0;
    case 9:
      v21 = sub_F40CA0(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
      v22 = *(unsigned int *)(a2 + 16);
      v23 = v21 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !(_DWORD)v22 )
        goto LABEL_35;
      v24 = 0;
      v25 = 56 * ((unsigned int)(v22 - 1) + 1LL);
      while ( 1 )
      {
        result = sub_E181D0(v23, v24 + *(_QWORD *)(a2 + 8));
        if ( !result )
          break;
        v24 += 56;
        if ( v25 == v24 )
        {
          v22 = *(unsigned int *)(a2 + 16);
LABEL_35:
          result = 1;
          if ( (_DWORD)v22 != *(_DWORD *)(a2 + 20) )
            return sub_E181D0(v23, *(_QWORD *)(a2 + 8) + 56 * v22);
          return result;
        }
      }
      return result;
    case 0xA:
      v26 = sub_F3F530(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
      v29 = *(_QWORD *)(v26 + 104);
      v30 = v26;
      v31 = *(_QWORD *)(v29 + 96);
      if ( (v31 & 1) != 0 )
      {
        v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v59 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v31 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v31 & 2) == 0 )
          goto LABEL_44;
        v60 = v59[2295];
        v61 = v29 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v60 )
        {
          v62 = v59[294];
          v59[304] += 24LL;
          v63 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          a2 = v63 + 24;
          if ( v59[295] >= v63 + 24 && v62 )
          {
            v59[294] = a2;
            v64 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            a2 = 24;
            v64 = sub_962430((__int64)(v59 + 294), 24, 24, 3, v27, v28);
            v63 = v64 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v64 = v60;
          v61 = v63 | 4;
          *(_DWORD *)(v64 + 8) = 0;
          *(_QWORD *)(v64 + 16) = v29;
        }
        v32 = v61 & 0xFFFFFFFFFFFFFFFELL;
        v31 = v32 | 1;
        *(_QWORD *)(v29 + 96) = v32 | 1;
      }
      if ( v32 )
      {
        if ( (v32 & 4) != 0 )
        {
          v33 = (_DWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v33 )
          {
            v34 = *(_QWORD *)v33;
            v35 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
            if ( v33[2] != v35 )
            {
              v33[2] = v35;
              a2 = v29;
              (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v34 + 152LL))(v34, v29);
            }
          }
        }
      }
LABEL_44:
      v36 = *(_QWORD *)(v30 + 128);
      if ( (*(_BYTE *)(v36 + 24) & 1) != 0 )
        v37 = sub_B72C40(v36);
      else
        v37 = *(_QWORD *)(v36 + 24);
      v38 = *(_QWORD *)(v30 + 104);
      v39 = *(_QWORD *)(v38 + 96);
      v40 = v39;
      v41 = v39 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v39 & 1) != 0 )
        goto LABEL_82;
      a2 = v39 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v39 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_82;
      if ( (v39 & 2) != 0 )
      {
        v65 = *(_QWORD *)(a2 + 18360);
        v66 = v38 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v65 )
        {
          v67 = *(_QWORD *)(a2 + 2352);
          *(_QWORD *)(a2 + 2432) += 24LL;
          v68 = (v67 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(a2 + 2360) >= v68 + 24 && v67 )
          {
            *(_QWORD *)(a2 + 2352) = v68 + 24;
            v69 = (v67 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v84 = a2 + 2352;
            a2 = 24;
            v69 = sub_962430(v84, 24, 24, 3, v27, v28);
            v68 = v69 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v69 = v65;
          v66 = v68 | 4;
          *(_DWORD *)(v69 + 8) = 0;
          *(_QWORD *)(v69 + 16) = v38;
        }
        v41 = v66 & 0xFFFFFFFFFFFFFFFELL;
        v40 = v41 | 1;
        *(_QWORD *)(v38 + 96) = v41 | 1;
LABEL_82:
        if ( v41 )
        {
          if ( (v41 & 4) != 0 )
          {
            v70 = (_DWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v70 )
            {
              v71 = *(_QWORD *)v70;
              v72 = *(_DWORD *)(*(_QWORD *)v70 + 12LL);
              if ( v70[2] != v72 )
              {
                v70[2] = v72;
                a2 = v38;
                (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v71 + 152LL))(v71, v38);
              }
            }
          }
        }
        v42 = *(_QWORD *)(v30 + 128);
        v38 = *(_QWORD *)(v30 + 104);
        v43 = *(_QWORD *)(v38 + 96);
        v44 = v37 + 24LL * *(unsigned int *)(v42 + 16);
        v40 = v43 & 0xFFFFFFFFFFFFFFFELL;
        LOBYTE(v39) = v43;
        if ( (v43 & 1) != 0 )
          goto LABEL_88;
        a2 = v43 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v43 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_88;
      }
      else
      {
        v42 = *(_QWORD *)(v30 + 128);
        v43 = 3LL * *(unsigned int *)(v42 + 16);
        v44 = v37 + 24LL * *(unsigned int *)(v42 + 16);
      }
      if ( (v39 & 2) == 0 )
        goto LABEL_94;
      v45 = *(_QWORD *)(a2 + 18360);
      v46 = v38 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v45 )
      {
        v47 = *(_QWORD *)(a2 + 2352);
        *(_QWORD *)(a2 + 2432) += 24LL;
        v48 = (v47 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(a2 + 2360) >= v48 + 24 && v47 )
        {
          *(_QWORD *)(a2 + 2352) = v48 + 24;
          v49 = (v47 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v85 = a2 + 2352;
          a2 = 24;
          v49 = sub_962430(v85, 24, 24, 3, v27, v28);
          v48 = v49 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v49 = v45;
        v46 = v48 | 4;
        *(_DWORD *)(v49 + 8) = 0;
        *(_QWORD *)(v49 + 16) = v38;
      }
      v40 = v46 & 0xFFFFFFFFFFFFFFFELL;
      v43 = v40 | 1;
      *(_QWORD *)(v38 + 96) = v40 | 1;
LABEL_88:
      if ( v40 )
      {
        v40 &= 4u;
        if ( (_DWORD)v40 )
        {
          v43 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v43 )
          {
            v73 = *(_QWORD *)v43;
            v74 = *(_DWORD *)(*(_QWORD *)v43 + 12LL);
            if ( *(_DWORD *)(v43 + 8) != v74 )
            {
              *(_DWORD *)(v43 + 8) = v74;
              a2 = v38;
              (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v73 + 152LL))(v73, v38);
            }
          }
        }
      }
      v42 = *(_QWORD *)(v30 + 128);
LABEL_94:
      if ( (*(_BYTE *)(v42 + 24) & 1) != 0 )
        v75 = sub_B72C40(v42);
      else
        v75 = *(_QWORD *)(v42 + 24);
      v76 = 0;
      if ( v44 == v75 )
        goto LABEL_101;
      while ( 1 )
      {
        v77 = *(_QWORD *)(v4 + 8) + 56LL * v76;
        v78 = *(_QWORD *)(**(_QWORD **)(v75 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v78 + 8) & 0xF) != 0 )
          v78 = sub_F411C0(**(_QWORD **)(v75 + 16));
        a2 = v77;
        result = sub_E181D0(v78 & 0xFFFFFFFFFFFFFFF0LL, v77);
        if ( !result )
          return result;
        v75 += 24;
        ++v76;
        if ( v75 == v44 )
        {
LABEL_101:
          v79 = v30;
          v80 = 0;
          v81 = sub_B5ABC0(v79, a2, v43, v40, v27, v28);
          if ( !v81 )
            return 1;
LABEL_102:
          if ( (*(_BYTE *)(v81 + 68) & 1) != 0 && !*(_QWORD *)(v81 + 40)
            || (unsigned __int8)sub_E181D0(
                                  *(_QWORD *)(v81 + 48),
                                  *(_QWORD *)(v4 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v4 + 16) + v80)) )
          {
            while ( 1 )
            {
              v82 = *(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v81 = v82;
              if ( !v82 )
                return 1;
              if ( (*(_BYTE *)(v82 + 28) & 0x7Fu) - 49 <= 2 )
              {
                ++v80;
                goto LABEL_102;
              }
            }
          }
          return 0;
        }
      }
    case 0xB:
      v50 = sub_F3F530(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
      v55 = sub_B5ABC0(v50, a2, v51, v52, v53, v54);
      if ( !v55 )
        return 1;
LABEL_58:
      if ( (*(_BYTE *)(v55 + 68) & 1) == 0 || *(_QWORD *)(v55 + 40) )
      {
        v57 = *(_QWORD *)(a2 + 8);
        if ( v57
          && (v57 == v55
           || (v58 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v55 + 32LL))(v55),
               v58 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 32LL))(v57))) )
        {
          return sub_E181D0(*(_QWORD *)(v55 + 48), *(_QWORD *)(a2 + 16));
        }
        else
        {
          return 0;
        }
      }
      else
      {
        while ( 1 )
        {
          v56 = *(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v55 = v56;
          if ( !v56 )
            return 1;
          if ( (*(_BYTE *)(v56 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_58;
        }
      }
    case 0xC:
      return sub_A2D650(a2) == 0;
  }
}

