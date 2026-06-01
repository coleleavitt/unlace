__int64 __fastcall sub_1D3D1C0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  _QWORD *v6; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r12
  unsigned __int64 v15; // rbp
  __int64 result; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 *v28; // rbp
  __int64 v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rdi
  int v40; // edx
  __int64 v41; // r15
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  _DWORD *v46; // rcx
  __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rdi

  v6 = a2;
  v9 = *(_QWORD *)(a3 + 104);
  v10 = *(_QWORD *)(v9 + 96);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 )
  {
    v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v10 & 2) == 0 )
        goto LABEL_4;
      v33 = v12[2295];
      v34 = v9 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v33 )
      {
        v35 = v12[294];
        v12[304] += 24LL;
        v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        a2 = (_QWORD *)(v36 + 24);
        if ( v12[295] >= v36 + 24 && v35 )
        {
          v12[294] = a2;
          v37 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          a2 = &qword_18;
          v37 = sub_986170((__int64)(v12 + 294), 24, 24, 3, (__int64)a5, a6);
          v36 = v37 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v37 = v33;
        v34 = v36 | 4;
        *(_DWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = v9;
      }
      v11 = v34 & 0xFFFFFFFFFFFFFFFELL;
      v10 = v11 | 1;
      *(_QWORD *)(v9 + 96) = v11 | 1;
    }
  }
  if ( v11 )
  {
    if ( (v11 & 4) != 0 )
    {
      v38 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v38 )
      {
        v39 = *(_QWORD *)v38;
        v40 = *(_DWORD *)(*(_QWORD *)v38 + 12LL);
        if ( v38[2] != v40 )
        {
          v38[2] = v40;
          a2 = (_QWORD *)v9;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v39 + 152LL))(v39, v9);
          v13 = *(_QWORD *)(a3 + 128);
          if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
            goto LABEL_5;
LABEL_51:
          v14 = sub_B96980(v13);
          goto LABEL_6;
        }
      }
    }
  }
LABEL_4:
  v13 = *(_QWORD *)(a3 + 128);
  if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
    goto LABEL_51;
LABEL_5:
  v14 = *(_QWORD *)(v13 + 24);
LABEL_6:
  v15 = *(_QWORD *)(a3 + 104);
  result = *(_QWORD *)(v15 + 96);
  v17 = result;
  v18 = result & 0xFFFFFFFFFFFFFFFELL;
  if ( (result & 1) == 0 )
  {
    a2 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
    if ( (result & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (result & 2) == 0 )
      {
        v19 = *(_QWORD *)(a3 + 128);
        v20 = 3LL * *(unsigned int *)(v19 + 16);
        v21 = v14 + 24LL * *(unsigned int *)(v19 + 16);
        goto LABEL_10;
      }
      v41 = a2[2295];
      v42 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v41 )
      {
        v43 = a2[294];
        a2[304] += 24LL;
        v44 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a2[295] >= v44 + 24 && v43 )
        {
          a2[294] = v44 + 24;
          v45 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v52 = (__int64)(a2 + 294);
          a2 = &qword_18;
          v45 = sub_986170(v52, 24, 24, 3, (__int64)a5, a6);
          v44 = v45 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v45 = v41;
        v42 = v44 | 4;
        *(_DWORD *)(v45 + 8) = 0;
        *(_QWORD *)(v45 + 16) = v15;
      }
      v18 = v42 & 0xFFFFFFFFFFFFFFFELL;
      v17 = v18 | 1;
      *(_QWORD *)(v15 + 96) = v18 | 1;
    }
  }
  if ( v18 )
  {
    if ( (v18 & 4) != 0 )
    {
      v46 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v46 )
      {
        v47 = *(_QWORD *)v46;
        v48 = *(_DWORD *)(*(_QWORD *)v46 + 12LL);
        if ( v46[2] != v48 )
        {
          v46[2] = v48;
          a2 = (_QWORD *)v15;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v47 + 152LL))(v47, v15);
        }
      }
    }
  }
  v19 = *(_QWORD *)(a3 + 128);
  v15 = *(_QWORD *)(a3 + 104);
  v20 = *(_QWORD *)(v15 + 96);
  v21 = v14 + 24LL * *(unsigned int *)(v19 + 16);
  v17 = v20 & 0xFFFFFFFFFFFFFFFELL;
  result = v20;
  if ( (v20 & 1) != 0 || (a2 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL), (v20 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
    if ( !v17 )
      goto LABEL_17;
LABEL_65:
    v17 &= 4u;
    if ( (_DWORD)v17 )
    {
      v20 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v20 )
      {
        v49 = *(_QWORD *)v20;
        result = *(unsigned int *)(*(_QWORD *)v20 + 12LL);
        if ( *(_DWORD *)(v20 + 8) != (_DWORD)result )
        {
          *(_DWORD *)(v20 + 8) = result;
          a2 = (_QWORD *)v15;
          result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v49 + 152LL))(v49, v15);
        }
      }
    }
    goto LABEL_17;
  }
LABEL_10:
  if ( (result & 2) == 0 )
    goto LABEL_18;
  v22 = a2[2295];
  v23 = v15 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v22 )
  {
    v24 = a2[294];
    a2[304] += 24LL;
    v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[295] >= v25 + 24 && v24 )
    {
      a2[294] = v25 + 24;
      result = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v53 = (__int64)(a2 + 294);
      a2 = &qword_18;
      result = sub_986170(v53, 24, 24, 3, (__int64)a5, a6);
      v25 = result & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)result = v22;
    v23 = v25 | 4;
    *(_DWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = v15;
  }
  v17 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v20 = v17 | 1;
  *(_QWORD *)(v15 + 96) = v17 | 1;
  if ( v17 )
    goto LABEL_65;
LABEL_17:
  v19 = *(_QWORD *)(a3 + 128);
LABEL_18:
  if ( (*(_BYTE *)(v19 + 24) & 1) != 0 )
  {
    result = sub_B96980(v19);
    v26 = result;
  }
  else
  {
    v26 = *(_QWORD *)(v19 + 24);
  }
  while ( v26 != v21 )
  {
    v27 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
      v28 = (__int64 *)(sub_F64F00(**(_QWORD **)(v26 + 16), (__int64)a2, v20, v17, (__int64)a5) & 0xFFFFFFFFFFFFFFF0LL);
    else
      v28 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
    v29 = *a1;
    v30 = sub_F63270(*v28, (__int64)a2, v20, v17, (__int64)a5, a6);
    v20 = *(unsigned __int8 *)(v29 + 20);
    if ( (_BYTE)v20 )
    {
      v31 = *(_QWORD **)v29;
      a6 = *(unsigned int *)(v29 + 12);
      v32 = 8 * a6;
      a5 = (_QWORD *)(*(_QWORD *)v29 + 8 * a6);
      if ( *(_QWORD **)v29 != a5 )
      {
        v17 = *(_QWORD *)v29;
        if ( v30 == (_QWORD *)*v31 )
        {
LABEL_75:
          v20 = 0;
          goto LABEL_31;
        }
        while ( 1 )
        {
          v17 += 8LL;
          if ( a5 == (_QWORD *)v17 )
            break;
          if ( v30 == *(_QWORD **)v17 )
            goto LABEL_75;
        }
      }
      if ( (unsigned int)a6 < *(_DWORD *)(v29 + 8) )
      {
        a6 = (unsigned int)(a6 + 1);
        *(_DWORD *)(v29 + 12) = a6;
        *a5 = v30;
        v31 = *(_QWORD **)v29;
        v17 = *(_QWORD *)v29 + v32;
LABEL_31:
        result = *(unsigned int *)(v29 + 12);
        a2 = &v31[result];
        goto LABEL_32;
      }
    }
    v50 = sub_2236760(v29, v30);
    v31 = *(_QWORD **)v29;
    v17 = v50;
    if ( *(_BYTE *)(v29 + 20) )
      goto LABEL_31;
    result = *(unsigned int *)(v29 + 8);
    a2 = &v31[result];
LABEL_32:
    if ( a2 != (_QWORD *)v17 )
    {
      result = *(_QWORD *)v17 + 2LL;
      if ( *(_QWORD *)v17 == -2 || result == 1 )
      {
        do
          v17 += 8LL;
        while ( a2 != (_QWORD *)v17 && *(_QWORD *)v17 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
    if ( (_BYTE)v20 )
    {
      v51 = *v6;
      result = *(unsigned int *)(*v6 + 8LL);
      v17 = *(unsigned int *)(*v6 + 12LL);
      if ( result + 1 > v17 )
      {
        a2 = (_QWORD *)(v51 + 16);
        sub_2237220(*v6, v51 + 16, result + 1, 8);
        result = *(unsigned int *)(v51 + 8);
      }
      v20 = *(_QWORD *)v51;
      *(_QWORD *)(*(_QWORD *)v51 + 8 * result) = v28;
      ++*(_DWORD *)(v51 + 8);
    }
    v26 += 24;
  }
  return result;
}
