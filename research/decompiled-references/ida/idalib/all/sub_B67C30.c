__int64 __fastcall sub_B67C30(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 i; // r13
  unsigned __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // r15
  __int64 v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // r14
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // r15
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  _DWORD *v51; // rcx
  __int64 v52; // rdi
  int v53; // eax
  __int64 v54; // rdi
  __int64 v55; // r15
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // r14
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // [rsp+8h] [rbp-40h]

  v3 = (__int64)a2;
  v4 = sub_B8C330(a1);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = v4;
  result = *(_QWORD *)(v7 + 96);
  if ( (result & 1) != 0 )
  {
    v10 = result & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v14 = *(_QWORD *)(v7 + 96);
    v10 = result & 0xFFFFFFFFFFFFFFFELL;
    a2 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
    if ( (result & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (result & 2) == 0 )
      {
        v13 = *(_QWORD *)(a1 + 128);
        result = *(unsigned int *)(v13 + 20);
        if ( !(_DWORD)result )
          return result;
LABEL_13:
        v14 &= 2u;
        if ( !(_DWORD)v14 )
        {
          if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
          {
LABEL_51:
            v15 = sub_B96980(v13, a2, v10);
            goto LABEL_16;
          }
LABEL_15:
          v15 = *(_QWORD *)(v13 + 24);
LABEL_16:
          v16 = *(_QWORD *)(a1 + 104);
          result = *(_QWORD *)(v16 + 96);
          v17 = result;
          v18 = result & 0xFFFFFFFFFFFFFFFELL;
          if ( (result & 1) == 0 )
          {
            a2 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
            if ( (result & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              if ( (result & 2) == 0 )
              {
                v19 = *(_QWORD *)(a1 + 128);
                v20 = 3LL * *(unsigned int *)(v19 + 16);
                v21 = v15 + 24LL * *(unsigned int *)(v19 + 16);
LABEL_20:
                if ( (result & 2) == 0 )
                {
                  if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
                  {
LABEL_22:
                    i = *(_QWORD *)(v19 + 24);
                    goto LABEL_32;
                  }
                  goto LABEL_76;
                }
                v55 = a2[2295];
                v56 = v16 & 0xFFFFFFFFFFFFFFFBLL;
                if ( v55 )
                {
                  v57 = a2[294];
                  a2[304] += 24LL;
                  v58 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( a2[295] >= v58 + 24 && v57 )
                  {
                    a2[294] = v58 + 24;
                    result = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v65 = (__int64)(a2 + 294);
                    a2 = &qword_18;
                    result = sub_986170(v65, 24, 24, 3, v5, v6);
                    v58 = result & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)result = v55;
                  v56 = v58 | 4;
                  *(_DWORD *)(result + 8) = 0;
                  *(_QWORD *)(result + 16) = v16;
                }
                v17 = v56 & 0xFFFFFFFFFFFFFFFELL;
                v20 = v17 | 1;
                *(_QWORD *)(v16 + 96) = v17 | 1;
LABEL_70:
                if ( v17 )
                {
                  v17 &= 4u;
                  if ( (_DWORD)v17 )
                  {
                    v20 &= 0xFFFFFFFFFFFFFFF8LL;
                    if ( v20 )
                    {
                      v54 = *(_QWORD *)v20;
                      result = *(unsigned int *)(*(_QWORD *)v20 + 12LL);
                      if ( *(_DWORD *)(v20 + 8) != (_DWORD)result )
                      {
                        *(_DWORD *)(v20 + 8) = result;
                        a2 = (_QWORD *)v16;
                        result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v54 + 152LL))(
                                   v54,
                                   v16);
                      }
                    }
                  }
                }
                v19 = *(_QWORD *)(a1 + 128);
                if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
                  goto LABEL_22;
LABEL_76:
                result = sub_B96980(v19, a2, v20);
                for ( i = result; ; i += 24 )
                {
LABEL_32:
                  if ( i == v21 )
                    return result;
                  v27 = *(_QWORD *)(**(_QWORD **)(i + 16) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
                    v27 = sub_F64F00(**(_QWORD **)(i + 16));
                  v28 = sub_F63240(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), a2, v20, v17, v5);
                  v30 = *(_QWORD *)(v28 + 104);
                  v31 = v28;
                  v32 = *(_QWORD *)(v30 + 96);
                  if ( (v32 & 1) != 0 )
                  {
                    v23 = v32 & 0xFFFFFFFFFFFFFFFELL;
                  }
                  else
                  {
                    v33 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v32 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v32 & 2) == 0 )
                      goto LABEL_29;
                    v5 = v33[2295];
                    v34 = v30 & 0xFFFFFFFFFFFFFFFBLL;
                    if ( v5 )
                    {
                      v35 = v33[294];
                      v33[304] += 24LL;
                      v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      v17 = v36 + 24;
                      if ( v33[295] >= v36 + 24 && v35 )
                      {
                        v33[294] = v17;
                        v37 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      }
                      else
                      {
                        a2 = &qword_18;
                        v68 = v5;
                        v37 = sub_986170((__int64)(v33 + 294), 24, 24, 3, v5, v29);
                        v5 = v68;
                        v36 = v37 & 0xFFFFFFFFFFFFFFFBLL;
                      }
                      *(_QWORD *)v37 = v5;
                      v34 = v36 | 4;
                      *(_DWORD *)(v37 + 8) = 0;
                      *(_QWORD *)(v37 + 16) = v30;
                    }
                    v23 = v34 & 0xFFFFFFFFFFFFFFFELL;
                    v32 = v23 | 1;
                    *(_QWORD *)(v30 + 96) = v23 | 1;
                  }
                  if ( v23 )
                  {
                    if ( (v23 & 4) != 0 )
                    {
                      v24 = (_DWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v24 )
                      {
                        v25 = *(_QWORD *)v24;
                        v26 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
                        if ( v24[2] != v26 )
                        {
                          v24[2] = v26;
                          a2 = (_QWORD *)v30;
                          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v25 + 152LL))(v25, v30);
                        }
                      }
                    }
                  }
LABEL_29:
                  result = *(_QWORD *)(v31 + 128);
                  v20 = *(unsigned int *)(result + 20);
                  if ( (_DWORD)v20 )
                  {
                    a2 = (_QWORD *)v8;
                    result = sub_B67070(v31, v8, v3);
                  }
                }
              }
              v46 = a2[2295];
              v47 = v16 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v46 )
              {
                v48 = a2[294];
                a2[304] += 24LL;
                v49 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( a2[295] >= v49 + 24 && v48 )
                {
                  a2[294] = v49 + 24;
                  v50 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v67 = (__int64)(a2 + 294);
                  a2 = &qword_18;
                  v50 = sub_986170(v67, 24, 24, 3, v5, v6);
                  v49 = v50 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v50 = v46;
                v47 = v49 | 4;
                *(_DWORD *)(v50 + 8) = 0;
                *(_QWORD *)(v50 + 16) = v16;
              }
              v18 = v47 & 0xFFFFFFFFFFFFFFFELL;
              v17 = v18 | 1;
              *(_QWORD *)(v16 + 96) = v18 | 1;
            }
          }
          if ( v18 )
          {
            if ( (v18 & 4) != 0 )
            {
              v51 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v51 )
              {
                v52 = *(_QWORD *)v51;
                v53 = *(_DWORD *)(*(_QWORD *)v51 + 12LL);
                if ( v51[2] != v53 )
                {
                  v51[2] = v53;
                  a2 = (_QWORD *)v16;
                  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v52 + 152LL))(v52, v16);
                }
              }
            }
          }
          v19 = *(_QWORD *)(a1 + 128);
          v16 = *(_QWORD *)(a1 + 104);
          v20 = *(_QWORD *)(v16 + 96);
          v21 = v15 + 24LL * *(unsigned int *)(v19 + 16);
          v17 = v20 & 0xFFFFFFFFFFFFFFFELL;
          result = v20;
          if ( (v20 & 1) != 0 )
            goto LABEL_70;
          a2 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
            goto LABEL_70;
          goto LABEL_20;
        }
        v59 = a2[2295];
        v60 = v7 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v59 )
        {
          v61 = a2[294];
          a2[304] += 24LL;
          v62 = (v61 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v14 = v62 + 24;
          if ( a2[295] >= v62 + 24 && v61 )
          {
            a2[294] = v14;
            v63 = (v61 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v66 = (__int64)(a2 + 294);
            a2 = &qword_18;
            v63 = sub_986170(v66, 24, 24, 3, v5, v6);
            v62 = v63 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v63 = v59;
          v60 = v62 | 4;
          *(_DWORD *)(v63 + 8) = 0;
          *(_QWORD *)(v63 + 16) = v7;
        }
        v38 = v60 & 0xFFFFFFFFFFFFFFFELL;
        v10 = v38 | 1;
        *(_QWORD *)(v7 + 96) = v38 | 1;
LABEL_45:
        if ( v38 )
        {
          if ( (v38 & 4) != 0 )
          {
            v10 &= 0xFFFFFFFFFFFFFFF8LL;
            if ( v10 )
            {
              v39 = *(_QWORD *)v10;
              v40 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
              if ( *(_DWORD *)(v10 + 8) != v40 )
              {
                *(_DWORD *)(v10 + 8) = v40;
                a2 = (_QWORD *)v7;
                (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v39 + 152LL))(
                  v39,
                  v7,
                  v10,
                  v14);
              }
            }
          }
        }
        v13 = *(_QWORD *)(a1 + 128);
        if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
          goto LABEL_51;
        goto LABEL_15;
      }
      v41 = a2[2295];
      v42 = v7 & 0xFFFFFFFFFFFFFFFBLL;
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
          v64 = (__int64)(a2 + 294);
          a2 = &qword_18;
          v45 = sub_986170(v64, 24, 24, 3, v5, v6);
          v44 = v45 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v45 = v41;
        v42 = v44 | 4;
        *(_DWORD *)(v45 + 8) = 0;
        *(_QWORD *)(v45 + 16) = v7;
      }
      v10 = v42 & 0xFFFFFFFFFFFFFFFELL;
      result = v10 | 1;
      *(_QWORD *)(v7 + 96) = v10 | 1;
    }
  }
  if ( v10 )
  {
    if ( (v10 & 4) != 0 )
    {
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( result )
      {
        v11 = *(_QWORD *)result;
        v12 = *(_DWORD *)(*(_QWORD *)result + 12LL);
        if ( *(_DWORD *)(result + 8) != v12 )
        {
          *(_DWORD *)(result + 8) = v12;
          a2 = (_QWORD *)v7;
          result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v11 + 152LL))(v11, v7);
        }
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 128);
  if ( *(_DWORD *)(v13 + 20) )
  {
    v7 = *(_QWORD *)(a1 + 104);
    v10 = *(_QWORD *)(v7 + 96);
    v14 = v10;
    v38 = v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v10 & 1) != 0 )
      goto LABEL_45;
    a2 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_45;
    goto LABEL_13;
  }
  return result;
}
