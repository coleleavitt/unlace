__int64 __fastcall sub_3E9060(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  bool v7; // cc
  int v9; // ebp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  int v24; // r14d
  unsigned int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v31; // rax
  unsigned __int8 *v32; // r15
  __int64 v33; // r12
  int v34; // eax
  __int64 v35; // r13
  int v36; // eax
  unsigned __int16 v37; // ax
  __int64 v38; // rbp
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // r10
  unsigned __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rbp
  int v46; // r12d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rbp
  __int64 v54; // rax
  unsigned __int8 *v55; // r13
  bool v56; // cf
  int v57; // eax
  __int64 v58; // rax
  unsigned __int64 v59; // r12
  __int16 v60; // ax
  _DWORD *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned __int64 v64; // r9
  int v65; // r12d
  unsigned __int64 v66; // rbp
  int v67; // eax
  __int64 v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r12
  bool v74; // zf
  __int64 v75; // r12
  int v76; // eax
  __int64 v77; // rdx
  int v78; // r12d
  int dtype_size; // eax
  unsigned int v80; // eax
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbp
  __int64 v87; // rbp
  int v88; // eax
  __int64 v89; // rax
  unsigned __int64 v90; // rbp
  int v91; // eax
  __int64 v92; // r12
  int v93; // eax
  __int64 v94; // rax
  unsigned int *v95; // rax
  __int64 v96; // rbp
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rcx
  _QWORD *v100; // rdi
  __int64 v101; // r12
  _QWORD *v102; // r14
  __int64 v103; // r15
  __int64 v104; // rdx
  unsigned __int8 *v105; // r13
  __int64 v106; // rdi
  unsigned __int64 v107; // [rsp+0h] [rbp-78h]
  __int64 v108; // [rsp+8h] [rbp-70h]
  _QWORD v109[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v110; // [rsp+20h] [rbp-58h] BYREF
  __int64 v111; // [rsp+28h] [rbp-50h]
  unsigned __int64 v112; // [rsp+38h] [rbp-40h]

  v7 = *(_WORD *)(a1 + 48) <= 4u;
  v112 = __readfsqword(0x28u);
  if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 784) == -1 )
    {
      v10 = *(_QWORD *)(a1 + 416);
      v9 = 0;
      if ( v10 != -1 )
      {
LABEL_5:
        if ( *(_BYTE *)(a1 + 384) )
        {
          v26 = 0;
          if ( v10 < *(_QWORD *)(a1 + 408) )
            return sub_3E8E80(a1, 1, a3, a4, a5, a6, a7);
          return v26;
        }
        v11 = *(_QWORD *)(a1 + 40);
        if ( v11 < *(_QWORD *)(a1 + 856) )
        {
          if ( !under_debugger )
            sub_37B760(0xCC14u, a2, a7);
          goto LABEL_151;
        }
        v12 = *(unsigned __int16 *)(a1 + 48);
        if ( (_WORD)v12 == 15 || (_WORD)v12 == 18 || (_WORD)v12 == 14 || (_WORD)v12 == 17 )
        {
          v13 = *(_QWORD *)(a1 + 408);
          if ( v10 >= v13 )
          {
            v42 = *(__int64 **)(a1 + 912);
            a3 = (__int64)&v42[4 * *(_QWORD *)(a1 + 920)];
            if ( v42 != (__int64 *)a3 )
              goto LABEL_67;
            if ( !v9 )
            {
              if ( v10 < v13 )
                goto LABEL_50;
              v32 = nullptr;
              goto LABEL_129;
            }
            v32 = nullptr;
          }
          else
          {
            v32 = nullptr;
            if ( !v9 )
            {
              if ( v10 >= v13 )
                goto LABEL_116;
              goto LABEL_50;
            }
          }
        }
        else
        {
          if ( (unsigned __int16)(v12 - 41) > 2u && (_WORD)v12 != 16 )
          {
            if ( !under_debugger )
              sub_37B760(0xCC12u, v12, a7);
            goto LABEL_151;
          }
          v13 = *(_QWORD *)(a1 + 408);
          if ( v10 < v13 )
          {
            if ( (_WORD)v12 == 16 )
            {
              if ( !under_debugger )
                sub_37B760(0xCDBFu, v12, a7);
              goto LABEL_151;
            }
            v32 = nullptr;
            goto LABEL_70;
          }
          v42 = *(__int64 **)(a1 + 912);
          a3 = (__int64)&v42[4 * *(_QWORD *)(a1 + 920)];
          if ( (__int64 *)a3 == v42 )
          {
            v32 = nullptr;
            if ( (_WORD)v12 == 16 )
              goto LABEL_106;
            goto LABEL_70;
          }
LABEL_67:
          while ( 1 )
          {
            v32 = (unsigned __int8 *)v42;
            if ( v11 == *(_QWORD *)(*v42 + 72) )
              break;
            v42 += 4;
            if ( (__int64 *)a3 == v42 )
            {
              v32 = nullptr;
              break;
            }
          }
          if ( (_WORD)v12 == 16 )
          {
LABEL_106:
            if ( v9 )
            {
              v78 = sub_3E6620(a1, v9, 0);
              dtype_size = get_dtype_size(0);
              sub_1CF210(a1, 4u, dtype_size, v78, 0x3BEA45E214ADDC55LL, 7, 0);
              v68 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v73 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v80 = *(_DWORD *)(v73 + 72);
              v109[0] = 0xFFFFFFFF00000007LL;
              v109[1] = v80;
              LODWORD(v111) = sub_3E6620(a1, v9, 1);
              v110 = 0x100000001LL;
              sub_1CF350(a1, 42, (unsigned __int8 *)&v110, nullptr, (unsigned __int8 *)v109);
              sub_1166E0((__int64)&v110);
              sub_1166E0((__int64)v109);
            }
            else
            {
              sub_1CF210(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 7, 0);
              v68 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v73 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            }
            *(_QWORD *)(a1 + 16) = v68;
            if ( (unsigned int)sub_3E7480(a1, 0, a7, v69, v70, v71, v72) != 1 )
            {
              if ( !under_debugger )
                sub_37B760(0xCDC0u, 0, a7);
              goto LABEL_151;
            }
            v74 = *(_BYTE *)(a1 + 792) == 0;
            *(_QWORD *)(a1 + 16) = v73;
            if ( !v74 )
            {
              v75 = *(_QWORD *)(a1 + 400);
              v76 = get_dtype_size(0);
              sub_1CF210(a1, 0x2Au, v76, 7, 0x3BEA45E214ADDC55LL, v75, 0);
              goto LABEL_111;
            }
            goto LABEL_72;
          }
          if ( (unsigned __int16)(v12 - 41) <= 2u )
          {
LABEL_70:
            v26 = sub_3E7480(a1, 1, a7, a3, v11, a5, a6);
            if ( v26 )
              return v26;
            if ( !*(_BYTE *)(a1 + 792) )
              goto LABEL_72;
            if ( !under_debugger )
              sub_37B760(0xCC4Au, 1, a7);
LABEL_151:
            BUG();
          }
          if ( !v9 )
          {
            if ( v10 < v13 )
              goto LABEL_50;
LABEL_129:
            sub_1CF210(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 7, 0);
            v43 = *(_QWORD *)(a1 + 408);
            v10 = *(_QWORD *)(a1 + 416);
LABEL_73:
            if ( v10 >= v43 )
            {
              if ( v32 )
              {
                sub_1CF350(a1, 55, v32 + 8, nullptr, nullptr);
                v44 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
                *(_QWORD *)(a1 + 16) = v44;
                v45 = *(_QWORD *)v32;
                v46 = *(_DWORD *)(v44 + 72);
                sub_1166E0(*(_QWORD *)v32 + 64LL);
                *(_BYTE *)(v45 + 64) = 7;
                *(_DWORD *)(v45 + 72) = v46;
LABEL_76:
                if ( *(_WORD *)(a1 + 48) == 16 )
                {
                  v26 = 0;
                  v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL)
                      & (16LL * *(_QWORD *)(a1 + 24) + (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFFELL));
                  v91 = get_dtype_size(2);
                  sub_1CF210(a1, 0x37u, v91, v90, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                }
                else
                {
                  v26 = sub_3E7480(a1, 0, a7, v47, v48, v49, v50);
                  if ( v26 == 1 )
                  {
                    v85 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
                    v86 = *(_QWORD *)(a1 + 416) + *(unsigned __int16 *)(a1 + 450);
                    *(_QWORD *)(a1 + 16) = v85;
                    v87 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL) & v86;
                    v88 = get_dtype_size(2);
                    sub_1CF210(a1, 0x37u, v88, v87, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                  }
                }
                if ( v32 )
                {
                  sub_1166E0((__int64)(v32 + 8));
                  v51 = *(_QWORD *)(a1 + 920);
                  v52 = (__int64)(v32 + 8);
                  v53 = ((*(_QWORD *)(a1 + 912) + 32 * v51 - (__int64)v32) >> 5) - 2;
                  if ( v53 >= 0 )
                  {
                    while ( 1 )
                    {
                      v54 = *((_QWORD *)v32 + 4);
                      v55 = v32 + 40;
                      v32 += 32;
                      *((_QWORD *)v32 - 4) = v54;
                      sub_11D380(v52, v55);
                      *((_DWORD *)v32 - 2) = *((_DWORD *)v32 + 6);
                      sub_1166E0((__int64)v55);
                      v56 = v53-- == 0;
                      if ( v56 )
                        break;
                      v52 = (__int64)(v32 + 8);
                    }
                    v51 = *(_QWORD *)(a1 + 920);
                  }
                  *(_QWORD *)(a1 + 920) = v51 - 1;
                }
                return v26;
              }
LABEL_116:
              v32 = nullptr;
              v81 = get_dtype_size(2);
              v82 = sub_1CF210(a1, 0x37u, v81, v10, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
              *(_DWORD *)(a1 + 904) = v9;
              v83 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 880) = v82;
              v84 = sub_61A50(*(_QWORD *)(a1 + 8), v83, 2);
              *(_QWORD *)(a1 + 16) = v84;
              LODWORD(v84) = *(_DWORD *)(v84 + 72);
              *(_BYTE *)(a1 + 888) = 7;
              *(_DWORD *)(a1 + 896) = v84;
              goto LABEL_76;
            }
LABEL_50:
            v26 = sub_3E8E80(a1, 1, a3, v11, a5, a6, a7);
            if ( !v26 )
            {
              v37 = *(_WORD *)(a1 + 48);
              if ( v37 != 43 && v37 > 4u && (unsigned __int8)((*(_BYTE *)(a1 + 52) & 0x1F) - 1) <= 0xEu )
              {
                v38 = *(_QWORD *)(a1 + 400);
                v39 = get_dtype_size(0);
                sub_1CF210(a1, 0x2Au, v39, 7, 0x3BEA45E214ADDC55LL, v38, 0);
                *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              }
              return sub_3E7480(a1, 0, a7, a3, a4, a5, a6);
            }
            return v26;
          }
        }
        v33 = (int)sub_3E6620(a1, v9, 1);
        v34 = get_dtype_size(0);
        sub_1CF210(a1, 4u, v34, v33, 0x3BEA45E214ADDC55LL, 7, 0);
        if ( *(_BYTE *)(a1 + 792) )
        {
          v35 = *(_QWORD *)(a1 + 400);
          v36 = get_dtype_size(0);
          sub_1CF210(a1, 0x2Au, v36, v33, 0x3BEA45E214ADDC55LL, v35, 0);
LABEL_111:
          *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 416), 2);
        }
LABEL_72:
        v43 = *(_QWORD *)(a1 + 408);
        v10 = *(_QWORD *)(a1 + 416);
        goto LABEL_73;
      }
LABEL_38:
      v26 = sub_3E7480(a1, 0, a7, a3, a4, a5, a6);
      if ( v26 <= 1 )
      {
        v31 = *(_QWORD *)(a1 + 400);
        if ( *(_QWORD *)(a1 + 848) == v31 )
        {
          v95 = *(unsigned int **)(*(_QWORD *)(a1 + 16) + 56LL);
          if ( v95 && sub_327800(*v95, 1) )
            *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
          v96 = *(_QWORD *)(a1 + 856);
          v97 = get_dtype_size(2);
          sub_1CF210(a1, 0x37u, v97, v96, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 856) != v31 )
            return v26;
          *(_OWORD *)(a1 + 848) = 0;
        }
        return 1;
      }
      return v26;
    }
    v9 = 0;
    goto LABEL_19;
  }
  v9 = *(_DWORD *)(a1 + 52) & 0x1F;
  if ( (*(_DWORD *)(a1 + 52) & 0x10) == 0 )
  {
    v9 = (unsigned __int8)v9;
    if ( *(_QWORD *)(a1 + 784) == -1 )
    {
LABEL_4:
      v10 = *(_QWORD *)(a1 + 416);
      if ( v10 != -1 )
        goto LABEL_5;
      if ( v9 )
      {
        v60 = *(_WORD *)(a1 + 48);
        if ( v60 == 16 || (a4 = *(_QWORD *)(a1 + 856), *(_QWORD *)(a1 + 40) >= a4) && v60 != 43 )
        {
          v65 = sub_3E6620(a1, v9, 1);
          if ( *(_WORD *)(a1 + 48) == 16 )
            v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL)
                & (16LL * *(_QWORD *)(a1 + 24) + (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFFELL));
          else
            v66 = sub_3E3E40((_QWORD *)a1, v9, v61, a7, v62, v63, v64);
          v67 = get_dtype_size(0);
          sub_1CF210(a1, 0x2Au, v67, v65, 0x3BEA45E214ADDC55LL, v66, 0);
          *(_QWORD *)(a1 + 16) = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
        }
      }
      goto LABEL_38;
    }
LABEL_19:
    v14 = sub_11C2E0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
    if ( v14 )
    {
      if ( !under_debugger )
        sub_37B760(0xCF02u, a2, a7);
      goto LABEL_151;
    }
    v15 = *(_QWORD *)(a1 + 16);
    v16 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v15 + 32) != v16 )
    {
      if ( !under_debugger )
        sub_37B760(0xCF03u, a2, a7);
      goto LABEL_151;
    }
    if ( (*(_BYTE *)(v15 + 24) & 2) != 0 )
    {
      if ( !under_debugger )
        sub_37B760(0xCF04u, a2, a7);
      goto LABEL_151;
    }
    v17 = *(_QWORD *)(a1 + 880);
    if ( v17 )
    {
      if ( *(_DWORD *)v17 != 55
        || *(_BYTE *)(v17 + 32) != 6
        || v16 != *(_QWORD *)(v17 + 40)
        || *(_DWORD *)(a1 + 904) == 16 )
      {
        if ( !under_debugger )
          sub_37B760(0xCC13u, a2, a7);
        goto LABEL_151;
      }
    }
    else
    {
      a2 = *(_QWORD *)(a1 + 784);
      if ( (unsigned __int8)netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 104LL), a2, 256)
        || (v57 = *(unsigned __int16 *)(a1 + 48), a3 = (unsigned int)(v57 - 14), (unsigned __int16)(v57 - 14) <= 4u)
        || (_WORD)v57 == 65
        || (unsigned __int16)(v57 - 41) <= 2u
        || *(_WORD *)(a1 + 50) > 4u )
      {
        if ( !*(_QWORD *)(a1 + 880) )
          goto LABEL_4;
      }
      else
      {
        v58 = *(_QWORD *)(a1 + 920);
        v59 = *(_QWORD *)(a1 + 928);
        a3 = v58 + 1;
        if ( v59 < v58 + 1 )
        {
          a2 = 0;
          v98 = qvector_reserve(a1 + 912, 0, a3, 32);
          v99 = *(_QWORD *)(a1 + 928);
          v100 = *(_QWORD **)(a1 + 912);
          *(_QWORD *)(a1 + 928) = v59;
          v107 = v98;
          v101 = v98;
          v108 = v99;
          v102 = v100;
          v103 = *(_QWORD *)(a1 + 920) - 1LL;
          if ( v103 >= 0 )
          {
            do
            {
              v104 = *v102;
              v105 = (unsigned __int8 *)(v102 + 1);
              v106 = v101 + 8;
              v102 += 4;
              a2 = (__int64)v105;
              v101 += 32;
              *(_QWORD *)(v101 - 32) = v104;
              sub_11D380(v106, v105);
              *(_DWORD *)(v101 - 8) = *((_DWORD *)v102 - 2);
              sub_1166E0((__int64)v105);
              v56 = v103-- == 0;
            }
            while ( !v56 );
            v100 = *(_QWORD **)(a1 + 912);
          }
          qfree(v100);
          *(_QWORD *)(a1 + 912) = v107;
          *(_QWORD *)(a1 + 928) = v108;
          v58 = *(_QWORD *)(a1 + 920);
        }
        else
        {
          a4 = *(_QWORD *)(a1 + 912);
          v107 = a4;
        }
        v14 = 32 * v58 + v107;
        *(_QWORD *)(v14 + 8) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)v14 = 0;
        *(_QWORD *)(v14 + 16) = 0;
        *(_DWORD *)(v14 + 24) = 16;
        ++*(_QWORD *)(a1 + 920);
        if ( !(*(_QWORD *)(a1 + 880) | v14) )
          goto LABEL_4;
      }
    }
    sub_1CF210(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, 7, 0);
    v18 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    v23 = *(_QWORD *)(a1 + 880);
    *(_QWORD *)(a1 + 16) = v18;
    v24 = *(_DWORD *)(v18 + 72);
    if ( v23 )
    {
      sub_1166E0(v23 + 32);
      *(_BYTE *)(v23 + 32) = 7;
      *(_DWORD *)(v23 + 40) = v24;
    }
    else
    {
      *(_BYTE *)(v14 + 8) = 7;
      *(_DWORD *)(v14 + 16) = v24;
    }
    v25 = sub_3E8E80(a1, 0, v19, v20, v21, v22, a7);
    v26 = v25;
    if ( v25 )
    {
      if ( v25 == 1 )
        v26 = -32;
      if ( v14 )
      {
        v40 = *(_QWORD *)(a1 + 920);
        if ( v40 )
        {
          v89 = v40 - 1;
          *(_QWORD *)(a1 + 920) = v89;
          sub_1166E0(*(_QWORD *)(a1 + 912) + 32 * v89 + 8);
        }
      }
      v41 = *(_QWORD *)(a1 + 880);
    }
    else
    {
      v27 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
      *(_QWORD *)(a1 + 784) = v27;
      v28 = get_dtype_size(0);
      sub_1CF210(a1, 6u, v28, 7, 0x3BEA45E214ADDC55LL, 7, 0);
      if ( *(_QWORD *)(a1 + 880) )
      {
        if ( !*(_DWORD *)(a1 + 904) )
        {
          v29 = *(_QWORD *)(a1 + 40);
          v26 = 1;
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
          *(_QWORD *)(a1 + 784) = v29;
LABEL_33:
          *(_QWORD *)(a1 + 880) = 0;
          sub_1166E0(a1 + 888);
          return v26;
        }
        v111 = 7;
        v110 = 0x100000001LL;
        sub_1CF350(a1, 42, (unsigned __int8 *)&v110, nullptr, (unsigned __int8 *)(a1 + 888));
        sub_1166E0((__int64)&v110);
        v41 = *(_QWORD *)(a1 + 880);
      }
      else
      {
        v92 = *(_QWORD *)(a1 + 40);
        v93 = get_dtype_size(0);
        v94 = sub_1CF210(a1, 0x2Au, v93, 7, 0x3BEA45E214ADDC55LL, v92, 0);
        *(_DWORD *)(v14 + 24) = v9;
        *(_QWORD *)v14 = v94;
        v41 = *(_QWORD *)(a1 + 880);
      }
      v77 = *(_QWORD *)(a1 + 40);
      v26 = 1;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
      *(_QWORD *)(a1 + 784) = v77;
    }
    if ( !v41 )
      return v26;
    goto LABEL_33;
  }
  return sub_3E7480(a1, 0, a7, a3, a4, a5, a6);
}
