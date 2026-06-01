__int64 __fastcall sub_D2CB20(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  unsigned int v36; // r14d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned int v48; // r14d
  unsigned __int64 v49; // r15
  __int64 *v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r14
  int v59; // ebp
  __int64 v60; // rax
  unsigned int v61; // ebp
  int v62; // r15d
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // rbp
  __int64 v67; // rax
  unsigned int v68; // r14d
  unsigned __int64 v69; // r15
  __int64 *v70; // rbp
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rax
  unsigned int v74; // r14d
  unsigned __int64 v75; // r15
  __int64 *v76; // rbp
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rax
  int v80; // ecx
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rcx
  int v84; // esi
  __int64 v85; // rdi
  unsigned __int8 v86; // al
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  int v92; // eax
  int v93; // [rsp+0h] [rbp-68h]
  int v94; // [rsp+8h] [rbp-60h]
  __int64 v95; // [rsp+8h] [rbp-60h]
  __int64 v96; // [rsp+8h] [rbp-60h]
  __int64 v97; // [rsp+8h] [rbp-60h]
  int v98; // [rsp+10h] [rbp-58h]
  __int64 v99; // [rsp+18h] [rbp-50h] BYREF
  __int64 v100; // [rsp+20h] [rbp-48h] BYREF
  __int64 v101; // [rsp+28h] [rbp-40h]
  int v102; // [rsp+30h] [rbp-38h]
  int v103; // [rsp+38h] [rbp-30h]
  int v104; // [rsp+40h] [rbp-28h]
  void *v105; // [rsp+48h] [rbp-20h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v6 )
  {
    case 2:
      v35 = *(_QWORD *)(a1 + 8);
      v36 = *(_DWORD *)(a2 + 24);
      v100 = 0;
      v101 = v35;
      v37 = *(_QWORD *)(a1 + 160);
      if ( v37 )
        *(_DWORD *)(v37 - 4) -= v36;
      v38 = *(_QWORD *)(a1 + 528);
      if ( v38 )
        *(_DWORD *)(v38 - 4) -= v36;
      *(_DWORD *)(a1 + 128) -= v36;
      sub_15844D0(a1);
      v39 = 0x7FFFFFFF8LL;
      v40 = *(_QWORD *)(a1 + 56);
      if ( v40 )
        v39 = 8LL * (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
      v41 = *(_QWORD *)(v40 + v39);
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      v42 = *(_QWORD *)(a1 + 480);
      if ( v42 )
      {
        v43 = *(_QWORD *)(a1 + 488);
        v21 = (*(_DWORD *)(v42 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v43, v42);
      }
      v21 = *(_WORD *)(v41 + 4) == 0;
      *(_QWORD *)(a1 + 480) = v41;
      if ( !v21 || (*(_BYTE *)(v41 + 30) & 1) == 0 )
      {
        sub_1585DF0(a1 + 328, v41, v36, &v100);
        v45 = v100;
        v100 = *(_QWORD *)(a1 + 480);
        v44 = v100;
        *(_QWORD *)(a1 + 480) = v45;
        if ( v44 )
        {
          v46 = v101;
          v21 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v46, v44);
        }
        v100 = 0;
      }
      v47 = *(_QWORD *)(a1 + 56);
      if ( v47 )
      {
        v48 = *(_DWORD *)(a3 + 12);
        v49 = v47 + 8LL * *(unsigned int *)(v47 - 4);
        v50 = (__int64 *)(v47 + 8LL * v48);
        if ( (unsigned __int64)v50 >= v49 )
          goto LABEL_69;
        do
        {
          while ( 1 )
          {
            v51 = *v50;
            if ( *v50 )
            {
              v52 = *(_QWORD *)(a1 + 48);
              v21 = (*(_DWORD *)(v51 + 8))-- == 1;
              if ( v21 )
                break;
            }
            if ( (unsigned __int64)++v50 >= v49 )
              goto LABEL_68;
          }
          sub_15D7BC0(v52, v51);
          ++v50;
        }
        while ( (unsigned __int64)v50 < v49 );
LABEL_68:
        v47 = *(_QWORD *)(a1 + 56);
        if ( v47 )
LABEL_69:
          *(_DWORD *)(v47 - 4) = v48;
      }
      v53 = *(_QWORD *)(a1 + 480);
      v99 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      sub_D270D0((_QWORD *)(a1 + 56), &v99);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v54 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v54 - 1;
      if ( v54 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v54 - 2) + 8) |= 2u;
      v55 = v100;
      if ( v100 )
      {
        v56 = v101;
        v21 = (*(_DWORD *)(v100 + 8))-- == 1;
        if ( v21 )
          return sub_15D7BC0(v56, v55);
      }
      break;
    case 3:
      sub_1872CE0("");
      sub_1873130(107, 520);
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v11 = *(_DWORD *)(a3 + 8) >> 6;
        if ( v11 >= v7 )
        {
          v57 = *(_QWORD *)(a1 + 56);
          v58 = *(_QWORD *)(a2 + 16);
          if ( v57 )
            v59 = *(_DWORD *)(v57 - 4);
          else
            v59 = 0;
          v60 = *(unsigned int *)(a3 + 12);
          v61 = v59 - v60;
          v62 = v57 + 8 * v60;
          if ( (unsigned int)sub_D24CB0(
                               *(_QWORD **)(a1 + 144),
                               *(_QWORD *)(a2 + 16),
                               v61,
                               v57 + 8 * v60,
                               (__int64 *)(a1 + 480),
                               (_QWORD *)(a1 + 512)) == 5 )
          {
            if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
            {
              ++*(_DWORD *)(a2 + 8);
              sub_D240D0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
              v67 = *(_QWORD *)(a1 + 56);
              *(_QWORD *)(a1 + 480) = a2;
              if ( v67 )
                goto LABEL_88;
              v100 = a2;
              v66 = a2;
              goto LABEL_117;
            }
            v65 = sub_15DC610(
                    *(_QWORD *)(a1 + 8),
                    v58,
                    v61,
                    v62,
                    v63,
                    v64,
                    v93,
                    v94,
                    v98,
                    v99,
                    v100,
                    v101,
                    v102,
                    v103,
                    v104,
                    v105);
            v66 = v65;
            if ( v65 )
              ++*(_DWORD *)(v65 + 8);
            sub_D240D0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
            v67 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 480) = v66;
            if ( v67 )
            {
LABEL_88:
              v68 = *(_DWORD *)(a3 + 12);
              v69 = v67 + 8LL * *(unsigned int *)(v67 - 4);
              v70 = (__int64 *)(v67 + 8LL * v68);
              if ( (unsigned __int64)v70 >= v69 )
                goto LABEL_114;
              do
              {
                v71 = *v70;
                if ( *v70 )
                {
                  v72 = *(_QWORD *)(a1 + 48);
                  v21 = (*(_DWORD *)(v71 + 8))-- == 1;
                  if ( v21 )
                    sub_15D7BC0(v72, v71);
                }
                ++v70;
              }
              while ( (unsigned __int64)v70 < v69 );
              v67 = *(_QWORD *)(a1 + 56);
              if ( v67 )
LABEL_114:
                *(_DWORD *)(v67 - 4) = v68;
              v66 = *(_QWORD *)(a1 + 480);
            }
            v100 = v66;
            if ( v66 )
LABEL_117:
              ++*(_DWORD *)(v66 + 8);
            sub_D270D0((_QWORD *)(a1 + 56), &v100);
            v83 = *(_QWORD *)(a1 + 480);
            if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            {
              sub_1584390(a1, a2, 0, v83);
              v83 = *(_QWORD *)(a1 + 480);
            }
            result = *(_QWORD *)(a1 + 40);
            v84 = *(_DWORD *)(result - 4);
            *(_DWORD *)(result - 4) = v84 - 1;
            if ( a2 != v83 && v84 != 1 )
            {
              *(_BYTE *)(result + 16LL * (unsigned int)(v84 - 2) + 8) |= 2u;
              v83 = *(_QWORD *)(a1 + 480);
            }
            if ( v83 )
            {
              v85 = *(_QWORD *)(a1 + 488);
              v21 = (*(_DWORD *)(v83 + 8))-- == 1;
              if ( v21 )
                result = sub_15D7BC0(v85, v83);
            }
          }
          else
          {
            v73 = *(_QWORD *)(a1 + 56);
            if ( v73 )
            {
              v74 = *(_DWORD *)(a3 + 12);
              v75 = v73 + 8LL * *(unsigned int *)(v73 - 4);
              v76 = (__int64 *)(v73 + 8LL * v74);
              if ( (unsigned __int64)v76 >= v75 )
                goto LABEL_102;
              do
              {
                v77 = *v76;
                if ( *v76 )
                {
                  v78 = *(_QWORD *)(a1 + 48);
                  v21 = (*(_DWORD *)(v77 + 8))-- == 1;
                  if ( v21 )
                    sub_15D7BC0(v78, v77);
                }
                ++v76;
              }
              while ( (unsigned __int64)v76 < v75 );
              v73 = *(_QWORD *)(a1 + 56);
              if ( v73 )
LABEL_102:
                *(_DWORD *)(v73 - 4) = v74;
            }
            v79 = *(_QWORD *)(a1 + 480);
            v100 = v79;
            if ( v79 )
              ++*(_DWORD *)(v79 + 8);
            sub_D270D0((_QWORD *)(a1 + 56), &v100);
            if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
              sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
            result = *(_QWORD *)(a1 + 40);
            v80 = *(_DWORD *)(result - 4);
            *(_DWORD *)(result - 4) = v80 - 1;
            if ( v80 != 1 )
              *(_BYTE *)(result + 16LL * (unsigned int)(v80 - 2) + 8) |= 2u;
            v81 = *(_QWORD *)(a1 + 480);
            if ( v81 )
            {
              v82 = *(_QWORD *)(a1 + 488);
              v21 = (*(_DWORD *)(v81 + 8))-- == 1;
              if ( v21 )
                result = sub_15D7BC0(v82, v81);
            }
          }
          *(_QWORD *)(a1 + 480) = 0;
          return result;
        }
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) == 0x40 && !*(_WORD *)(a2 + 4) )
        {
          v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
          if ( v12 )
          {
            if ( !*v12 && v12[1] == 4 )
            {
              v13 = *(_QWORD *)(a1 + 56);
              v14 = *(unsigned int *)(a3 + 12);
              v15 = (__int64 *)(v13 + 8 * v14);
              v16 = *(_QWORD *)(a1 + 8);
              if ( *v15 == *(_QWORD *)(v16 + 856) )
              {
                v17 = *(_QWORD *)(a2 + 40);
              }
              else
              {
                if ( *v15 != *(_QWORD *)(v16 + 864) )
                  goto LABEL_5;
                v17 = *(_QWORD *)(a2 + 48);
              }
              if ( v17 )
              {
                if ( v13 )
                {
                  v18 = v13 + 8LL * *(unsigned int *)(v13 - 4);
                  if ( (unsigned __int64)v15 >= v18 )
                    goto LABEL_131;
                  do
                  {
                    v19 = *v15;
                    if ( *v15 )
                    {
                      v20 = *(_QWORD *)(a1 + 48);
                      v21 = (*(_DWORD *)(v19 + 8))-- == 1;
                      if ( v21 )
                      {
                        v95 = v17;
                        sub_15D7BC0(v20, v19);
                        v17 = v95;
                      }
                    }
                    ++v15;
                  }
                  while ( (unsigned __int64)v15 < v18 );
                  v13 = *(_QWORD *)(a1 + 56);
                  if ( v13 )
LABEL_131:
                    *(_DWORD *)(v13 - 4) = v14;
                }
                v100 = v17;
                ++*(_DWORD *)(v17 + 8);
                v96 = v17;
                sub_D270D0((_QWORD *)(a1 + 56), &v100);
                v86 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
                *(_BYTE *)(a3 + 8) = v86;
                if ( (unsigned __int8)sub_D27520(a1, v96, (v86 >> 4) & 3) )
                {
                  v87 = *(_QWORD *)(a1 + 56);
                  if ( v87 )
                    v88 = *(_DWORD *)(v87 - 4);
                  else
                    v88 = 0;
                  v89 = *(_QWORD *)(v87 + 8LL * (unsigned int)(v88 - 1));
                  if ( v89 )
                    ++*(_DWORD *)(v89 + 8);
                  v97 = v89;
                  sub_D240D0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
                  *(_QWORD *)(a1 + 480) = v97;
                  sub_39BF70((__int64 *)(a1 + 48));
                  sub_39BF70((__int64 *)(a1 + 48));
                  v90 = *(_QWORD *)(a1 + 480);
                  v100 = v90;
                  if ( v90 )
                    ++*(_DWORD *)(v90 + 8);
                  sub_D270D0((_QWORD *)(a1 + 56), &v100);
                  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
                    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
                  v91 = *(_QWORD *)(a1 + 40);
                  v92 = *(_DWORD *)(v91 - 4);
                  *(_DWORD *)(v91 - 4) = v92 - 1;
                  if ( v92 != 1 )
                    *(_BYTE *)(v91 + 16LL * (unsigned int)(v92 - 2) + 8) |= 2u;
                }
                result = sub_D240D0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
                *(_QWORD *)(a1 + 480) = 0;
                return result;
              }
            }
          }
        }
LABEL_5:
        v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
        v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
        *(_DWORD *)(a3 + 8) = v9;
        result = sub_D27520(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
    default:
      v22 = 0x7FFFFFFF8LL;
      v23 = *(_QWORD *)(a1 + 56);
      if ( v23 )
        v22 = 8LL * (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
      v24 = *(_QWORD *)(v23 + v22);
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      v25 = *(_QWORD *)(a1 + 480);
      if ( v25 )
      {
        v26 = *(_QWORD *)(a1 + 488);
        v21 = (*(_DWORD *)(v25 + 8))-- == 1;
        if ( v21 )
        {
          sub_15D7BC0(v26, v25);
          v23 = *(_QWORD *)(a1 + 56);
        }
      }
      v27 = *(_DWORD *)(v23 - 4);
      v28 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 480) = v24;
      v29 = v27 - 1;
      v30 = *(_QWORD *)(v23 + 8LL * (unsigned int)(v27 - 1));
      *(_DWORD *)(v23 - 4) = v27 - 1;
      if ( v30 )
      {
        v21 = (*(_DWORD *)(v30 + 8))-- == 1;
        if ( v21 )
        {
          sub_15D7BC0(v28, v30);
          v23 = *(_QWORD *)(a1 + 56);
          v28 = *(_QWORD *)(a1 + 48);
        }
        v29 = *(_DWORD *)(v23 - 4);
      }
      v31 = (unsigned int)(v29 - 1);
      v32 = *(_QWORD *)(v23 + 8 * v31);
      *(_DWORD *)(v23 - 4) = v31;
      if ( v32 )
      {
        v21 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v28, v32);
      }
      v33 = *(_QWORD *)(a1 + 480);
      v100 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      sub_D270D0((_QWORD *)(a1 + 56), &v100);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v34 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v34 - 1;
      if ( v34 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
      break;
  }
  return result;
}

