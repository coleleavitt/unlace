__int64 __fastcall sub_FBE50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rbp
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax
  int v14; // r12d
  unsigned int v15; // r13d
  __int64 v16; // r14
  unsigned int i; // ebx
  unsigned int v18; // r10d
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r11d
  __int64 v22; // r14
  unsigned int v23; // esi
  int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // r9
  int v30; // r13d
  unsigned __int64 v31; // rdx
  unsigned int v32; // edx
  unsigned int v33; // r14d
  _DWORD *v34; // r11
  unsigned int v35; // ecx
  _QWORD *v36; // rdi
  __int64 v37; // r8
  unsigned int v40; // ecx
  unsigned __int64 v41; // rdi
  __int64 v42; // r8
  _DWORD *v43; // r8
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rbp
  unsigned int v48; // r15d
  signed __int64 v51; // rdx
  unsigned __int64 v52; // r8
  _BYTE *v53; // rdx
  __int64 v54; // rdi
  _DWORD *v55; // rdi
  unsigned __int64 v56; // r8
  unsigned int *v57; // r9
  __int64 v58; // rcx
  _QWORD *v59; // r10
  _QWORD *v60; // rdi
  _QWORD *v61; // rdx
  __int64 v62; // r14
  __int64 v63; // r10
  _QWORD *v66; // r9
  __int64 *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdi
  _QWORD *v72; // [rsp+0h] [rbp-D8h]
  unsigned int v73; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v74; // [rsp+0h] [rbp-D8h]
  __int64 v75; // [rsp+8h] [rbp-D0h]
  unsigned int *v76; // [rsp+10h] [rbp-C8h]
  unsigned int *v77; // [rsp+18h] [rbp-C0h]
  unsigned int v78; // [rsp+24h] [rbp-B4h]
  _BYTE *v80; // [rsp+28h] [rbp-B0h]
  _QWORD *v81; // [rsp+28h] [rbp-B0h]
  __int64 v82; // [rsp+30h] [rbp-A8h]
  unsigned int v83; // [rsp+38h] [rbp-A0h]
  unsigned int v84; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int64 v86; // [rsp+48h] [rbp-90h]
  unsigned int *v87; // [rsp+50h] [rbp-88h]
  unsigned __int64 v88; // [rsp+50h] [rbp-88h]
  char *v89; // [rsp+58h] [rbp-80h]
  unsigned int v90; // [rsp+58h] [rbp-80h]
  unsigned int v91; // [rsp+60h] [rbp-78h]
  _QWORD *v92; // [rsp+60h] [rbp-78h]
  unsigned int v93; // [rsp+68h] [rbp-70h]
  __int64 v94; // [rsp+70h] [rbp-68h]
  unsigned __int64 v95; // [rsp+78h] [rbp-60h]
  _BYTE v96[4]; // [rsp+94h] [rbp-44h] BYREF
  unsigned __int64 v97; // [rsp+98h] [rbp-40h]

  v8 = a2;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(unsigned int *)(a2 + 44);
  v97 = __readfsqword(0x28u);
  result = 0;
  v75 = v10;
  if ( (unsigned __int64)a4 < v10 + v11 )
    return result;
  v14 = (_DWORD)a4 - v10;
  v15 = (_DWORD)a4 - v10;
  if ( (unsigned int)v11 >= (int)a4 - (int)v10 )
  {
    v18 = (_DWORD)a4 - v10;
  }
  else
  {
    v72 = a4;
    v16 = v10;
    for ( i = v11; ; v11 = i )
    {
      i += sub_FAFC0(v8, (_QWORD *)(v16 + v11), a5, v15, 6u, 0);
      if ( v15 <= i )
        break;
    }
    a4 = v72;
    v75 = *(_QWORD *)(v8 + 8);
    v18 = (_DWORD)v72 - v75;
  }
  v19 = 4095;
  v20 = *(_QWORD *)(v8 + 112);
  v21 = *(_DWORD *)(v8 + 28);
  *(_DWORD *)(v8 + 44) = v14;
  if ( *(_DWORD *)(v8 + 276) <= 0xFFFu )
    v19 = *(_DWORD *)(v8 + 276);
  v22 = *(_QWORD *)(v8 + 128);
  v73 = v19;
  v82 = v22;
  v87 = (unsigned int *)(v20 + 4 * ((0xCF1BBCDCBF9B0000LL * *a4) >> (64 - *(_BYTE *)(v8 + 264))));
  v23 = *v87;
  v24 = *(_DWORD *)(v8 + 256);
  v25 = (1 << (*(_DWORD *)(v8 + 260) - 1)) - 1;
  v26 = 0;
  v83 = v25;
  if ( v25 < v18 )
    v26 = v18 - v25;
  v84 = v26;
  v27 = v18 - (1 << v24);
  if ( 1 << v24 >= v18 - v21 )
    v27 = v21;
  if ( !*(_DWORD *)(v8 + 40) )
    v21 = v27;
  v28 = 1;
  if ( v21 )
    v28 = v21;
  v78 = v28;
  v77 = (unsigned int *)(v22 + 8LL * (v18 & v25) + 4);
  v91 = v18 + 9;
  v76 = (unsigned int *)(v22 + 8LL * (v18 & v25));
  v29 = (unsigned int)(a8 - 1);
  v30 = 1 << *(_DWORD *)(v8 + 268);
  v31 = v29;
  if ( a7 >= a7 + 3 )
  {
    result = 0;
    goto LABEL_33;
  }
  v32 = a7;
  v89 = (char *)a4 + 4;
  v33 = v18 - *(_DWORD *)(v8 + 24);
  result = 0;
  v95 = a5 - 7;
  v93 = v21;
  v34 = a6;
  do
  {
    if ( v32 == 3 )
      v35 = *v34 - 1;
    else
      v35 = v34[v32];
    if ( v35 - 1 >= v33 || *(_DWORD *)((char *)a4 - v35) != *(_DWORD *)a4 || v18 - v35 < v93 )
      goto LABEL_31;
    v36 = (_QWORD *)((char *)a4 + 4LL - v35);
    if ( (unsigned __int64)v89 >= v95 )
    {
      v67 = (_QWORD *)((char *)a4 + 4);
    }
    else
    {
      v37 = *(_QWORD *)((char *)a4 + 4);
      if ( *v36 != v37 )
      {
        _RCX = v37 ^ *v36;
        __asm { tzcnt   rcx, rcx }
        v40 = (unsigned int)_RCX >> 3;
        goto LABEL_27;
      }
      v67 = (_QWORD *)((char *)a4 + 12);
      v81 = v36 + 1;
      if ( v95 <= (unsigned __int64)a4 + 12 )
      {
        ++v36;
      }
      else
      {
        v68 = v36[1];
        v69 = *(_QWORD *)((char *)a4 + 12);
        if ( v69 != v68 )
        {
LABEL_90:
          _RDI = v68 ^ v69;
          __asm { tzcnt   rdi, rdi }
          v40 = ((unsigned int)_RDI >> 3) + (_DWORD)v67 - (_DWORD)v89;
          goto LABEL_27;
        }
        while ( 1 )
        {
          ++v67;
          ++v81;
          if ( v95 <= (unsigned __int64)v67 )
            break;
          v68 = *v67;
          v69 = *v81;
          if ( *v81 != *v67 )
            goto LABEL_90;
        }
        v36 = v81;
      }
    }
    if ( (unsigned __int64)v67 < a5 - 3 && *(_DWORD *)v36 == *(_DWORD *)v67 )
    {
      v67 = (__int64 *)((char *)v67 + 4);
      v36 = (_QWORD *)((char *)v36 + 4);
    }
    if ( (unsigned __int64)v67 < a5 - 1 && *(_WORD *)v36 == *(_WORD *)v67 )
    {
      v67 = (__int64 *)((char *)v67 + 2);
      v36 = (_QWORD *)((char *)v36 + 2);
    }
    if ( a5 > (unsigned __int64)v67 )
      LODWORD(v67) = (*(_BYTE *)v36 == *(_BYTE *)v67) + (_DWORD)v67;
    v40 = (_DWORD)v67 - (_DWORD)v89;
LABEL_27:
    v41 = v40 + 4;
    if ( v41 > v29 )
    {
      v42 = (unsigned int)result;
      result = (unsigned int)(result + 1);
      v43 = (_DWORD *)(a1 + 8 * v42);
      v43[1] = v41;
      *v43 = 1 - a7 + v32;
      if ( (_QWORD *)a5 == (_QWORD *)((char *)a4 + v41) || v73 < (unsigned int)v41 )
        return result;
      v29 = v40 + 4;
    }
LABEL_31:
    ++v32;
  }
  while ( a7 + 3 != v32 );
  v31 = v29;
LABEL_33:
  *v87 = v18;
  if ( v23 >= v78 && v30 )
  {
    v44 = a5 - 1;
    v94 = v8;
    v45 = 0;
    v74 = a5 - 7;
    v46 = 0;
    v47 = v31;
    v86 = a5 - 3;
    v80 = (_BYTE *)a5;
    v48 = v18 + 9;
    v88 = v44;
    v90 = v18 + 3;
    while ( 1 )
    {
      v56 = v46;
      if ( v45 <= v46 )
        v56 = v45;
      v57 = (unsigned int *)(v82 + 8LL * (v23 & v83));
      v58 = v75 + v23;
      v59 = (_QWORD *)(v58 + v56);
      v60 = (_QWORD *)((char *)a4 + v56);
      if ( (unsigned __int64)a4 + v56 < v74 )
      {
        if ( *v59 != *v60 )
        {
          _RDX = *v60 ^ *v59;
          __asm { tzcnt   rdx, rdx }
          v51 = (unsigned int)_RDX >> 3;
          goto LABEL_38;
        }
        v61 = v60 + 1;
        v92 = v59 + 1;
        if ( (unsigned __int64)(v60 + 1) >= v74 )
        {
          ++v59;
        }
        else
        {
          v62 = v59[1];
          v63 = v60[1];
          if ( v63 != v62 )
          {
LABEL_69:
            _R10 = v62 ^ v63;
            __asm { tzcnt   r10, r10 }
            v51 = (char *)v61 + ((unsigned int)_R10 >> 3) - (char *)v60;
            goto LABEL_38;
          }
          v66 = v92;
          while ( 1 )
          {
            ++v61;
            ++v66;
            if ( (unsigned __int64)v61 >= v74 )
              break;
            v63 = *v66;
            v62 = *v61;
            if ( *v66 != *v61 )
            {
              v57 = (unsigned int *)(v82 + 8LL * (v23 & v83));
              goto LABEL_69;
            }
          }
          v59 = v66;
          v57 = (unsigned int *)(v82 + 8LL * (v23 & v83));
        }
      }
      else
      {
        v61 = (_QWORD *)((char *)a4 + v56);
      }
      if ( (unsigned __int64)v61 < v86 && *(_DWORD *)v59 == *(_DWORD *)v61 )
      {
        v61 = (_QWORD *)((char *)v61 + 4);
        v59 = (_QWORD *)((char *)v59 + 4);
      }
      if ( (unsigned __int64)v61 < v88 && *(_WORD *)v59 == *(_WORD *)v61 )
      {
        v61 = (_QWORD *)((char *)v61 + 2);
        v59 = (_QWORD *)((char *)v59 + 2);
      }
      if ( v80 > (_BYTE *)v61 )
        v61 = (_QWORD *)((char *)v61 + (*(_BYTE *)v59 == *(_BYTE *)v61));
      v51 = (char *)v61 - (char *)v60;
LABEL_38:
      v52 = v51 + v56;
      v53 = (char *)a4 + v52;
      if ( v52 > v47 )
      {
        if ( v52 > v48 - v23 )
          v48 = v23 + v52;
        v54 = (unsigned int)result;
        result = (unsigned int)(result + 1);
        v55 = (_DWORD *)(a1 + 8 * v54);
        *v55 = v90 - v23;
        v55[1] = v52;
        if ( v52 > 0x1000 || v80 == v53 )
          goto LABEL_66;
        v47 = v52;
      }
      if ( *(_BYTE *)(v58 + v52) >= *v53 )
      {
        *v77 = v23;
        if ( v84 >= v23 )
        {
          v91 = v48;
          v8 = v94;
          v77 = (unsigned int *)v96;
          break;
        }
        v23 = *v57;
        v77 = v57;
        v45 = v52;
        if ( !--v30 )
        {
LABEL_66:
          v91 = v48;
          v8 = v94;
          break;
        }
      }
      else
      {
        *v76 = v23;
        if ( v84 >= v23 )
        {
          v91 = v48;
          v8 = v94;
          v76 = (unsigned int *)v96;
          break;
        }
        v46 = v52;
        v76 = v57 + 1;
        v23 = v57[1];
        if ( !--v30 )
          goto LABEL_66;
      }
      if ( v78 > v23 )
        goto LABEL_66;
    }
  }
  *v77 = 0;
  *v76 = 0;
  *(_DWORD *)(v8 + 44) = v91 - 8;
  return result;
}

