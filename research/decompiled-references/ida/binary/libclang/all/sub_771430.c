unsigned __int64 __fastcall sub_771430(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  _DWORD *v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  _DWORD *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned __int64 v21; // r13
  _DWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  _DWORD *v39; // rdx
  _QWORD *v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rdi
  int v44; // eax
  _QWORD *v45; // rdx
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // edx
  _QWORD *v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rdi
  int v53; // eax
  __int64 v54; // rdi
  int v55; // eax
  __int64 v56; // rdi
  __int64 v57; // [rsp+8h] [rbp-40h]

  v3 = a2;
  v4 = sub_798D40(a1);
  v5 = *(_QWORD *)(a1 + 104);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 96);
  result = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) != 0 )
  {
    if ( result )
      goto LABEL_3;
LABEL_58:
    result = *(_QWORD *)(a1 + 128);
    if ( *(_DWORD *)(result + 20) )
      goto LABEL_59;
    return result;
  }
  if ( result <= 3 )
  {
    if ( result )
      goto LABEL_5;
    goto LABEL_58;
  }
  if ( (v7 & 2) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 128);
    if ( *(_DWORD *)(v10 + 20) )
      goto LABEL_11;
    return result;
  }
  v33 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
  v34 = v33[2275];
  if ( !v34 )
  {
    *(_QWORD *)(v5 + 96) = v5 & 0xFFFFFFFFFFFFFFFALL | 1;
    goto LABEL_5;
  }
  v35 = v33[274];
  v33[284] += 24LL;
  result = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a2 = result + 24;
  if ( v33[275] >= result + 24 && v35 )
  {
    v33[274] = a2;
  }
  else
  {
    a2 = 24;
    result = sub_76D810((__int64)(v33 + 274), 24, 3);
  }
  *(_QWORD *)result = v34;
  *(_DWORD *)(result + 8) = 0;
  v7 = result | 5;
  *(_QWORD *)(result + 16) = v5;
  *(_QWORD *)(v5 + 96) = result | 5;
  LOBYTE(result) = result & 0xFA | 4;
LABEL_3:
  if ( (result & 4) != 0 )
  {
    v9 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v9 )
    {
      v43 = *(_QWORD *)v9;
      v44 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
      if ( v9[2] != v44 )
      {
        v9[2] = v44;
        a2 = v5;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 144LL))(v43, v5);
      }
    }
  }
LABEL_5:
  result = *(_QWORD *)(a1 + 128);
  v10 = result;
  if ( *(_DWORD *)(result + 20) )
  {
    v11 = *(_QWORD *)(a1 + 104);
    v12 = *(_QWORD *)(v11 + 96);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
      {
LABEL_8:
        if ( (v13 & 4) != 0
          && (v14 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr
          && (v52 = *(_QWORD *)v14, v53 = *(_DWORD *)(*(_QWORD *)v14 + 12LL), v14[2] != v53) )
        {
          v14[2] = v53;
          a2 = v11;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 144LL))(v52, v11);
          v10 = *(_QWORD *)(a1 + 128);
        }
        else
        {
          v10 = *(_QWORD *)(a1 + 128);
        }
LABEL_11:
        if ( (*(_BYTE *)(v10 + 24) & 1) == 0 )
        {
LABEL_12:
          v15 = *(_QWORD *)(v10 + 24);
          goto LABEL_13;
        }
LABEL_60:
        v15 = sub_7A2E20(v10, a2);
LABEL_13:
        v16 = *(_QWORD *)(a1 + 104);
        v17 = *(_QWORD *)(v16 + 96);
        v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v17 & 1) != 0 )
        {
          if ( v18 )
            goto LABEL_48;
        }
        else
        {
          if ( v18 > 3 )
          {
            if ( (v17 & 2) == 0 )
            {
              v19 = *(_QWORD *)(a1 + 128);
              result = 3LL * *(unsigned int *)(v19 + 16);
              v20 = v15 + 24LL * *(unsigned int *)(v19 + 16);
              goto LABEL_17;
            }
            v40 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
            v41 = v40[2275];
            if ( !v41 )
            {
              *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
              v16 = *(_QWORD *)(a1 + 104);
              goto LABEL_51;
            }
            v42 = v40[274];
            v40[284] += 24LL;
            v18 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            a2 = v18 + 24;
            if ( v40[275] >= v18 + 24 && v42 )
            {
              v40[274] = a2;
            }
            else
            {
              a2 = 24;
              v18 = sub_76D810((__int64)(v40 + 274), 24, 3);
            }
            *(_QWORD *)v18 = v41;
            *(_DWORD *)(v18 + 8) = 0;
            v17 = v18 | 5;
            *(_QWORD *)(v18 + 16) = v16;
            *(_QWORD *)(v16 + 96) = v18 | 5;
            LOBYTE(v18) = v18 & 0xFA | 4;
LABEL_48:
            if ( (v18 & 4) != 0 )
            {
              v36 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v36 )
              {
                v54 = *(_QWORD *)v36;
                v55 = *(_DWORD *)(*(_QWORD *)v36 + 12LL);
                if ( v36[2] != v55 )
                {
                  v36[2] = v55;
                  a2 = v16;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 144LL))(v54, v16);
                }
              }
            }
            v16 = *(_QWORD *)(a1 + 104);
LABEL_51:
            result = *(_QWORD *)(a1 + 128);
            v19 = result;
            v20 = v15 + 24LL * *(unsigned int *)(result + 16);
            v37 = *(_QWORD *)(v16 + 96);
            v38 = v37 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v37 & 1) != 0 )
            {
              if ( v38 )
              {
LABEL_53:
                if ( (v38 & 4) != 0 )
                {
                  v39 = (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v39 )
                  {
                    v56 = *(_QWORD *)v39;
                    result = *(unsigned int *)(*(_QWORD *)v39 + 12LL);
                    if ( v39[2] != (_DWORD)result )
                    {
                      v39[2] = result;
                      a2 = v16;
                      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 144LL))(v56, v16);
                    }
                  }
                  v19 = *(_QWORD *)(a1 + 128);
                  if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
                    goto LABEL_18;
                  goto LABEL_56;
                }
                result = *(_QWORD *)(a1 + 128);
              }
            }
            else if ( v38 > 3 )
            {
              if ( (v37 & 2) == 0 )
              {
LABEL_17:
                if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
                {
LABEL_18:
                  v21 = *(_QWORD *)(v19 + 24);
                  goto LABEL_19;
                }
LABEL_56:
                result = sub_7A2E20(v19, a2);
                v21 = result;
LABEL_19:
                if ( v20 == v21 )
                  return result;
                while ( 1 )
                {
                  v23 = *(_QWORD *)(**(_QWORD **)(v21 + 16) & 0xFFFFFFFFFFFFFFF0LL);
                  v24 = *(_QWORD *)(v23 + 8);
                  if ( (v24 & 7) != 0 || (v24 & 8) != 0 )
                    v23 = sub_B0CF30(**(_QWORD **)(v21 + 16), a2);
                  v25 = sub_B0E890(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL));
                  v26 = *(_QWORD *)(v25 + 104);
                  v27 = v25;
                  v28 = *(_QWORD *)(v26 + 96);
                  v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
                  if ( (v28 & 1) != 0 )
                  {
                    if ( v29 )
                      goto LABEL_22;
                  }
                  else if ( v29 > 3 && (v28 & 2) != 0 )
                  {
                    v30 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
                    v31 = v30[2275];
                    if ( v31 )
                    {
                      v32 = v30[274];
                      v30[284] += 24LL;
                      v29 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v30[275] >= v29 + 24 && v32 )
                      {
                        v30[274] = v29 + 24;
                      }
                      else
                      {
                        v57 = v31;
                        v29 = sub_76D810((__int64)(v30 + 274), 24, 3);
                        v31 = v57;
                      }
                      *(_QWORD *)v29 = v31;
                      *(_DWORD *)(v29 + 8) = 0;
                      v28 = v29 | 5;
                      *(_QWORD *)(v29 + 16) = v26;
                      *(_QWORD *)(v26 + 96) = v29 | 5;
                      LOBYTE(v29) = v29 & 0xFA | 4;
LABEL_22:
                      if ( (v29 & 4) != 0 )
                      {
                        v22 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
                        if ( v22 )
                        {
                          v48 = *(_QWORD *)v22;
                          v49 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
                          if ( v22[2] != v49 )
                          {
                            v22[2] = v49;
                            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 144LL))(v48, v26);
                          }
                        }
                      }
                      goto LABEL_24;
                    }
                    *(_QWORD *)(v26 + 96) = v26 & 0xFFFFFFFFFFFFFFFALL | 1;
                  }
LABEL_24:
                  result = *(_QWORD *)(v27 + 128);
                  a2 = *(unsigned int *)(result + 20);
                  if ( (_DWORD)a2 )
                  {
                    a2 = v6;
                    result = sub_76DA60(v27, v6, v3);
                  }
                  v21 += 24LL;
                  if ( v21 == v20 )
                    return result;
                }
              }
              v50 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
              v51 = v50[2275];
              if ( v51 )
              {
                result = v50[274];
                v50[284] += 24LL;
                v38 = (result + 7) & 0xFFFFFFFFFFFFFFF8LL;
                a2 = v38 + 24;
                if ( v50[275] >= v38 + 24 && result )
                {
                  v50[274] = a2;
                }
                else
                {
                  a2 = 24;
                  result = sub_76D810((__int64)(v50 + 274), 24, 3);
                  v38 = result;
                }
                *(_QWORD *)v38 = v51;
                *(_DWORD *)(v38 + 8) = 0;
                v37 = v38 | 5;
                *(_QWORD *)(v38 + 16) = v16;
                *(_QWORD *)(v16 + 96) = v38 | 5;
                LOBYTE(v38) = v38 & 0xFA | 4;
                goto LABEL_53;
              }
              *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
              result = *(_QWORD *)(a1 + 128);
            }
LABEL_71:
            v19 = result;
            goto LABEL_17;
          }
          if ( v18 )
            goto LABEL_51;
        }
        result = *(_QWORD *)(a1 + 128);
        v20 = v15 + 24LL * *(unsigned int *)(result + 16);
        goto LABEL_71;
      }
    }
    else if ( v13 > 3 )
    {
      if ( (v12 & 2) == 0 )
        goto LABEL_11;
      v45 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
      v46 = v45[2275];
      if ( v46 )
      {
        v47 = v45[274];
        v45[284] += 24LL;
        v13 = (v47 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        a2 = v13 + 24;
        if ( v45[275] >= v13 + 24 && v47 )
        {
          v45[274] = a2;
        }
        else
        {
          a2 = 24;
          v13 = sub_76D810((__int64)(v45 + 274), 24, 3);
        }
        *(_QWORD *)v13 = v46;
        *(_DWORD *)(v13 + 8) = 0;
        v12 = v13 | 5;
        *(_QWORD *)(v13 + 16) = v11;
        *(_QWORD *)(v11 + 96) = v13 | 5;
        LOBYTE(v13) = v13 & 0xFA | 4;
        goto LABEL_8;
      }
      *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
      result = *(_QWORD *)(a1 + 128);
    }
LABEL_59:
    v10 = result;
    if ( (*(_BYTE *)(result + 24) & 1) == 0 )
      goto LABEL_12;
    goto LABEL_60;
  }
  return result;
}

