__int64 __fastcall sub_93A7F0(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8)
{
  unsigned int v8; // r11d
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v14; // ebx
  unsigned int v15; // r14d
  unsigned int i; // ebx
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // ebx
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // r15d
  __int64 v26; // rdi
  unsigned int v27; // eax
  unsigned int v28; // r10d
  unsigned int v29; // edx
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  __int64 v36; // rsi
  _DWORD *v37; // rsi
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r9
  unsigned int v40; // eax
  unsigned int v41; // r14d
  unsigned __int64 v42; // r12
  signed __int64 v45; // rax
  unsigned __int64 v46; // rsi
  _BYTE *v47; // rax
  __int64 v48; // rcx
  _DWORD *v49; // rcx
  unsigned __int64 v50; // rsi
  __int64 v51; // rdx
  unsigned int *v52; // rdi
  _QWORD *v53; // r8
  _QWORD *v54; // rcx
  _QWORD *v55; // rax
  __int64 *v56; // rdx
  _QWORD *v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v60; // r8
  __int64 v61; // r13
  _QWORD *v64; // rdi
  unsigned int v65; // eax
  unsigned int v66; // edi
  unsigned __int64 v67; // rcx
  _QWORD *v68; // r8
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 *v73; // rdx
  _QWORD *v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rcx
  int v81; // [rsp+0h] [rbp-D8h]
  unsigned int v82; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v83; // [rsp+0h] [rbp-D8h]
  __int64 v84; // [rsp+8h] [rbp-D0h]
  _DWORD *v85; // [rsp+10h] [rbp-C8h]
  unsigned int *v86; // [rsp+18h] [rbp-C0h]
  unsigned int v87; // [rsp+20h] [rbp-B8h]
  _BYTE *v88; // [rsp+20h] [rbp-B8h]
  __int64 v89; // [rsp+28h] [rbp-B0h]
  unsigned int v90; // [rsp+30h] [rbp-A8h]
  unsigned int v91; // [rsp+34h] [rbp-A4h]
  unsigned __int64 v94; // [rsp+40h] [rbp-98h]
  unsigned int v95; // [rsp+40h] [rbp-98h]
  unsigned __int64 v96; // [rsp+48h] [rbp-90h]
  unsigned int *v97; // [rsp+50h] [rbp-88h]
  unsigned int v98; // [rsp+50h] [rbp-88h]
  unsigned __int64 v99; // [rsp+58h] [rbp-80h]
  _QWORD *v100; // [rsp+58h] [rbp-80h]
  unsigned __int64 v102; // [rsp+68h] [rbp-70h]
  __int64 v103; // [rsp+68h] [rbp-70h]
  unsigned int v104; // [rsp+70h] [rbp-68h]
  unsigned __int64 v105; // [rsp+78h] [rbp-60h]
  _BYTE v106[4]; // [rsp+94h] [rbp-44h] BYREF
  unsigned __int64 v107; // [rsp+98h] [rbp-40h]

  v8 = 0;
  v9 = a2;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(unsigned int *)(a2 + 44);
  v107 = __readfsqword(0x28u);
  v84 = v10;
  if ( a4 >= v10 + v11 )
  {
    v14 = a4 - v10;
    v15 = a4 - v10;
    if ( (unsigned int)v11 < (int)a4 - (int)v10 )
    {
      v81 = a4 - v10;
      for ( i = v11; ; v11 = i )
      {
        i += sub_938BE0(v9, (_QWORD *)(v10 + v11), a5, v15, 3u, 0);
        if ( v15 <= i )
          break;
      }
      v14 = v81;
      v84 = *(_QWORD *)(v9 + 8);
      v15 = a4 - v84;
    }
    v17 = 4095;
    *(_DWORD *)(v9 + 44) = v14;
    v18 = *(_DWORD *)(v9 + 28);
    if ( *(_DWORD *)(v9 + 276) <= 0xFFFu )
      v17 = *(_DWORD *)(v9 + 276);
    v82 = v17;
    v89 = *(_QWORD *)(v9 + 128);
    v97 = (unsigned int *)(*(_QWORD *)(v9 + 112)
                         + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - *(_BYTE *)(v9 + 264))));
    v19 = *v97;
    v20 = (1 << (*(_DWORD *)(v9 + 260) - 1)) - 1;
    v21 = 0;
    v91 = v20;
    if ( v20 < v15 )
      v21 = v15 - v20;
    v104 = v21;
    v22 = 1 << *(_DWORD *)(v9 + 256);
    v23 = v15 - v22;
    if ( v22 >= v15 - v18 )
      v23 = *(_DWORD *)(v9 + 28);
    if ( !*(_DWORD *)(v9 + 40) )
      v18 = v23;
    v24 = 1;
    if ( v18 )
      v24 = v18;
    v25 = 1 << *(_DWORD *)(v9 + 268);
    v90 = v24;
    v26 = *(_QWORD *)(v9 + 128) + 8LL * (v15 & v20);
    v86 = (unsigned int *)(v26 + 4);
    v87 = v15 + 9;
    v85 = (_DWORD *)v26;
    v99 = (unsigned int)(a8 - 1);
    v27 = a7;
    if ( a7 < a7 + 3 )
    {
      v8 = 0;
      v102 = a4 + 3;
      v28 = v15 - *(_DWORD *)(v9 + 24);
      v105 = a5 - 7;
      while ( 1 )
      {
        if ( v27 == 3 )
          v29 = *a6 - 1;
        else
          v29 = a6[v27];
        if ( v29 - 1 >= v28 || *(_DWORD *)(a4 - v29) << 8 != *(_DWORD *)a4 << 8 || v15 - v29 < v18 )
          goto LABEL_31;
        v30 = (_QWORD *)(a4 + 3LL - v29);
        if ( v102 >= v105 )
        {
          v73 = (__int64 *)(a4 + 3);
        }
        else
        {
          v31 = *(_QWORD *)(a4 + 3);
          if ( *v30 != v31 )
          {
            _RDX = v31 ^ *v30;
            __asm { tzcnt   rdx, rdx }
            v34 = (unsigned int)_RDX >> 3;
            goto LABEL_27;
          }
          v73 = (__int64 *)(a4 + 11);
          v74 = v30 + 1;
          if ( v105 > a4 + 11 )
          {
            v75 = v30[1];
            v76 = *(_QWORD *)(a4 + 11);
            if ( v76 != v75 )
            {
LABEL_111:
              _RCX = v75 ^ v76;
              __asm { tzcnt   rcx, rcx }
              v34 = ((unsigned int)_RCX >> 3) + (_DWORD)v73 - v102;
              goto LABEL_27;
            }
            while ( 1 )
            {
              ++v73;
              ++v74;
              if ( v105 <= (unsigned __int64)v73 )
                break;
              v76 = *v74;
              v75 = *v73;
              if ( *v74 != *v73 )
                goto LABEL_111;
            }
          }
          v30 = v74;
        }
        if ( (unsigned __int64)v73 < a5 - 3 && *(_DWORD *)v30 == *(_DWORD *)v73 )
        {
          v73 = (__int64 *)((char *)v73 + 4);
          v30 = (_QWORD *)((char *)v30 + 4);
        }
        if ( (unsigned __int64)v73 < a5 - 1 && *(_WORD *)v30 == *(_WORD *)v73 )
        {
          v73 = (__int64 *)((char *)v73 + 2);
          v30 = (_QWORD *)((char *)v30 + 2);
        }
        if ( a5 > (unsigned __int64)v73 )
          LODWORD(v73) = (*(_BYTE *)v30 == *(_BYTE *)v73) + (_DWORD)v73;
        v34 = (_DWORD)v73 - v102;
LABEL_27:
        v35 = v34 + 3;
        if ( v35 > v99 )
        {
          v36 = v8++;
          v37 = &a1[2 * v36];
          v37[1] = v35;
          *v37 = v27 + 1 - a7;
          if ( a5 == a4 + v35 || v82 < (unsigned int)v35 )
            return v8;
          v99 = v34 + 3;
        }
LABEL_31:
        if ( a7 + 3 == ++v27 )
          goto LABEL_32;
      }
    }
    v8 = 0;
LABEL_32:
    if ( v99 > 2
      || (v95 = v8, v65 = sub_935CF0(v9, a3, (_DWORD *)a4), v8 = v95, v66 = v15 - v65, v65 < v90)
      || v66 > 0x3FFFF )
    {
LABEL_33:
      *v97 = v15;
      if ( !v25 || v19 < v90 )
      {
LABEL_79:
        *v86 = 0;
        *v85 = 0;
        *(_DWORD *)(v9 + 44) = v87 - 8;
        return v8;
      }
      v38 = 0;
      v39 = 0;
      v103 = v9;
      v83 = a5 - 7;
      v94 = a5 - 3;
      v96 = a5 - 1;
      v40 = v15 + 3;
      v41 = v15 + 9;
      v98 = v40;
      v88 = (_BYTE *)a5;
      v42 = v99;
      while ( 1 )
      {
        v50 = v39;
        if ( v38 <= v39 )
          v50 = v38;
        v51 = v84 + v19;
        v52 = (unsigned int *)(v89 + 8LL * (v19 & v91));
        v53 = (_QWORD *)(v51 + v50);
        v54 = (_QWORD *)(a4 + v50);
        if ( a4 + v50 < v83 )
        {
          if ( *v53 != *v54 )
          {
            _RAX = *v54 ^ *v53;
            __asm { tzcnt   rax, rax }
            v45 = (unsigned int)_RAX >> 3;
            goto LABEL_38;
          }
          v55 = v54 + 1;
          v100 = v53 + 1;
          if ( (unsigned __int64)(v54 + 1) >= v83 )
          {
            ++v53;
          }
          else
          {
            v60 = v53[1];
            v61 = v54[1];
            if ( v60 != v61 )
            {
LABEL_82:
              _R8 = v61 ^ v60;
              __asm { tzcnt   r8, r8 }
              v45 = (char *)v55 + ((unsigned int)_R8 >> 3) - (char *)v54;
              goto LABEL_38;
            }
            v64 = v100;
            while ( 1 )
            {
              ++v55;
              ++v64;
              if ( (unsigned __int64)v55 >= v83 )
                break;
              v60 = *v64;
              v61 = *v55;
              if ( *v64 != *v55 )
              {
                v52 = (unsigned int *)(v89 + 8LL * (v19 & v91));
                goto LABEL_82;
              }
            }
            v53 = v64;
            v52 = (unsigned int *)(v89 + 8LL * (v19 & v91));
          }
        }
        else
        {
          v55 = (_QWORD *)(a4 + v50);
        }
        if ( (unsigned __int64)v55 < v94 && *(_DWORD *)v53 == *(_DWORD *)v55 )
        {
          v55 = (_QWORD *)((char *)v55 + 4);
          v53 = (_QWORD *)((char *)v53 + 4);
        }
        if ( (unsigned __int64)v55 < v96 && *(_WORD *)v53 == *(_WORD *)v55 )
        {
          v55 = (_QWORD *)((char *)v55 + 2);
          v53 = (_QWORD *)((char *)v53 + 2);
        }
        if ( v88 > (_BYTE *)v55 )
          v55 = (_QWORD *)((char *)v55 + (*(_BYTE *)v53 == *(_BYTE *)v55));
        v45 = (char *)v55 - (char *)v54;
LABEL_38:
        v46 = v45 + v50;
        v47 = (_BYTE *)(a4 + v46);
        if ( v46 > v42 )
        {
          if ( v46 > v41 - v19 )
            v41 = v19 + v46;
          v48 = v8++;
          v49 = &a1[2 * v48];
          v49[1] = v46;
          *v49 = v98 - v19;
          if ( v46 > 0x1000 || v88 == v47 )
          {
LABEL_78:
            v87 = v41;
            v9 = v103;
            goto LABEL_79;
          }
          v42 = v46;
        }
        if ( *(_BYTE *)(v51 + v46) >= *v47 )
        {
          *v86 = v19;
          if ( v104 >= v19 )
          {
            v87 = v41;
            v9 = v103;
            v86 = (unsigned int *)v106;
            goto LABEL_79;
          }
          v19 = *v52;
          v86 = v52;
          v38 = v46;
          if ( !--v25 )
            goto LABEL_78;
        }
        else
        {
          *v85 = v19;
          if ( v104 >= v19 )
          {
            v87 = v41;
            v9 = v103;
            v85 = v106;
            goto LABEL_79;
          }
          v19 = v52[1];
          v39 = v46;
          v85 = v52 + 1;
          if ( !--v25 )
            goto LABEL_78;
        }
        if ( v90 > v19 )
          goto LABEL_78;
      }
    }
    v67 = a5 - 7;
    v57 = (_QWORD *)(v84 + v65);
    if ( a4 >= a5 - 7 )
    {
      v56 = (__int64 *)a4;
    }
    else
    {
      if ( *v57 != *(_QWORD *)a4 )
      {
        _RDX = *(_QWORD *)a4 ^ *v57;
        __asm { tzcnt   rdx, rdx }
        v58 = (unsigned int)_RDX >> 3;
        goto LABEL_71;
      }
      v56 = (__int64 *)(a4 + 8);
      v68 = v57 + 1;
      if ( v67 > a4 + 8 )
      {
        v69 = v57[1];
        v70 = *(_QWORD *)(a4 + 8);
        if ( v69 != v70 )
        {
LABEL_94:
          _RAX = v70 ^ v69;
          __asm { tzcnt   rax, rax }
          v58 = (unsigned __int64)v56 + ((unsigned int)_RAX >> 3) - a4;
          goto LABEL_71;
        }
        while ( 1 )
        {
          ++v56;
          ++v68;
          if ( v67 <= (unsigned __int64)v56 )
            break;
          v70 = *v68;
          v69 = *v56;
          if ( *v68 != *v56 )
            goto LABEL_94;
        }
      }
      v57 = v68;
    }
    if ( (unsigned __int64)v56 < a5 - 3 && *(_DWORD *)v57 == *(_DWORD *)v56 )
    {
      v56 = (__int64 *)((char *)v56 + 4);
      v57 = (_QWORD *)((char *)v57 + 4);
    }
    if ( (unsigned __int64)v56 < a5 - 1 && *(_WORD *)v57 == *(_WORD *)v56 )
    {
      v56 = (__int64 *)((char *)v56 + 2);
      v57 = (_QWORD *)((char *)v57 + 2);
    }
    if ( a5 > (unsigned __int64)v56 )
      v56 = (__int64 *)((char *)v56 + (*(_BYTE *)v57 == *(_BYTE *)v56));
    v58 = (unsigned __int64)v56 - a4;
LABEL_71:
    if ( v58 > 2 )
    {
      *a1 = v66 + 3;
      a1[1] = v58;
      if ( a5 == a4 + v58 || (v99 = v58, v8 = 1, v82 < v58) )
      {
        v8 = 1;
        *(_DWORD *)(v9 + 44) = v15 + 1;
        return v8;
      }
    }
    goto LABEL_33;
  }
  return v8;
}

