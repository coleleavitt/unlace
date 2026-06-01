__int64 __fastcall sub_B67070(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r12
  unsigned __int64 v15; // r14
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
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // r15
  __int64 v31; // r14
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r15
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  _DWORD *v47; // rcx
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rdi
  _QWORD *v51; // rdi
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 *v56; // rcx
  __int64 v57; // rdi
  unsigned __int64 *v58; // rdx
  unsigned __int64 *v59; // rax
  unsigned __int64 *v60; // rcx
  unsigned __int64 *v61; // rax
  unsigned __int64 *v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(*(_QWORD *)(sub_EDE580(a2, a1) + 72) + 48LL);
  if ( (v6 & 4) == 0 )
    goto LABEL_2;
  v6 &= 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_BYTE *)(a3 + 20) )
  {
    v56 = *(unsigned __int64 **)a3;
    v7 = *(unsigned int *)(a3 + 12);
    v57 = 8 * v7;
    v58 = (unsigned __int64 *)(*(_QWORD *)a3 + 8 * v7);
    if ( *(unsigned __int64 **)a3 != v58 )
    {
      v59 = *(unsigned __int64 **)a3;
      if ( v6 == *v56 )
        goto LABEL_81;
      v59 = v56 + 1;
      if ( v58 != v56 + 1 )
      {
        while ( v6 != *v59 )
        {
          if ( v58 == ++v59 )
            goto LABEL_79;
        }
        goto LABEL_81;
      }
    }
LABEL_79:
    if ( (unsigned int)v7 < *(_DWORD *)(a3 + 8) )
    {
      v7 = (unsigned int)(v7 + 1);
      *(_DWORD *)(a3 + 12) = v7;
      *v58 = v6;
      v56 = *(unsigned __int64 **)a3;
      v59 = (unsigned __int64 *)(*(_QWORD *)a3 + v57);
      goto LABEL_81;
    }
  }
  v59 = (unsigned __int64 *)sub_2236760(a3, v6);
  v56 = *(unsigned __int64 **)a3;
  if ( !*(_BYTE *)(a3 + 20) )
  {
    v60 = &v56[*(unsigned int *)(a3 + 8)];
    goto LABEL_82;
  }
LABEL_81:
  v60 = &v56[*(unsigned int *)(a3 + 12)];
LABEL_82:
  if ( v60 != v59 && *v59 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v61 = v59 + 1;
    do
    {
      v62 = v61;
      if ( v60 == v61 )
        break;
      ++v61;
    }
    while ( *v62 >= 0xFFFFFFFFFFFFFFFELL );
  }
LABEL_2:
  v9 = *(_QWORD *)(a1 + 104);
  v10 = *(_QWORD *)(v9 + 96);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 )
  {
    v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v10 & 2) == 0 )
        goto LABEL_5;
      v35 = v12[2295];
      v36 = v9 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v35 )
      {
        v37 = v12[294];
        v12[304] += 24LL;
        v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v6 = v38 + 24;
        if ( v12[295] >= v38 + 24 && v37 )
        {
          v12[294] = v6;
          v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v6 = 24;
          v39 = sub_986170((__int64)(v12 + 294), 24, 24, 3, v7, v8);
          v38 = v39 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v39 = v35;
        v36 = v38 | 4;
        *(_DWORD *)(v39 + 8) = 0;
        *(_QWORD *)(v39 + 16) = v9;
      }
      v11 = v36 & 0xFFFFFFFFFFFFFFFELL;
      v10 = v11 | 1;
      *(_QWORD *)(v9 + 96) = v11 | 1;
    }
  }
  if ( v11 )
  {
    v11 &= 4u;
    if ( (_DWORD)v11 )
    {
      v40 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v40 )
      {
        v41 = *(_QWORD *)v40;
        v11 = *(unsigned int *)(*(_QWORD *)v40 + 12LL);
        if ( v40[2] != (_DWORD)v11 )
        {
          v40[2] = v11;
          v6 = v9;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v41 + 152LL))(v41, v9);
          v13 = *(_QWORD *)(a1 + 128);
          if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
            goto LABEL_6;
LABEL_46:
          v14 = sub_B96980(v13, v6, v11);
          goto LABEL_7;
        }
      }
    }
  }
LABEL_5:
  v13 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
    goto LABEL_46;
LABEL_6:
  v14 = *(_QWORD *)(v13 + 24);
LABEL_7:
  v15 = *(_QWORD *)(a1 + 104);
  result = *(_QWORD *)(v15 + 96);
  v17 = result;
  v18 = result & 0xFFFFFFFFFFFFFFFELL;
  if ( (result & 1) == 0 )
  {
    v6 = result & 0xFFFFFFFFFFFFFFFCLL;
    if ( (result & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (result & 2) == 0 )
      {
        v19 = *(_QWORD *)(a1 + 128);
        v20 = 3LL * *(unsigned int *)(v19 + 16);
        v21 = v14 + 24LL * *(unsigned int *)(v19 + 16);
        goto LABEL_11;
      }
      v42 = *(_QWORD *)(v6 + 18360);
      v43 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v42 )
      {
        v44 = *(_QWORD *)(v6 + 2352);
        *(_QWORD *)(v6 + 2432) += 24LL;
        v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v6 + 2360) >= v45 + 24 && v44 )
        {
          *(_QWORD *)(v6 + 2352) = v45 + 24;
          v46 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v63 = v6 + 2352;
          v6 = 24;
          v46 = sub_986170(v63, 24, 24, 3, v7, v8);
          v45 = v46 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v46 = v42;
        v43 = v45 | 4;
        *(_DWORD *)(v46 + 8) = 0;
        *(_QWORD *)(v46 + 16) = v15;
      }
      v18 = v43 & 0xFFFFFFFFFFFFFFFELL;
      v17 = v18 | 1;
      *(_QWORD *)(v15 + 96) = v18 | 1;
    }
  }
  if ( v18 )
  {
    if ( (v18 & 4) != 0 )
    {
      v47 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v47 )
      {
        v48 = *(_QWORD *)v47;
        v49 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
        if ( v47[2] != v49 )
        {
          v47[2] = v49;
          v6 = v15;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v48 + 152LL))(v48, v15);
        }
      }
    }
  }
  v19 = *(_QWORD *)(a1 + 128);
  v15 = *(_QWORD *)(a1 + 104);
  v20 = *(_QWORD *)(v15 + 96);
  v21 = v14 + 24LL * *(unsigned int *)(v19 + 16);
  v17 = v20 & 0xFFFFFFFFFFFFFFFELL;
  result = v20;
  if ( (v20 & 1) != 0 || (v6 = v20 & 0xFFFFFFFFFFFFFFFCLL, (v20 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
    if ( !v17 )
      goto LABEL_18;
LABEL_60:
    v17 &= 4u;
    if ( (_DWORD)v17 )
    {
      v20 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v20 )
      {
        v50 = *(_QWORD *)v20;
        result = *(unsigned int *)(*(_QWORD *)v20 + 12LL);
        if ( *(_DWORD *)(v20 + 8) != (_DWORD)result )
        {
          *(_DWORD *)(v20 + 8) = result;
          v6 = v15;
          result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v50 + 152LL))(v50, v15);
        }
      }
    }
    goto LABEL_18;
  }
LABEL_11:
  if ( (result & 2) == 0 )
    goto LABEL_19;
  v22 = *(_QWORD *)(v6 + 18360);
  v23 = v15 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v22 )
  {
    v24 = *(_QWORD *)(v6 + 2352);
    *(_QWORD *)(v6 + 2432) += 24LL;
    v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v6 + 2360) >= v25 + 24 && v24 )
    {
      *(_QWORD *)(v6 + 2352) = v25 + 24;
      result = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v64 = v6 + 2352;
      v6 = 24;
      result = sub_986170(v64, 24, 24, 3, v7, v8);
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
    goto LABEL_60;
LABEL_18:
  v19 = *(_QWORD *)(a1 + 128);
LABEL_19:
  if ( (*(_BYTE *)(v19 + 24) & 1) != 0 )
  {
    result = sub_B96980(v19, v6, v20);
    v26 = result;
  }
  else
  {
    v26 = *(_QWORD *)(v19 + 24);
  }
  if ( v26 != v21 )
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
        v27 = sub_F64F00(**(_QWORD **)(v26 + 16));
      v28 = sub_F63240(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), v6, v20, v17, v7);
      v30 = *(_QWORD *)(v28 + 104);
      v31 = v28;
      v32 = *(_QWORD *)(v30 + 96);
      if ( (v32 & 1) != 0 )
        break;
      v51 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v32 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (v32 & 2) != 0 )
      {
        v7 = v51[2295];
        v52 = v30 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v7 )
        {
          v53 = v51[294];
          v51[304] += 24LL;
          v54 = (v53 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v17 = v54 + 24;
          if ( v51[295] >= v54 + 24 && v53 )
          {
            v51[294] = v17;
            v55 = (v53 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v6 = 24;
            v65 = v7;
            v55 = sub_986170((__int64)(v51 + 294), 24, 24, 3, v7, v29);
            v7 = v65;
            v54 = v55 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v55 = v7;
          v52 = v54 | 4;
          *(_DWORD *)(v55 + 8) = 0;
          *(_QWORD *)(v55 + 16) = v30;
        }
        v20 = v52 & 0xFFFFFFFFFFFFFFFELL;
        v32 = v20 | 1;
        *(_QWORD *)(v30 + 96) = v20 | 1;
        goto LABEL_26;
      }
LABEL_31:
      result = *(unsigned int *)(*(_QWORD *)(v31 + 128) + 20LL);
      if ( (_DWORD)result )
      {
        v6 = a2;
        result = sub_B67070(v31, a2, a3);
      }
      v26 += 24;
      if ( v26 == v21 )
        return result;
    }
    v20 = v32 & 0xFFFFFFFFFFFFFFFELL;
LABEL_26:
    if ( v20 )
    {
      v20 &= 4u;
      if ( (_DWORD)v20 )
      {
        v33 = (_DWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v33 )
        {
          v34 = *(_QWORD *)v33;
          v20 = *(unsigned int *)(*(_QWORD *)v33 + 12LL);
          if ( v33[2] != (_DWORD)v20 )
          {
            v33[2] = v20;
            v6 = v30;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v34 + 152LL))(v34, v30);
          }
        }
      }
    }
    goto LABEL_31;
  }
  return result;
}
