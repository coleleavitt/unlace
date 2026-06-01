__int64 (__fastcall *__fastcall sub_DE9860(_QWORD *a1, __int64 *a2))(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 (__fastcall *result)(__int64, __int64 *); // rax
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r13
  __int64 v14; // rsi
  _DWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rdi
  __int64 v22; // rsi
  __int64 *v23; // rdx
  __int64 *v24; // rax
  int v25; // ecx
  unsigned int v26; // r12d
  size_t v27; // rbx
  __int64 *v28; // rdx
  __int64 *v29; // rax
  __int64 *v30; // r12
  __int64 *v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 *v38; // r8
  _DWORD *v39; // rcx
  void *v40; // rdi
  __int64 v41; // r8
  __int64 *v42; // rdx
  __int64 *v43; // rax
  int v44; // esi
  unsigned int v45; // edx
  size_t v46; // r12
  __int64 v47; // rax
  __int64 *v48; // rdx
  __int64 *v49; // rax
  size_t v50; // rsi
  size_t v51; // r8
  __int64 v52; // rax
  _DWORD *v53; // [rsp+8h] [rbp-50h]
  _DWORD *v54; // [rsp+8h] [rbp-50h]
  __int64 *v55; // [rsp+8h] [rbp-50h]
  __int64 v56; // [rsp+8h] [rbp-50h]
  __int64 *v57; // [rsp+8h] [rbp-50h]
  __int64 *v58; // [rsp+8h] [rbp-50h]
  _DWORD *v59; // [rsp+8h] [rbp-50h]
  __int64 *v60; // [rsp+8h] [rbp-50h]
  _DWORD *v61; // [rsp+8h] [rbp-50h]
  _DWORD *v62; // [rsp+8h] [rbp-50h]
  _DWORD *v63; // [rsp+10h] [rbp-48h]
  __int64 *v64; // [rsp+10h] [rbp-48h]
  _DWORD *v65; // [rsp+10h] [rbp-48h]
  _DWORD *v66; // [rsp+10h] [rbp-48h]
  _DWORD *v67; // [rsp+10h] [rbp-48h]
  _DWORD *v68; // [rsp+10h] [rbp-48h]
  __int64 v69; // [rsp+18h] [rbp-40h]
  _DWORD *v70; // [rsp+18h] [rbp-40h]
  __int64 v71; // [rsp+18h] [rbp-40h]

  v4 = a1[4];
  if ( v4 )
  {
    v5 = *a2;
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  result = *(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 56LL);
  if ( result == sub_DDD780 )
  {
    v8 = a1[3];
    if ( !v8 )
    {
LABEL_14:
      a1[3] = 0;
      return result;
    }
    if ( !*(_DWORD *)v8 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
      {
        v10 = *a2;
        v6 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v10, v9);
      }
      *(_QWORD *)(v8 + 8) = 0;
      v11 = *(__int64 **)(v8 + 16);
LABEL_11:
      if ( !v11 )
      {
LABEL_13:
        result = (__int64 (__fastcall *)(__int64, __int64 *))sub_17E9C40(a2[1], 40, v8);
        goto LABEL_14;
      }
LABEL_12:
      sub_186B220(v11);
      goto LABEL_13;
    }
    v11 = *(__int64 **)(v8 + 16);
    v12 = v11;
    v13 = &v11[2 * *(unsigned int *)(v8 + 24)];
    if ( v11 == v13 )
      goto LABEL_42;
    while ( (unsigned __int64)*v12 <= 1 )
    {
      v12 += 2;
      if ( v13 == v12 )
        goto LABEL_42;
    }
    if ( v13 != v12 )
    {
      v14 = *v12;
      v15 = (_DWORD *)v12[1];
      if ( *v12 )
        goto LABEL_31;
LABEL_21:
      if ( *(_DWORD *)v8 == 1 )
      {
LABEL_22:
        if ( v15 )
        {
          v16 = *a2;
          v6 = v15[2]-- == 1;
          if ( v6 )
            sub_15D7BC0(v16, v15);
        }
        goto LABEL_25;
      }
      while ( 1 )
      {
        if ( *v15 )
        {
          v21 = *((__int64 **)v15 + 2);
          v30 = v21;
          v31 = &v21[2 * (unsigned int)v15[6]];
          if ( v21 != v31 )
          {
            while ( (unsigned __int64)*v30 <= 1 )
            {
              v30 += 2;
              if ( v31 == v30 )
                goto LABEL_81;
            }
            if ( v31 != v30 )
            {
              v32 = *v30;
              v33 = v30[1];
              if ( !*v30 )
              {
LABEL_65:
                if ( *v15 != 1 )
                  goto LABEL_77;
LABEL_66:
                if ( v33 )
                {
                  v34 = *a2;
                  v6 = (*(_DWORD *)(v33 + 8))-- == 1;
                  if ( v6 )
                  {
                    v68 = v15;
                    v60 = v31;
                    sub_15D7BC0(v34, v33);
                    v31 = v60;
                    v15 = v68;
                  }
                }
                goto LABEL_69;
              }
              while ( 1 )
              {
                v36 = *a2;
                v6 = (*(_DWORD *)(v32 + 8))-- == 1;
                if ( !v6 )
                  goto LABEL_65;
                v69 = v33;
                v63 = v15;
                v55 = v31;
                sub_15D7BC0(v36, v32);
                v15 = v63;
                v33 = v69;
                v31 = v55;
                if ( *v63 == 1 )
                  goto LABEL_66;
LABEL_77:
                v70 = v15;
                v64 = v31;
                v56 = v33;
                sub_DE95C0(v33, a2);
                v37 = v56;
                v38 = v64;
                v39 = v70;
                v40 = *(void **)(v56 + 16);
                if ( v40 )
                {
                  v71 = v56;
                  v65 = v39;
                  v57 = v38;
                  sub_186B220(v40);
                  v37 = v71;
                  v39 = v65;
                  v38 = v57;
                }
                v66 = v39;
                v58 = v38;
                sub_17E9C40(a2[1], 40, v37);
                v15 = v66;
                v31 = v58;
LABEL_69:
                v35 = v30 + 2;
                if ( v31 == v30 + 2 )
                  break;
                while ( 1 )
                {
                  v32 = *v35;
                  v30 = v35;
                  if ( (unsigned __int64)*v35 > 1 )
                    break;
                  v35 += 2;
                  if ( v31 == v35 )
                    goto LABEL_80;
                }
                if ( v31 == v35 )
                  break;
                v33 = v35[1];
              }
LABEL_80:
              v21 = *((__int64 **)v15 + 2);
            }
          }
LABEL_81:
          if ( v15[7] || v15[8] )
          {
            v41 = (unsigned int)v15[6];
            v42 = &v21[2 * v41];
            if ( v42 != v21 )
            {
              v43 = v21;
              v44 = 0;
              do
              {
                while ( *v43 )
                {
                  *v43 = 0;
                  v43 += 2;
                  if ( v42 == v43 )
                    goto LABEL_88;
                }
                v43 += 2;
                ++v44;
              }
              while ( v42 != v43 );
LABEL_88:
              if ( (unsigned int)v41 > 0x10 && 3 * (int)v41 < (unsigned int)(4 * v44) )
              {
                if ( v21 )
                {
                  v59 = v15;
                  sub_186B220(v21);
                  v45 = v59[6];
                  *((_QWORD *)v59 + 2) = 0;
                  v67 = v59;
                  v45 >>= 1;
                  v59[6] = v45;
                  v46 = 2LL * v45;
                  LODWORD(v59) = v45;
                  v47 = sub_186B270(v46 * 8);
                  v15 = v67;
                  v21 = (__int64 *)v47;
                  if ( (_DWORD)v59 )
                    goto LABEL_92;
                }
                else
                {
                  v51 = (unsigned int)v41 >> 1;
                  *((_QWORD *)v15 + 2) = 0;
                  v15[6] = v51;
                  v62 = v15;
                  v46 = 2 * v51;
                  v52 = sub_186B270(16 * v51);
                  v15 = v62;
                  v21 = (__int64 *)v52;
LABEL_92:
                  v48 = &v21[v46];
                  v49 = v21;
                  if ( ((v46 * 8) & 0x10) == 0 || (v49 = v21 + 2, *(_OWORD *)v21 = 0, v21 + 2 != v48) )
                  {
                    do
                    {
                      *(_OWORD *)v49 = 0;
                      v49 += 4;
                      *((_OWORD *)v49 - 1) = 0;
                    }
                    while ( v49 != v48 );
                  }
                }
                *((_QWORD *)v15 + 2) = v21;
                *(_QWORD *)(v15 + 7) = 0;
LABEL_39:
                v54 = v15;
                sub_186B220(v21);
                v15 = v54;
                goto LABEL_40;
              }
            }
            *(_QWORD *)(v15 + 7) = 0;
          }
        }
        else
        {
          v19 = *((_QWORD *)v15 + 1);
          if ( v19 )
          {
            v20 = *a2;
            v6 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v6 )
            {
              v61 = v15;
              sub_15D7BC0(v20, v19);
              v15 = v61;
            }
          }
          *((_QWORD *)v15 + 1) = 0;
          v21 = *((__int64 **)v15 + 2);
        }
        if ( v21 )
          goto LABEL_39;
LABEL_40:
        sub_17E9C40(a2[1], 40, v15);
LABEL_25:
        v17 = v12 + 2;
        if ( v13 == v12 + 2 )
          goto LABEL_41;
        while ( 1 )
        {
          v14 = *v17;
          v12 = v17;
          if ( (unsigned __int64)*v17 > 1 )
            break;
          v17 += 2;
          if ( v13 == v17 )
            goto LABEL_41;
        }
        if ( v13 == v17 )
        {
LABEL_41:
          v11 = *(__int64 **)(v8 + 16);
          break;
        }
        v15 = (_DWORD *)v17[1];
LABEL_31:
        v18 = *a2;
        v6 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( !v6 )
          goto LABEL_21;
        v53 = v15;
        sub_15D7BC0(v18, v14);
        v15 = v53;
        if ( *(_DWORD *)v8 == 1 )
          goto LABEL_22;
      }
    }
LABEL_42:
    if ( !*(_DWORD *)(v8 + 28) && !*(_DWORD *)(v8 + 32) )
      goto LABEL_11;
    v22 = *(unsigned int *)(v8 + 24);
    v23 = &v11[2 * v22];
    if ( v23 == v11 )
      goto LABEL_96;
    v24 = v11;
    v25 = 0;
    do
    {
      while ( *v24 )
      {
        *v24 = 0;
        v24 += 2;
        if ( v23 == v24 )
          goto LABEL_48;
      }
      v24 += 2;
      ++v25;
    }
    while ( v23 != v24 );
LABEL_48:
    if ( (unsigned int)v22 <= 0x10 || 3 * (int)v22 >= (unsigned int)(4 * v25) )
    {
LABEL_96:
      *(_QWORD *)(v8 + 28) = 0;
      goto LABEL_11;
    }
    if ( v11 )
    {
      sub_186B220(v11);
      v26 = *(_DWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 16) = 0;
      v26 >>= 1;
      *(_DWORD *)(v8 + 24) = v26;
      v27 = 2LL * v26;
      v11 = (__int64 *)sub_186B270(v27 * 8);
      if ( !v26 )
      {
LABEL_55:
        *(_QWORD *)(v8 + 16) = v11;
        *(_QWORD *)(v8 + 28) = 0;
        goto LABEL_12;
      }
    }
    else
    {
      v50 = (unsigned int)v22 >> 1;
      *(_QWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 24) = v50;
      v27 = 2 * v50;
      v11 = (__int64 *)sub_186B270(16 * v50);
    }
    v28 = &v11[v27];
    v29 = v11;
    if ( ((v27 * 8) & 0x10) == 0 || (v29 = v11 + 2, *(_OWORD *)v11 = 0, v28 != v11 + 2) )
    {
      do
      {
        *(_OWORD *)v29 = 0;
        v29 += 4;
        *((_OWORD *)v29 - 1) = 0;
      }
      while ( v28 != v29 );
    }
    goto LABEL_55;
  }
  return (__int64 (__fastcall *)(__int64, __int64 *))result((__int64)a1, a2);
}

