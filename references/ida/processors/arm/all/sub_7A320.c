__int64 __fastcall sub_7A320(__int64 a1, int *a2, __int64 a3, int a4)
{
  int tinfo_size; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // bp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // r13d
  bool v16; // cc
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  unsigned int v22; // ebp
  unsigned int v23; // r13d
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  int v27; // r15d
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r14d
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // [rsp+0h] [rbp-48h]
  __int64 v55; // [rsp+0h] [rbp-48h]
  __int64 v56; // [rsp+0h] [rbp-48h]
  __int64 v57; // [rsp+0h] [rbp-48h]
  __int64 v58; // [rsp+0h] [rbp-48h]
  __int64 v59; // [rsp+8h] [rbp-40h]
  __int64 v60; // [rsp+8h] [rbp-40h]
  __int64 v61; // [rsp+8h] [rbp-40h]
  __int64 v62; // [rsp+8h] [rbp-40h]
  __int64 v63; // [rsp+8h] [rbp-40h]
  __int64 v64; // [rsp+10h] [rbp-38h]
  __int64 v65; // [rsp+10h] [rbp-38h]
  __int64 v66; // [rsp+10h] [rbp-38h]
  __int64 v67; // [rsp+10h] [rbp-38h]
  __int64 v68; // [rsp+10h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  if ( a3 )
  {
    tinfo_size = get_tinfo_size();
    v7 = (get_tinfo_property() & 0x2F) == 13;
  }
  else
  {
    tinfo_size = a4;
    v26 = round_down_power2();
    v6 = (unsigned int)v26;
    if ( v26 > 1 )
    {
      do
      {
        v5 = (unsigned int)(tinfo_size >> 31);
        LODWORD(v5) = tinfo_size % (int)v6;
        if ( !(tinfo_size % (int)v6) )
        {
          v26 = v6;
          goto LABEL_24;
        }
        v6 = (unsigned int)((int)v6 >> 1);
      }
      while ( (_DWORD)v6 != 1 );
      HIDWORD(v54) = 1;
      v7 = (tinfo_size & (tinfo_size - 1)) != 0;
    }
    else
    {
LABEL_24:
      HIDWORD(v54) = v26;
      v7 = (tinfo_size & (tinfo_size - 1)) != 0;
    }
  }
  if ( tinfo_size <= 0 )
    return 0;
  if ( (unsigned __int8)getinf_flag(3, 4, v5, v6, v8, v9, v54, v59, v64) || (v15 = 4, (getinf(3) & 0x1006) == 0x1002) )
  {
    v14 = *a2;
    v15 = 8;
    v16 = *a2 <= 3;
    if ( *a2 == 3 )
    {
LABEL_27:
      v27 = a2[2];
      v28 = (unsigned __int16)v27;
      if ( (unsigned __int8)getinf_flag(3, 4, v10, v11, v12, v13, v55, v60, v65) || (getinf(3) & 0x1006) == 0x1002 )
      {
        if ( (unsigned int)(unsigned __int16)v27 - 163 <= 8 )
        {
          v15 = 16;
          goto LABEL_30;
        }
        if ( (unsigned int)(unsigned __int16)v27 - 129 <= 8 )
          goto LABEL_30;
      }
      else
      {
        if ( (unsigned int)(unsigned __int16)v27 - 61 <= 0xF )
        {
          v15 = 8;
          goto LABEL_30;
        }
        if ( (v27 & 0xFFFC) == 0 || (unsigned int)(unsigned __int16)v27 - 93 <= 0xF )
        {
LABEL_30:
          if ( v15 >= tinfo_size && v15 > *((unsigned __int16 *)a2 + 5) )
          {
            if ( v7 && (unsigned __int8)getinf_flag(3, 32, v29, v30, v31, v32, v56, v61, v66) )
              v28 = ((v15 - tinfo_size) << 16) | (unsigned __int16)v27;
            *a2 = 3;
            a2[2] = v28;
            return 1;
          }
        }
      }
      return 0;
    }
  }
  else
  {
    v14 = *a2;
    v16 = *a2 <= 3;
    if ( *a2 == 3 )
      goto LABEL_27;
  }
  if ( v16 )
  {
    if ( v14 != 1 )
    {
      if ( v14 != 2 )
        return 0;
      if ( (unsigned __int8)getinf_flag(3, 32, v10, v11, v12, v13, v55, v60, v65) )
      {
        v17 = (_QWORD *)*((_QWORD *)a2 + 1);
        v18 = v17[1];
        if ( v18 )
        {
          v19 = *v17 + 24 * v18 - 24;
          v20 = *(unsigned __int16 *)(v19 + 18);
          if ( v20 < v15 && *(_DWORD *)v19 == 3 )
            *(_WORD *)(v19 + 10) = v15 - v20;
          return 1;
        }
        return 0;
      }
      return 1;
    }
    if ( !(unsigned __int8)getinf_flag(3, 32, v10, v11, v12, v13, v55, v60, v65)
      || (unsigned __int8)getinf_flag(67, 2, v33, v34, v35, v36, v57, v62, v67) )
    {
      return 1;
    }
    v37 = HIDWORD(v58);
    if ( (HIDWORD(v58) & (HIDWORD(v58) - 1)) == 0 )
    {
      if ( SHIDWORD(v58) > 2 * v15 )
      {
        v44 = getinf(99);
        if ( v44 != 176 && v44 != 256 && (unsigned __int8)getinf_flag(67, 512, v45, v46, v47, v48, v58, v63, v68) )
          goto LABEL_43;
        v37 = 2 * v15;
      }
      else if ( SHIDWORD(v58) < v15 )
      {
        v38 = getinf(99);
        if ( v38 == 176 || v38 == 256 || (unsigned __int8)getinf_flag(67, 2, v39, v40, v41, v42, v58, v63, v68) )
          goto LABEL_43;
        goto LABEL_42;
      }
      v49 = getinf(99);
      if ( v49 != 176 && v49 != 256 && (unsigned __int8)getinf_flag(67, 4, v50, v51, v52, v53, v58, v63, v68) )
        goto LABEL_43;
LABEL_42:
      v37 = v15;
LABEL_43:
      v43 = *((_QWORD *)a2 + 1) & -v37;
      if ( v15 > tinfo_size && !v7 )
        v43 += v15 - tinfo_size;
      *a2 = 1;
      *((_QWORD *)a2 + 1) = v43;
      return 1;
    }
    sub_78100();
    return sub_7A7B0();
  }
  else
  {
    if ( v14 != 4 )
      return 0;
    v22 = a2[2];
    v23 = HIWORD(v22);
    LODWORD(v24) = getinf_flag(3, 4, v10, v11, v12, v13, v55, v60, v65);
    if ( (_BYTE)v24 || (v24 = getinf(3) & 0x1006, v24 == 4098) )
    {
      if ( (unsigned int)(unsigned __int16)v22 - 163 > 8 )
        return 0;
      LOBYTE(v24) = v23 - 163 <= 8;
      LOBYTE(v25) = tinfo_size == 16;
      return v25 & (unsigned int)v24;
    }
    else
    {
      if ( (v22 & 0xFFFC) != 0 )
        return 0;
      LOBYTE(v24) = v23 <= 3;
      LOBYTE(v25) = tinfo_size == 8;
      return v25 & (unsigned int)v24;
    }
  }
}
