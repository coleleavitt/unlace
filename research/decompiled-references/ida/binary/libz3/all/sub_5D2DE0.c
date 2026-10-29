__int64 __fastcall sub_5D2DE0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r13
  int v23; // r8d
  int v24; // r9d
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  __int64 *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // r13
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // r14
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rax
  int v65; // ecx
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r13d
  unsigned __int64 v71; // r14
  __int64 *v72; // rbx
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdi
  int v85; // ecx
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // r13
  __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r13
  _DWORD *v98; // rax
  int v99; // [rsp+0h] [rbp-98h]
  int v100[2]; // [rsp+0h] [rbp-98h]
  int v101[2]; // [rsp+0h] [rbp-98h]
  __int64 v102; // [rsp+0h] [rbp-98h]
  __int64 *v103; // [rsp+8h] [rbp-90h]
  unsigned int v104; // [rsp+8h] [rbp-90h]
  __int64 v105; // [rsp+8h] [rbp-90h]
  int v106[2]; // [rsp+10h] [rbp-88h]
  int v107; // [rsp+18h] [rbp-80h]
  __int64 *v108; // [rsp+18h] [rbp-80h]
  int v109; // [rsp+20h] [rbp-78h]
  _QWORD *v110; // [rsp+20h] [rbp-78h]
  char v111; // [rsp+28h] [rbp-70h]
  __int64 v112; // [rsp+28h] [rbp-70h]
  __int64 v113; // [rsp+30h] [rbp-68h] BYREF
  __int64 v114; // [rsp+38h] [rbp-60h] BYREF
  __int64 v115; // [rsp+40h] [rbp-58h] BYREF
  void *v116; // [rsp+48h] [rbp-50h] BYREF
  __int64 v117; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v118[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v33 = 515;
LABEL_24:
      sub_1872CE0("");
      sub_1873130(107, v33);
    case 3:
      v33 = 520;
      goto LABEL_24;
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v11 = *(_DWORD *)(a3 + 8);
        v12 = v11 >> 6;
        if ( v11 >> 6 >= v7 )
          break;
        v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
        v9 = ((v12 + 1) << 6) | v11 & 0x3F;
        *(_DWORD *)(a3 + 8) = v9;
        result = sub_5D4270(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v13 = *(_QWORD *)(a1 + 56);
      v14 = *(_QWORD *)(a2 + 16);
      if ( v13 )
        v15 = *(_DWORD *)(v13 - 4);
      else
        v15 = 0;
      v16 = *(unsigned int *)(a3 + 12);
      v99 = v15 - v16;
      v103 = (__int64 *)(v13 + 8LL * (unsigned int)v16);
      *(_QWORD *)v106 = *(_QWORD *)(a1 + 8);
      sub_1584610(a1, v16);
      v19 = *(_QWORD *)(a1 + 88);
      if ( v19 )
        v20 = *(_DWORD *)(v19 - 4);
      else
        v20 = 0;
      if ( v20 == *(_DWORD *)(a3 + 12) )
      {
        ++*(_DWORD *)(a2 + 8);
        sub_5C8320(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
        v21 = a2;
        v22 = 0;
      }
      else
      {
        v75 = sub_15DC610(
                *(_QWORD *)(a1 + 8),
                v14,
                v99,
                (int)v103,
                v17,
                v18,
                v99,
                (int)v103,
                v106[0],
                v107,
                v109,
                v111,
                v113,
                v114,
                v115,
                v116);
        v21 = v75;
        if ( v75 )
          ++*(_DWORD *)(v75 + 8);
        v76 = sub_15E2980(*(_QWORD *)(a1 + 8));
        v22 = v76;
        if ( v76 )
          ++*(_DWORD *)(v76 + 8);
        sub_5C8320(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      }
      *(_QWORD *)(a1 + 496) = v22;
      v25 = sub_5CA340(*(_QWORD **)(a1 + 144), v14, v99, v103, (__int64 *)(a1 + 480));
      if ( v25 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v77 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v14,
                  v99,
                  (int)v103,
                  v23,
                  v24,
                  v99,
                  (int)v103,
                  v106[0],
                  v107,
                  v109,
                  v111,
                  v113,
                  v114,
                  v115,
                  v116);
          v78 = v77;
          if ( v77 )
            ++*(_DWORD *)(v77 + 8);
          sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          *(_QWORD *)(a1 + 480) = v78;
          v79 = sub_15DE370(*(_QWORD *)(a1 + 8));
          v80 = v79;
          if ( v79 )
            ++*(_DWORD *)(v79 + 8);
          sub_5C8320(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
          *(_QWORD *)(a1 + 496) = v80;
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          *(_QWORD *)(a1 + 480) = a2;
        }
        sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
        v68 = *(_QWORD *)(a1 + 480);
        v117 = v68;
        if ( v68 )
          ++*(_DWORD *)(v68 + 8);
        sub_5C94A0((_QWORD *)(a1 + 56), &v117);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
        v69 = *(_QWORD *)(a1 + 88);
        if ( v69 )
        {
          v70 = *(_DWORD *)(a3 + 12);
          v71 = v69 + 8LL * *(unsigned int *)(v69 - 4);
          v72 = (__int64 *)(v69 + 8LL * v70);
          if ( (unsigned __int64)v72 >= v71 )
            goto LABEL_109;
          do
          {
            v73 = *v72;
            if ( *v72 )
            {
              v74 = *(_QWORD *)(a1 + 80);
              v32 = (*(_DWORD *)(v73 + 8))-- == 1;
              if ( v32 )
                sub_15D7BC0(v74, v73);
            }
            ++v72;
          }
          while ( (unsigned __int64)v72 < v71 );
          v69 = *(_QWORD *)(a1 + 88);
          if ( v69 )
LABEL_109:
            *(_DWORD *)(v69 - 4) = v70;
        }
        v82 = *(_QWORD *)(a1 + 496);
        v118[0] = v82;
        if ( v82 )
          ++*(_DWORD *)(v82 + 8);
        sub_5C93E0((_QWORD *)(a1 + 88), v118);
        sub_5C8320(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
        v83 = *(_QWORD *)(a1 + 40);
        v84 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 496) = 0;
        v85 = *(_DWORD *)(v83 - 4);
        *(_DWORD *)(v83 - 4) = v85 - 1;
        if ( a2 != v84 && v85 != 1 )
        {
          *(_BYTE *)(v83 + 16LL * (unsigned int)(v85 - 2) + 8) |= 2u;
          v84 = *(_QWORD *)(a1 + 480);
        }
        result = sub_5C8340(v84, *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = 0;
        goto LABEL_72;
      }
      v108 = (__int64 *)(a1 + 48);
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v26 = *(_QWORD *)(a1 + 480);
      v113 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v110 = (_QWORD *)(a1 + 56);
      sub_5C94A0((_QWORD *)(a1 + 56), &v113);
      v27 = *(_QWORD *)(a1 + 88);
      if ( v27 )
      {
        v28 = v27 + 8LL * *(unsigned int *)(v27 - 4);
        v104 = *(_DWORD *)(a3 + 12);
        v29 = (__int64 *)(v27 + 8LL * v104);
        if ( (unsigned __int64)v29 >= v28 )
          goto LABEL_62;
        do
        {
          v30 = *v29;
          if ( *v29 )
          {
            v31 = *(_QWORD *)(a1 + 80);
            v32 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v32 )
            {
              *(_QWORD *)v100 = v29;
              sub_15D7BC0(v31, v30);
              v29 = *(__int64 **)v100;
            }
          }
          ++v29;
        }
        while ( (unsigned __int64)v29 < v28 );
        v27 = *(_QWORD *)(a1 + 88);
        if ( v27 )
LABEL_62:
          *(_DWORD *)(v27 - 4) = v104;
      }
      v58 = *(_QWORD *)(a1 + 512);
      if ( !v58 )
      {
        v81 = sub_15DE370(*(_QWORD *)(a1 + 8));
        v58 = v81;
        if ( v81 )
          ++*(_DWORD *)(v81 + 8);
        sub_5C8320(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
        *(_QWORD *)(a1 + 512) = v58;
      }
      v59 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v58);
      v60 = *(_QWORD *)(a1 + 504);
      v61 = *(_QWORD *)(a1 + 496);
      v62 = v59;
      if ( v59 )
      {
        ++*(_DWORD *)(v59 + 8);
        sub_5C8320(v61, v60);
        *(_QWORD *)(a1 + 496) = v62;
        ++*(_DWORD *)(v62 + 8);
        v114 = v62;
      }
      else
      {
        sub_5C8320(v61, v60);
        *(_QWORD *)(a1 + 496) = 0;
        v114 = 0;
      }
      sub_5C93E0((_QWORD *)(a1 + 88), &v114);
      sub_5C8320(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
      *(_QWORD *)(a1 + 512) = 0;
      v63 = *(_QWORD *)(a1 + 480);
      if ( v25 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
          goto LABEL_69;
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        if ( !(unsigned __int8)sub_5D4270(a1, v63, (unsigned int)(v25 + 1)) )
        {
LABEL_71:
          sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          v66 = *(_QWORD *)(a1 + 504);
          v67 = *(_QWORD *)(a1 + 496);
          *(_QWORD *)(a1 + 480) = 0;
          result = sub_5C8320(v67, v66);
          *(_QWORD *)(a1 + 496) = 0;
LABEL_72:
          if ( v21 )
          {
            v32 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v32 )
              return sub_15D7BC0(*(_QWORD *)v106, v21);
          }
          return result;
        }
        v86 = *(_QWORD *)(a1 + 88);
        v105 = *(_QWORD *)(a1 + 8);
        v87 = 0x7FFFFFFF8LL;
        if ( v86 )
          v87 = 8LL * (unsigned int)(*(_DWORD *)(v86 - 4) - 1);
        v88 = *(_QWORD *)(v86 + v87);
        v102 = v88;
        if ( v88 )
          ++*(_DWORD *)(v88 + 8);
        sub_3A8160((__int64 *)(a1 + 80));
        v89 = *(_QWORD *)(a1 + 88);
        v90 = 0x7FFFFFFF8LL;
        if ( v89 )
          v90 = 8LL * (unsigned int)(*(_DWORD *)(v89 - 4) - 1);
        v91 = *(_QWORD *)(v89 + v90);
        if ( v91 )
          ++*(_DWORD *)(v91 + 8);
        sub_3A8160((__int64 *)(a1 + 80));
        v92 = sub_15E2470(*(_QWORD *)(a1 + 8), v91, v102);
        v93 = *(_QWORD *)(a1 + 496);
        v94 = *(_QWORD *)(a1 + 504);
        if ( v92 )
        {
          ++*(_DWORD *)(v92 + 8);
          v112 = v92;
          sub_5C8320(v93, v94);
          *(_QWORD *)(a1 + 496) = v112;
          ++*(_DWORD *)(v112 + 8);
          v115 = v112;
        }
        else
        {
          sub_5C8320(v93, v94);
          *(_QWORD *)(a1 + 496) = 0;
          v115 = 0;
        }
        sub_5C93E0((_QWORD *)(a1 + 88), &v115);
        sub_5C8320(v91, v105);
        sub_5C8320(v102, v105);
        v95 = *(_QWORD *)(a1 + 56);
        v96 = 0x7FFFFFFF8LL;
        if ( v95 )
          v96 = 8LL * (unsigned int)(*(_DWORD *)(v95 - 4) - 1);
        v97 = *(_QWORD *)(v95 + v96);
        if ( v97 )
          ++*(_DWORD *)(v97 + 8);
        sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v97;
        sub_39BF70(v108);
        sub_39BF70(v108);
        v98 = *(_DWORD **)(a1 + 480);
        v116 = v98;
        if ( v98 )
          ++v98[2];
        sub_5C94A0(v110, &v116);
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
        {
LABEL_69:
          v64 = *(_QWORD *)(a1 + 40);
          v65 = *(_DWORD *)(v64 - 4);
          *(_DWORD *)(v64 - 4) = v65 - 1;
          if ( v65 != 1 )
            *(_BYTE *)(v64 + 16LL * (unsigned int)(v65 - 2) + 8) |= 2u;
          goto LABEL_71;
        }
      }
      sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
      goto LABEL_69;
  }
  v34 = *(_QWORD *)(a1 + 8);
  v35 = *(_QWORD *)(a1 + 88);
  v36 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)v101 = v34;
  if ( v35 )
  {
    v37 = (unsigned int)(*(_DWORD *)(v35 - 4) - 1);
    v38 = *(_QWORD *)(v35 + 8 * v37);
    v39 = *(_DWORD *)(v35 - 4) - 1;
    if ( !v38 )
    {
      *(_DWORD *)(v35 - 4) = v37;
      goto LABEL_30;
    }
    ++*(_DWORD *)(v38 + 8);
    v40 = (unsigned int)(*(_DWORD *)(v35 - 4) - 1);
    v41 = *(_QWORD *)(v35 + 8 * v40);
    v39 = *(_DWORD *)(v35 - 4) - 1;
    *(_DWORD *)(v35 - 4) = v40;
    if ( !v41 )
      goto LABEL_30;
  }
  else
  {
    v38 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      v39 = --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_30;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v41 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
  }
  v32 = (*(_DWORD *)(v41 + 8))-- == 1;
  if ( !v32 )
  {
    v39 = *(_DWORD *)(v35 - 4);
    goto LABEL_30;
  }
  sub_15D7BC0(v36, v41);
  v35 = *(_QWORD *)(a1 + 88);
  if ( v35 )
  {
    v39 = *(_DWORD *)(v35 - 4);
    v36 = *(_QWORD *)(a1 + 80);
LABEL_30:
    v42 = (unsigned int)(v39 - 1);
    v43 = *(_QWORD *)(v35 + 8 * v42);
    if ( v43 )
    {
      ++*(_DWORD *)(v43 + 8);
      v44 = (unsigned int)(*(_DWORD *)(v35 - 4) - 1);
      v45 = *(_QWORD *)(v35 + 8 * v44);
      *(_DWORD *)(v35 - 4) = v44;
      if ( v45 )
        goto LABEL_32;
    }
    else
    {
      *(_DWORD *)(v35 - 4) = v42;
    }
    goto LABEL_34;
  }
  v43 = MEMORY[0x7FFFFFFF8];
  if ( MEMORY[0x7FFFFFFF8] )
  {
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v45 = MEMORY[0x7FFFFFFF8];
    v36 = *(_QWORD *)(a1 + 80);
    --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_32:
    v32 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v36, v45);
    goto LABEL_34;
  }
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_34:
  v46 = sub_15E2470(*(_QWORD *)(a1 + 8), v43, v38);
  v47 = *(_QWORD *)(a1 + 504);
  v48 = *(_QWORD *)(a1 + 496);
  v49 = v46;
  if ( v46 )
  {
    v50 = *(_DWORD *)(v46 + 8) + 1;
    *(_DWORD *)(v49 + 8) = v50;
    if ( v48 )
    {
      v32 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( v32 )
        sub_15D7BC0(v47, v48);
      *(_QWORD *)(a1 + 496) = v49;
      v50 = *(_DWORD *)(v49 + 8);
      v118[0] = v49;
    }
    else
    {
      *(_QWORD *)(a1 + 496) = v49;
      v118[0] = v49;
    }
    *(_DWORD *)(v49 + 8) = v50 + 1;
  }
  else
  {
    if ( v48 )
    {
      v32 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( v32 )
        sub_15D7BC0(v47, v48);
    }
    *(_QWORD *)(a1 + 496) = 0;
    v118[0] = 0;
  }
  sub_5C93E0((_QWORD *)(a1 + 88), v118);
  if ( v43 )
  {
    v32 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(*(_QWORD *)v101, v43);
  }
  if ( v38 )
  {
    v32 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(*(_QWORD *)v101, v38);
  }
  v51 = 0x7FFFFFFF8LL;
  v52 = *(_QWORD *)(a1 + 56);
  if ( v52 )
    v51 = 8LL * (unsigned int)(*(_DWORD *)(v52 - 4) - 1);
  v53 = *(_QWORD *)(v52 + v51);
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  v54 = *(_QWORD *)(a1 + 480);
  if ( v54 )
  {
    v55 = *(_QWORD *)(a1 + 488);
    v32 = (*(_DWORD *)(v54 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v55, v54);
  }
  *(_QWORD *)(a1 + 480) = v53;
  sub_39BF70((__int64 *)(a1 + 48));
  sub_39BF70((__int64 *)(a1 + 48));
  v56 = *(_QWORD *)(a1 + 480);
  v118[0] = v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  sub_5C94A0((_QWORD *)(a1 + 56), v118);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
  result = *(_QWORD *)(a1 + 40);
  v57 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v57 - 1;
  if ( v57 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v57 - 2) + 8) |= 2u;
  return result;
}

