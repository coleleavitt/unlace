__int64 __fastcall sub_3FE030(__int64 *a1, double a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbp
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int64 *v10; // rax
  __int64 v11; // r12
  char v12; // al
  unsigned __int64 *v13; // r15
  unsigned int v14; // edx
  unsigned __int64 v15; // r14
  unsigned int v16; // eax
  bool v17; // cf
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 result; // rax
  unsigned __int64 v25; // r12
  char *v26; // r13
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rbp
  __int64 v30; // rbx
  unsigned __int64 *v31; // r14
  bool v32; // dl
  unsigned __int64 v33; // rsi
  signed __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r14
  char *v39; // rax
  char *v40; // r15
  __int64 v41; // r9
  int *v42; // rax
  __int16 v43; // dx
  _DWORD *v44; // rdx
  bool v45; // al
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  bool v48; // cf
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned __int64 v51; // rsi
  __int64 v52; // rdi
  unsigned __int64 v53; // [rsp+0h] [rbp-58h]
  __int64 v54; // [rsp+0h] [rbp-58h]
  __int64 v55; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+10h] [rbp-48h]
  __int64 v58; // [rsp+10h] [rbp-48h]
  __int64 v59; // [rsp+10h] [rbp-48h]

  v2 = (unsigned __int64 *)a1[3];
  v3 = (unsigned __int64 *)a1[2];
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      v4 = (__int64)(v2 - 1);
      v53 = *v3;
      if ( (char *)v2 - (char *)v3 > 8 )
        break;
LABEL_3:
      a1[3] = v4;
      *(_BYTE *)(v53 + 78) &= ~4u;
      v2 = (unsigned __int64 *)a1[3];
      v3 = (unsigned __int64 *)a1[2];
      if ( v2 == v3 )
        goto LABEL_25;
    }
    v5 = *(v2 - 1);
    *(v2 - 1) = *v3;
    v6 = (v4 - (__int64)v3) >> 3;
    if ( v4 - (__int64)v3 <= 16 )
    {
      v13 = v3;
      if ( (v6 & 1) != 0 )
      {
LABEL_23:
        *v13 = v5;
        goto LABEL_3;
      }
      if ( (unsigned __int64)(v6 - 1) > 2 )
      {
LABEL_39:
        v13 = v3;
        v4 = a1[3] - 8;
        goto LABEL_23;
      }
      v10 = v3;
      v7 = 0;
    }
    else
    {
      v7 = 0;
      do
      {
        v8 = v7;
        v9 = 2 * v7 + 2 - sub_3FDA00(v3[2 * v7 + 1], v3[2 * v7 + 2], a2);
        v10 = &v3[v9];
        v7 = v9;
        v3[v8] = *v10;
      }
      while ( v9 < (v6 - 1) / 2 );
      if ( (v6 & 1) != 0 || (v6 - 2) >> 1 != v9 )
      {
        v11 = (v9 - 1) / 2;
        if ( !v9 )
          goto LABEL_39;
        while ( 1 )
        {
LABEL_16:
          v13 = &v3[v11];
          v14 = *(unsigned __int16 *)(v5 + 72);
          v15 = *v13;
          v16 = *(unsigned __int16 *)(*v13 + 72);
          v17 = v14 < v16;
          if ( v14 != v16 )
            goto LABEL_12;
          v18 = *(unsigned __int16 *)(v5 + 74);
          v19 = *(unsigned __int16 *)(v15 + 74);
          v17 = v18 < v19;
          if ( v18 != v19 )
            goto LABEL_12;
          v20 = *(unsigned __int8 *)(v5 + 78);
          v12 = (*(_BYTE *)(v5 + 78) & 0x40) != 0;
          if ( v12 != ((*(_BYTE *)(v15 + 78) & 0x40) != 0) )
            goto LABEL_13;
          v21 = (*(_BYTE *)(v15 + 78) & 8) != 0;
          v12 = (v20 & 8) != 0;
          if ( v12 != (_BYTE)v21 )
            goto LABEL_13;
          v22 = *(_DWORD *)(v5 + 136);
          v23 = *(_DWORD *)(v15 + 136);
          if ( v22 != v23 )
          {
            v17 = v23 < v22;
LABEL_12:
            v12 = v17;
LABEL_13:
            if ( !v12 )
              goto LABEL_22;
            goto LABEL_14;
          }
          v41 = *(_QWORD *)(v5 + 24);
          v42 = *(int **)(v15 + 24);
          v43 = *((_WORD *)v42 + 2);
          if ( *(_WORD *)(v41 + 4) )
            break;
          v21 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 24LL);
          if ( !v21 )
            break;
          v20 = *(unsigned int *)v21;
          if ( *(_QWORD *)v21 != 0x500000000LL )
            break;
          v21 = *(unsigned int *)(v41 + 24);
          v20 = 1;
          if ( !v43 )
          {
            v44 = *(_DWORD **)(*((_QWORD *)v42 + 2) + 24LL);
            if ( v44 )
            {
              if ( !*v44 && v44[1] == 5 )
                goto LABEL_65;
            }
          }
LABEL_57:
          if ( (_DWORD)v20 != (_DWORD)v21 )
          {
            v45 = (unsigned int)v21 < (unsigned int)v20;
            goto LABEL_59;
          }
LABEL_66:
          v47 = *v42;
          v48 = *(_DWORD *)v41 < v47;
          if ( *(_DWORD *)v41 == v47 )
          {
            v49 = **(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
            v50 = **(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
            if ( v49 == v50 )
            {
              if ( (unsigned int)sub_180B130(v20) )
              {
                if ( (unsigned __int8)sub_186A530(a2) )
                {
                  sub_186A4C0(a2);
                  v58 = sub_180B150(v20, v21);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_39A600(v58, *(const char **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL) + 16LL));
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v52 = std::ostream::_M_insert<unsigned long>();
                  std::operator<<<std::char_traits<char>>();
                  sub_186A500(v52, "\n");
                }
                else
                {
                  v59 = sub_180B150(v20, v21);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_39A600(v59, *(const char **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL) + 16LL));
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::operator<<<std::char_traits<char>>();
                }
              }
              v49 = **(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
              v50 = **(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
              if ( v49 == v50 )
              {
                v45 = v5 < v15;
                goto LABEL_59;
              }
            }
            v48 = v49 < v50;
          }
          v45 = v48;
LABEL_59:
          if ( !v45 )
          {
LABEL_22:
            v13 = &v3[v7];
            v4 = a1[3] - 8;
            goto LABEL_23;
          }
          v15 = *v13;
LABEL_14:
          v3[v7] = v15;
          v7 = v11;
          if ( !v11 )
          {
            v4 = a1[3] - 8;
            goto LABEL_23;
          }
          v11 = (v11 - 1) / 2;
        }
        if ( v43 )
          goto LABEL_66;
        v46 = *(_QWORD **)(*((_QWORD *)v42 + 2) + 24LL);
        if ( !v46 )
          goto LABEL_66;
        v21 = *(unsigned int *)v46;
        if ( *v46 != 0x500000000LL )
          goto LABEL_66;
        v21 = 1;
LABEL_65:
        v20 = (unsigned int)v42[6];
        goto LABEL_57;
      }
    }
    v11 = v7;
    v33 = v3[2 * v7 + 1];
    v7 = 2 * v7 + 1;
    *v10 = v33;
    goto LABEL_16;
  }
LABEL_25:
  result = *a1;
  if ( !*a1 )
    return result;
  *(_BYTE *)(result + 78) |= 4u;
  v25 = *a1;
  v26 = (char *)a1[2];
  if ( (unsigned __int64 *)a1[4] == v3 )
  {
    v54 = a1[3];
    v34 = v54 - (_QWORD)v26;
    v35 = (v54 - (__int64)v26) >> 3;
    if ( v35 == 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v36 = 1;
    if ( v35 )
      v36 = (v54 - (__int64)v26) >> 3;
    v17 = __CFADD__(v36, v35);
    v37 = v36 + v35;
    if ( v17 )
    {
      v38 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v37 > 0xFFFFFFFFFFFFFFFLL )
        v37 = 0xFFFFFFFFFFFFFFFLL;
      v38 = 8 * v37;
    }
    v39 = (char *)operator new(v38);
    *(_QWORD *)&v39[v34] = v25;
    v40 = v39;
    v27 = (__int64)&v39[v34 + 8];
    if ( v34 > 0 )
    {
      v57 = (__int64)&v39[v34 + 8];
      memcpy(v39, v26, v34);
      v27 = v57;
      v51 = a1[4] - (_QWORD)v26;
    }
    else
    {
      if ( !v26 )
      {
LABEL_50:
        v25 = *(_QWORD *)(v27 - 8);
        v26 = v40;
        a1[2] = (__int64)v40;
        a1[3] = v27;
        a1[4] = (__int64)&v40[v38];
        goto LABEL_28;
      }
      v51 = a1[4] - (_QWORD)v26;
    }
    v55 = v27;
    operator delete(v26, v51);
    v27 = v55;
    goto LABEL_50;
  }
  v27 = (__int64)(v3 + 1);
  *v3 = v25;
  a1[3] = (__int64)(v3 + 1);
LABEL_28:
  v28 = v27 - (_QWORD)v26;
  v29 = (v28 >> 3) - 1;
  v30 = ((v28 >> 3) - 2) / 2;
  if ( v29 > 0 )
  {
    while ( 1 )
    {
      v31 = (unsigned __int64 *)&v26[8 * v30];
      v32 = sub_3FDA00(v25, *v31, a2);
      result = (__int64)&v26[8 * v29];
      if ( !v32 )
        break;
      v29 = v30;
      *(_QWORD *)result = *v31;
      if ( !v30 )
      {
        *v31 = v25;
        return (__int64)v26;
      }
      v30 = (v30 - 1) / 2;
    }
  }
  else
  {
    result = (__int64)&v26[v28 - 8];
  }
  *(_QWORD *)result = v25;
  return result;
}

