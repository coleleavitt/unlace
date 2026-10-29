__int64 __fastcall sub_938BE0(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 v9; // rsi
  int v10; // r9d
  unsigned __int64 v11; // rdx
  unsigned int *v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // ecx
  int v17; // r10d
  unsigned int v18; // ebx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  bool v21; // zf
  int v22; // ecx
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r13
  int v26; // r15d
  unsigned __int64 v27; // rax
  _QWORD *v28; // r14
  unsigned __int64 v29; // rcx
  _DWORD *v30; // r9
  _QWORD *v31; // rsi
  __int64 v32; // r8
  _QWORD *v33; // rax
  signed __int64 v36; // r12
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r15
  __int64 result; // rax
  unsigned int v40; // edx
  _QWORD *v41; // r12
  _QWORD *v42; // rbp
  char *v43; // rbx
  unsigned __int64 v44; // rbx
  signed __int64 v47; // r12
  _QWORD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rbx
  _QWORD *v53; // r12
  _QWORD *v54; // rbx
  _DWORD *v55; // rsi
  _DWORD *v56; // rbp
  signed __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v61; // rax
  unsigned __int64 v64; // rax
  _QWORD *v65; // rbx
  unsigned __int64 v68; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v69; // [rsp+10h] [rbp-D8h]
  _QWORD *v70; // [rsp+18h] [rbp-D0h]
  unsigned int *v71; // [rsp+20h] [rbp-C8h]
  __int64 v72; // [rsp+28h] [rbp-C0h]
  unsigned int v73; // [rsp+34h] [rbp-B4h]
  __int64 v74; // [rsp+38h] [rbp-B0h]
  unsigned int v76; // [rsp+44h] [rbp-A4h]
  unsigned __int64 v77; // [rsp+48h] [rbp-A0h]
  unsigned int v78; // [rsp+50h] [rbp-98h]
  unsigned int v79; // [rsp+54h] [rbp-94h]
  unsigned __int64 v80; // [rsp+58h] [rbp-90h]
  __int64 v81; // [rsp+58h] [rbp-90h]
  _QWORD *v82; // [rsp+60h] [rbp-88h]
  unsigned __int64 v83; // [rsp+68h] [rbp-80h]
  unsigned __int64 v84; // [rsp+70h] [rbp-78h]
  _DWORD *v85; // [rsp+78h] [rbp-70h]
  __int64 v86; // [rsp+80h] [rbp-68h]
  _QWORD *v87; // [rsp+88h] [rbp-60h]
  __int64 v88; // [rsp+90h] [rbp-58h]
  unsigned int v89; // [rsp+98h] [rbp-50h]
  _BYTE v90[4]; // [rsp+A4h] [rbp-44h] BYREF
  unsigned __int64 v91; // [rsp+A8h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 112);
  v10 = *(_DWORD *)(a1 + 264);
  v91 = __readfsqword(0x28u);
  if ( a5 == 6 )
  {
    v11 = (0xCF1BBCDCBF9B0000LL * *a2) >> (64 - (unsigned __int8)v10);
    goto LABEL_6;
  }
  if ( a5 <= 6 )
  {
    if ( a5 == 5 )
    {
      v11 = (0xCF1BBCDCBB000000LL * *a2) >> (64 - (unsigned __int8)v10);
      goto LABEL_6;
    }
LABEL_102:
    v11 = (unsigned int)(-1640531535 * *(_DWORD *)a2) >> (32 - v10);
    goto LABEL_6;
  }
  if ( a5 == 7 )
  {
    v11 = (0xCF1BBCDCBFA56300LL * *a2) >> (64 - (unsigned __int8)v10);
    goto LABEL_6;
  }
  if ( a5 != 8 )
    goto LABEL_102;
  v11 = (0xCF1BBCDCB7A56463LL * *a2) >> (64 - (unsigned __int8)v10);
LABEL_6:
  v12 = (unsigned int *)(v9 + 4 * v11);
  v77 = *(unsigned int *)(a1 + 24);
  v13 = *v12;
  v74 = *(_QWORD *)(a1 + 8);
  v14 = (1 << (*(_DWORD *)(a1 + 260) - 1)) - 1;
  v72 = *(_QWORD *)(a1 + 128);
  v86 = *(_QWORD *)(a1 + 16);
  v82 = (_QWORD *)(v77 + v86);
  v87 = (_QWORD *)(v77 + v74);
  v15 = (_DWORD)a2 - v74;
  v16 = 0;
  v73 = v14;
  if ( v14 < (int)a2 - (int)v74 )
    v16 = (_DWORD)a2 - v74 - v14;
  v17 = a4;
  v76 = v16;
  v70 = (_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * (v15 & v14));
  v71 = (unsigned int *)v70 + 1;
  v18 = *(_DWORD *)(a1 + 28);
  v19 = 1 << *(_DWORD *)(a1 + 256);
  v20 = a4 - v19;
  if ( v19 >= v17 - v18 )
    v20 = *(_DWORD *)(a1 + 28);
  v21 = *(_DWORD *)(a1 + 40) == 0;
  v22 = *(_DWORD *)(a1 + 268);
  *v12 = v15;
  if ( !v21 )
    v20 = v18;
  v78 = v20;
  v79 = v15 + 9;
  v89 = -8 - v15;
  if ( !(1 << v22) || v13 < v20 )
  {
    *v70 = 0;
    return 1;
  }
  v23 = 0;
  v24 = 0;
  v69 = a3 - 7;
  v25 = 8;
  v26 = 1 << v22;
  v83 = a3 - 3;
  v27 = a3 - 1;
  v68 = a3;
  v28 = a2;
  v84 = v27;
  while ( 1 )
  {
    v29 = v23;
    v30 = (_DWORD *)(v72 + 8LL * (v13 & v73));
    if ( v24 <= v23 )
      v29 = v24;
    v31 = (_QWORD *)((char *)v28 + v29);
    if ( !a6 || v77 <= v29 + v13 )
    {
      v32 = v74 + v13;
      v33 = (_QWORD *)(v32 + v29);
      if ( v69 <= (unsigned __int64)v31 )
      {
        v41 = (_QWORD *)((char *)v28 + v29);
      }
      else
      {
        if ( *v33 != *v31 )
        {
          _RDI = *v31 ^ *v33;
          __asm { tzcnt   r12, rdi }
          v36 = (unsigned int)_R12 >> 3;
LABEL_25:
          v37 = v36 + v29;
          goto LABEL_26;
        }
        v41 = v31 + 1;
        v48 = v33 + 1;
        if ( v69 > (unsigned __int64)(v31 + 1) )
        {
          v49 = v33[1];
          v50 = v31[1];
          if ( v49 != v50 )
          {
LABEL_61:
            _RAX = v50 ^ v49;
            __asm { tzcnt   rax, rax }
            v36 = (char *)v41 + ((unsigned int)_RAX >> 3) - (char *)v31;
            goto LABEL_25;
          }
          while ( 1 )
          {
            ++v41;
            ++v48;
            if ( v69 <= (unsigned __int64)v41 )
              break;
            v49 = *v48;
            v50 = *v41;
            if ( *v48 != *v41 )
              goto LABEL_61;
          }
        }
        v33 = v48;
      }
      if ( (unsigned __int64)v41 < v83 && *(_DWORD *)v33 == *(_DWORD *)v41 )
      {
        v41 = (_QWORD *)((char *)v41 + 4);
        v33 = (_QWORD *)((char *)v33 + 4);
      }
      if ( (unsigned __int64)v41 < v84 && *(_WORD *)v33 == *(_WORD *)v41 )
      {
        v41 = (_QWORD *)((char *)v41 + 2);
        v33 = (_QWORD *)((char *)v33 + 2);
      }
      if ( v68 > (unsigned __int64)v41 )
        v41 = (_QWORD *)((char *)v41 + (*(_BYTE *)v33 == *(_BYTE *)v41));
      v36 = (char *)v41 - (char *)v31;
      goto LABEL_25;
    }
    v32 = v86 + v13;
    v42 = (_QWORD *)(v32 + v29);
    v43 = (char *)v82 + (_QWORD)v28 - v32;
    if ( v68 < (unsigned __int64)v43 )
      v43 = (char *)v68;
    v80 = (unsigned __int64)v43;
    v44 = (unsigned __int64)(v43 - 7);
    if ( v44 <= (unsigned __int64)v31 )
    {
      v85 = (_DWORD *)(v86 + v13 + v29);
      v53 = (_QWORD *)((char *)v28 + v29);
      goto LABEL_66;
    }
    if ( *v42 == *v31 )
    {
      v53 = v31 + 1;
      v85 = v42 + 1;
      if ( v44 <= (unsigned __int64)(v31 + 1) )
        goto LABEL_66;
      v88 = v42[1];
      v58 = v31[1];
      if ( v58 == v88 )
      {
        v64 = v44;
        v65 = v42 + 1;
        while ( 1 )
        {
          ++v53;
          ++v65;
          if ( v64 <= (unsigned __int64)v53 )
            break;
          v88 = *v53;
          if ( *v65 != *v53 )
          {
            v58 = *v65;
            goto LABEL_91;
          }
        }
        v85 = v65;
LABEL_66:
        if ( (unsigned __int64)v53 < v80 - 3 && *v85 == *(_DWORD *)v53 )
        {
          v53 = (_QWORD *)((char *)v53 + 4);
          ++v85;
        }
        if ( (unsigned __int64)v53 < v80 - 1 && *(_WORD *)v85 == *(_WORD *)v53 )
        {
          v53 = (_QWORD *)((char *)v53 + 2);
          v85 = (_DWORD *)((char *)v85 + 2);
        }
        if ( v80 > (unsigned __int64)v53 )
          v53 = (_QWORD *)((char *)v53 + (*(_BYTE *)v85 == *(_BYTE *)v53));
        v47 = (char *)v53 - (char *)v31;
        if ( v82 != (_QWORD *)((char *)v42 + v47) )
          goto LABEL_56;
        goto LABEL_75;
      }
LABEL_91:
      _RAX = v88 ^ v58;
      __asm { tzcnt   rax, rax }
      v47 = (char *)v53 + ((unsigned int)_RAX >> 3) - (char *)v31;
    }
    else
    {
      _R12 = *v42 ^ *v31;
      __asm { tzcnt   r12, r12 }
      v47 = (unsigned int)_R12 >> 3;
    }
    if ( v82 != (_QWORD *)((char *)v42 + v47) )
      goto LABEL_56;
LABEL_75:
    v54 = (_QWORD *)((char *)v31 + v47);
    if ( (unsigned __int64)v31 + v47 >= v69 )
    {
      v55 = (_DWORD *)(v77 + v74);
      v56 = v54;
LABEL_77:
      if ( (unsigned __int64)v56 < v83 && *v55 == *v56 )
      {
        ++v56;
        ++v55;
      }
      if ( (unsigned __int64)v56 < v84 && *(_WORD *)v55 == *(_WORD *)v56 )
      {
        v56 = (_DWORD *)((char *)v56 + 2);
        v55 = (_DWORD *)((char *)v55 + 2);
      }
      if ( v68 > (unsigned __int64)v56 )
        v56 = (_DWORD *)((char *)v56 + (*(_BYTE *)v55 == *(_BYTE *)v56));
      v57 = (char *)v56 - (char *)v54;
      goto LABEL_86;
    }
    if ( *v87 == *v54 )
    {
      v56 = v54 + 1;
      v55 = v87 + 1;
      if ( v69 <= (unsigned __int64)(v54 + 1) )
        goto LABEL_77;
      v81 = v87[1];
      v61 = v54[1];
      if ( v81 == v61 )
      {
        do
        {
          v56 += 2;
          v55 += 2;
          if ( v69 <= (unsigned __int64)v56 )
            goto LABEL_77;
          v81 = *(_QWORD *)v55;
          v61 = *(_QWORD *)v56;
        }
        while ( *(_QWORD *)v55 == *(_QWORD *)v56 );
      }
      _RAX = v81 ^ v61;
      __asm { tzcnt   rax, rax }
      v57 = (char *)v56 + ((unsigned int)_RAX >> 3) - (char *)v54;
    }
    else
    {
      _RAX = *v54 ^ *v87;
      __asm { tzcnt   rbp, rax }
      v57 = (unsigned int)_RBP >> 3;
    }
LABEL_86:
    v47 += v57;
LABEL_56:
    v37 = v47 + v29;
    if ( v77 <= v37 + v13 )
      v32 = v74 + v13;
LABEL_26:
    if ( v37 > v25 )
    {
      v25 = v37;
      if ( v79 - v13 < v37 )
        v79 = v13 + v37;
    }
    if ( (_QWORD *)((char *)v28 + v37) == (_QWORD *)v68 )
    {
LABEL_33:
      v38 = v25;
      goto LABEL_34;
    }
    if ( *(_BYTE *)(v32 + v37) >= *((_BYTE *)v28 + v37) )
      break;
    *(_DWORD *)v70 = v13;
    if ( v76 >= v13 )
    {
      v38 = v25;
      v70 = v90;
      goto LABEL_34;
    }
    v13 = v30[1];
    v24 = v37;
    v70 = v30 + 1;
    if ( !--v26 )
      goto LABEL_33;
LABEL_17:
    if ( v13 < v78 )
      goto LABEL_33;
  }
  *v71 = v13;
  if ( v76 < v13 )
  {
    v13 = *v30;
    v71 = v30;
    v23 = v37;
    if ( !--v26 )
      goto LABEL_33;
    goto LABEL_17;
  }
  v38 = v25;
  v71 = (unsigned int *)v90;
LABEL_34:
  *v71 = 0;
  *(_DWORD *)v70 = 0;
  result = v89 + v79;
  if ( v38 > 0x180 )
  {
    v40 = v38 - 384;
    if ( (unsigned int)(v38 - 384) > 0xC0 )
      v40 = 192;
    if ( (unsigned int)result < v40 )
      return v40;
  }
  return result;
}

