__int64 __fastcall sub_A91E00(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  _QWORD *v3; // r15
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v7; // r13
  int v8; // edx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 v11; // rbp
  char v12; // al
  int v13; // r13d
  int v14; // r15d
  int v15; // r14d
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // r8d
  _BOOL4 v26; // r13d
  int v27; // r12d
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  unsigned __int16 v41; // r13
  unsigned int v42; // ebp
  _QWORD *v43; // rax
  __int64 v44; // r13
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  _BYTE *v47; // rdx
  int v48; // eax
  unsigned int v49; // edx
  unsigned __int64 v50; // rsi
  __int64 v51; // r13
  _QWORD *v52; // rbp
  _QWORD *v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r15
  _BYTE *v59; // rsi
  __int64 v60; // rcx
  unsigned __int16 v61; // r13
  unsigned int v62; // ebp
  _QWORD *v63; // rax
  __int64 v64; // [rsp+10h] [rbp-1C8h]
  __int64 v65; // [rsp+10h] [rbp-1C8h]
  _QWORD *v66; // [rsp+38h] [rbp-1A0h]
  __int64 v67; // [rsp+38h] [rbp-1A0h]
  __int64 v69; // [rsp+58h] [rbp-180h]
  __int64 v70; // [rsp+60h] [rbp-178h]
  __int64 v71; // [rsp+68h] [rbp-170h]
  int v72; // [rsp+80h] [rbp-158h]
  __int64 v73; // [rsp+80h] [rbp-158h]
  _QWORD *v74; // [rsp+88h] [rbp-150h]
  __int64 v75; // [rsp+98h] [rbp-140h] BYREF
  void *v76; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-130h]
  _BYTE v78[16]; // [rsp+B0h] [rbp-128h] BYREF
  void *v79; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-110h]
  _BYTE v81[16]; // [rsp+D0h] [rbp-108h] BYREF
  void *v82; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-F0h]
  _BYTE v84[32]; // [rsp+F0h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+110h] [rbp-C8h] BYREF
  _BYTE v86[184]; // [rsp+120h] [rbp-B8h] BYREF

  v2 = a2;
  v3 = a1 + 178;
  ptr[0] = v86;
  ptr[1] = (void *)0x2000000000LL;
  sub_A91C10((__int64)ptr, (__int64)a1, a2);
  v75 = 0;
  v4 = sub_21FF620(a1 + 178, ptr, &v75, off_2B174E0);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a2 + 56);
  v8 = *(_DWORD *)(v7 + 20);
  v82 = v84;
  v83 = 0x400000000LL;
  v9 = v8 & 0x1FFFFFFF;
  if ( v9 > 4 )
  {
    sub_22134E0(&v82, v84, v9, 8);
    v9 = *(_DWORD *)(v7 + 20) & 0x1FFFFFFF;
  }
  v10 = (_QWORD *)(v7 + 24);
  v64 = v7 + 8 * v9 + 24;
  if ( v7 + 24 != v64 )
  {
    while ( 1 )
    {
      v11 = *v10;
      v12 = *(_BYTE *)(*v10 + 28LL) & 0x7F;
      if ( v12 == 67 )
        break;
      if ( v12 == 47 )
      {
        v36 = *(_QWORD *)&byte_8[*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        v37 = sub_A91B20((__int64)a1, v36 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v36 | *(_BYTE *)(v11 + 48)) & 7);
        v66 = sub_A5DBD0(a1, v37, 0);
        if ( *(_BYTE *)(v11 + 81) )
        {
          v76 = v78;
          v47 = v81;
          v77 = 0x200000000LL;
          v80 = 0x200000000LL;
          v48 = *(_DWORD *)(v11 + 84);
          v79 = v81;
          if ( v48 )
          {
            v73 = v11;
            v49 = 0;
            v50 = 2;
            v51 = v11 + 16LL * (unsigned int)(v48 - 1) + 104;
            v52 = (_QWORD *)(v11 + 88);
            while ( 1 )
            {
              v56 = v49;
              v57 = v49 + 1LL;
              v58 = *(_QWORD *)&byte_8[*v52 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)*(_QWORD *)&byte_8[*v52 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v52) & 7;
              if ( v57 > v50 )
              {
                sub_22134E0(&v76, v78, v57, 8);
                v56 = (unsigned int)v77;
              }
              *((_QWORD *)v76 + v56) = v58;
              LODWORD(v77) = v77 + 1;
              v53 = sub_A5DBD0(a1, *((_QWORD *)v76 + (unsigned int)v77 - 1), 0);
              v54 = (unsigned int)v80 + 1LL;
              if ( v54 > HIDWORD(v80) )
              {
                v74 = v53;
                v52 += 2;
                sub_22134E0(&v79, v81, v54, 8);
                *((_QWORD *)v79 + (unsigned int)v80) = v74;
                v55 = (unsigned int)(v80 + 1);
                LODWORD(v80) = v80 + 1;
                if ( v52 == (_QWORD *)v51 )
                {
LABEL_38:
                  v11 = v73;
                  v59 = v76;
                  v60 = (unsigned int)v77;
                  v47 = v79;
                  goto LABEL_39;
                }
              }
              else
              {
                v52 += 2;
                *((_QWORD *)v79 + (unsigned int)v80) = v53;
                v55 = (unsigned int)(v80 + 1);
                LODWORD(v80) = v80 + 1;
                if ( (_QWORD *)v51 == v52 )
                  goto LABEL_38;
              }
              v49 = v77;
              v50 = HIDWORD(v77);
            }
          }
          v55 = 0;
          v60 = 0;
          v59 = v78;
LABEL_39:
          v61 = *(_WORD *)(v11 + 70);
          v71 = v55;
          v70 = (__int64)v47;
          v69 = v60;
          v62 = *(_DWORD *)(v11 + 68) & 0xFFFFF;
          v63 = sub_6E4280(
                  (__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL),
                  *(_QWORD *)(a1[283] + 80LL),
                  (__int64)v47,
                  v60,
                  v62,
                  v39);
          if ( v63 )
            LODWORD(v63) = (_DWORD)v63 + 40;
          v44 = sub_B9AA20(
                  (_DWORD)a1,
                  (_DWORD)v63,
                  0,
                  0,
                  v62,
                  v61 >> 4,
                  0,
                  v37,
                  (__int64)v66,
                  (__int64)v59,
                  v69,
                  v70,
                  v71);
          if ( v79 != v81 )
            free(v79);
          if ( v76 != v78 )
            free(v76);
        }
        else
        {
          v40 = *(unsigned __int8 *)(v11 + 80);
          v41 = *(_WORD *)(v11 + 70);
          v72 = *(unsigned __int8 *)(v11 + 80);
          v42 = *(_DWORD *)(v11 + 68) & 0xFFFFF;
          v43 = sub_6E4280(
                  (__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL),
                  *(_QWORD *)(a1[283] + 80LL),
                  v40,
                  v38,
                  v42,
                  v39);
          if ( v43 )
            LODWORD(v43) = (_DWORD)v43 + 40;
          v44 = sub_B9A8E0((_DWORD)a1, (_DWORD)v43, 0, 0, v42, v41 >> 4, 0, v37, v72, (__int64)v66);
        }
        v45 = (unsigned int)v83;
        v46 = (unsigned int)v83 + 1LL;
        if ( v46 > HIDWORD(v83) )
        {
          sub_22134E0(&v82, v84, v46, 8);
          v45 = (unsigned int)v83;
        }
        *((_QWORD *)v82 + v45) = v44;
        v25 = v83 + 1;
        LODWORD(v83) = v83 + 1;
        goto LABEL_14;
      }
      v22 = sub_A91E00(a1, *v10);
      v23 = (unsigned int)v83;
      v24 = (unsigned int)v83 + 1LL;
      if ( v24 > HIDWORD(v83) )
        goto LABEL_29;
LABEL_13:
      *((_QWORD *)v82 + v23) = v22;
      v25 = v83 + 1;
      LODWORD(v83) = v83 + 1;
LABEL_14:
      if ( (_QWORD *)v64 == ++v10 )
      {
        v3 = a1 + 178;
        v2 = a2;
        goto LABEL_16;
      }
    }
    v13 = *(_DWORD *)(v11 + 64);
    v14 = (unsigned __int8)sub_B9A890(*v10);
    v15 = sub_B9A870(v11);
    v16 = sub_B9A850(v11);
    v21 = sub_6E4280((__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL), *(_QWORD *)(a1[283] + 80LL), v17, v18, v19, v20);
    if ( v21 )
      LODWORD(v21) = (_DWORD)v21 + 40;
    v22 = sub_B9A490((_DWORD)a1, (_DWORD)v21, 0, 0, v16, v15, 0, 0, v14, 0, v13);
    v23 = (unsigned int)v83;
    v24 = (unsigned int)v83 + 1LL;
    if ( v24 <= HIDWORD(v83) )
      goto LABEL_13;
LABEL_29:
    v67 = v22;
    sub_22134E0(&v82, v84, v24, 8);
    v23 = (unsigned int)v83;
    v22 = v67;
    goto LABEL_13;
  }
  v25 = v83;
LABEL_16:
  v65 = sub_B9E460((_DWORD)a1, 0, 0, (_DWORD)v82, v25, 0, 0);
  v26 = (*(_BYTE *)(v2 + 80) & 2) != 0;
  v27 = *(_WORD *)(v2 + 66) >> 4;
  v28 = *(_DWORD *)(v2 + 64) & 0xFFFFF;
  v33 = sub_6E4280((__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL), *(_QWORD *)(a1[283] + 80LL), v29, v30, v31, v32);
  if ( v33 )
    LODWORD(v33) = (_DWORD)v33 + 40;
  v5 = sub_B9AEA0((_DWORD)a1, (_DWORD)v33, 0, v28, v27, v26, 0, 0, v65);
  sub_21FF620(v3, ptr, &v75, off_2B174E0);
  v34 = (_QWORD *)sub_A55760(a1 + 294, 16, 3u);
  *v34 = 0;
  v35 = v75;
  v34[1] = v5;
  sub_21FF4D0(v3, v34, v35, off_2B174E0);
  if ( v82 != v84 )
    free(v82);
LABEL_3:
  if ( ptr[0] != v86 )
    free(ptr[0]);
  return v5;
}

