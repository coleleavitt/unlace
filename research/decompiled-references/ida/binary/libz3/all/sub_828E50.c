__int64 __fastcall sub_828E50(int **a1, int **a2)
{
  int *v4; // rbx
  __int64 v5; // rax
  int *v6; // r14
  void *v7; // rbp
  int *v8; // rsi
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int *v12; // rbp
  int v13; // eax
  int v14; // eax
  void *v15; // r14
  __int64 result; // rax
  char *v17; // rdi
  int v18; // ecx
  __int64 v19; // rsi
  char *v20; // rdx
  int *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // esi
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // r12
  int v28; // r15d
  int *v29; // rbp
  unsigned int v30; // r11d
  __int64 v31; // r9
  int *v32; // r12
  __int64 v33; // r11
  int *v34; // rcx
  int *v35; // rax
  int *v36; // rdi
  int v37; // edx
  int v38; // eax
  int *v39; // rax
  int v40; // r10d
  int *v41; // rdx
  int *v42; // rcx
  int *v43; // r8
  __int64 v44; // rax
  int *v45; // rdx
  int *v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  unsigned int v53; // esi
  __int64 v54; // [rsp+8h] [rbp-60h]
  size_t v55; // [rsp+10h] [rbp-58h]
  int *v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+20h] [rbp-48h]
  int v58; // [rsp+28h] [rbp-40h]
  int v59; // [rsp+2Ch] [rbp-3Ch]

  if ( a2 != a1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = (unsigned int)*(v4 - 1);
      if ( (_DWORD)v5 )
      {
        v6 = &v4[10 * v5];
        do
        {
          v7 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v4 + 2);
          v8 = v4 + 6;
          v4 += 10;
          sub_182CBA0(v7, v8);
        }
        while ( v4 != v6 );
        v4 = *a1;
      }
      sub_186B220(v4 - 2);
    }
    if ( *a2 )
    {
      v9 = _mm_loadl_epi64((const __m128i *)(*a2 - 2));
      v54 = v9.m128i_i64[0];
      v10 = (_QWORD *)sub_186B270(40LL * (unsigned int)_mm_cvtsi128_si32(v9) + 8);
      v11 = v10 + 1;
      *a1 = (int *)(v10 + 1);
      v12 = *a2;
      v55 = (size_t)(v10 + 1);
      *v10 = v9.m128i_i64[0];
      if ( v12 )
      {
        v54 = (__int64)&v12[10 * *(v12 - 1)];
        if ( v12 != (int *)v54 )
        {
          while ( 1 )
          {
            v14 = *v12;
            v15 = qword_1C7F2C0;
            *((_DWORD *)v11 + 2) = 0;
            *((_BYTE *)v11 + 12) &= 0xFCu;
            *((_BYTE *)v11 + 28) &= 0xFCu;
            *(_DWORD *)v11 = v14;
            v11[2] = 0;
            *((_DWORD *)v11 + 6) = 1;
            v11[4] = 0;
            if ( (v12[3] & 1) != 0 )
            {
              sub_182C690(v15, v11 + 1, v12 + 2);
              if ( (v12[7] & 1) != 0 )
                goto LABEL_16;
LABEL_13:
              v13 = v12[6];
              *((_BYTE *)v11 + 28) &= ~1u;
              v12 += 10;
              v11 += 5;
              *((_DWORD *)v11 - 4) = v13;
              if ( (int *)v54 == v12 )
                break;
            }
            else
            {
              *((_DWORD *)v11 + 2) = v12[2];
              if ( (v12[7] & 1) == 0 )
                goto LABEL_13;
LABEL_16:
              sub_182C690(v15, v11 + 3, v12 + 6);
              v12 += 10;
              v11 += 5;
              if ( (int *)v54 == v12 )
                break;
            }
          }
        }
      }
    }
    else
    {
      *a1 = nullptr;
    }
  }
  result = (__int64)(a2 + 1);
  if ( a1 + 1 == a2 + 1 )
    return result;
  if ( !*((_DWORD *)a1 + 5) && !*((_DWORD *)a1 + 6) )
    goto LABEL_26;
  v17 = (char *)a1[1];
  v18 = 0;
  v19 = *((unsigned int *)a1 + 4);
  v20 = &v17[12 * v19];
  v21 = a1[1];
  if ( v17 != v20 )
  {
    do
    {
      while ( v21[1] )
      {
        v21[1] = 0;
        v21 += 3;
        if ( v20 == (char *)v21 )
          goto LABEL_24;
      }
      v21 += 3;
      ++v18;
    }
    while ( v20 != (char *)v21 );
LABEL_24:
    if ( (unsigned int)v19 > 0x10 && 3 * (int)v19 < (unsigned int)(4 * v18) )
    {
      if ( v17 )
      {
        sub_186B220(v17);
        v48 = *((_DWORD *)a1 + 4);
        a1[1] = nullptr;
        v49 = v48 >> 1;
        *((_DWORD *)a1 + 4) = v49;
        v50 = (_QWORD *)sub_186B270(12LL * v49);
        v51 = (__int64)v50;
        if ( !v49 )
        {
LABEL_99:
          a1[1] = (int *)v51;
          goto LABEL_25;
        }
        if ( v49 == 1 )
        {
LABEL_98:
          *v50 = 0;
          goto LABEL_99;
        }
      }
      else
      {
        v53 = (unsigned int)v19 >> 1;
        a1[1] = nullptr;
        *((_DWORD *)a1 + 4) = v53;
        v49 = v53;
        v51 = sub_186B270(12LL * v53);
      }
      v52 = (_QWORD *)v51;
      do
      {
        *v52 = 0;
        v52 += 3;
        *(_QWORD *)((char *)v52 - 12) = 0;
      }
      while ( v52 != (_QWORD *)(v51 + 24LL * (v49 >> 1)) );
      if ( (v49 & 1) == 0 )
        goto LABEL_99;
      v50 = (_QWORD *)(v51 + 12LL * (v49 & 0x7FFFFFFE));
      goto LABEL_98;
    }
  }
LABEL_25:
  *(int **)((char *)a1 + 20) = nullptr;
LABEL_26:
  v22 = (__int64)a2[1];
  result = 3LL * *((unsigned int *)a2 + 4);
  v23 = v22 + 12LL * *((unsigned int *)a2 + 4);
  if ( v22 == v23 )
    return result;
  while ( *(_DWORD *)(v22 + 4) != 2 )
  {
    v22 += 12;
    if ( v23 == v22 )
      return result;
  }
  if ( v23 == v22 )
    return result;
  v24 = 0;
  v25 = 0;
  v26 = v23;
  while ( 2 )
  {
    v27 = *((unsigned int *)a1 + 4);
    v28 = *(_DWORD *)(v22 + 8);
    if ( 3 * (int)v27 < (unsigned int)(4 * (v24 + v25)) )
    {
      LODWORD(v56) = 2 * v27;
      v54 = 12LL * (unsigned int)(2 * v27);
      v55 = v54;
      v39 = (int *)sub_186B270(v54);
      v40 = (int)v56;
      v31 = v55;
      v29 = v39;
      if ( (_DWORD)v56 )
      {
        v41 = &v39[6 * (v27 & 0x7FFFFFFF)];
        do
        {
          *(_QWORD *)v39 = 0;
          v39 += 6;
          *(_QWORD *)(v39 - 3) = 0;
        }
        while ( v39 != v41 );
      }
      v42 = a1[1];
      v30 = v40 - 1;
      v43 = &v42[3 * *((unsigned int *)a1 + 4)];
      v32 = (int *)((char *)v29 + v54);
      if ( v42 != v43 )
      {
        do
        {
          while ( v42[1] != 2 )
          {
            v42 += 3;
            if ( v43 == v42 )
              goto LABEL_73;
          }
          v44 = 12LL * (*v42 & v30);
          v45 = &v29[(unsigned __int64)v44 / 4];
          if ( v54 == v44 )
          {
LABEL_78:
            if ( v29 == v45 )
            {
LABEL_85:
              v59 = v40;
              v57 = v31;
              v58 = v40 - 1;
              v56 = v43;
              v55 = (size_t)v42;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v46 = v29;
            while ( v46[1] )
            {
              v46 += 3;
              if ( v45 == v46 )
                goto LABEL_85;
            }
          }
          else
          {
            v46 = &v29[(unsigned __int64)v44 / 4];
            while ( v46[1] )
            {
              v46 += 3;
              if ( v32 == v46 )
                goto LABEL_78;
            }
          }
          v47 = *(_QWORD *)v42;
          v42 += 3;
          *(_QWORD *)v46 = v47;
          v46[2] = *(v42 - 1);
        }
        while ( v43 != v42 );
LABEL_73:
        v43 = a1[1];
      }
      if ( v43 )
      {
        LODWORD(v56) = v40;
        v55 = v31;
        LODWORD(v54) = v40 - 1;
        sub_186B220(v43);
        v40 = (int)v56;
        v31 = v55;
        v30 = v54;
      }
      a1[1] = v29;
      v24 = 0;
      *((_DWORD *)a1 + 4) = v40;
      *((_DWORD *)a1 + 6) = 0;
    }
    else
    {
      v29 = a1[1];
      v30 = v27 - 1;
      v31 = 12 * v27;
      v32 = &v29[3 * v27];
    }
    v33 = v28 & v30;
    v34 = &v29[3 * v33];
    if ( 12 * v33 != v31 )
    {
      v35 = &v29[3 * v33];
      v36 = nullptr;
      while ( 1 )
      {
        v37 = v35[1];
        if ( v37 == 2 )
        {
          if ( v28 == *v35 && v28 == v35[2] )
          {
            v35[2] = v28;
            v35[1] = 2;
            result = v22 + 12;
            if ( v26 != v22 + 12 )
              goto LABEL_58;
            return result;
          }
        }
        else
        {
          if ( !v37 )
          {
            if ( v36 )
              goto LABEL_53;
            v36 = v35;
            goto LABEL_54;
          }
          v36 = v35;
        }
        v35 += 3;
        if ( v35 == v32 )
          goto LABEL_47;
      }
    }
    v36 = nullptr;
    while ( 1 )
    {
LABEL_47:
      if ( v34 == v29 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v38 = v29[1];
      if ( v38 != 2 )
        break;
      if ( v28 == *v29 && v28 == v29[2] )
      {
        v29[2] = v28;
        v29[1] = 2;
        goto LABEL_55;
      }
LABEL_46:
      v29 += 3;
    }
    if ( v38 )
    {
      v36 = v29;
      goto LABEL_46;
    }
    if ( v36 )
LABEL_53:
      *((_DWORD *)a1 + 6) = v24 - 1;
    else
      v36 = v29;
LABEL_54:
    v36[2] = v28;
    v36[1] = 2;
    *v36 = v28;
    ++*((_DWORD *)a1 + 5);
LABEL_55:
    result = v22 + 12;
    if ( v26 == v22 + 12 )
      return result;
LABEL_58:
    while ( 1 )
    {
      v22 = result;
      if ( *(_DWORD *)(result + 4) == 2 )
        break;
      result += 12;
      if ( v26 == result )
        return result;
    }
    if ( v26 != result )
    {
      v25 = *((_DWORD *)a1 + 5);
      v24 = *((_DWORD *)a1 + 6);
      continue;
    }
    return result;
  }
}

