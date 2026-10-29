/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425A50
// Address: 0x0000000000425A50

//----- (0000000000425A50) ----------------------------------------------------
__int64 __fastcall sub_425A50(__int64 a1, __int64 a2, unsigned __int64 **a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  int v16; // edx
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 *v23; // r8
  void *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // r8
  int v29; // edx
  unsigned __int64 v30; // r8
  int v31; // edx
  unsigned __int64 v32; // r8
  int v33; // edx
  unsigned __int64 v34; // r8
  int v35; // edx
  unsigned __int64 v36; // r8
  int v37; // edx
  unsigned __int64 v38; // r8
  int v39; // edx
  unsigned int v40; // r15d
  __int16 v42; // ax
  int v43; // esi
  __int16 v44; // ax
  int v45; // esi
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rcx
  __int64 v69; // rcx
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // rax
  int v72; // esi
  __int64 v73; // rdx
  _QWORD *v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // r15
  __int64 v77; // rax
  _QWORD *v78; // rsi
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v83; // [rsp+28h] [rbp-50h]
  unsigned __int64 v84; // [rsp+38h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 396);
  *(_WORD *)(a2 + 56) = v4;
  v5 = *(_DWORD *)(a1 + 416);
  *(_WORD *)(a2 + 88) = v5;
  v6 = *(_DWORD *)(a1 + 420);
  *(_WORD *)(a2 + 120) = v6;
  if ( (_WORD)v5 == 0 || (_WORD)v4 == 0 || !(_WORD)v6 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(20037);
    BUG();
  }
  v7 = a3[1];
  v8 = *a3;
  v83 = 0;
  ptr = nullptr;
  v11 = v8;
  if ( !(16LL * (_QWORD)v7) )
  {
    *(_QWORD *)(a2 + 48) = 0;
    v40 = 1;
    *(_QWORD *)(a2 + 240) = 0;
    *(_QWORD *)(a2 + 272) = 0;
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a2 + 432) = 0;
    *(_QWORD *)(a2 + 464) = 0;
    return v40;
  }
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 <= 0x20 )
      break;
    if ( v12 == 1879048176 )
    {
      v13 = 14;
      goto LABEL_10;
    }
    if ( v12 > 0x6FFFFFF0 )
    {
      if ( v12 == 1879048188 )
      {
        v13 = 12;
        goto LABEL_10;
      }
      v13 = 13;
      if ( v12 == 1879048190 )
        goto LABEL_10;
    }
    else
    {
      switch ( v12 )
      {
        case 0x60000011uLL:
          v44 = *(_WORD *)(a1 + 522);
          if ( v44 == 40 || v44 == 183 )
          {
            v13 = 5;
            goto LABEL_10;
          }
          goto LABEL_19;
        case 0x6FFFFEF5uLL:
          v13 = 8;
          goto LABEL_10;
        case 0x6000000FuLL:
          v42 = *(_WORD *)(a1 + 522);
          if ( v42 == 40 || v42 == 183 )
          {
            v13 = 4;
LABEL_10:
            v14 = *(_QWORD *)(a1 + 584);
            v15 = v11[1];
            if ( v14 )
            {
              v16 = 0;
              v17 = 0;
              while ( 1 )
              {
                v18 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v17);
                v19 = v18[2];
                if ( v15 >= v19 && v15 < v19 + v18[1] )
                  break;
                v17 = ++v16;
                if ( v16 >= v14 )
                  goto LABEL_15;
              }
              v20 = *v18 + (unsigned int)(v15 - v19);
              v21 = v20;
            }
            else
            {
LABEL_15:
              v20 = -1;
              v21 = -1;
            }
            v22 = *((_QWORD *)&v83 + 1);
            v23 = (__int64 *)(a2 + 32 * v13);
            v24 = ptr;
            *v23 = v21;
            v25 = v83;
            if ( v22 < (__int64)v83 + 1 )
            {
              v81 = v23;
              ptr = sub_481540((__int64)&ptr, v24, v83 + 1, 8u);
              v24 = ptr;
              v23 = v81;
              v25 = v83;
            }
            *((_QWORD *)v24 + v25) = v20;
            *(_QWORD *)&v83 = v83 + 1;
            v23[1] = v11[1];
            v8 = *a3;
            v7 = a3[1];
            goto LABEL_19;
          }
          goto LABEL_19;
        case 0x21uLL:
          v45 = 9;
LABEL_71:
          *(_QWORD *)(a2 + 32LL * v45 + 16) = v11[1];
          v8 = *a3;
          v7 = a3[1];
          goto LABEL_19;
        case 0x60000010uLL:
          v45 = 4;
          goto LABEL_71;
      }
      v45 = 5;
      if ( v12 == 1610612754 )
        goto LABEL_71;
    }
    v43 = 12;
    if ( v12 != 1879048189 )
    {
      if ( v12 != 1879048191 )
        goto LABEL_167;
      v43 = 13;
    }
    *(_DWORD *)(a2 + 32LL * v43 + 28) = v11[1];
    v8 = *a3;
    v7 = a3[1];
LABEL_19:
    v11 += 2;
    if ( v11 == &v8[2 * (_QWORD)v7] )
      goto LABEL_20;
  }
  if ( v12 > 3 )
  {
    switch ( v12 )
    {
      case 4uLL:
        v13 = 7;
        goto LABEL_10;
      case 5uLL:
        v13 = 0;
        goto LABEL_10;
      case 6uLL:
        v13 = 1;
        goto LABEL_10;
      case 7uLL:
        v13 = 3;
        goto LABEL_10;
      case 0x11uLL:
        v13 = 2;
        goto LABEL_10;
      case 0x17uLL:
        v13 = 6;
        goto LABEL_10;
      case 0x19uLL:
        v13 = 10;
        goto LABEL_10;
      case 0x1AuLL:
        v13 = 11;
        goto LABEL_10;
      case 0x20uLL:
        v13 = 9;
        goto LABEL_10;
      default:
        goto LABEL_8;
    }
  }
  if ( v12 > 1 )
  {
LABEL_8:
    switch ( v12 )
    {
      case 2uLL:
        v45 = 6;
        goto LABEL_71;
      case 8uLL:
        v45 = 3;
        goto LABEL_71;
      case 0xAuLL:
        v45 = 0;
        goto LABEL_71;
      case 0x12uLL:
        v45 = 2;
        goto LABEL_71;
      case 0x1BuLL:
        v45 = 10;
        goto LABEL_71;
      case 0x1CuLL:
        v45 = 11;
        goto LABEL_71;
      default:
        switch ( v12 )
        {
          case 0xBuLL:
            v80 = 1;
            break;
          case 0x13uLL:
            v80 = 2;
            break;
          case 9uLL:
            v80 = 3;
            break;
          default:
            if ( v12 <= 0xD )
            {
              v70 = *(_QWORD *)(a1 + 584);
              v71 = v11[1];
              if ( v70 )
              {
                v72 = 0;
                v73 = 0;
                while ( 1 )
                {
                  v74 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v73);
                  v75 = v74[2];
                  if ( v71 >= v75 && v71 < v75 + v74[1] )
                    break;
                  v73 = ++v72;
                  if ( v72 >= v70 )
                    goto LABEL_141;
                }
                v76 = *v74 + (unsigned int)(v71 - v75);
              }
              else
              {
LABEL_141:
                v76 = -1;
              }
              v77 = v83;
              v78 = ptr;
              if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v83 + 1) )
              {
                ptr = sub_481540((__int64)&ptr, ptr, v83 + 1, 8u);
                v78 = ptr;
                v77 = v83;
              }
              v78[v77] = v76;
              *(_QWORD *)&v83 = v83 + 1;
LABEL_154:
              v8 = *a3;
              v7 = a3[1];
              goto LABEL_19;
            }
            if ( v12 == 20 )
            {
              v79 = v11[1];
              *(_DWORD *)(a2 + 480) = v79;
              if ( (_DWORD)v79 != 17 && (_DWORD)v79 != 7 )
              {
                v40 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 15, (unsigned int)v79);
                if ( !(_BYTE)v40 )
                {
                  v27 = (unsigned __int64 *)ptr;
                  goto LABEL_40;
                }
              }
              goto LABEL_154;
            }
            goto LABEL_19;
        }
        *(_WORD *)(a2 + 32 * v80 + 24) = v11[1];
        v8 = *a3;
        v7 = a3[1];
        goto LABEL_19;
    }
  }
LABEL_167:
  if ( v12 )
    goto LABEL_19;
LABEL_20:
  v26 = v83;
  v27 = (unsigned __int64 *)ptr;
  *(_QWORD *)(a2 + 48) = -1;
  if ( !v26 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 240) = 0;
    *(_QWORD *)(a2 + 272) = 0;
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a2 + 432) = 0;
    goto LABEL_38;
  }
  v28 = *(_QWORD *)(a2 + 32);
  v29 = 0;
  if ( v28 )
  {
    v50 = *v27;
    v51 = -1;
    while ( 1 )
    {
      if ( v28 < v50 )
      {
        v52 = v50 - v28;
        if ( v51 > v52 )
          v51 = v52;
        v53 = ++v29;
        *(_QWORD *)(a2 + 48) = v51;
        if ( v29 >= v26 )
        {
LABEL_91:
          if ( v51 == -1 )
            goto LABEL_23;
          goto LABEL_24;
        }
      }
      else
      {
        v53 = ++v29;
        if ( v29 >= v26 )
          goto LABEL_91;
      }
      v50 = v27[v53];
    }
  }
  do
    ++v29;
  while ( v29 < v26 );
LABEL_23:
  *(_QWORD *)(a2 + 48) = 0;
LABEL_24:
  v30 = *(_QWORD *)(a2 + 224);
  v31 = 0;
  *(_QWORD *)(a2 + 240) = -1;
  if ( v30 )
  {
    v46 = *v27;
    v47 = -1;
    while ( 1 )
    {
      if ( v30 < v46 )
      {
        v48 = v46 - v30;
        if ( v47 > v48 )
          v47 = v48;
        v49 = ++v31;
        *(_QWORD *)(a2 + 240) = v47;
        if ( v31 >= v26 )
        {
LABEL_82:
          if ( v47 == -1 )
            goto LABEL_26;
          goto LABEL_27;
        }
      }
      else
      {
        v49 = ++v31;
        if ( v31 >= v26 )
          goto LABEL_82;
      }
      v46 = v27[v49];
    }
  }
  do
    ++v31;
  while ( v31 < v26 );
LABEL_26:
  *(_QWORD *)(a2 + 240) = 0;
LABEL_27:
  v32 = *(_QWORD *)(a2 + 256);
  v33 = 0;
  *(_QWORD *)(a2 + 272) = -1;
  if ( v32 )
  {
    v66 = *v27;
    v67 = -1;
    while ( 1 )
    {
      if ( v32 < v66 )
      {
        v68 = v66 - v32;
        if ( v67 > v68 )
          v67 = v68;
        v69 = ++v33;
        *(_QWORD *)(a2 + 272) = v67;
        if ( v33 >= v26 )
        {
LABEL_127:
          if ( v67 == -1 )
            goto LABEL_29;
          goto LABEL_30;
        }
      }
      else
      {
        v69 = ++v33;
        if ( v33 >= v26 )
          goto LABEL_127;
      }
      v66 = v27[v69];
    }
  }
  do
    ++v33;
  while ( v33 < v26 );
LABEL_29:
  *(_QWORD *)(a2 + 272) = 0;
LABEL_30:
  v34 = *(_QWORD *)(a2 + 384);
  v35 = 0;
  *(_QWORD *)(a2 + 400) = -1;
  if ( v34 )
  {
    v62 = *v27;
    v63 = -1;
    while ( 1 )
    {
      if ( v34 < v62 )
      {
        v64 = v62 - v34;
        if ( v63 > v64 )
          v63 = v64;
        v65 = ++v35;
        *(_QWORD *)(a2 + 400) = v63;
        if ( v35 >= v26 )
        {
LABEL_118:
          if ( v63 == -1 )
            goto LABEL_32;
          goto LABEL_33;
        }
      }
      else
      {
        v65 = ++v35;
        if ( v35 >= v26 )
          goto LABEL_118;
      }
      v62 = v27[v65];
    }
  }
  do
    ++v35;
  while ( v35 < v26 );
LABEL_32:
  *(_QWORD *)(a2 + 400) = 0;
LABEL_33:
  v36 = *(_QWORD *)(a2 + 416);
  v37 = 0;
  *(_QWORD *)(a2 + 432) = -1;
  if ( v36 )
  {
    v58 = *v27;
    v59 = -1;
    while ( 1 )
    {
      if ( v36 < v58 )
      {
        v60 = v58 - v36;
        if ( v59 > v60 )
          v59 = v60;
        v61 = ++v37;
        *(_QWORD *)(a2 + 432) = v59;
        if ( v37 >= v26 )
        {
LABEL_109:
          if ( v59 == -1 )
            goto LABEL_35;
          goto LABEL_36;
        }
      }
      else
      {
        v61 = ++v37;
        if ( v37 >= v26 )
          goto LABEL_109;
      }
      v58 = v27[v61];
    }
  }
  do
    ++v37;
  while ( v37 < v26 );
LABEL_35:
  *(_QWORD *)(a2 + 432) = 0;
LABEL_36:
  v38 = *(_QWORD *)(a2 + 448);
  v39 = 0;
  *(_QWORD *)(a2 + 464) = -1;
  if ( v38 )
  {
    v54 = *v27;
    v55 = -1;
    while ( 1 )
    {
      if ( v38 < v54 )
      {
        v56 = v54 - v38;
        if ( v55 > v56 )
          v55 = v56;
        v57 = ++v39;
        *(_QWORD *)(a2 + 464) = v55;
        if ( v39 >= v26 )
        {
LABEL_100:
          if ( v55 == -1 )
            goto LABEL_38;
          goto LABEL_39;
        }
      }
      else
      {
        v57 = ++v39;
        if ( v39 >= v26 )
          goto LABEL_100;
      }
      v54 = v27[v57];
    }
  }
  do
    ++v39;
  while ( v39 < v26 );
LABEL_38:
  *(_QWORD *)(a2 + 464) = 0;
LABEL_39:
  v40 = 1;
LABEL_40:
  if ( v27 )
  {
    *(_QWORD *)&v83 = 0;
    j__free(v27);
  }
  return v40;
}
// 4C94E1: using guessed type char byte_4C94E1;
