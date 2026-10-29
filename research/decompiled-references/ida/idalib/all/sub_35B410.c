__int64 __fastcall sub_35B410(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        signed int a5,
        __int64 *a6,
        char a7,
        __int64 *a8,
        _QWORD *a9)
{
  unsigned __int64 v10; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rcx
  char *v18; // r14
  unsigned __int64 v20; // rdx
  unsigned int v21; // r12d
  int v22; // eax
  __int64 encoding_name; // rax
  __int64 v24; // rbp
  unsigned int v25; // r12d
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  size_t v35; // rax
  __int64 v36; // r8
  size_t v37; // r9
  size_t v38; // r10
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rdx
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // ebp
  __int64 v49; // rdi
  int flags; // eax
  __int64 v51; // rcx
  char *v52; // rdi
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  int v55; // edx
  int v56; // eax
  int v57; // edx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r12
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // [rsp+8h] [rbp-150h]
  __int64 v64; // [rsp+8h] [rbp-150h]
  __int64 v65; // [rsp+8h] [rbp-150h]
  int v66; // [rsp+10h] [rbp-148h]
  unsigned int v67; // [rsp+18h] [rbp-140h]
  unsigned int v68; // [rsp+18h] [rbp-140h]
  __int64 v69; // [rsp+18h] [rbp-140h]
  _BYTE v70[9]; // [rsp+27h] [rbp-131h]
  unsigned __int64 max_strlit_length; // [rsp+30h] [rbp-128h]
  size_t v72; // [rsp+58h] [rbp-100h]
  __int64 v73; // [rsp+60h] [rbp-F8h]
  size_t v74; // [rsp+68h] [rbp-F0h]
  unsigned int v75; // [rsp+7Ch] [rbp-DCh] BYREF
  __int128 v76; // [rsp+80h] [rbp-D8h] BYREF
  int v77; // [rsp+90h] [rbp-C8h]
  char v78; // [rsp+94h] [rbp-C4h]
  _QWORD v79[4]; // [rsp+A0h] [rbp-B8h] BYREF
  _QWORD v80[3]; // [rsp+C0h] [rbp-98h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-80h]
  unsigned __int64 v82; // [rsp+E0h] [rbp-78h]
  __int64 v83; // [rsp+E8h] [rbp-70h]
  unsigned __int64 v84; // [rsp+F0h] [rbp-68h]
  int v85; // [rsp+F8h] [rbp-60h]
  char v86; // [rsp+FCh] [rbp-5Ch]
  char v87; // [rsp+100h] [rbp-58h]
  char s[8]; // [rsp+110h] [rbp-48h] BYREF
  unsigned __int64 v89; // [rsp+118h] [rbp-40h]

  v10 = a3;
  max_strlit_length = a4;
  v89 = __readfsqword(0x28u);
  v63 = *(_DWORD *)(a1 + 1400) & 4;
  if ( a4 < 0 )
  {
    flags = get_flags_ex(a3, 4);
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    {
      max_strlit_length = get_item_end(v10, 4, 1024, v51) - v10;
      if ( !v63 )
      {
        v55 = nbits(v10);
        v56 = v55 + 14;
        v57 = v55 + 7;
        if ( v57 >= 0 )
          v56 = v57;
        max_strlit_length *= v56 >> 3;
      }
    }
    else
    {
      max_strlit_length = get_max_strlit_length(v10, a5, 1);
    }
  }
  if ( a6 )
  {
    if ( *a6 <= 0 || !max_strlit_length )
      return -1;
    v13 = *a6 + 1;
    if ( a2[2] >= v13 )
      goto LABEL_6;
LABEL_76:
    *a2 = qvector_reserve(a2, *a2, v13, 1);
    goto LABEL_6;
  }
  if ( !max_strlit_length )
    return -1;
  v13 = max_strlit_length + 1;
  if ( a2[2] < max_strlit_length + 1 )
    goto LABEL_76;
LABEL_6:
  a2[1] = 0;
  if ( !HIBYTE(a5) )
    a5 = sub_3594D0(a5);
  if ( (unsigned __int8)a5 > 0xAu )
  {
    v14 = 4LL * ((unsigned int)(unsigned __int8)a5 - 12 <= 2);
    v66 = a7 & 4;
    if ( (a7 & 4) != 0 )
      goto LABEL_12;
  }
  else
  {
    v14 = 2;
    if ( (a5 & 0xF8) == 0 )
      v14 = (unsigned int)(unsigned __int8)a5 - 4 <= 2;
    v66 = a7 & 4;
    if ( (a7 & 4) != 0 )
    {
LABEL_12:
      v15 = max_strlit_length;
      if ( v63 )
        goto LABEL_13;
      goto LABEL_68;
    }
  }
  max_strlit_length -= v14;
  v10 += v14;
  v15 = max_strlit_length;
  if ( v63 )
    goto LABEL_13;
LABEL_68:
  v65 = v14;
  v45 = nbits(v10);
  v14 = v65;
  v46 = v45 + 14;
  v47 = v45 + 7;
  if ( v47 >= 0 )
    v46 = v47;
  v15 = max_strlit_length / (unsigned int)(v46 >> 3);
LABEL_13:
  v64 = v14;
  v80[0] = off_2B25638;
  v80[1] = 0;
  v80[2] = a1;
  v81 = v10;
  v82 = v10 + v15;
  v83 = 0;
  v84 = v10;
  v85 = 0;
  v16 = getinf_flag(3, 64);
  v87 = 0;
  v86 = v16;
  if ( v10 == -1 || (v17 = v64, v82 < v81) )
    sub_359560(3, 64, v10, v17);
  if ( (*(_BYTE *)(a1 + 1400) & 2) != 0 )
    v86 = v16 ^ 1;
  if ( v66 )
  {
    v18 = s;
    v79[0] = s;
    if ( v64 )
    {
      while ( (unsigned __int8)sub_8B7B20(v80, v79) )
      {
        ++v18;
        sub_35A910(a2);
        if ( v18 == &s[v64] )
          goto LABEL_23;
      }
      return -1;
    }
  }
LABEL_23:
  if ( a8 )
  {
    v20 = a2[2];
    if ( a8[2] < v20 )
      *a8 = qvector_reserve(a8, *a8, v20, 4);
  }
  if ( (a7 & 2) != 0 && (a7 & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1430);
    goto LABEL_110;
  }
  v21 = (unsigned __int8)getinf_flag(3, 32);
  v22 = a5 >> 24;
  if ( !HIBYTE(a5) )
  {
    v48 = a5 & 3;
    v49 = 2;
    if ( v48 != 1 )
      v49 = 3 * (unsigned int)(v48 == 2) + 1;
    LOBYTE(v22) = get_default_encoding_idx(v49);
  }
  encoding_name = get_encoding_name((unsigned __int8)v22);
  sub_8B7BF0(v79, v80, encoding_name, v21, 0);
  v77 = 0;
  v76 = 0;
  v70[8] = 0;
  v78 = getinf_flag(3, 64);
  *(_QWORD *)v70 = (a7 & 3) == 0;
  v24 = 0;
  v25 = 0;
  while ( 1 )
  {
    v26 = sub_8B7CF0(v79, s, &v75);
    v28 = v26;
    if ( !v75 )
    {
      v67 = v26;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v79[0] + 16LL))(
             v79[0],
             0,
             v27,
             v26) )
      {
        break;
      }
      v28 = v67;
      if ( *((_QWORD *)&v76 + 1) < v84 || v84 >= *((_QWORD *)&v76 + 1) && v77 >= v85 )
      {
        if ( !sub_359810((__int64)v79, (__int64)&v76, (__int64)v80) )
          break;
        v75 = 0;
        v28 = v67;
      }
    }
    if ( !v28 )
    {
      if ( (a7 & 3) == 0 )
      {
LABEL_55:
        v35 = strlen(s);
        v36 = a2[1];
        v37 = v35;
        v38 = v35;
        if ( v36 )
        {
          --v36;
          v38 = v35 + v36;
        }
        v39 = *a2;
        v40 = v38 + 1;
        if ( a2[2] < v38 + 1 )
        {
          v74 = v35;
          v73 = v36;
          v72 = v38;
          v69 = v38 + 1;
          v41 = qvector_reserve(a2, v39, v40, 1);
          v37 = v74;
          v36 = v73;
          *a2 = v41;
          v38 = v72;
          v39 = v41;
          v40 = v69;
        }
        a2[1] = v40;
        ++v25;
        *(_BYTE *)(v39 + v38) = 0;
        memmove((void *)(v36 + *a2), s, v37);
        goto LABEL_43;
      }
      v33 = v75;
      goto LABEL_53;
    }
    if ( v28 != 2 || (a7 & 3) == 0 )
      break;
    if ( (a7 & 1) != 0 )
    {
      v33 = 0xFFFFFFFFLL;
LABEL_53:
      v25 += put_cstring_cp(a2, v33, s, -1, 2);
      goto LABEL_43;
    }
    if ( (a7 & 2) == 0 )
      goto LABEL_55;
    v25 += put_cstring_cp(a2, 0xFFFFFFFFLL, s, -1, 1);
LABEL_43:
    if ( a8 )
    {
      v29 = a8[1];
      v30 = v75;
      v31 = *a8;
      if ( a8[2] < (unsigned __int64)(v29 + 1) )
      {
        v68 = v75;
        v34 = qvector_reserve(a8, v31, v29 + 1, 4);
        v30 = v68;
        *a8 = v34;
        v31 = v34;
        v29 = a8[1];
      }
      *(_DWORD *)(v31 + 4 * v29) = v30;
      ++a8[1];
    }
    if ( a6 )
    {
      v32 = v25;
      if ( *a6 < (unsigned __int64)v25 )
        goto LABEL_62;
      v24 = (a2[1] == 0) + a2[1] - 1;
      if ( a8 )
        *(_QWORD *)&v70[1] = a8[1];
    }
  }
  if ( a6 )
  {
    v32 = v25;
LABEL_62:
    if ( *a6 < v32 )
    {
      v52 = (char *)*a2;
      v53 = *a2;
      if ( v24 )
      {
        v58 = a2[1];
        v59 = v24 + 1;
        if ( v58 < v24 + 1 )
        {
          if ( a2[2] < v59 )
          {
            v62 = qvector_reserve(a2, *a2, v24 + 1, 1);
            *a2 = v62;
            v52 = (char *)v62;
            v58 = a2[1];
          }
          memset(&v52[v58], 0, v59 - v58);
          a2[1] = v59;
          v53 = *a2;
        }
        else if ( v59 != v58 )
        {
          a2[1] = v59;
        }
        *(_BYTE *)(v53 + v24) = 0;
      }
      else if ( v52 )
      {
        a2[1] = 0;
        qfree(v52);
        *a2 = 0;
        a2[2] = 0;
      }
      if ( a8 )
      {
        v54 = a8[1];
        if ( v54 < *(_QWORD *)&v70[1] )
        {
          v60 = *a8;
          if ( (unsigned __int64)a8[2] < *(_QWORD *)&v70[1] )
          {
            v61 = qvector_reserve(a8, v60, *(_QWORD *)&v70[1], 4);
            *a8 = v61;
            v60 = v61;
            v54 = a8[1];
          }
          memset((void *)(v60 + 4 * v54), 0, 4 * (*(_QWORD *)&v70[1] - v54));
          a8[1] = *(_QWORD *)&v70[1];
        }
        else if ( *(_QWORD *)&v70[1] != v54 )
        {
          a8[1] = *(_QWORD *)&v70[1];
        }
      }
      *a6 = 0;
      if ( !a9 )
        return (a2[1] == 0) + a2[1] - 1;
LABEL_64:
      v42 = v82 - v84;
      v43 = nbits(v81);
      v44 = (v85 >> 3) + v42 * (v43 >> 3);
      if ( max_strlit_length >= v44 )
      {
        *a9 = max_strlit_length - v44;
        return (a2[1] == 0) + a2[1] - 1;
      }
      if ( !under_debugger )
        interr(1431);
LABEL_110:
      BUG();
    }
  }
  if ( a9 )
    goto LABEL_64;
  return (a2[1] == 0) + a2[1] - 1;
}
