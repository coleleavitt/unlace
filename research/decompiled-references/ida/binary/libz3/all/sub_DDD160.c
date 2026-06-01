__int64 (__fastcall *__fastcall sub_DDD160(_QWORD *a1, __int64 *a2))()
{
  __int64 (__fastcall *result)(); // rax
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // r13
  __int64 v12; // rsi
  _DWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // rsi
  __int64 *v21; // rdx
  __int64 *v22; // rax
  int v23; // ecx
  unsigned int v24; // r12d
  size_t v25; // rbx
  __int64 *v26; // rdx
  __int64 *v27; // rax
  __int64 *v28; // r12
  __int64 *v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 *v36; // r8
  _DWORD *v37; // rcx
  void *v38; // rdi
  __int64 v39; // r8
  __int64 *v40; // rdx
  __int64 *v41; // rax
  int v42; // esi
  unsigned int v43; // edx
  size_t v44; // r12
  __int64 v45; // rax
  __int64 *v46; // rdx
  __int64 *v47; // rax
  size_t v48; // rsi
  size_t v49; // r8
  __int64 v50; // rax
  _DWORD *v51; // [rsp+8h] [rbp-50h]
  _DWORD *v52; // [rsp+8h] [rbp-50h]
  __int64 *v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+8h] [rbp-50h]
  __int64 *v55; // [rsp+8h] [rbp-50h]
  __int64 *v56; // [rsp+8h] [rbp-50h]
  _DWORD *v57; // [rsp+8h] [rbp-50h]
  __int64 *v58; // [rsp+8h] [rbp-50h]
  _DWORD *v59; // [rsp+8h] [rbp-50h]
  _DWORD *v60; // [rsp+8h] [rbp-50h]
  _DWORD *v61; // [rsp+10h] [rbp-48h]
  __int64 *v62; // [rsp+10h] [rbp-48h]
  _DWORD *v63; // [rsp+10h] [rbp-48h]
  _DWORD *v64; // [rsp+10h] [rbp-48h]
  _DWORD *v65; // [rsp+10h] [rbp-48h]
  _DWORD *v66; // [rsp+10h] [rbp-48h]
  __int64 v67; // [rsp+18h] [rbp-40h]
  _DWORD *v68; // [rsp+18h] [rbp-40h]
  __int64 v69; // [rsp+18h] [rbp-40h]

  result = *(__int64 (__fastcall **)())(*a1 + 56LL);
  if ( result == sub_DDE0D0 )
  {
    v5 = a1[5];
    if ( !v5 )
    {
LABEL_11:
      a1[5] = 0;
      return result;
    }
    if ( !*(_DWORD *)v5 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        v7 = *a2;
        v8 = (*(_DWORD *)(v6 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v7, v6);
      }
      *(_QWORD *)(v5 + 8) = 0;
      v9 = *(__int64 **)(v5 + 16);
LABEL_8:
      if ( !v9 )
      {
LABEL_10:
        result = (__int64 (__fastcall *)())sub_17E9C40(a2[1], 40, v5);
        goto LABEL_11;
      }
LABEL_9:
      sub_186B220(v9);
      goto LABEL_10;
    }
    v9 = *(__int64 **)(v5 + 16);
    v10 = v9;
    v11 = &v9[2 * *(unsigned int *)(v5 + 24)];
    if ( v9 == v11 )
      goto LABEL_39;
    while ( (unsigned __int64)*v10 <= 1 )
    {
      v10 += 2;
      if ( v11 == v10 )
        goto LABEL_39;
    }
    if ( v11 != v10 )
    {
      v12 = *v10;
      v13 = (_DWORD *)v10[1];
      if ( *v10 )
        goto LABEL_28;
LABEL_18:
      if ( *(_DWORD *)v5 == 1 )
      {
LABEL_19:
        if ( v13 )
        {
          v14 = *a2;
          v8 = v13[2]-- == 1;
          if ( v8 )
            sub_15D7BC0(v14, v13);
        }
        goto LABEL_22;
      }
      while ( 1 )
      {
        if ( *v13 )
        {
          v19 = *((__int64 **)v13 + 2);
          v28 = v19;
          v29 = &v19[2 * (unsigned int)v13[6]];
          if ( v19 != v29 )
          {
            while ( (unsigned __int64)*v28 <= 1 )
            {
              v28 += 2;
              if ( v29 == v28 )
                goto LABEL_78;
            }
            if ( v29 != v28 )
            {
              v30 = *v28;
              v31 = v28[1];
              if ( !*v28 )
              {
LABEL_62:
                if ( *v13 != 1 )
                  goto LABEL_74;
LABEL_63:
                if ( v31 )
                {
                  v32 = *a2;
                  v8 = (*(_DWORD *)(v31 + 8))-- == 1;
                  if ( v8 )
                  {
                    v66 = v13;
                    v58 = v29;
                    sub_15D7BC0(v32, v31);
                    v29 = v58;
                    v13 = v66;
                  }
                }
                goto LABEL_66;
              }
              while ( 1 )
              {
                v34 = *a2;
                v8 = (*(_DWORD *)(v30 + 8))-- == 1;
                if ( !v8 )
                  goto LABEL_62;
                v67 = v31;
                v61 = v13;
                v53 = v29;
                sub_15D7BC0(v34, v30);
                v13 = v61;
                v31 = v67;
                v29 = v53;
                if ( *v61 == 1 )
                  goto LABEL_63;
LABEL_74:
                v68 = v13;
                v62 = v29;
                v54 = v31;
                sub_DE95C0(v31, a2);
                v35 = v54;
                v36 = v62;
                v37 = v68;
                v38 = *(void **)(v54 + 16);
                if ( v38 )
                {
                  v69 = v54;
                  v63 = v37;
                  v55 = v36;
                  sub_186B220(v38);
                  v35 = v69;
                  v37 = v63;
                  v36 = v55;
                }
                v64 = v37;
                v56 = v36;
                sub_17E9C40(a2[1], 40, v35);
                v13 = v64;
                v29 = v56;
LABEL_66:
                v33 = v28 + 2;
                if ( v29 == v28 + 2 )
                  break;
                while ( 1 )
                {
                  v30 = *v33;
                  v28 = v33;
                  if ( (unsigned __int64)*v33 > 1 )
                    break;
                  v33 += 2;
                  if ( v29 == v33 )
                    goto LABEL_77;
                }
                if ( v29 == v33 )
                  break;
                v31 = v33[1];
              }
LABEL_77:
              v19 = *((__int64 **)v13 + 2);
            }
          }
LABEL_78:
          if ( v13[7] || v13[8] )
          {
            v39 = (unsigned int)v13[6];
            v40 = &v19[2 * v39];
            if ( v40 != v19 )
            {
              v41 = v19;
              v42 = 0;
              do
              {
                while ( *v41 )
                {
                  *v41 = 0;
                  v41 += 2;
                  if ( v40 == v41 )
                    goto LABEL_85;
                }
                v41 += 2;
                ++v42;
              }
              while ( v40 != v41 );
LABEL_85:
              if ( (unsigned int)v39 > 0x10 && 3 * (int)v39 < (unsigned int)(4 * v42) )
              {
                if ( v19 )
                {
                  v57 = v13;
                  sub_186B220(v19);
                  v43 = v57[6];
                  *((_QWORD *)v57 + 2) = 0;
                  v65 = v57;
                  v43 >>= 1;
                  v57[6] = v43;
                  v44 = 2LL * v43;
                  LODWORD(v57) = v43;
                  v45 = sub_186B270(v44 * 8);
                  v13 = v65;
                  v19 = (__int64 *)v45;
                  if ( (_DWORD)v57 )
                    goto LABEL_89;
                }
                else
                {
                  v49 = (unsigned int)v39 >> 1;
                  *((_QWORD *)v13 + 2) = 0;
                  v13[6] = v49;
                  v60 = v13;
                  v44 = 2 * v49;
                  v50 = sub_186B270(16 * v49);
                  v13 = v60;
                  v19 = (__int64 *)v50;
LABEL_89:
                  v46 = &v19[v44];
                  v47 = v19;
                  if ( ((v44 * 8) & 0x10) == 0 || (v47 = v19 + 2, *(_OWORD *)v19 = 0, v46 != v19 + 2) )
                  {
                    do
                    {
                      *(_OWORD *)v47 = 0;
                      v47 += 4;
                      *((_OWORD *)v47 - 1) = 0;
                    }
                    while ( v46 != v47 );
                  }
                }
                *((_QWORD *)v13 + 2) = v19;
                *(_QWORD *)(v13 + 7) = 0;
LABEL_36:
                v52 = v13;
                sub_186B220(v19);
                v13 = v52;
                goto LABEL_37;
              }
            }
            *(_QWORD *)(v13 + 7) = 0;
          }
        }
        else
        {
          v17 = *((_QWORD *)v13 + 1);
          if ( v17 )
          {
            v18 = *a2;
            v8 = (*(_DWORD *)(v17 + 8))-- == 1;
            if ( v8 )
            {
              v59 = v13;
              sub_15D7BC0(v18, v17);
              v13 = v59;
            }
          }
          *((_QWORD *)v13 + 1) = 0;
          v19 = *((__int64 **)v13 + 2);
        }
        if ( v19 )
          goto LABEL_36;
LABEL_37:
        sub_17E9C40(a2[1], 40, v13);
LABEL_22:
        v15 = v10 + 2;
        if ( v11 == v10 + 2 )
          goto LABEL_38;
        while ( 1 )
        {
          v12 = *v15;
          v10 = v15;
          if ( (unsigned __int64)*v15 > 1 )
            break;
          v15 += 2;
          if ( v11 == v15 )
            goto LABEL_38;
        }
        if ( v11 == v15 )
        {
LABEL_38:
          v9 = *(__int64 **)(v5 + 16);
          break;
        }
        v13 = (_DWORD *)v15[1];
LABEL_28:
        v16 = *a2;
        v8 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( !v8 )
          goto LABEL_18;
        v51 = v13;
        sub_15D7BC0(v16, v12);
        v13 = v51;
        if ( *(_DWORD *)v5 == 1 )
          goto LABEL_19;
      }
    }
LABEL_39:
    if ( !*(_DWORD *)(v5 + 28) && !*(_DWORD *)(v5 + 32) )
      goto LABEL_8;
    v20 = *(unsigned int *)(v5 + 24);
    v21 = &v9[2 * v20];
    if ( v21 == v9 )
      goto LABEL_93;
    v22 = v9;
    v23 = 0;
    do
    {
      while ( *v22 )
      {
        *v22 = 0;
        v22 += 2;
        if ( v21 == v22 )
          goto LABEL_45;
      }
      v22 += 2;
      ++v23;
    }
    while ( v21 != v22 );
LABEL_45:
    if ( (unsigned int)v20 <= 0x10 || 3 * (int)v20 >= (unsigned int)(4 * v23) )
    {
LABEL_93:
      *(_QWORD *)(v5 + 28) = 0;
      goto LABEL_8;
    }
    if ( v9 )
    {
      sub_186B220(v9);
      v24 = *(_DWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 16) = 0;
      v24 >>= 1;
      *(_DWORD *)(v5 + 24) = v24;
      v25 = 2LL * v24;
      v9 = (__int64 *)sub_186B270(v25 * 8);
      if ( !v24 )
      {
LABEL_52:
        *(_QWORD *)(v5 + 16) = v9;
        *(_QWORD *)(v5 + 28) = 0;
        goto LABEL_9;
      }
    }
    else
    {
      v48 = (unsigned int)v20 >> 1;
      *(_QWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 24) = v48;
      v25 = 2 * v48;
      v9 = (__int64 *)sub_186B270(16 * v48);
    }
    v26 = &v9[v25];
    v27 = v9;
    if ( ((v25 * 8) & 0x10) == 0 || (v27 = v9 + 2, *(_OWORD *)v9 = 0, v26 != v9 + 2) )
    {
      do
      {
        *(_OWORD *)v27 = 0;
        v27 += 4;
        *((_OWORD *)v27 - 1) = 0;
      }
      while ( v26 != v27 );
    }
    goto LABEL_52;
  }
  return (__int64 (__fastcall *)())result();
}

