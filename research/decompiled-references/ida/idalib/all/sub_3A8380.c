unsigned __int64 __fastcall sub_3A8380(__int64 *a1, char *a2, __int64 a3)
{
  int v5; // r15d
  __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rax
  char *that; // rax
  __int64 v13; // rdi
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rax
  char v22; // al
  char *v23; // rdx
  char *head; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  unsigned int v27; // ecx
  char *v28; // rax
  char *v29; // rsi
  __int64 v30; // rax
  __int64 *v31; // r14
  __int64 v32; // rcx
  int *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 *v36; // rax
  _QWORD *v37; // rdi
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 *v41; // rax
  __int64 *v42; // r13
  __int64 v43; // r15
  __int64 *v44; // rdx
  __int64 *v45; // rax
  int v46; // [rsp+0h] [rbp-218h]
  int v47; // [rsp+8h] [rbp-210h]
  __int64 v48; // [rsp+8h] [rbp-210h]
  int v49; // [rsp+8h] [rbp-210h]
  int v50; // [rsp+10h] [rbp-208h]
  int v51; // [rsp+18h] [rbp-200h]
  __int64 v52; // [rsp+20h] [rbp-1F8h] BYREF
  int v53; // [rsp+28h] [rbp-1F0h]
  void *v54; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v55; // [rsp+38h] [rbp-1E0h]
  int v56; // [rsp+48h] [rbp-1D0h]
  int v57[4]; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v58; // [rsp+60h] [rbp-1B8h]
  __int128 v59; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v60; // [rsp+80h] [rbp-198h]
  __int64 v61; // [rsp+88h] [rbp-190h]
  __int64 v62; // [rsp+90h] [rbp-188h]
  int v63[80]; // [rsp+98h] [rbp-180h] BYREF
  int v64[2]; // [rsp+1D8h] [rbp-40h] BYREF
  int v65; // [rsp+1E0h] [rbp-38h]
  int v66; // [rsp+1E8h] [rbp-30h]
  int v67; // [rsp+1F0h] [rbp-28h]
  int v68; // [rsp+1F8h] [rbp-20h]
  __int64 v69; // [rsp+200h] [rbp-18h]

  *(_QWORD *)v64 = __readfsqword(0x28u);
  if ( (_DWORD)a3 == 90 )
  {
    if ( (int)sub_688740() >= (unsigned __int64)a2 )
    {
      v15 = *(_QWORD *)(*a1 + 1536);
      v57[0] = 90;
      sub_3A2DF0((unsigned int *)(v15 + 144), (unsigned int *)v57, 0x76u);
      sub_689B90(a1, 1);
LABEL_14:
      v13 = *(_QWORD *)(*a1 + 1536);
      v57[0] = 0;
      sub_3A2DF0((unsigned int *)(v13 + 144), (unsigned int *)v57, 0x76u);
      return *(_QWORD *)v64 - __readfsqword(0x28u);
    }
    v27 = 90;
    v26 = -1;
  }
  else
  {
    v5 = a3;
    v6 = *(_QWORD *)(*a1 + 1536);
    if ( (unsigned __int8)sub_3BD540(a1, a2, a3) )
    {
      if ( (unsigned int)(v5 - 60) > 0x1E )
      {
        v8 = sub_3BE900(a1, a2, 4);
        v9 = *(_QWORD *)(*a1 + 1536);
        v57[0] = v5;
        sub_3A2DF0((unsigned int *)(v9 + 144), (unsigned int *)v57, 0x76u);
        if ( v5 > 90 )
        {
          if ( v5 == 200 )
          {
            v10 = v8 & 0x600;
            if ( *(_QWORD *)(v6 + 1776) )
            {
              v11 = *(_QWORD *)(v6 + 1760);
              if ( *(_QWORD *)(v11 + 32) < (unsigned __int64)a2 )
              {
                sub_3A50F0(v6 + 1736, *(_QWORD *)(v11 + 32));
                v36 = (__int64 *)sub_5CAA10(a1);
                if ( v36 )
                  sub_3A2F40(*a1, v36);
              }
            }
            if ( !v10 )
              sub_59C070((int)a1);
            that = (char *)next_that(a2, -1, 0, 0);
            sub_3A4190((__int64)a1, a2, that, 0xC8u);
          }
        }
        else if ( v5 > 9 )
        {
          switch ( v5 )
          {
            case 10:
              if ( (~(_WORD)v8 & 0x600) == 0 )
              {
                v35 = sub_5CAA10(a1);
                if ( v35 && (*(_BYTE *)(v35 + 16) & 4) == 0 )
                  sub_69CB60(a1, a2);
                v60 = 0;
                v61 = 0;
                v59 = 0;
                sub_3D19E0((_DWORD)a1, (_DWORD)a2);
                if ( v60 )
                  ((void (__fastcall *)(__int128 *, __int128 *, __int64))v60)(&v59, &v59, 3);
              }
              break;
            case 20:
              if ( (~(_WORD)v8 & 0x600) != 0 )
              {
                sub_577F80(
                  (int)a1,
                  (int)a2,
                  v46,
                  v47,
                  v50,
                  v51,
                  v52,
                  v53,
                  (int)v54,
                  v55,
                  SDWORD2(v55),
                  v56,
                  v57[0],
                  v57[2],
                  v58,
                  SDWORD2(v58),
                  v59,
                  SDWORD2(v59),
                  v60,
                  v61,
                  v62,
                  v63[0],
                  v63[2],
                  v63[4],
                  v63[6],
                  v63[8],
                  v63[10],
                  v63[12],
                  v63[14],
                  v63[16],
                  v63[18],
                  v63[20],
                  v63[22],
                  v63[24],
                  v63[26],
                  v63[28],
                  v63[30],
                  v63[32],
                  v63[34],
                  v63[36],
                  v63[38],
                  v63[40],
                  v63[42],
                  v63[44],
                  v63[46],
                  v63[48],
                  v63[50],
                  v63[52],
                  v63[54],
                  v63[56],
                  v63[58],
                  v63[60],
                  v63[62],
                  v63[64],
                  v63[66],
                  v63[68],
                  v63[70],
                  v63[72],
                  v63[74],
                  v63[76],
                  v63[78],
                  v64[0],
                  v65,
                  v66,
                  v67,
                  v68,
                  v69);
              }
              else if ( !(unsigned __int8)sub_3A22D0((_DWORD)a1, (_DWORD)a2) )
              {
                goto LABEL_47;
              }
              break;
            case 25:
              if ( (~(_WORD)v8 & 0x600) != 0 )
                sub_3A7A80((int *)a1, (unsigned __int64)a2);
              break;
            case 30:
              if ( (~(_WORD)v8 & 0x600) == 0 && (sub_4F37A0(a1, a2) & 8) == 0 )
                sub_3A63C0(a1, a2);
              break;
            case 35:
              v20 = v6 + 112;
              v21 = sub_7BE710(v20, *a1, a2, 321);
              sub_3BDE50(a1, v21);
              sub_7BE850(v20, *a1, a2, 321);
              v22 = sub_5CF800((int)a1, (int)a2);
              v23 = a2 + 1;
              if ( v22 )
                v23 = *(char **)(sub_505D70(a1 + 213, a2) + 8);
              sub_3A4190((__int64)a1, a2, v23, 0x23u);
              break;
            case 38:
              if ( (~(_WORD)v8 & 0x600) != 0 )
              {
                head = (char *)next_head(a2, -1);
                if ( a2 < head )
                  sub_3A4190((__int64)a1, a2, head, 0x26u);
              }
              else if ( (unsigned __int8)xrefblk_t_first_from(v57, a2, 5) )
              {
                do
                  sub_3A6E80(a1, v57[0], *(char **)&v57[2], (unsigned __int8)(BYTE1(v58) - 16) <= 1u);
                while ( (unsigned __int8)xrefblk_t_next_from(v57) );
              }
              break;
            case 40:
            case 45:
              if ( (unsigned __int8)sub_3A22D0((_DWORD)a1, (_DWORD)a2) )
              {
                if ( (~(_WORD)v8 & 0x600) == 0 && v5 == 40 )
                {
                  v30 = sub_5CAA10(a1);
                  v31 = (__int64 *)v30;
                  if ( v30 )
                  {
                    lock_func_range(v30, 1);
                    v60 = -1;
                    v33 = v63;
                    v59 = -1;
                    v61 = 0;
                    v62 = 0;
                    do
                    {
                      *(_WORD *)v33 = 0;
                      v33 += 10;
                      *((_WORD *)v33 - 19) = 0;
                      *((_WORD *)v33 - 18) = 0;
                      *(v33 - 2) = 0;
                      *((_WORD *)v33 - 17) = 0;
                      *((_OWORD *)v33 - 2) = 0;
                      *((_QWORD *)v33 - 2) = 0;
                    }
                    while ( v33 != v64 );
                    if ( (int)decode_insn(&v59, a2, v64, v32, 0, 0, 0.0) > 0
                      && (unsigned __int8)is_call_insn(&v59)
                      && !(unsigned __int8)xrefblk_t_first_from(v57, a2, 1) )
                    {
                      sub_3A6250(*(_QWORD **)(*a1 + 1536), (__int64)a2, -1, 0);
                    }
                    v34 = sub_5C9490(a1, v31);
                    if ( v34 != -1 && a2 == (char *)sub_3C19F0(a1, v34, a2, sub_39FD10, 0) )
                    {
                      sub_3A2F40(*a1, v31);
                      v54 = nullptr;
                      *(_QWORD *)v57 = 0;
                      v55 = 0;
                      v58 = 0;
                      func_tail_iterator_set(v57, v31, -1);
                      v37 = *(_QWORD **)v57;
                      if ( *(_QWORD *)v57 )
                      {
                        v57[2] = 0;
                        if ( *(int *)(*(_QWORD *)v57 + 128LL) <= 0 )
                        {
LABEL_95:
                          lock_func_range(v37, 0);
                        }
                        else
                        {
                          v38 = 0;
LABEL_99:
                          v37 = (_QWORD *)(v37[17] + 16LL * v38);
                          while ( 1 )
                          {
                            v39 = sub_505D70(a1 + 213, *v37);
                            v52 = 0;
                            func_parent_iterator_set(&v52, v39);
                            v40 = v52;
                            v53 = 0;
                            if ( v52 )
                            {
                              if ( *(char *)(v52 + 17) >= 0 )
                                goto LABEL_92;
                              if ( *(int *)(v52 + 32) > 0 )
                              {
                                while ( 1 )
                                {
                                  v41 = (__int64 *)sub_5CAA10(a1);
                                  v42 = v41;
                                  if ( v41 )
                                  {
                                    v43 = *v41;
                                    if ( *v31 != *v41 )
                                    {
                                      v44 = (__int64 *)((char *)v54 + 8 * v55);
                                      if ( v54 == v44 )
                                        goto LABEL_101;
                                      v45 = (__int64 *)v54;
                                      while ( v43 != *v45 )
                                      {
                                        if ( v44 == ++v45 )
                                          goto LABEL_101;
                                      }
                                      if ( v44 == v45 )
                                      {
LABEL_101:
                                        if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
                                        {
                                          v54 = (void *)qvector_reserve(&v54, v54, v55 + 1, 8);
                                          v44 = (__int64 *)((char *)v54 + 8 * v55);
                                        }
                                        *v44 = v43;
                                        *(_QWORD *)&v55 = v55 + 1;
                                        lock_func_range(v42, 1);
                                        sub_3A2F40(*a1, v42);
                                        lock_func_range(v42, 0);
                                      }
                                    }
                                  }
                                  v40 = v52;
                                  if ( v53 + 1 >= *(_DWORD *)(v52 + 32) )
                                    break;
                                  ++v53;
                                }
                              }
                              if ( v40 )
LABEL_92:
                                lock_func_range(v40, 0);
                            }
                            v37 = *(_QWORD **)v57;
                            if ( !*(_QWORD *)v57 )
                              break;
                            v38 = v57[2] + 1;
                            if ( *(_DWORD *)(*(_QWORD *)v57 + 128LL) <= v57[2] + 1 )
                              goto LABEL_95;
                            ++v57[2];
                            if ( v38 >= 0 )
                              goto LABEL_99;
                          }
                        }
                      }
                      if ( v54 )
                      {
                        *(_QWORD *)&v55 = 0;
                        qfree(v54);
                      }
                    }
                    sub_3A2340((__int64)a1, (__int64)a2);
                    lock_func_range(v31, 0);
                  }
                }
              }
              else
              {
LABEL_47:
                v28 = (char *)next_head(a2, -1);
                v29 = a2 + 1;
                if ( a2 + 1 < v28 )
                  sub_3A4190((__int64)a1, v29, v28, 0x28u);
              }
              break;
            case 50:
              v16 = v6 + 88;
              v17 = sub_3BDD60(a1, a2);
              v18 = sub_7BE710(v16, *a1, v17, 65);
              v48 = sub_3BDE50(a1, v18);
              sub_7BE850(v16, *a1, v17, 65);
              v19 = sub_7BE710(v16, *a1, v17, 80);
              if ( v19 )
              {
                v49 = v19;
                sub_7BE850(v16, *a1, v17, 80);
                if ( v49 == 1 && (~v8 & 0x600) == 0 )
                  sub_61A570(a1, a2);
              }
              else if ( (~v8 & 0x600) == 0 )
              {
                sub_611280(a2, v48);
              }
              break;
            default:
              goto LABEL_14;
          }
        }
      }
      else
      {
        v7 = *(_QWORD *)(*a1 + 1536);
        v57[0] = v5;
        sub_3A2DF0((unsigned int *)(v7 + 144), (unsigned int *)v57, 0x76u);
        switch ( v5 )
        {
          case '<':
            if ( (unsigned int)sub_68B6E0((int)a1) == 2 && (get_merge_state(a1, a2) & 2) == 0 )
              sub_3A5F70(a1, (unsigned __int64)a2, (unsigned __int64)(a2 + 1), 0x46u);
            break;
          case 'F':
            if ( (unsigned int)sub_68B6E0((int)a1) == 2 && (get_merge_state(a1, a2) & 2) == 0 )
              sub_3A5F70(a1, (unsigned __int64)a2, (unsigned __int64)(a2 + 1), 0x50u);
            break;
          case 'P':
            sub_68B6E0((int)a1);
            break;
          default:
            goto LABEL_14;
        }
      }
      goto LABEL_14;
    }
    v25 = *a1;
    *(_OWORD *)v57 = 0;
    sub_630CA0(v25, 26, v57, 16);
    v26 = *(_QWORD *)&v57[2];
    if ( (unsigned __int64)a2 < *(_QWORD *)v57 || (unsigned __int64)a2 >= *(_QWORD *)&v57[2] )
      v26 = sub_3BD580(a1, a2, *(_QWORD *)&v57[2]);
    v27 = v5;
  }
  return sub_3A4190((__int64)a1, a2, (char *)v26, v27);
}
