void __fastcall sub_1718700(__int64 *a1, __int64 *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // bl
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rsi
  char *v24; // rcx
  __int64 v25; // rdi
  char *v26; // rdx
  char *v27; // rax
  char *v28; // rsi
  char *v29; // rax
  char *v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 v38; // r12
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  char v41; // di
  __int64 v42; // rcx
  __int64 v43; // rsi
  unsigned __int64 v44; // rdi
  int v45; // eax
  __int64 *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rsi
  char *v49; // rdi
  unsigned __int64 *v50; // rcx
  char *v51; // rax
  __int64 v52; // rcx
  char *v53; // rsi
  char *v54; // rax
  __int64 v55; // r14
  _QWORD *v56; // r14
  _QWORD *v57; // r12
  _QWORD *v58; // rdi
  unsigned __int64 *v59; // rax
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // cl
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+8h] [rbp-350h]
  char v68; // [rsp+27h] [rbp-331h]
  void *ptr; // [rsp+30h] [rbp-328h] BYREF
  __int64 v71; // [rsp+38h] [rbp-320h]
  int v72; // [rsp+40h] [rbp-318h]
  unsigned __int8 v73; // [rsp+44h] [rbp-314h]
  char v74; // [rsp+48h] [rbp-310h] BYREF
  _QWORD v75[2]; // [rsp+70h] [rbp-2E8h] BYREF
  __int64 v76; // [rsp+80h] [rbp-2D8h]
  __int64 v77; // [rsp+88h] [rbp-2D0h]
  __int64 v78; // [rsp+90h] [rbp-2C8h]
  void *v79[2]; // [rsp+98h] [rbp-2C0h]
  __int64 v80; // [rsp+A8h] [rbp-2B0h]
  char v81; // [rsp+B0h] [rbp-2A8h]
  __int64 v82; // [rsp+B8h] [rbp-2A0h]
  __int64 v83; // [rsp+C0h] [rbp-298h]
  __int64 v84; // [rsp+C8h] [rbp-290h]
  char *v85; // [rsp+D0h] [rbp-288h]
  __int64 v86; // [rsp+D8h] [rbp-280h]
  int v87; // [rsp+E0h] [rbp-278h]
  char v88; // [rsp+E4h] [rbp-274h]
  char v89; // [rsp+E8h] [rbp-270h] BYREF
  __int64 v90; // [rsp+130h] [rbp-228h] BYREF
  __int64 v91; // [rsp+138h] [rbp-220h]
  __int64 v92[2]; // [rsp+218h] [rbp-140h] BYREF
  __int64 v93; // [rsp+228h] [rbp-130h]
  int v94[62]; // [rsp+260h] [rbp-F8h] BYREF

  v9 = (_QWORD *)a1[1];
  BYTE4(v75[0]) = 0;
  LODWORD(v75[0]) = 0;
  v75[1] = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v85 = &v89;
  v10 = *v9;
  v11 = *(__int64 (**)(void))(*v9 + 48LL);
  v68 = a4;
  LOBYTE(v84) = 0;
  v86 = 8;
  v87 = 0;
  v88 = 1;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = (__int64)(v9 + 3);
  }
  else
  {
    v66 = v11();
    v9 = (_QWORD *)a1[1];
    v12 = v66;
    v10 = *v9;
  }
  v13 = *(__int64 (**)(void))(v10 + 40);
  if ( (char *)v13 == (char *)sub_15A1850 )
  {
    v14 = v9[6];
  }
  else
  {
    v67 = v12;
    v65 = v13();
    v12 = v67;
    v14 = v65;
  }
  sub_16FF270((__int64)&v90, *a1, v14, v12, (unsigned int *)v75, a6, 0);
  sub_17038E0((__int64)v75);
  v15 = operator new(0x28u);
  v16 = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v15, (std::__detail::_List_node_base *)v92);
  v73 = 1;
  ptr = &v74;
  ++v93;
  v18 = *(_QWORD *)(a3 + 16);
  v19 = *(unsigned int *)(a3 + 24);
  v71 = 4;
  v72 = 0;
  v20 = v18;
  v21 = v18 + 48 * v19;
  v22 = v21;
  if ( v21 != v18 )
  {
    while ( 1 )
    {
      while ( !*(_DWORD *)v20 )
      {
        v20 += 48;
        v16 = 1;
        if ( v22 == v20 )
          goto LABEL_22;
      }
      v23 = *(_QWORD *)(v20 + 8);
      if ( v73 )
      {
        v24 = (char *)ptr;
        v21 = HIDWORD(v71);
        v25 = 8LL * HIDWORD(v71);
        v26 = (char *)ptr + v25;
        if ( ptr != (char *)ptr + v25 )
        {
          v27 = (char *)ptr;
          if ( v23 == *(_QWORD *)ptr )
            goto LABEL_15;
          while ( 1 )
          {
            v27 += 8;
            if ( v26 == v27 )
              break;
            if ( v23 == *(_QWORD *)v27 )
              goto LABEL_15;
          }
        }
        if ( HIDWORD(v71) < (unsigned int)v71 )
          break;
      }
      v27 = (char *)sub_2236760(&ptr, v23);
      v24 = (char *)ptr;
      if ( v73 )
        goto LABEL_15;
      v28 = (char *)ptr + 8 * (unsigned int)v71;
LABEL_16:
      if ( v28 != v27 && *(_QWORD *)v27 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v29 = v27 + 8;
        do
        {
          v30 = v29;
          if ( v28 == v29 )
            break;
          v29 += 8;
        }
        while ( *(_QWORD *)v30 >= 0xFFFFFFFFFFFFFFFELL );
      }
      v20 += 48;
      if ( v22 == v20 )
      {
LABEL_22:
        v68 = a4 | v16;
        goto LABEL_23;
      }
    }
    v21 = (unsigned int)++HIDWORD(v71);
    *(_QWORD *)v26 = v23;
    v24 = (char *)ptr;
    v27 = (char *)ptr + v25;
LABEL_15:
    v28 = &v24[8 * HIDWORD(v71)];
    goto LABEL_16;
  }
LABEL_23:
  while ( 2 )
  {
    if ( a2 )
    {
      if ( *((char *)a2 + 8) < 0 || (v31 = a2[45]) == 0 || (v32 = *(_BYTE *)(v31 + 8) & 0x7F) != 0 && v32 != 24 )
      {
        v35 = (__int64 *)a2[10];
        if ( *((_BYTE *)a2 + 100) )
          v36 = *((unsigned int *)a2 + 23);
        else
          v36 = *((unsigned int *)a2 + 22);
        v37 = &v35[v36];
        if ( v37 == v35 )
          goto LABEL_43;
        if ( *v35 == -2 || *v35 == -1 )
        {
          while ( ++v35 != v37 )
          {
            if ( (unsigned __int64)*v35 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_45;
          }
LABEL_43:
          a2 = (__int64 *)*a2;
          continue;
        }
        while ( 1 )
        {
LABEL_45:
          v38 = *v35;
          v39 = *(_BYTE *)(*v35 + 28) & 0x7F;
          v40 = v39;
          if ( (unsigned int)v39 - 40 > 6 )
            goto LABEL_58;
          v41 = *(_BYTE *)(v38 + 96);
          v42 = v41 & 7;
          v43 = (unsigned __int8)v42;
          if ( (_BYTE)v42 )
          {
            if ( (unsigned __int8)v42 != 5 )
              goto LABEL_65;
            if ( v39 == 46 || v39 == 40 )
            {
              v63 = *(_QWORD *)(v38 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              v40 = *(_QWORD *)(v38 + 16) & 4LL;
              if ( (*(_QWORD *)(v38 + 16) & 4) != 0 )
              {
                v63 = *(_QWORD *)(v63 + 8);
                if ( v63 )
                {
LABEL_116:
                  v64 = *(_BYTE *)(sub_B8EAA0(v63) + 8) & 0x7F;
                  if ( v64 > 0x12u )
                  {
                    if ( ((v64 + 94) & 0x7Fu) <= 5 )
                      goto LABEL_118;
                  }
                  else if ( ((1LL << v64) & 0x40182) != 0 )
                  {
LABEL_118:
                    v42 = *(_BYTE *)(v38 + 96) & 7;
LABEL_65:
                    if ( (unsigned __int8)v42 <= 3u )
                      goto LABEL_58;
                    goto LABEL_66;
                  }
                  if ( (*(_BYTE *)(v38 + 28) & 0x7F) != 0x2B )
                    goto LABEL_58;
                  goto LABEL_118;
                }
              }
              else if ( v63 )
              {
                goto LABEL_116;
              }
            }
            if ( v39 != 43 )
              goto LABEL_58;
          }
          else
          {
            v40 = *(_QWORD *)&byte_8[*(_QWORD *)(v38 + 48) & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v40 & 8) != 0 )
            {
              v42 = v40 & 0xFFFFFFFFFFFFFFF0LL;
              v40 = (*(_DWORD *)((char *)&qword_18 + (v40 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v40 & 7)) >> 9;
              if ( (_DWORD)v40 == 3 )
                goto LABEL_58;
            }
            if ( ((v39 + 85) & 0x7D) != 0 )
            {
              v44 = *(_QWORD *)(v38 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(v38 + 16) & 4) != 0 )
                v44 = *(_QWORD *)(v44 + 8);
              v45 = *(_BYTE *)(sub_B8EAA0(v44) + 8) & 0x7F;
              if ( v45 == 24 || !v45 )
                goto LABEL_58;
              if ( (*(_BYTE *)(v38 + 28) & 0x7F) != 0x2B )
              {
                v40 = *(_QWORD *)(v38 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v38 + 16) & 4) != 0 )
                {
                  v40 = *(_QWORD *)v40;
                  if ( ((*(_BYTE *)(v40 + 8) + 70) & 0x7Fu) <= 3 )
                    goto LABEL_58;
                }
                else if ( ((*(_BYTE *)(v40 + 8) + 70) & 0x7Fu) <= 3 )
                {
                  goto LABEL_58;
                }
              }
              v41 = *(_BYTE *)(v38 + 96);
            }
            if ( (v41 & 0x18) != 0 )
              goto LABEL_58;
          }
LABEL_66:
          if ( (*(_BYTE *)(v38 + 29) & 1) == 0 )
            goto LABEL_67;
          v59 = sub_B8C3D0(v38, v43, v40, v42, v21, v17);
          v60 = *v59;
          v61 = *v59 + 8LL * *((unsigned int *)v59 + 2);
          if ( *v59 >= v61 )
          {
            if ( v60 == v61 )
              goto LABEL_67;
            while ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 148 )
            {
              v61 += 8LL;
              if ( v60 == v61 )
                goto LABEL_67;
            }
          }
          else
          {
            v62 = *v59;
            while ( *(_WORD *)(*(_QWORD *)v62 + 36LL) != 148 )
            {
              v62 += 8LL;
              if ( v61 == v62 )
                goto LABEL_67;
            }
            if ( v61 == v62 )
            {
LABEL_67:
              v47 = v73;
              v48 = *(_QWORD *)(v38 + 40) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(v38 + 40) & 7) != 0 )
                v48 = 0;
              if ( v73 )
              {
                v49 = (char *)ptr;
                v17 = HIDWORD(v71);
                v21 = 8LL * HIDWORD(v71);
                v50 = (unsigned __int64 *)((char *)ptr + v21);
                if ( ptr != (char *)ptr + v21 )
                {
                  v51 = (char *)ptr;
                  if ( v48 == *(_QWORD *)ptr )
                  {
LABEL_104:
                    v47 = 0;
LABEL_77:
                    v52 = HIDWORD(v71);
                    v53 = &v49[8 * HIDWORD(v71)];
                    goto LABEL_78;
                  }
                  while ( 1 )
                  {
                    v51 += 8;
                    if ( v50 == (unsigned __int64 *)v51 )
                      break;
                    if ( v48 == *(_QWORD *)v51 )
                      goto LABEL_104;
                  }
                }
                if ( HIDWORD(v71) < (unsigned int)v71 )
                {
                  v17 = (unsigned int)++HIDWORD(v71);
                  *v50 = v48;
                  v49 = (char *)ptr;
                  v51 = (char *)ptr + v21;
                  goto LABEL_77;
                }
              }
              v51 = (char *)sub_2236760(&ptr, v48);
              v49 = (char *)ptr;
              if ( v73 )
                goto LABEL_77;
              v52 = (unsigned int)v71;
              v53 = (char *)ptr + 8 * (unsigned int)v71;
LABEL_78:
              if ( v53 != v51 && *(_QWORD *)v51 >= 0xFFFFFFFFFFFFFFFELL )
              {
                v54 = v51 + 8;
                do
                {
                  v52 = (__int64)v54;
                  if ( v54 == v53 )
                    break;
                  v54 += 8;
                }
                while ( *(_QWORD *)v52 >= 0xFFFFFFFFFFFFFFFELL );
              }
              if ( (_BYTE)v47 )
              {
                v55 = *(_QWORD *)(*a1 + 544);
                v75[0] = v38;
                *(_OWORD *)v79 = 0;
                v76 = 34;
                LODWORD(v77) = 0;
                v81 = v81 & 0x80 | 0x40;
                LODWORD(v78) = 0;
                v80 = 0;
                v82 = 0;
                v83 = 0;
                v84 = 0;
                sub_15A3440((unsigned int *)v75, 1, v47, v52, v21, v17);
                sub_1715C60((__int64)&v90, (__int64)v75, v55, 0, 0, 0);
                v56 = v79[1];
                v57 = v79[0];
                if ( v79[1] != v79[0] )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v58 = (_QWORD *)v57[3];
                      if ( v58 == v57 + 5 )
                        break;
                      operator delete(v58);
                      v57 += 8;
                      if ( v56 == v57 )
                        goto LABEL_87;
                    }
                    v57 += 8;
                  }
                  while ( v56 != v57 );
LABEL_87:
                  v57 = v79[0];
                }
                if ( v57 )
                  operator delete(v57);
              }
            }
          }
LABEL_58:
          if ( v35 + 1 == v37 )
            goto LABEL_43;
          if ( (unsigned __int64)v35[1] >= 0xFFFFFFFFFFFFFFFELL )
          {
            v46 = v35 + 2;
            while ( 1 )
            {
              v35 = v46;
              if ( v46 == v37 )
                break;
              ++v46;
              if ( (unsigned __int64)*v35 < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_45;
            }
            a2 = (__int64 *)*a2;
            goto LABEL_23;
          }
          ++v35;
        }
      }
    }
    break;
  }
  if ( !v68 && *(_DWORD *)(a3 + 12) != 1 )
    sub_1711B50(*a1, (__int64)&v90);
  sub_16FF8C0((__int64)v92, v92[1]);
  v33 = 0;
  v34 = a1[1];
  if ( v90 != v91 )
    v33 = v90;
  if ( v34 )
    sub_1700D50(*a1, v34, v94, v33, -1431655765 * ((v91 - v90) >> 5));
  if ( !v73 )
    free(ptr);
  sub_1700A70((__int64)&v90);
}
