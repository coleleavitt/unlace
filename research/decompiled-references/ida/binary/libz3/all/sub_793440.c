void __fastcall sub_793440(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, double a5)
{
  char **exception; // rbx
  unsigned int ***v6; // rbx
  unsigned int **v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned int *v12; // r12
  unsigned int v13; // r13d
  unsigned int v14; // ecx
  size_t v15; // rsi
  unsigned int v16; // ebx
  unsigned int *v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r11
  _DWORD *v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // rax
  unsigned int *v26; // r14
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rsi
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rbp
  unsigned int **v33; // rcx
  unsigned int *v34; // rsi
  __int64 v35; // rdi
  bool v36; // zf
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  int *v41; // rax
  int v42; // esi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(); // rax
  __int64 v46; // rbp
  unsigned int **v47; // rcx
  unsigned int *v48; // rsi
  __int64 v49; // rdi
  int v50; // esi
  __int64 *v51; // r9
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 *v55; // rdi
  __int64 *v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // r10
  __int64 v59; // r10
  __int64 v60; // rbp
  unsigned int **v61; // rdx
  unsigned int *v62; // rsi
  __int64 v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rdx
  unsigned int *v66; // rsi
  _QWORD *v67; // rdi
  _DWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rbp
  unsigned int **v71; // rdx
  __int64 v72; // rbp
  __int64 v73; // rax
  __int64 v74; // rbp
  unsigned int ***v75; // [rsp+0h] [rbp-A8h]
  unsigned int *v76; // [rsp+8h] [rbp-A0h]
  unsigned int ***v77; // [rsp+10h] [rbp-98h]
  int v78; // [rsp+18h] [rbp-90h]
  __int64 v79; // [rsp+20h] [rbp-88h]
  _QWORD *v80; // [rsp+28h] [rbp-80h]
  int v81; // [rsp+30h] [rbp-78h]
  int v82; // [rsp+38h] [rbp-70h]
  __int64 v83; // [rsp+40h] [rbp-68h] BYREF
  int v84; // [rsp+48h] [rbp-60h]
  _DWORD v85[18]; // [rsp+50h] [rbp-58h] BYREF
  char v86; // [rsp+98h] [rbp-10h]

  v6 = *(unsigned int ****)(a3 + 24);
  v79 = a2;
  v80 = a4;
  if ( v6 )
  {
    v75 = &v6[*((unsigned int *)v6 - 1)];
    if ( v75 != v6 )
    {
      while ( 1 )
      {
        v8 = *v6;
        v9 = **(unsigned int **)(*v6)[8];
        v10 = a1[1046];
        if ( !v10 )
          break;
        v11 = *(_DWORD *)(v10 - 4);
        if ( (unsigned int)v9 < v11 && *(_QWORD *)(v10 + 8LL * (unsigned int)v9) )
          goto LABEL_5;
        v12 = *v8;
        if ( v11 < (int)v9 + 1 )
        {
          v76 = (unsigned int *)*v6;
          v13 = v9 + 1;
          v77 = v6;
LABEL_13:
          while ( 1 )
          {
            v18 = *(_DWORD *)(v10 - 8);
            if ( v18 >= v13 )
              break;
            v14 = (3 * v18 + 1) >> 1;
            v15 = 8 * v14 + 8;
            v16 = v14;
            if ( 8 * v18 + 8 >= (unsigned int)v15 || v18 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v83, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v83);
              sub_233E40((__int64)&v83);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v17 = (unsigned int *)sub_186B300((void *)(v10 - 8), v15);
            v10 = (__int64)(v17 + 2);
            a1[1046] = v17 + 2;
            *v17 = v16;
          }
          v19 = v13;
          v6 = v77;
          v8 = (unsigned int **)v76;
          *(_DWORD *)(v10 - 4) = v19;
          v20 = 8LL * v11;
          v21 = 8 * v19;
          if ( v20 != v21 )
            memset((void *)(v10 + v20), 0, v21 - v20);
        }
LABEL_16:
        if ( !(unsigned __int8)sub_15D2CB0(a1[18], v12) )
          goto LABEL_21;
        if ( *((_WORD *)v12 + 2) )
          goto LABEL_21;
        if ( v12[6] )
          goto LABEL_21;
        v22 = *((_QWORD *)v12 + 2);
        v23 = *(_DWORD **)(v22 + 24);
        if ( v23 )
        {
          if ( *v23 != -1 )
            goto LABEL_21;
        }
        v50 = *(_DWORD *)(v22 + 12);
        v51 = *(__int64 **)(*v80 + 24LL);
        v52 = *(unsigned int *)(*v80 + 32LL);
        v53 = 24LL * (v50 & (unsigned int)(v52 - 1));
        v54 = 24 * v52;
        v55 = &v51[(unsigned __int64)v53 / 8];
        v56 = &v51[3 * v52];
        if ( v53 == 24 * v52 )
        {
LABEL_61:
          if ( v51 != v55 )
          {
            v57 = *(__int64 **)(*v80 + 24LL);
            while ( 1 )
            {
              v59 = *v57;
              if ( (unsigned __int64)*v57 > 1 )
              {
                if ( *(_DWORD *)(v59 + 12) == v50 && v22 == v59 )
                  goto LABEL_75;
              }
              else if ( !v59 )
              {
                goto LABEL_21;
              }
              v57 += 3;
              if ( v55 == v57 )
                goto LABEL_21;
            }
          }
          goto LABEL_21;
        }
        v57 = &v51[(unsigned __int64)v53 / 8];
        while ( 1 )
        {
          while ( 1 )
          {
            v58 = *v57;
            if ( (unsigned __int64)*v57 > 1 )
              break;
            if ( !v58 )
              goto LABEL_21;
            v57 += 3;
            if ( v56 == v57 )
              goto LABEL_61;
          }
          if ( *(_DWORD *)(v58 + 12) == v50 && v22 == v58 )
            break;
          v57 += 3;
          if ( v56 == v57 )
            goto LABEL_61;
        }
LABEL_75:
        if ( v57[2] )
        {
          v64 = &v51[(unsigned __int64)v53 / 8];
          if ( v53 == v54 )
          {
LABEL_100:
            while ( v55 != v51 )
            {
              v73 = *v51;
              if ( (unsigned __int64)*v51 > 1 )
              {
                if ( *(_DWORD *)(v73 + 12) == v50 && v22 == v73 )
                {
                  v64 = v51;
                  goto LABEL_98;
                }
              }
              else if ( !v73 )
              {
                break;
              }
              v51 += 3;
            }
LABEL_83:
            v12 = nullptr;
            goto LABEL_71;
          }
          while ( 1 )
          {
            v65 = *v64;
            if ( (unsigned __int64)*v64 > 1 )
              break;
            if ( !v65 )
              goto LABEL_83;
LABEL_80:
            v64 += 3;
            if ( v56 == v64 )
              goto LABEL_100;
          }
          if ( *(_DWORD *)(v65 + 12) != v50 || v22 != v65 )
            goto LABEL_80;
LABEL_98:
          v12 = (unsigned int *)v64[2];
          if ( !v12 )
            goto LABEL_71;
LABEL_70:
          ++v12[2];
LABEL_71:
          v60 = 8 * v9;
          v61 = (unsigned int **)(v60 + a1[1046]);
          v62 = *v61;
          if ( *v61 )
          {
            v63 = a1[1045];
            v36 = v62[2]-- == 1;
            if ( v36 )
            {
              sub_15D7BC0(v63, v62);
              v61 = (unsigned int **)(v60 + a1[1046]);
            }
          }
          *v61 = v12;
LABEL_5:
          if ( v75 == ++v6 )
            return;
        }
        else
        {
LABEL_21:
          if ( !(unsigned __int8)sub_15D2CB0(a1[18], v12) )
          {
            v37 = sub_15D1F10(v12);
            v41 = *(int **)(v37 + 24);
            if ( !v41 || (v42 = *v41, *v41 == 4) || v42 == -1 )
            {
              sub_795EC0(v79, v8[8], v37);
              goto LABEL_5;
            }
            v43 = sub_7CEC70(
                    (_DWORD)a1,
                    v42,
                    0,
                    v38,
                    v39,
                    v40,
                    (_DWORD)v75,
                    (_DWORD)v76,
                    (_DWORD)v77,
                    v78,
                    v79,
                    (_DWORD)v80,
                    v81,
                    v82,
                    v83,
                    v84,
                    v85[0],
                    v85[2],
                    v85[4],
                    v85[6],
                    v85[8],
                    v85[10],
                    v85[12],
                    v85[14],
                    v85[16],
                    v86);
            if ( v43 || (v66 = v12, v67 = a1, (v43 = sub_7CF0A0(a1, v12)) != 0) )
            {
              v44 = v43 + 32;
              v45 = *(__int64 (__fastcall **)())(*(_QWORD *)(v43 + 32) + 16LL);
              if ( v45 != nullsub_379 )
                ((void (__fastcall *)(__int64, unsigned int **, _QWORD, _QWORD *))v45)(v44, v8, *v80, a1 + 1045);
              goto LABEL_5;
            }
            if ( *((_WORD *)v12 + 2) || (v68 = *(_DWORD **)(*((_QWORD *)v12 + 2) + 24LL)) != nullptr && !*v68 )
            {
              if ( !(unsigned int)sub_180B130(a1) )
                goto LABEL_5;
              if ( (unsigned __int8)sub_186A530(a5) )
                goto LABEL_96;
            }
            else
            {
              v69 = a1[1046];
              v70 = 8 * v9;
              ++v12[2];
              v71 = (unsigned int **)(v70 + v69);
              v66 = *v71;
              if ( *v71 )
              {
                v67 = (_QWORD *)a1[1045];
                v36 = v66[2]-- == 1;
                if ( v36 )
                {
                  sub_15D7BC0(v67, v66);
                  v71 = (unsigned int **)(v70 + a1[1046]);
                }
              }
              *v71 = v12;
              if ( !(unsigned int)sub_180B130(v67) )
                goto LABEL_5;
              if ( (unsigned __int8)sub_186A530(a5) )
              {
LABEL_96:
                sub_186A4C0(a5);
                v72 = sub_180B150(v67, v66);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(&v83, v12, a1[18], 0, 0, 0);
                sub_160E8B0(v72, &v83);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_18572D0(v85);
                sub_186A500(v85, "\n");
                goto LABEL_5;
              }
            }
            v74 = sub_180B150(v67, v66);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(&v83, v12, a1[18], 0, 0, 0);
            sub_160E8B0(v74, &v83);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v85);
            goto LABEL_5;
          }
          v24 = a1[18];
          v25 = *(unsigned int **)(v24 + 856);
          if ( v25 == v12 || (v26 = *(unsigned int **)(v24 + 864), v26 == v12) )
          {
            if ( v12 )
              goto LABEL_70;
            goto LABEL_71;
          }
          v27 = *((_DWORD *)v8 + 6);
          if ( v27 == -1 )
          {
LABEL_47:
            if ( v26 )
              ++v26[2];
            v46 = 8 * v9;
            v47 = (unsigned int **)(v46 + a1[1046]);
            v48 = *v47;
            if ( *v47 && (v49 = a1[1045], v36 = v48[2] == 1, --v48[2], v36) )
            {
              sub_15D7BC0(v49, v48);
              *(_QWORD *)(v46 + a1[1046]) = v26;
            }
            else
            {
              *v47 = v26;
            }
            goto LABEL_5;
          }
          if ( v27 != 1 )
          {
            v28 = a1[215];
            if ( v28 )
            {
              v29 = *v12;
              if ( (unsigned int)v29 < *(_DWORD *)(v28 - 4) )
              {
                v28 = *(_QWORD *)(v28 + 8 * v29);
                goto LABEL_29;
              }
              v30 = 0;
            }
            else
            {
LABEL_29:
              v30 = *(_DWORD *)(v28 + 28);
              if ( v30 == 0x7FFFFFFF )
                goto LABEL_5;
            }
            v31 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)(2 * v30));
            if ( v31 == -1 )
              goto LABEL_47;
            if ( v31 != 1 )
              goto LABEL_5;
          }
          if ( v25 )
            ++v25[2];
          v32 = 8 * v9;
          v33 = (unsigned int **)(v32 + a1[1046]);
          v34 = *v33;
          if ( *v33 && (v35 = a1[1045], v36 = v34[2] == 1, --v34[2], v36) )
          {
            v76 = v25;
            sub_15D7BC0(v35, v34);
            *(_QWORD *)(v32 + a1[1046]) = v76;
          }
          else
          {
            *v33 = v25;
          }
          if ( v75 == ++v6 )
            return;
        }
      }
      v12 = *v8;
      if ( (_DWORD)v9 == -1 )
        goto LABEL_16;
      v11 = 0;
      v76 = (unsigned int *)*v6;
      v10 = sub_186B270(0x18u) + 8;
      v77 = v6;
      v13 = v9 + 1;
      *(_QWORD *)(v10 - 8) = 2;
      a1[1046] = v10;
      goto LABEL_13;
    }
  }
}

