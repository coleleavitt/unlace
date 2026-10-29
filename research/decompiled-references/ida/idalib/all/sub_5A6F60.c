__int64 __fastcall sub_5A6F60(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int *a9)
{
  signed int v12; // r15d
  int v13; // r8d
  int v14; // r9d
  int v15; // edi
  __int64 v16; // rax
  int v17; // esi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // ebx
  int idcv_attr; // eax
  unsigned int v26; // r12d
  int v27; // eax
  unsigned int v28; // r15d
  char v29; // bl
  __int64 v30; // rdi
  int v31; // r8d
  __int64 v32; // rdi
  int v33; // esi
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // rdi
  int v42; // esi
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  char v47; // al
  __int64 v49; // r9
  __int64 custom_argloc; // rax
  int v51; // esi
  int v52; // edi
  __int64 *v53; // r14
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r15
  unsigned __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rsi
  int v62; // esi
  __int64 v63; // rdi
  _QWORD *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // al
  __int64 v69; // rax
  unsigned int v70; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v71; // [rsp+8h] [rbp-D8h]
  char v72; // [rsp+10h] [rbp-D0h]
  __int64 v73; // [rsp+10h] [rbp-D0h]
  unsigned int v74; // [rsp+2Ch] [rbp-B4h]
  __int64 v78; // [rsp+50h] [rbp-90h] BYREF
  __int64 v79; // [rsp+58h] [rbp-88h] BYREF
  __int64 v80; // [rsp+60h] [rbp-80h]
  char v81[8]; // [rsp+68h] [rbp-78h] BYREF
  __int128 v82; // [rsp+70h] [rbp-70h]
  __int64 v83; // [rsp+80h] [rbp-60h]
  _BYTE v84[24]; // [rsp+88h] [rbp-58h] BYREF
  unsigned __int64 v85; // [rsp+A0h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v81[0] = 2;
  v79 = 0;
  v80 = 0;
  v83 = 0;
  v82 = 0;
  v72 = sub_5A2660(a1, a9);
  v74 = a5 + a6;
  if ( a5 >= a5 + a6 )
  {
    v26 = 1;
LABEL_34:
    v40 = *(_DWORD *)(a1 + 16);
    v41 = *(_QWORD *)(a1 + 8);
    if ( v40 > 0 )
    {
      v42 = 0;
      while ( 1 )
      {
        v43 = *(_QWORD **)(v41 + 32);
        if ( !v43 )
          break;
        v44 = v43[1];
        if ( !v44 )
          break;
        ++v42;
        v41 = *v43 + 56 * v44 - 56;
        if ( v40 == v42 )
          goto LABEL_39;
      }
      if ( !under_debugger )
        interr(3441);
      goto LABEL_88;
    }
LABEL_39:
    sub_5A1F00(v41, *(_DWORD *)(a1 + 56));
    v45 = *(_QWORD *)(a1 + 32);
    if ( !v45 )
      sub_5A1120();
    v46 = v45 - 1;
    v47 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v45 - 1);
    *(_QWORD *)(a1 + 32) = v46;
    if ( v47 )
      --*(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 48) += (*(char *)(a1 + 56) < 0) + 1;
    goto LABEL_43;
  }
  v70 = a5 + 1;
  while ( 1 )
  {
    v78 = 0;
    v12 = v70 - 1;
    copy_tinfo_t(&v78);
    v15 = *(_DWORD *)(a1 + 16);
    v16 = *(_QWORD *)(a1 + 8);
    if ( v15 > 0 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_QWORD **)(v16 + 32);
        if ( !v18 )
          break;
        v19 = v18[1];
        if ( !v19 )
          break;
        ++v17;
        v16 = *v18 + 56 * v19 - 56;
        if ( v15 == v17 )
          goto LABEL_8;
      }
      if ( !under_debugger )
        interr(3441);
LABEL_88:
      BUG();
    }
LABEL_8:
    v20 = *(__int64 **)(v16 + 32);
    v21 = v20[1];
    v22 = *v20;
    if ( v20[2] < (unsigned __int64)(v21 + 1) )
    {
      v39 = qvector_reserve(v20, v22, v21 + 1, 56);
      *v20 = v39;
      v21 = v20[1];
      v22 = v39;
    }
    v23 = v22 + 56 * v21;
    *(_QWORD *)v23 = 0;
    *(_QWORD *)(v23 + 24) = 0;
    *(_DWORD *)(v23 + 48) = 0;
    *(_OWORD *)(v23 + 8) = 0;
    *(_OWORD *)(v23 + 32) = 0;
    ++v20[1];
    v24 = *a9 & 1;
    if ( v24 )
      break;
    qsnprintf((unsigned int)v84, 16, (unsigned int)"%d", v12, v13, v14);
    idcv_attr = get_idcv_attr(v81, a4, v84, 1);
    if ( idcv_attr == 1538 )
    {
      v51 = *a9 & 4;
      if ( !v51 && (*a9 & 2) != 0 )
      {
        v52 = *(_DWORD *)(a1 + 16);
        v53 = *(__int64 **)(a1 + 8);
        if ( v52 > 0 )
        {
          while ( 1 )
          {
            v54 = (_QWORD *)v53[4];
            if ( !v54 )
              break;
            v55 = v54[1];
            if ( !v55 )
              break;
            ++v51;
            v53 = (__int64 *)(*v54 + 56 * v55 - 56);
            if ( v52 == v51 )
              goto LABEL_55;
          }
          if ( !under_debugger )
            interr(3441);
          goto LABEL_88;
        }
LABEL_55:
        v56 = (_QWORD *)v53[4];
        if ( v56 )
        {
          v57 = v56[1];
          if ( v57 )
            v53 = (__int64 *)(*v56 + 56 * v57 - 56);
        }
        v58 = v53[1];
        if ( v58 )
        {
          v59 = v58 + 1;
          v60 = v53[1];
          v61 = *v53;
          --v58;
          if ( v53[2] >= v59 )
          {
LABEL_60:
            v53[1] = v59;
            *(_BYTE *)(v61 + v60) = 0;
            *(_BYTE *)(*v53 + v58) = 63;
            v53[3] = (v53[1] == 0) + v53[1] - 1;
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v53) )
            {
LABEL_61:
              v62 = *(_DWORD *)(a1 + 16);
              v63 = *(_QWORD *)(a1 + 8);
              if ( v62 > 0 )
              {
                while ( 1 )
                {
                  v64 = *(_QWORD **)(v63 + 32);
                  if ( !v64 )
                    break;
                  v65 = v64[1];
                  if ( !v65 )
                    break;
                  ++v24;
                  v63 = *v64 + 56 * v65 - 56;
                  if ( v62 == v24 )
                    goto LABEL_65;
                }
                if ( !under_debugger )
                  interr(3441);
                goto LABEL_88;
              }
LABEL_65:
              sub_5A1F00(v63, *(_DWORD *)(a1 + 56));
              v66 = *(_QWORD *)(a1 + 32);
              if ( !v66 )
                sub_5A1120();
              v67 = v66 - 1;
              v68 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v66 - 1);
              *(_QWORD *)(a1 + 32) = v67;
              if ( v68 )
                --*(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 48) += (*(char *)(a1 + 56) < 0) + 1;
              goto LABEL_69;
            }
            goto LABEL_71;
          }
        }
        else
        {
          v61 = *v53;
          v59 = 2;
          v60 = 1;
          if ( (unsigned __int64)v53[2] >= 2 )
            goto LABEL_60;
        }
        v73 = v60;
        v71 = v59;
        v69 = qvector_reserve(v53, v61, v59, 1);
        v60 = v73;
        v59 = v71;
        *v53 = v69;
        v61 = v69;
        goto LABEL_60;
      }
      set_qerrno(1242);
LABEL_71:
      clear_tinfo_t(&v78);
      goto LABEL_33;
    }
    if ( idcv_attr )
      goto LABEL_61;
LABEL_13:
    v26 = sub_5A4700(a1, (__int64)v81, &v78, (__int64)a9, 0);
    v27 = v26 ^ 1;
    LOBYTE(v27) = v72 & (v26 ^ 1);
    v28 = v27;
    if ( (_BYTE)v27 )
    {
      if ( (unsigned int)get_qerrno() == 1645 )
      {
        set_qerrno(0);
        v26 = v28;
        v29 = v70 < v74;
LABEL_30:
        *(_DWORD *)(a1 + 48) = 0;
        *a9 &= ~0x40000000u;
        goto LABEL_15;
      }
      *(_DWORD *)(a1 + 48) = 0;
      *a9 &= ~0x40000000u;
      clear_tinfo_t(&v78);
LABEL_33:
      v26 = 0;
      goto LABEL_34;
    }
    v29 = v26 & (v70 < v74);
    if ( v72 )
      goto LABEL_30;
LABEL_15:
    clear_tinfo_t(&v78);
    ++v70;
    if ( !v29 )
      goto LABEL_34;
  }
  v30 = *a2;
  if ( (_DWORD)v30 == 6 )
  {
    v49 = *((_QWORD *)a2 + 1) + v12 * (__int64)(int)a7;
    LODWORD(v79) = 6;
    v80 = v49;
LABEL_45:
    v81[0] = 8;
    *(_QWORD *)&v82 = &v79;
    goto LABEL_13;
  }
  if ( (int)v30 > 6 )
  {
    custom_argloc = retrieve_custom_argloc(v30, v22, v21);
    if ( custom_argloc )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned int *, __int64, _QWORD, _QWORD))(custom_argloc + 64))(
             &v79,
             &v78,
             a2,
             a3,
             v12,
             (int)a7) )
      {
        goto LABEL_45;
      }
    }
  }
  v31 = *(_DWORD *)(a1 + 16);
  v32 = *(_QWORD *)(a1 + 8);
  v33 = 0;
  if ( v31 > 0 )
  {
    while ( 1 )
    {
      v34 = *(_QWORD **)(v32 + 32);
      if ( !v34 )
        break;
      v35 = v34[1];
      if ( !v35 )
        break;
      ++v33;
      v32 = *v34 + 56 * v35 - 56;
      if ( v31 == v33 )
        goto LABEL_23;
    }
    if ( !under_debugger )
      interr(3441);
    goto LABEL_88;
  }
LABEL_23:
  sub_5A1F00(v32, *(_DWORD *)(a1 + 56));
  v36 = *(_QWORD *)(a1 + 32);
  if ( !v36 )
    sub_5A1120();
  v37 = v36 - 1;
  v38 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v36 - 1);
  *(_QWORD *)(a1 + 32) = v37;
  if ( v38 )
    --*(_DWORD *)(a1 + 16);
  if ( *(char *)(a1 + 56) < 0 )
    v24 = 2;
  *(_DWORD *)(a1 + 48) += v24;
LABEL_69:
  v26 = 0;
  clear_tinfo_t(&v78);
LABEL_43:
  free_idcv(v81);
  cleanup_argloc(&v79);
  return v26;
}
