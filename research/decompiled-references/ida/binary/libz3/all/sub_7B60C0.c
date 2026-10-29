__int64 __fastcall sub_7B60C0(_QWORD *a1, unsigned __int64 a2, int *a3, _QWORD *a4, __int64 a5, double a6)
{
  unsigned int v6; // r15d
  _QWORD *v8; // rbx
  __int64 (__fastcall *v9)(_QWORD); // rax
  __int64 result; // rax
  unsigned int v11; // edx
  unsigned int v12; // ebp
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rdx
  int v18; // r14d
  __int64 v19; // rdx
  int *v20; // r14
  unsigned int v21; // esi
  __int64 (__fastcall *v22)(); // rax
  unsigned int v23; // r8d
  int v24; // r15d
  __int64 (__fastcall *v25)(_QWORD); // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int *v29; // r9
  unsigned int *v30; // rbp
  _QWORD *v31; // r15
  unsigned int *v32; // rbx
  int v33; // r12d
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(_QWORD); // r14
  int *v36; // r14
  _QWORD *v37; // rbx
  int *v38; // r9
  int v39; // edx
  int *v40; // rbp
  unsigned int v41; // r15d
  int *v42; // r12
  __int64 v43; // rdi
  int v44; // esi
  __int64 v45; // r8
  unsigned int i; // ecx
  __int64 v47; // rcx
  unsigned int v48; // r8d
  int *v49; // rcx
  _QWORD *v50; // r15
  int v51; // ebx
  unsigned int v52; // esi
  unsigned int v53; // r12d
  int v54; // r14d
  __int64 (__fastcall *v55)(_QWORD); // rax
  int v56; // eax
  __int64 v57; // rsi
  unsigned int v58; // edx
  unsigned int v59; // eax
  __int64 (__fastcall *v60)(); // rax
  int v61; // eax
  int v62; // edx
  __int64 (__fastcall *v63)(); // rax
  int v64; // eax
  unsigned int v65; // eax
  __int64 (__fastcall *v66)(); // rax
  __int64 v67; // rsi
  __int64 v68; // rbp
  __int64 v69; // rbp
  __int64 (__fastcall *v70)(_QWORD); // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // r8
  int v75; // esi
  __int64 v76; // rsi
  __int64 v77; // rbp
  __int64 v78; // rbp
  __int64 (__fastcall *v79)(_QWORD); // rax
  __int64 v80; // rsi
  __int64 v81; // rsi
  unsigned int v82; // [rsp+8h] [rbp-70h]
  unsigned int v83; // [rsp+8h] [rbp-70h]
  int *v84; // [rsp+8h] [rbp-70h]
  int *v85; // [rsp+8h] [rbp-70h]
  unsigned int v86; // [rsp+10h] [rbp-68h]
  int *v87; // [rsp+10h] [rbp-68h]
  unsigned int v88; // [rsp+10h] [rbp-68h]
  unsigned int v89; // [rsp+10h] [rbp-68h]
  unsigned int v90; // [rsp+10h] [rbp-68h]
  unsigned int v91; // [rsp+10h] [rbp-68h]
  unsigned int v92; // [rsp+10h] [rbp-68h]
  unsigned int v93; // [rsp+18h] [rbp-60h]
  int v94; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v95; // [rsp+1Ch] [rbp-5Ch]
  int *v97; // [rsp+28h] [rbp-50h]
  unsigned int v98; // [rsp+28h] [rbp-50h]
  int v99; // [rsp+28h] [rbp-50h]
  unsigned int v100[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v6 = a2;
  v8 = a1;
  if ( a3[4] != -2 )
  {
    a2 = (unsigned __int64)v100;
    a1 = a4;
    v100[0] = a3[4];
    sub_7B5E20(a4, v100);
  }
  v93 = a3[15];
  if ( byte_1C7EBD0 )
  {
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v67 = sub_180B150(a1, a2);
      (*(void (__fastcall **)(int *, __int64, _QWORD *, __int64))(*(_QWORD *)a3 + 136LL))(a3, v67, v8 + 10, 1);
      v68 = sub_180B150(a3, v67);
      std::__ostream_insert<char,std::char_traits<char>>();
      v69 = sub_7C5DC0(v68, v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      v70 = *(__int64 (__fastcall **)(_QWORD))(*v8 + 536LL);
      if ( v70 == sub_7C55E0 )
        v71 = (unsigned int)sub_7C55E0(v8);
      else
        v71 = ((unsigned int (__fastcall *)(_QWORD *, _QWORD))v70)(v8, v6);
      sub_17F35B0(v69, v71);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = (unsigned __int64)"\n";
      v72 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v72, "\n");
      v9 = *(__int64 (__fastcall **)(_QWORD))(*v8 + 536LL);
      if ( v9 == sub_7C55E0 )
        goto LABEL_5;
LABEL_84:
      a2 = v6;
      result = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v9)(v8, v6);
      goto LABEL_98;
    }
    v76 = sub_180B150(a1, a2);
    (*(void (__fastcall **)(int *, __int64, _QWORD *, __int64))(*(_QWORD *)a3 + 136LL))(a3, v76, v8 + 10, 1);
    v77 = sub_180B150(a3, v76);
    std::__ostream_insert<char,std::char_traits<char>>();
    v78 = sub_7C5DC0(v77, v6);
    std::__ostream_insert<char,std::char_traits<char>>();
    v79 = *(__int64 (__fastcall **)(_QWORD))(*v8 + 536LL);
    if ( v79 == sub_7C55E0 )
      v80 = (unsigned int)sub_7C55E0(v8);
    else
      v80 = ((unsigned int (__fastcall *)(_QWORD *, _QWORD))v79)(v8, v6);
    sub_17F35B0(v78, v80);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    a2 = (unsigned __int64)"\n";
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v9 = *(__int64 (__fastcall **)(_QWORD))(*v8 + 536LL);
  if ( v9 != sub_7C55E0 )
    goto LABEL_84;
LABEL_5:
  result = v8[20];
  if ( result )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(result + 880) + 4LL * (v6 >> 1));
    if ( v11 >= *(_DWORD *)(result + 888) && (((unsigned __int8)v6 ^ (unsigned __int8)v11) & 1) != 0 )
      goto LABEL_31;
    goto LABEL_7;
  }
  result = *(unsigned int *)(*(_QWORD *)(v8[3] + 3288LL) + 4LL * v6);
LABEL_98:
  if ( (_DWORD)result == -1 )
  {
LABEL_31:
    v27 = 0;
    v28 = 2LL * (unsigned int)a3[8];
    v29 = &a3[v28 + 19];
    if ( !(v28 * 4) )
      return result;
    v87 = a3 + 19;
    v30 = (unsigned int *)&a3[v28 + 19];
    v95 = v6;
    v31 = v8;
    v32 = (unsigned int *)(a3 + 19);
    v97 = a3;
    v33 = 0;
    while ( 1 )
    {
      v83 = *v32;
      v34 = HIDWORD(*(_QWORD *)v32);
      v35 = *(__int64 (__fastcall **)(_QWORD))(*v31 + 536LL);
      if ( v35 != sub_7C55E0 )
        break;
      result = v31[20];
      if ( !result )
      {
        result = *(unsigned int *)(*(_QWORD *)(v31[3] + 3288LL) + 4 * v34);
LABEL_72:
        if ( (_DWORD)result == -1 )
          goto LABEL_37;
        goto LABEL_36;
      }
      a5 = *(unsigned int *)(*(_QWORD *)(result + 880) + 4LL * (*(_QWORD *)v32 >> 33));
      if ( (unsigned int)a5 >= *(_DWORD *)(result + 888) )
      {
        a5 = ((unsigned __int8)v34 ^ (unsigned __int8)a5) & 1;
        if ( (_DWORD)a5 )
          goto LABEL_37;
      }
LABEL_36:
      result = v83;
      v33 += v83;
LABEL_37:
      v32 += 2;
      if ( v32 == v30 )
      {
        v39 = v33;
        v37 = v31;
        v40 = v87;
        v41 = v95;
        v42 = v97;
        goto LABEL_46;
      }
      if ( v35 == sub_7C55E0 )
      {
        v36 = (int *)v32;
        v37 = v31;
        v38 = (int *)v30;
        v39 = v33;
        v40 = v87;
        v41 = v95;
        v42 = v97;
        v43 = v37[20];
        while ( 1 )
        {
LABEL_40:
          v44 = *v36;
          result = HIDWORD(*(_QWORD *)v36);
          if ( v43 )
          {
            v45 = *(_QWORD *)(v43 + 880);
            for ( i = *(_DWORD *)(v45 + 4LL * ((unsigned int)result >> 1));
                  i >= *(_DWORD *)(v43 + 888);
                  i = *(_DWORD *)(v45 + 4LL * ((unsigned int)HIDWORD(*(_QWORD *)v36) >> 1)) )
            {
              if ( (((unsigned __int8)result ^ (unsigned __int8)i) & 1) == 0 )
                break;
              v36 += 2;
              if ( v36 == v38 )
                goto LABEL_46;
              v44 = *v36;
              result = HIDWORD(*(_QWORD *)v36);
            }
            goto LABEL_45;
          }
          v74 = v37[3];
          result = (unsigned int)result;
          if ( *(_DWORD *)(*(_QWORD *)(v74 + 3288) + 4LL * (unsigned int)result) == -1 )
            break;
LABEL_45:
          v36 += 2;
          v39 += v44;
          if ( v38 == v36 )
            goto LABEL_46;
        }
        while ( 1 )
        {
          v36 += 2;
          if ( v36 == v38 )
            break;
          v75 = *v36;
          result = (unsigned int)HIDWORD(*(_QWORD *)v36);
          if ( *(_DWORD *)(*(_QWORD *)(v74 + 3288) + 4 * result) != -1 )
          {
            v36 += 2;
            v39 += v75;
            if ( v38 != v36 )
              goto LABEL_40;
            break;
          }
        }
LABEL_46:
        v47 = 2LL * (unsigned int)v42[8];
        if ( v47 * 4 )
        {
          v48 = v41;
          v49 = &v40[v47];
          v50 = v37;
          v51 = v39;
          while ( 2 )
          {
            v53 = v40[1];
            if ( v53 == v48 )
              goto LABEL_52;
            v54 = *v40;
            v55 = *(__int64 (__fastcall **)(_QWORD))(*v50 + 536LL);
            if ( v55 == sub_7C55E0 )
            {
              result = v50[20];
              if ( !result )
              {
                result = *(unsigned int *)(*(_QWORD *)(v50[3] + 3288LL) + 4LL * v53);
                goto LABEL_57;
              }
              v52 = *(_DWORD *)(*(_QWORD *)(result + 880) + 4LL * (v53 >> 1));
              if ( v52 < *(_DWORD *)(result + 888) || (((unsigned __int8)v53 ^ (unsigned __int8)v52) & 1) == 0 )
                goto LABEL_52;
              result = (unsigned int)(v54 + v51);
              if ( (unsigned int)result >= v93 )
              {
LABEL_59:
                v88 = v48;
                v84 = v49;
                v100[0] = v53 ^ 1;
                result = sub_7B5E20(a4, v100);
                v49 = v84;
                v48 = v88;
                goto LABEL_52;
              }
            }
            else
            {
              v92 = v48;
              v85 = v49;
              result = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v55)(v50, v53);
              v48 = v92;
              v49 = v85;
LABEL_57:
              if ( (_DWORD)result != -1 )
                goto LABEL_52;
              result = (unsigned int)(v54 + v51);
              if ( (unsigned int)result >= v93 )
                goto LABEL_59;
            }
            v51 = result;
LABEL_52:
            v40 += 2;
            if ( v49 == v40 )
              return result;
            continue;
          }
        }
        return result;
      }
    }
    result = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, int *))v35)(
               v31,
               v34,
               v27,
               v28 * 4,
               a5,
               v29);
    goto LABEL_72;
  }
LABEL_7:
  result = (unsigned int)a3[8];
  v12 = a3[17];
  v13 = a3 + 20;
  v14 = 0;
  v15 = (unsigned __int8)byte_1C7EBD0;
  if ( (_DWORD)result )
  {
    do
    {
      v16 = v14++;
      if ( v6 == *v13 )
      {
        v17 = v16;
        a2 = v16 + 1;
        v18 = a3[2 * v17 + 19];
        if ( (unsigned int)a2 >= v12 )
          v12 = a2;
        if ( byte_1C7EBD0 )
          goto LABEL_88;
        goto LABEL_14;
      }
      v13 += 2;
    }
    while ( (_DWORD)result != v14 );
    v18 = 0;
    a2 = (unsigned int)(result + 1);
    if ( (unsigned int)a2 >= v12 )
      v12 = result + 1;
    if ( !byte_1C7EBD0 )
      goto LABEL_14;
  }
  else
  {
    if ( !byte_1C7EBD0 )
      return result;
    if ( !v12 )
      v12 = 1;
    v18 = 0;
  }
LABEL_88:
  sub_180B130((unsigned __int8)byte_1C7EBD0);
  if ( (unsigned __int8)sub_186A530(a6) )
  {
    sub_186A4C0(a6);
    sub_180B150(v15, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v73 = std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
    sub_186A500(v73, "\n");
  }
  else
  {
    sub_180B150(v15, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
  }
  result = (unsigned int)a3[8];
LABEL_14:
  v94 = a3[18] - v18;
  if ( v12 < (unsigned int)result )
  {
    v19 = v12;
    v82 = v6;
    v20 = &a3[2 * v12];
    while ( 1 )
    {
      v24 = a3[2 * v19 + 19];
      v23 = v20[20];
      v25 = *(__int64 (__fastcall **)(_QWORD))(*v8 + 536LL);
      if ( v25 == sub_7C55E0 )
      {
        v26 = v8[20];
        if ( v26 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)(v26 + 880) + 4LL * (v23 >> 1));
          if ( v21 < *(_DWORD *)(v26 + 888) || (((unsigned __int8)v23 ^ (unsigned __int8)v21) & 1) == 0 )
            goto LABEL_23;
          v22 = *(__int64 (__fastcall **)())(*v8 + 552LL);
          if ( v22 == sub_7C5680 )
            goto LABEL_19;
          goto LABEL_74;
        }
        if ( *(_DWORD *)(*(_QWORD *)(v8[3] + 3288LL) + 4LL * v23) != -1 )
          goto LABEL_28;
      }
      else
      {
        v89 = v20[20];
        v56 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v25)(v8, v23);
        v23 = v89;
        if ( v56 != -1 )
          goto LABEL_28;
      }
      v22 = *(__int64 (__fastcall **)())(*v8 + 552LL);
      if ( v22 == sub_7C5680 )
      {
        if ( v8[20] )
          goto LABEL_19;
        v57 = v8[3];
        v58 = *(_DWORD *)(*(_QWORD *)(v57 + 3296) + 24LL * (v23 >> 1));
LABEL_64:
        v59 = *(_DWORD *)(*(_QWORD *)(v57 + 3296) + 24LL * (v82 >> 1));
        goto LABEL_65;
      }
LABEL_74:
      v91 = v23;
      v65 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v22)(v8, v23);
      v23 = v91;
      v58 = v65;
      v66 = *(__int64 (__fastcall **)())(*v8 + 552LL);
      if ( v66 == sub_7C5680 )
      {
        if ( v8[20] )
        {
          if ( v58 )
            goto LABEL_28;
LABEL_19:
          v86 = v23;
          if ( (unsigned __int8)sub_7AFE90(v8, v23 ^ 1, v82) )
            goto LABEL_28;
          v23 = v86;
          goto LABEL_21;
        }
        v57 = v8[3];
        goto LABEL_64;
      }
      v98 = v58;
      v59 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v66)(v8, v82);
      v58 = v98;
      v23 = v91;
LABEL_65:
      if ( v59 < v58 )
        goto LABEL_28;
      v60 = *(__int64 (__fastcall **)())(*v8 + 552LL);
      if ( v60 == sub_7C5680 )
      {
        if ( v8[20] )
          goto LABEL_19;
        v81 = v8[3];
        v62 = *(_DWORD *)(*(_QWORD *)(v81 + 3296) + 24LL * (v23 >> 1));
      }
      else
      {
        v90 = v23;
        v61 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v60)(v8, v23);
        v23 = v90;
        v62 = v61;
        v63 = *(__int64 (__fastcall **)())(*v8 + 552LL);
        if ( v63 != sub_7C5680 )
        {
          v99 = v62;
          v64 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v63)(v8, v82);
          v62 = v99;
          v23 = v90;
          goto LABEL_69;
        }
        v64 = 0;
        if ( v8[20] )
          goto LABEL_69;
        v81 = v8[3];
      }
      v64 = *(_DWORD *)(*(_QWORD *)(v81 + 3296) + 24LL * (v82 >> 1));
LABEL_69:
      if ( v64 == v62 )
        goto LABEL_19;
LABEL_21:
      if ( v24 + v94 < v93 )
      {
        v94 += v24;
        result = (unsigned int)a3[8];
LABEL_23:
        ++v12;
        v20 += 2;
        if ( v12 >= (unsigned int)result )
          return result;
        goto LABEL_24;
      }
      v100[0] = v23 ^ 1;
      sub_7B5E20(a4, v100);
LABEL_28:
      result = (unsigned int)a3[8];
      ++v12;
      v20 += 2;
      if ( v12 >= (unsigned int)result )
        return result;
LABEL_24:
      v19 = v12;
    }
  }
  return result;
}

