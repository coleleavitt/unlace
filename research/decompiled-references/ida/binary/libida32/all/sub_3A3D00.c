unsigned __int64 __fastcall sub_3A3D00(__int64 *a1, unsigned int a2, __int64 a3)
{
  int v4; // r15d
  __int64 v5; // r14
  __int64 v6; // rdi
  int v7; // r13d
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned int v10; // r15d
  unsigned int that; // eax
  __int64 v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // eax
  char v21; // al
  unsigned int v22; // edx
  unsigned int head; // eax
  __int64 v24; // rdi
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int *v29; // r14
  __int64 v30; // rcx
  __int64 *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  _DWORD *v34; // r13
  int v35; // edx
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned int *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned int *v42; // rax
  unsigned int *v43; // r13
  unsigned int v44; // r15d
  unsigned int *v45; // rdx
  unsigned int *v46; // rax
  int v47; // [rsp+0h] [rbp-188h]
  int v48; // [rsp+8h] [rbp-180h]
  unsigned int v49; // [rsp+8h] [rbp-180h]
  int v50; // [rsp+8h] [rbp-180h]
  int v51; // [rsp+10h] [rbp-178h]
  int v52; // [rsp+18h] [rbp-170h]
  __int64 v53; // [rsp+20h] [rbp-168h] BYREF
  int v54; // [rsp+28h] [rbp-160h]
  void *v55; // [rsp+30h] [rbp-158h] BYREF
  __int128 v56; // [rsp+38h] [rbp-150h]
  int v57; // [rsp+48h] [rbp-140h]
  int v58[2]; // [rsp+50h] [rbp-138h] BYREF
  int v59; // [rsp+58h] [rbp-130h]
  __int64 v60; // [rsp+5Ch] [rbp-12Ch]
  int v61; // [rsp+68h] [rbp-120h]
  __int128 v62; // [rsp+70h] [rbp-118h] BYREF
  void (__fastcall *v63)(__int128 *, __int128 *, __int64); // [rsp+80h] [rbp-108h]
  __int64 v64; // [rsp+88h] [rbp-100h] BYREF
  int v65; // [rsp+90h] [rbp-F8h]
  int v66; // [rsp+98h] [rbp-F0h]
  int v67; // [rsp+A0h] [rbp-E8h]
  int v68; // [rsp+A8h] [rbp-E0h]
  int v69; // [rsp+B0h] [rbp-D8h]
  int v70; // [rsp+B8h] [rbp-D0h]
  int v71; // [rsp+C0h] [rbp-C8h]
  int v72; // [rsp+C8h] [rbp-C0h]
  int v73; // [rsp+D0h] [rbp-B8h]
  int v74; // [rsp+D8h] [rbp-B0h]
  int v75; // [rsp+E0h] [rbp-A8h]
  int v76; // [rsp+E8h] [rbp-A0h]
  int v77; // [rsp+F0h] [rbp-98h]
  int v78; // [rsp+F8h] [rbp-90h]
  int v79; // [rsp+100h] [rbp-88h]
  int v80; // [rsp+108h] [rbp-80h]
  int v81; // [rsp+110h] [rbp-78h]
  int v82; // [rsp+118h] [rbp-70h]
  int v83; // [rsp+120h] [rbp-68h]
  int v84; // [rsp+128h] [rbp-60h]
  int v85; // [rsp+130h] [rbp-58h]
  int v86; // [rsp+138h] [rbp-50h]
  __int64 v87; // [rsp+140h] [rbp-48h]
  _QWORD v88[8]; // [rsp+148h] [rbp-40h] BYREF

  v88[0] = __readfsqword(0x28u);
  if ( (_DWORD)a3 == 90 )
  {
    if ( (unsigned int)sub_669530() >= a2 )
    {
      v14 = *(_QWORD *)(*a1 + 1344);
      v58[0] = 90;
      sub_39DF60((_DWORD *)(v14 + 112), v58, 0x76u);
      sub_66A580(a1, 1);
LABEL_14:
      v12 = *(_QWORD *)(*a1 + 1344);
      v58[0] = 0;
      sub_39DF60((_DWORD *)(v12 + 112), v58, 0x76u);
      return v88[0] - __readfsqword(0x28u);
    }
    v26 = 90;
    v25 = -1;
  }
  else
  {
    v4 = a3;
    v5 = *(_QWORD *)(*a1 + 1344);
    if ( (unsigned __int8)sub_3B8910(a1, a2, a3) )
    {
      if ( (unsigned int)(v4 - 60) > 0x1E )
      {
        v7 = sub_3B9AA0(a1, a2, 4);
        v8 = *(_QWORD *)(*a1 + 1344);
        v58[0] = v4;
        sub_39DF60((_DWORD *)(v8 + 112), v58, 0x76u);
        if ( v4 > 90 )
        {
          if ( v4 == 200 )
          {
            v9 = v7 & 0x600;
            if ( *(_QWORD *)(v5 + 1744) )
            {
              v10 = *(_DWORD *)(*(_QWORD *)(v5 + 1728) + 32LL);
              if ( v10 < a2 )
              {
                sub_3A0A30(v5 + 1704, v10);
                v36 = (unsigned int *)sub_5AFCE0(a1);
                if ( v36 )
                  sub_39E290(*a1, v36);
              }
            }
            if ( !v9 )
              sub_582430((int)a1);
            that = next_that(a2, 0xFFFFFFFFLL, 0, 0);
            sub_39F720((__int64)a1, a2, that, 0xC8u);
          }
        }
        else if ( v4 > 9 )
        {
          switch ( v4 )
          {
            case 10:
              if ( (~(_WORD)v7 & 0x600) == 0 )
              {
                v33 = sub_5AFCE0(a1);
                v34 = (_DWORD *)v33;
                if ( v33
                  && ((*(_BYTE *)(v33 + 8) & 4) != 0
                   || (v37 = sub_67C990(a1, a2), (unsigned int)v37 < HIDWORD(v37)) && *v34 == (_DWORD)v37) )
                {
                  v35 = 5;
                }
                else
                {
                  v35 = 1;
                }
                v63 = nullptr;
                v64 = 0;
                v62 = 0;
                sub_3CC010((_DWORD)a1, a2, v35);
                if ( v63 )
                  v63(&v62, &v62, 3);
              }
              break;
            case 20:
              if ( (~(_WORD)v7 & 0x600) != 0 )
              {
                sub_55E700(
                  (int)a1,
                  a2,
                  v47,
                  v48,
                  v51,
                  v52,
                  v53,
                  v54,
                  (int)v55,
                  v56,
                  SDWORD2(v56),
                  v57,
                  v58[0],
                  v59,
                  SHIDWORD(v60),
                  v61,
                  v62,
                  SDWORD2(v62),
                  (int)v63,
                  v64,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74,
                  v75,
                  v76,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83,
                  v84,
                  v85,
                  v86,
                  v87);
              }
              else if ( !(unsigned __int8)sub_39D450((_DWORD)a1, a2) )
              {
                goto LABEL_49;
              }
              break;
            case 25:
              if ( (~(_WORD)v7 & 0x600) != 0 )
                sub_3A3200((int *)a1, a2);
              break;
            case 30:
              if ( (~(_WORD)v7 & 0x600) == 0 && (sub_4DC440(a1, a2) & 8) == 0 )
                sub_3A1C80(a1, a2);
              break;
            case 35:
              v19 = v5 + 88;
              v20 = sub_79B3A0(v19, *a1, a2, 321);
              sub_3B9110(a1, v20);
              sub_79B4D0(v19, *a1, a2, 321);
              v21 = sub_5B47C0((int)a1, a2);
              v22 = a2 + 1;
              if ( v21 )
                v22 = *(_DWORD *)(sub_4EE820(a1 + 203, a2) + 4);
              sub_39F720((__int64)a1, a2, v22, 0x23u);
              break;
            case 38:
              if ( (~(_WORD)v7 & 0x600) != 0 )
              {
                head = next_head(a2, 0xFFFFFFFFLL);
                if ( a2 < head )
                  sub_39F720((__int64)a1, a2, head, 0x26u);
              }
              else if ( (unsigned __int8)xrefblk_t_first_from(v58, a2, 5) )
              {
                do
                  sub_3A26B0(a1, v58[0], v58[1], (unsigned __int8)(BYTE1(v59) - 16) <= 1u);
                while ( (unsigned __int8)xrefblk_t_next_from(v58) );
              }
              break;
            case 40:
            case 45:
              if ( (unsigned __int8)sub_39D450((_DWORD)a1, a2) )
              {
                if ( (~(_WORD)v7 & 0x600) == 0 && v4 == 40 )
                {
                  v28 = sub_5AFCE0(a1);
                  v29 = (unsigned int *)v28;
                  if ( v28 )
                  {
                    lock_func_range(v28, 1);
                    *(_QWORD *)&v62 = -1;
                    v63 = nullptr;
                    *((_QWORD *)&v62 + 1) = 0xFFFFFFFFLL;
                    v31 = &v64;
                    do
                    {
                      *(_WORD *)v31 = 0;
                      v31 += 3;
                      *((_WORD *)v31 - 11) = 0;
                      *((_WORD *)v31 - 10) = 0;
                      *((_DWORD *)v31 - 1) = 0;
                      *((_WORD *)v31 - 9) = 0;
                      *(v31 - 2) = 0;
                      *((_DWORD *)v31 - 2) = 0;
                    }
                    while ( v31 != v88 );
                    if ( (int)decode_insn(&v62, a2, v88, v30, 0, 0) > 0
                      && (unsigned __int8)is_call_insn(&v62)
                      && !(unsigned __int8)xrefblk_t_first_from(v58, a2, 1) )
                    {
                      sub_3A1B40(*(_QWORD **)(*a1 + 1344), a2, 0xFFFFFFFF, 0);
                    }
                    v32 = sub_5AE850(a1, v29);
                    if ( v32 != -1 && a2 == (unsigned int)sub_3BCA60(a1, v32, a2, sub_39AFB0, 0) )
                    {
                      sub_39E290(*a1, v29);
                      v55 = nullptr;
                      *(_QWORD *)v58 = 0;
                      v60 = 0;
                      v56 = 0;
                      func_tail_iterator_set(v58, v29, 0xFFFFFFFFLL);
                      v38 = *(unsigned int **)v58;
                      if ( *(_QWORD *)v58 )
                      {
                        v59 = 0;
                        if ( *(int *)(*(_QWORD *)v58 + 104LL) <= 0 )
                        {
LABEL_99:
                          lock_func_range(v38, 0);
                        }
                        else
                        {
                          v39 = 0;
LABEL_103:
                          v38 = (unsigned int *)(*((_QWORD *)v38 + 14) + 8LL * v39);
                          while ( 1 )
                          {
                            v40 = sub_4EE820(a1 + 203, *v38);
                            v53 = 0;
                            func_parent_iterator_set(&v53, v40);
                            v41 = v53;
                            v54 = 0;
                            if ( v53 )
                            {
                              if ( *(char *)(v53 + 9) >= 0 )
                                goto LABEL_96;
                              if ( *(int *)(v53 + 20) > 0 )
                              {
                                while ( 1 )
                                {
                                  v42 = (unsigned int *)sub_5AFCE0(a1);
                                  v43 = v42;
                                  if ( v42 )
                                  {
                                    v44 = *v42;
                                    if ( *v29 != *v42 )
                                    {
                                      v45 = (unsigned int *)((char *)v55 + 4 * v56);
                                      if ( v55 == v45 )
                                        goto LABEL_105;
                                      v46 = (unsigned int *)v55;
                                      while ( v44 != *v46 )
                                      {
                                        if ( v45 == ++v46 )
                                          goto LABEL_105;
                                      }
                                      if ( v46 == v45 )
                                      {
LABEL_105:
                                        if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
                                        {
                                          v55 = (void *)qvector_reserve(&v55, v55, v56 + 1, 4);
                                          v45 = (unsigned int *)((char *)v55 + 4 * v56);
                                        }
                                        *v45 = v44;
                                        *(_QWORD *)&v56 = v56 + 1;
                                        lock_func_range(v43, 1);
                                        sub_39E290(*a1, v43);
                                        lock_func_range(v43, 0);
                                      }
                                    }
                                  }
                                  v41 = v53;
                                  if ( v54 + 1 >= *(_DWORD *)(v53 + 20) )
                                    break;
                                  ++v54;
                                }
                              }
                              if ( v41 )
LABEL_96:
                                lock_func_range(v41, 0);
                            }
                            v38 = *(unsigned int **)v58;
                            if ( !*(_QWORD *)v58 )
                              break;
                            v39 = v59 + 1;
                            if ( *(_DWORD *)(*(_QWORD *)v58 + 104LL) <= v59 + 1 )
                              goto LABEL_99;
                            ++v59;
                            if ( v39 >= 0 )
                              goto LABEL_103;
                          }
                        }
                      }
                      if ( v55 )
                      {
                        *(_QWORD *)&v56 = 0;
                        qfree(v55);
                      }
                    }
                    sub_39D4C0((__int64)a1, a2);
                    lock_func_range(v29, 0);
                  }
                }
              }
              else
              {
LABEL_49:
                v27 = next_head(a2, 0xFFFFFFFFLL);
                if ( a2 + 1 < v27 )
                  sub_39F720((__int64)a1, a2 + 1, v27, 0x28u);
              }
              break;
            case 50:
              v15 = v5 + 76;
              v16 = (unsigned int)sub_3B90A0(a1, a2);
              v17 = sub_79B3A0(v15, *a1, v16, 65);
              v49 = sub_3B9110(a1, v17);
              sub_79B4D0(v15, *a1, (unsigned int)v16, 65);
              v18 = sub_79B3A0(v15, *a1, (unsigned int)v16, 80);
              if ( v18 )
              {
                v50 = v18;
                sub_79B4D0(v15, *a1, (unsigned int)v16, 80);
                if ( v50 == 1 && (~v7 & 0x600) == 0 )
                  sub_5FE440(a1, a2);
              }
              else if ( (~v7 & 0x600) == 0 )
              {
                sub_5F5200(a2, v49);
              }
              break;
            default:
              goto LABEL_14;
          }
        }
      }
      else
      {
        v6 = *(_QWORD *)(*a1 + 1344);
        v58[0] = v4;
        sub_39DF60((_DWORD *)(v6 + 112), v58, 0x76u);
        switch ( v4 )
        {
          case '<':
            if ( (unsigned int)sub_66C020((int)a1) == 2 && (get_merge_state(a1, a2) & 2) == 0 && a2 != -1 )
              sub_3A1890(a1, a2, a2 + 1, 0x46u);
            break;
          case 'F':
            if ( (unsigned int)sub_66C020((int)a1) == 2 && (get_merge_state(a1, a2) & 2) == 0 && a2 != -1 )
              sub_3A1890(a1, a2, a2 + 1, 0x50u);
            break;
          case 'P':
            sub_66C020((int)a1);
            break;
          default:
            goto LABEL_14;
        }
      }
      goto LABEL_14;
    }
    v24 = *a1;
    *(_QWORD *)v58 = 0;
    sub_6141A0(v24, 26, v58, 8);
    v25 = v58[1];
    if ( a2 < v58[0] || a2 >= v58[1] )
      v25 = sub_3B8950(a1, a2, (unsigned int)v58[1]);
    v26 = v4;
  }
  return sub_39F720((__int64)a1, a2, v25, v26);
}

