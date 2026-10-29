_BYTE *__fastcall sub_A6DF90(__int64 a1)
{
  __int64 v1; // rbp
  _BYTE *result; // rax
  __int64 v3; // r13
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned int *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r11
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v14; // r10d
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r9
  __int64 *i; // rdx
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rcx
  int v23; // r8d
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdi
  _BYTE *v32; // r9
  unsigned int v33; // r10d
  __int64 v34; // rcx
  __int64 *v35; // rdi
  __int64 v36; // r11
  int v37; // r8d
  __int64 v38; // rsi
  __int64 *v39; // r15
  __int64 *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // edi
  __int64 *v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // edx
  __int64 *v52; // rsi
  __int64 v53; // rdx
  __int64 *v54; // r8
  __int64 *j; // rax
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 *v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+8h] [rbp-F0h]
  __int64 v61; // [rsp+10h] [rbp-E8h]
  _BYTE *v62; // [rsp+20h] [rbp-D8h]
  __int64 v63; // [rsp+28h] [rbp-D0h]
  _BYTE *v64; // [rsp+30h] [rbp-C8h]
  __int64 v65; // [rsp+38h] [rbp-C0h]
  _BYTE v66[184]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v1 + 8576);
  if ( !result )
    return result;
  v3 = *((unsigned int *)result - 1);
  if ( !(_DWORD)v3 )
    return result;
  v5 = 8 * v3;
  v6 = 0;
  while ( 2 )
  {
    v7 = *(unsigned int **)&result[v6];
    if ( (unsigned int)sub_8E7030(v1) )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v1 + 7488) + 56LL))(
                          *(_QWORD *)(v1 + 7488),
                          v7);
      if ( !(_BYTE)result )
        goto LABEL_5;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8656LL) + 8LL * *v7);
    result = *(_BYTE **)v8;
    v9 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
    if ( (*(_BYTE *)(v8 + 44) & 8) != 0 || (v10 = *((unsigned int *)result + 6), !(_DWORD)v10) )
    {
      result = (_BYTE *)sub_A6DEB0(a1, *(_QWORD *)(*(_QWORD *)v8 + 16LL));
      if ( !(_BYTE)result )
        goto LABEL_5;
      v20 = *(_QWORD *)(v8 + 8);
      v21 = *(unsigned int *)(a1 + 40);
      v22 = *(__int64 **)(a1 + 32);
      v23 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
      v24 = v21 - 1;
      v21 *= 16;
      v25 = (__int64 *)((char *)v22 + v21);
      v26 = 16LL * (v23 & v24);
      v27 = &v22[(unsigned __int64)v26 / 8];
      if ( v26 != v21 )
      {
        v28 = &v22[(unsigned __int64)v26 / 8];
        do
        {
          while ( 1 )
          {
            v29 = *v28;
            if ( (unsigned __int64)*v28 <= 1 )
              break;
            if ( *(_DWORD *)(*(_QWORD *)v29 + 12LL) == v23 && v20 == v29 )
              goto LABEL_39;
            v28 += 2;
            if ( v25 == v28 )
              goto LABEL_30;
          }
          if ( !v29 )
            goto LABEL_113;
          v28 += 2;
        }
        while ( v25 != v28 );
      }
LABEL_30:
      while ( v27 != v22 )
      {
        v30 = *v22;
        if ( (unsigned __int64)*v22 > 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v30 + 12LL) == v23 && v20 == v30 )
          {
            v28 = v22;
LABEL_39:
            result = (_BYTE *)sub_135F9B0(*(_QWORD *)(a1 + 72), v9, v28[1]);
            goto LABEL_5;
          }
        }
        else if ( !v30 )
        {
          break;
        }
        v22 += 2;
      }
LABEL_113:
      BUG();
    }
    if ( v8 != *(_QWORD *)(v8 + 24) )
      goto LABEL_5;
    result = (_BYTE *)sub_A6DEB0(a1, *(_QWORD *)(*(_QWORD *)v8 + 16LL));
    if ( !(_BYTE)result )
      goto LABEL_5;
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *(unsigned int *)(a1 + 40);
    v64 = v66;
    v13 = v12 - 1;
    v65 = 0x1000000000LL;
    v14 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
    v15 = *(__int64 **)(a1 + 32);
    v16 = 2LL * (v14 & (unsigned int)(v12 - 1));
    v17 = &v15[v16];
    if ( v16 == 2 * v12 )
    {
LABEL_41:
      if ( v15 != v17 )
      {
        for ( i = *(__int64 **)(a1 + 32); v17 != i; i += 2 )
        {
          v31 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(*(_QWORD *)v31 + 12LL) == v14 && v11 == v31 )
              goto LABEL_49;
          }
          else if ( !v31 )
          {
            break;
          }
        }
      }
LABEL_112:
      BUG();
    }
    v59 = &v15[v16];
    i = &v15[v16];
    while ( 1 )
    {
      v19 = *i;
      if ( (unsigned __int64)*i <= 1 )
      {
        if ( !v19 )
          goto LABEL_112;
        goto LABEL_17;
      }
      if ( *(_DWORD *)(*(_QWORD *)v19 + 12LL) == v14 && v11 == v19 )
        break;
LABEL_17:
      i += 2;
      if ( &v15[2 * v12] == i )
      {
        v17 = v59;
        goto LABEL_41;
      }
    }
LABEL_49:
    v32 = v66;
    v33 = 0;
    v63 = i[1];
    v60 = v8 + 8 * v10;
    while ( 1 )
    {
      v34 = 16 * v12;
      v35 = &v15[(unsigned __int64)v34 / 8];
      v36 = *(_QWORD *)(*(_QWORD *)(v8 + 112) + 8LL);
      v37 = *(_DWORD *)(*(_QWORD *)v36 + 12LL);
      v38 = 16LL * (v37 & v13);
      v39 = &v15[(unsigned __int64)v38 / 8];
      if ( v38 == v34 )
      {
LABEL_58:
        while ( v39 != v15 )
        {
          v42 = *v15;
          if ( (unsigned __int64)*v15 > 1 )
          {
            if ( *(_DWORD *)(*(_QWORD *)v42 + 12LL) == v37 && v36 == v42 )
            {
              v40 = v15;
              goto LABEL_67;
            }
          }
          else if ( !v42 )
          {
            break;
          }
          v15 += 2;
        }
LABEL_111:
        BUG();
      }
      v40 = &v15[(unsigned __int64)v38 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v41 = *v40;
          if ( (unsigned __int64)*v40 > 1 )
            break;
          if ( !v41 )
            goto LABEL_111;
          v40 += 2;
          if ( v35 == v40 )
            goto LABEL_58;
        }
        if ( *(_DWORD *)(*(_QWORD *)v41 + 12LL) == v37 && v36 == v41 )
          break;
        v40 += 2;
        if ( v35 == v40 )
          goto LABEL_58;
      }
LABEL_67:
      v43 = v40[1];
      if ( v33 >= HIDWORD(v65) )
      {
        v61 = v43;
        v45 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v65)));
        v33 = v65;
        v32 = (_BYTE *)v45;
        v43 = v61;
        if ( (_DWORD)v65 )
        {
          if ( (unsigned int)(v65 - 1) <= 2 || (_BYTE *)v45 == v64 + 8 )
          {
            v58 = 0;
            do
            {
              *(_QWORD *)&v32[v58] = *(_QWORD *)&v64[v58];
              v58 += 8;
            }
            while ( v58 != 8LL * (unsigned int)v65 );
          }
          else
          {
            v46 = 0;
            do
            {
              *(__m128i *)&v32[v46] = _mm_loadu_si128((const __m128i *)&v64[v46]);
              v46 += 16;
            }
            while ( v46 != 16LL * ((unsigned int)v65 >> 1) );
            if ( (v65 & 1) != 0 )
              *(_QWORD *)&v32[8 * (v65 & 0xFFFFFFFE)] = *(_QWORD *)&v64[8 * (v65 & 0xFFFFFFFE)];
          }
        }
        if ( v64 != v66 && v64 )
        {
          v62 = v32;
          sub_186B220(v64);
          v33 = v65;
          v32 = v62;
          v43 = v61;
        }
        v64 = v32;
        HIDWORD(v65) *= 2;
      }
      v44 = v33;
      v8 += 8;
      ++v33;
      *(_QWORD *)&v32[8 * v44] = v43;
      LODWORD(v65) = v33;
      if ( v8 == v60 )
        break;
      v12 = *(unsigned int *)(a1 + 40);
      v15 = *(__int64 **)(a1 + 32);
      v13 = v12 - 1;
    }
    v47 = *(_QWORD *)(a1 + 72);
    v48 = *(_DWORD *)(v9 + 12);
    v49 = *(__int64 **)(v47 + 48);
    v50 = *(unsigned int *)(v47 + 56);
    v51 = v50 - 1;
    v50 *= 16;
    v52 = (__int64 *)((char *)v49 + v50);
    v53 = 16LL * (v48 & v51);
    v54 = (__int64 *)((char *)v49 + v53);
    if ( v53 != v50 )
    {
      for ( j = (__int64 *)((char *)v49 + v53); v52 != j; j += 2 )
      {
        v53 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v53 + 12) == v48 && v53 == v9 )
          {
LABEL_95:
            v56 = j[1];
            if ( !v56 )
              goto LABEL_88;
            goto LABEL_89;
          }
        }
        else if ( !v53 )
        {
          goto LABEL_88;
        }
      }
    }
    for ( ; v54 != v49; v49 += 2 )
    {
      v57 = *v49;
      if ( (unsigned __int64)*v49 > 1 )
      {
        if ( *(_DWORD *)(v57 + 12) == v48 && v57 == v9 )
        {
          j = v49;
          goto LABEL_95;
        }
      }
      else if ( !v57 )
      {
        break;
      }
    }
LABEL_88:
    v56 = sub_186B270(0x38u);
    sub_13478B0(v56, *(_QWORD *)a1, *(unsigned int *)(v9 + 32));
    sub_135F980(*(_QWORD *)(a1 + 72), v9, v56);
    v32 = v64;
LABEL_89:
    if ( !sub_1347AE0(v56, v32, v53) )
      sub_1348F50(v56, v64, v63);
    result = v66;
    if ( v64 != v66 )
    {
      if ( v64 )
        result = (_BYTE *)sub_186B220(v64);
    }
LABEL_5:
    v6 += 8;
    if ( v6 != v5 )
    {
      v1 = *(_QWORD *)(a1 + 8);
      result = *(_BYTE **)(v1 + 8576);
      continue;
    }
    return result;
  }
}

