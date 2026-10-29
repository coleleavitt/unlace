unsigned __int64 __fastcall sub_5860A0(__int64 *a1, __int64 *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r13
  char v9; // cl
  char v10; // r13
  unsigned __int64 v11; // r13
  _BYTE *v12; // r12
  _BYTE *v13; // rbp
  unsigned int v14; // edi
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // r13
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // r15
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r15
  __int64 v32; // r15
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rbp
  unsigned __int64 v40; // r12
  __int64 v41; // r13
  __int64 v42; // rsi
  void *v43; // rdi
  _BYTE *v44; // r15
  __int64 v45; // rbp
  __int64 v46; // r13
  unsigned __int64 v47; // r12
  __int64 v48; // rsi
  _DWORD *v49; // rbp
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // r14
  __int64 v53; // r13
  __int64 v54; // r8
  unsigned __int64 v55; // r15
  __int64 v56; // rsi
  unsigned int *v57; // r15
  unsigned int *v58; // r13
  __int64 v59; // rbp
  __int64 v60; // r13
  unsigned __int64 v61; // r12
  __int64 v62; // rsi
  _DWORD *v63; // rbp
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // r13
  unsigned __int64 v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rbp
  __int64 v73; // r13
  unsigned __int64 v74; // r12
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbp
  __int64 v80; // rax
  _DWORD *v81; // rbp
  __int64 v82; // rax
  unsigned __int64 v83; // [rsp+0h] [rbp-108h]
  unsigned __int64 v84; // [rsp+0h] [rbp-108h]
  __int64 v85; // [rsp+0h] [rbp-108h]
  __int64 v86; // [rsp+8h] [rbp-100h]
  __int64 v87; // [rsp+8h] [rbp-100h]
  int v88; // [rsp+1Ch] [rbp-ECh] BYREF
  void *v89; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v90; // [rsp+28h] [rbp-E0h]
  _DWORD v91[34]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v92; // [rsp+C8h] [rbp-40h]

  v6 = (int)a5;
  v92 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_invsign(a3, a4, a5) )
  {
    v32 = a2[1];
    if ( v32 )
    {
      v35 = v32 + 7;
      v34 = v32 + 8;
      v33 = *a2;
      --v32;
      if ( a2[2] >= v34 )
        goto LABEL_37;
    }
    else
    {
      v33 = *a2;
      v34 = 9;
      v35 = 8;
      if ( (unsigned __int64)a2[2] >= 9 )
      {
LABEL_37:
        a2[1] = v34;
        *(_BYTE *)(v33 + v35) = 0;
        *(_QWORD *)(*a2 + v32) = 0x206E676973766E69LL;
        goto LABEL_2;
      }
    }
    v86 = v35;
    v83 = v34;
    v36 = qvector_reserve(a2, v33, v34, 1);
    v35 = v86;
    v34 = v83;
    *a2 = v36;
    v33 = v36;
    goto LABEL_37;
  }
LABEL_2:
  if ( !(unsigned __int8)is_bnot(a3, a4, (unsigned int)v6) )
    goto LABEL_3;
  v27 = a2[1];
  if ( v27 )
  {
    v30 = v27 + 4;
    v29 = v27 + 5;
    v28 = *a2;
    --v27;
    if ( a2[2] >= v29 )
      goto LABEL_34;
LABEL_41:
    v87 = v30;
    v84 = v29;
    v37 = qvector_reserve(a2, v28, v29, 1);
    v30 = v87;
    v29 = v84;
    *a2 = v37;
    v28 = v37;
    goto LABEL_34;
  }
  v28 = *a2;
  v29 = 6;
  v30 = 5;
  if ( (unsigned __int64)a2[2] < 6 )
    goto LABEL_41;
LABEL_34:
  a2[1] = v29;
  *(_BYTE *)(v28 + v30) = 0;
  v31 = *a2 + v27;
  *(_DWORD *)v31 = 1953459810;
  *(_BYTE *)(v31 + 4) = 32;
LABEL_3:
  if ( !(unsigned __int8)is_off(a4, (unsigned int)v6) )
  {
    if ( (unsigned __int8)is_seg(a4, (unsigned int)v6) )
    {
      v18 = a2[1];
      if ( v18 )
      {
        v20 = v18 + 3;
        v19 = v18 + 4;
        --v18;
      }
      else
      {
        v19 = 5;
        v20 = 4;
      }
      v21 = *a2;
      if ( a2[2] < v19 )
      {
        v50 = qvector_reserve(a2, v21, v19, 1);
        *a2 = v50;
        v21 = v50;
      }
      a2[1] = v19;
      *(_BYTE *)(v21 + v20) = 0;
      *(_DWORD *)(*a2 + v18) = 543647091;
      goto LABEL_7;
    }
    if ( (unsigned __int8)is_char(a4, (unsigned int)v6) )
    {
      v22 = a2[1];
      if ( v22 )
      {
        v23 = v22 + 4;
        v24 = v22 + 5;
        --v22;
      }
      else
      {
        v24 = 6;
        v23 = 5;
      }
      v25 = *a2;
      if ( a2[2] < v24 )
      {
        v64 = qvector_reserve(a2, v25, v24, 1);
        *a2 = v64;
        v25 = v64;
      }
      a2[1] = v24;
      *(_BYTE *)(v25 + v23) = 0;
      v26 = *a2 + v22;
      *(_DWORD *)v26 = 1918986339;
      *(_BYTE *)(v26 + 4) = 32;
      goto LABEL_7;
    }
    if ( (unsigned __int8)is_enum(a4, (unsigned int)v6) )
    {
      v90 = 0;
      v89 = nullptr;
      v38 = sub_400BA0(a1, &v88, a3, v6, nullptr);
      if ( !(unsigned __int8)sub_6994A0(a1, &v89, v38) )
        sub_3573A0((char **)&v89);
      sub_357520(a2);
      if ( (_BYTE)v88 )
        sub_357520(a2);
      v39 = a2[1];
      if ( v39 )
      {
        v41 = v39 + 1;
        v40 = v39 + 2;
        --v39;
      }
      else
      {
        v40 = 3;
        v41 = 2;
      }
      v42 = *a2;
      if ( a2[2] < v40 )
      {
        v71 = qvector_reserve(a2, v42, v40, 1);
        *a2 = v71;
        v42 = v71;
      }
      a2[1] = v40;
      *(_BYTE *)(v42 + v41) = 0;
      *(_WORD *)(*a2 + v39) = 8231;
      v43 = v89;
      if ( !v89 )
        goto LABEL_7;
    }
    else
    {
      if ( !(unsigned __int8)is_stroff(a4, (unsigned int)v6) )
      {
        if ( (unsigned __int8)is_stkvar(a4, (unsigned int)v6) )
        {
          v59 = a2[1];
          if ( v59 )
          {
            v60 = v59 + 6;
            v61 = v59 + 7;
            --v59;
          }
          else
          {
            v61 = 8;
            v60 = 7;
          }
          v62 = *a2;
          if ( a2[2] < v61 )
          {
            v78 = qvector_reserve(a2, v62, v61, 1);
            *a2 = v78;
            v62 = v78;
          }
          a2[1] = v61;
          *(_BYTE *)(v62 + v60) = 0;
          v63 = (_DWORD *)(*a2 + v59);
          *v63 = 1986753651;
          *(_DWORD *)((char *)v63 + 3) = 544366966;
        }
        else if ( (unsigned __int8)is_fltnum(a4, (unsigned int)v6) )
        {
          v72 = a2[1];
          if ( v72 )
          {
            v73 = v72 + 14;
            v74 = v72 + 15;
            --v72;
          }
          else
          {
            v74 = 16;
            v73 = 15;
          }
          v75 = *a2;
          if ( a2[2] < v74 )
          {
            v82 = qvector_reserve(a2, v75, v74, 1);
            *a2 = v82;
            v75 = v82;
          }
          a2[1] = v74;
          *(_BYTE *)(v75 + v73) = 0;
          qmemcpy((void *)(*a2 + v72), "floating-point ", 15);
        }
        else if ( (unsigned __int8)sub_3BF380((__int64)a1, a4, v6) )
        {
          sub_3BF230((__int64)a1, a4, v6);
          sub_357520(a2);
        }
        else if ( (unsigned __int8)is_manual(a4, (unsigned int)v6) )
        {
          v79 = (a2[1] == 0) + a2[1] - 1;
          if ( a2[2] < (unsigned __int64)(v79 + 8) )
            *a2 = qvector_reserve(a2, *a2, v79 + 8, 1);
          v80 = *a2;
          a2[1] = v79 + 8;
          *(_BYTE *)(v80 + v79 + 7) = 0;
          v81 = (_DWORD *)(*a2 + v79);
          *v81 = 1970168173;
          *(_DWORD *)((char *)v81 + 3) = 543973749;
        }
        else if ( (unsigned __int8)is_custfmt(a4, (unsigned int)v6) )
        {
          if ( (int)sub_3E33B0(a1, (__int64)v91, a3) > 0
            && (unsigned __int8)is_attached_custom_data_format(
                                  (unsigned int)SLOWORD(v91[0]),
                                  (unsigned int)*((__int16 *)v91 + v6 + 1)) )
          {
            get_custom_data_format((unsigned int)*((__int16 *)v91 + v6 + 1));
          }
          sub_357520(a2);
        }
        goto LABEL_7;
      }
      v90 = 0;
      v89 = nullptr;
      v51 = sub_3C3B30(a1, v91, &v88, a3, v6);
      v52 = a2[1];
      v53 = v51;
      if ( v52 )
      {
        v54 = v52 + 7;
        v55 = v52 + 8;
        --v52;
      }
      else
      {
        v55 = 9;
        v54 = 8;
      }
      v56 = *a2;
      if ( a2[2] < v55 )
      {
        v85 = v54;
        v77 = qvector_reserve(a2, v56, v55, 1);
        *a2 = v77;
        v54 = v85;
        v56 = v77;
      }
      a2[1] = v55;
      *(_BYTE *)(v56 + v54) = 0;
      *(_QWORD *)(*a2 + v52) = 0x207B66666F727473LL;
      if ( (int)v53 > 0 )
      {
        v57 = v91;
        v58 = &v91[v53];
        do
        {
          sub_69AD40(a1, &v89, *v57);
          sub_357520(a2);
          ++v57;
        }
        while ( v57 != v58 );
      }
      if ( v88 )
        sub_357520(a2);
      v67 = a2[1];
      if ( v67 )
      {
        v68 = v67 + 1;
        v69 = v67 + 2;
        --v67;
      }
      else
      {
        v69 = 3;
        v68 = 2;
      }
      v70 = *a2;
      if ( a2[2] < v69 )
      {
        v76 = qvector_reserve(a2, v70, v69, 1);
        *a2 = v76;
        v70 = v76;
      }
      a2[1] = v69;
      *(_BYTE *)(v70 + v68) = 0;
      *(_WORD *)(*a2 + v67) = 8317;
      v43 = v89;
      if ( !v89 )
        goto LABEL_7;
    }
    *(_QWORD *)&v90 = 0;
    qfree(v43);
    goto LABEL_7;
  }
  v9 = v6;
  v10 = v6 | 0x80;
  if ( (unsigned __int8)sub_4CAB10(a1, (__m128i *)&v89, a3, v9) )
  {
    print_refinfo(a2, 0, &v89);
    if ( (unsigned __int8)sub_4CAB10(a1, (__m128i *)&v89, a3, v10) )
      goto LABEL_6;
  }
  else
  {
    if ( (unsigned __int8)sub_4CAB10(a1, (__m128i *)&v89, a3, v10) )
    {
LABEL_6:
      print_refinfo(a2, 1, &v89);
      goto LABEL_7;
    }
    v45 = a2[1];
    if ( v45 )
    {
      v46 = v45 + 6;
      v47 = v45 + 7;
      --v45;
    }
    else
    {
      v47 = 8;
      v46 = 7;
    }
    v48 = *a2;
    if ( a2[2] < v47 )
    {
      v65 = qvector_reserve(a2, v48, v47, 1);
      *a2 = v65;
      v48 = v65;
    }
    a2[1] = v47;
    *(_BYTE *)(v48 + v46) = 0;
    v49 = (_DWORD *)(*a2 + v45);
    *v49 = 677799535;
    *(_DWORD *)((char *)v49 + 3) = 539574056;
  }
LABEL_7:
  v11 = a2[1];
  if ( v11 > 1 )
  {
    v12 = (_BYTE *)*a2;
    v13 = (_BYTE *)(*a2 + v11 - 1);
    if ( *a2 < (unsigned __int64)v13 )
    {
      while ( 1 )
      {
        v14 = (char)*(v13 - 1);
        if ( v14 > 0x7F || !isspace(v14) )
          break;
        if ( v12 == --v13 )
          goto LABEL_30;
      }
    }
    v15 = v13 - v12;
    if ( v13 == v12 )
    {
LABEL_30:
      if ( v12 )
      {
        a2[1] = 0;
        qfree(v12);
        *a2 = 0;
        a2[2] = 0;
      }
    }
    else
    {
      v16 = v15 + 1;
      if ( v11 < v15 + 1 )
      {
        if ( a2[2] < v16 )
        {
          v66 = qvector_reserve(a2, v12, v15 + 1, 1);
          v11 = a2[1];
          *a2 = v66;
          v12 = (_BYTE *)v66;
        }
        memset(&v12[v11], 0, v16 - v11);
        v44 = (_BYTE *)(*a2 + v15);
        a2[1] = v16;
        v13 = v44;
      }
      else if ( v11 != v15 + 1 )
      {
        a2[1] = v16;
      }
      *v13 = 0;
    }
  }
  return v92 - __readfsqword(0x28u);
}

