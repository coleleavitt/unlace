__int64 __fastcall sub_1896130(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // r14
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 *v30; // rcx
  __int64 *v31; // rax
  __int64 *v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // al
  __int64 **v38; // rax
  unsigned __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rdx
  char v42; // al
  __int64 *v43; // rax
  __int64 *v44; // rax
  char v45; // si
  __int64 v46; // rsi
  unsigned __int64 *v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  char v51; // al
  unsigned __int64 v52; // rax
  __int64 **v53; // rax
  char v54; // [rsp+8h] [rbp-60h]
  __int64 *v55; // [rsp+8h] [rbp-60h]
  unsigned __int8 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  char v58; // [rsp+1Fh] [rbp-49h]
  __int64 *v59; // [rsp+20h] [rbp-48h]
  __int64 *v60; // [rsp+28h] [rbp-40h]

  v7 = sub_168B6C0(a1);
  v10 = sub_1895E60(v7, a4, *(_QWORD *)(a2 + 80), *(_QWORD *)(a3 + 80), v8, v9);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (*(_BYTE *)(a2 + 8) & 6) != 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 8) & 6) != 0 )
    return 0;
  v15 = v10;
  v54 = sub_BA7E40(a2, a4, v11, v12, v13, v14);
  if ( v54 != (unsigned __int8)sub_BA7E40(a3, a4, v17, v18, v19, v20) )
    return 0;
  if ( (*(_BYTE *)(sub_168B6E0(a1) + 107) & 4) == 0 )
    goto LABEL_10;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    LOBYTE(v40) = sub_1894130(a2, a4, v21, (__int64)v22, v23, v24);
    v41 = v40;
    v42 = 0;
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      goto LABEL_46;
  }
  else
  {
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      goto LABEL_10;
    v41 = 0;
  }
  v56 = v41;
  v42 = sub_1894130(a3, a4, v41, (__int64)v22, v23, v24);
  v41 = v56;
LABEL_46:
  if ( v42 != (_BYTE)v41 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_52:
    v45 = *(_BYTE *)(a3 + 29) & 1;
    goto LABEL_53;
  }
  v43 = sub_B8C3D0(a2, a4, v41, (__int64)v22, v23, v24);
  v41 = *v43;
  v22 = (__int64 *)(*v43 + 8LL * *((unsigned int *)v43 + 2));
  if ( *v43 >= (unsigned __int64)v22 )
  {
    v45 = *(_BYTE *)(a3 + 29) & 1;
    if ( (__int64 *)v41 != v22 )
    {
      if ( *(_WORD *)(*v22 + 36) != 263 )
      {
        v53 = (__int64 **)(v22 + 1);
        while ( 1 )
        {
          v22 = (__int64 *)v53;
          if ( (__int64 **)v41 == v53 )
            goto LABEL_53;
          v22 = *v53++;
          if ( *((_WORD *)v22 + 18) == 263 )
            goto LABEL_76;
        }
      }
      goto LABEL_76;
    }
LABEL_53:
    if ( !v45 )
      goto LABEL_10;
    v46 = 0;
    goto LABEL_55;
  }
  v44 = (__int64 *)*v43;
  while ( 1 )
  {
    v41 = *v44;
    if ( *(_WORD *)(*v44 + 36) == 263 )
      break;
    if ( v22 == ++v44 )
      goto LABEL_52;
  }
  v45 = *(_BYTE *)(a3 + 29) & 1;
  if ( v22 == v44 )
    goto LABEL_53;
LABEL_76:
  if ( !v45 )
    return 0;
  v46 = v15;
LABEL_55:
  v47 = sub_B8C3D0(a3, v46, v41, (__int64)v22, v23, v24);
  v48 = *v47;
  v49 = *v47 + 8LL * *((unsigned int *)v47 + 2);
  if ( *v47 < v49 )
  {
    v50 = *v47;
    while ( 1 )
    {
      v48 = v50;
      if ( *(_WORD *)(*(_QWORD *)v50 + 36LL) == 263 )
        goto LABEL_64;
      v50 += 8LL;
      if ( v49 == v50 )
        goto LABEL_59;
    }
  }
  if ( v48 == v49 )
  {
LABEL_59:
    v51 = 0;
    goto LABEL_60;
  }
  if ( *(_WORD *)(*(_QWORD *)v49 + 36LL) != 263 )
  {
    v52 = v49 + 8;
    do
    {
      v49 = v52;
      if ( v48 == v52 )
        goto LABEL_59;
      v52 += 8LL;
    }
    while ( *(_WORD *)(*(_QWORD *)v49 + 36LL) != 263 );
  }
LABEL_64:
  v51 = v48 != v49;
LABEL_60:
  if ( v51 == (_BYTE)v46 )
  {
LABEL_10:
    v25 = *(__int64 **)(a2 + 96);
    v26 = *(unsigned int *)(a2 + 104);
    v27 = *(__int64 **)(a3 + 96);
    v55 = v25;
    v59 = &v25[v26];
    v60 = &v27[*(unsigned int *)(a3 + 104)];
    if ( v59 == v25 || v60 == v27 )
      return v15;
    while ( 1 )
    {
      v28 = *v55;
      v57 = *v27;
      v58 = sub_1895E60(v7, a4, *(_QWORD *)(*v55 + 48), *(_QWORD *)(*v27 + 48), v23, v24);
      if ( !v58 )
        return 0;
      if ( (*(_BYTE *)(sub_168B6E0(a1) + 107) & 4) != 0 )
      {
        if ( (*(_BYTE *)(v28 + 29) & 1) != 0 )
        {
          v31 = sub_B8C3D0(v28, a4, v29, (__int64)v30, v23, v24);
          v29 = *v31;
          v30 = (__int64 *)(*v31 + 8LL * *((unsigned int *)v31 + 2));
          if ( *v31 >= (unsigned __int64)v30 )
          {
            if ( (__int64 *)v29 != v30 )
            {
              if ( *(_WORD *)(*v30 + 36) == 99 )
                goto LABEL_23;
              v38 = (__int64 **)(v30 + 1);
              while ( 1 )
              {
                v30 = (__int64 *)v38;
                if ( (__int64 **)v29 == v38 )
                  break;
                v30 = *v38++;
                if ( *((_WORD *)v30 + 18) == 99 )
                  goto LABEL_23;
              }
            }
          }
          else
          {
            v32 = (__int64 *)*v31;
            while ( 1 )
            {
              v29 = *v32;
              if ( *(_WORD *)(*v32 + 36) == 99 )
                break;
              if ( v30 == ++v32 )
                goto LABEL_12;
            }
            if ( v30 != v32 )
            {
LABEL_23:
              if ( (*(_BYTE *)(v57 + 29) & 1) == 0 )
                return 0;
LABEL_24:
              v33 = sub_B8C3D0(v57, a4, v29, (__int64)v30, v23, v24);
              v34 = *v33;
              v35 = *v33 + 8LL * *((unsigned int *)v33 + 2);
              if ( *v33 >= v35 )
              {
                if ( v34 != v35 )
                {
                  if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 99 )
                    goto LABEL_38;
                  v39 = v35 + 8;
                  while ( 1 )
                  {
                    v35 = v39;
                    if ( v34 == v39 )
                      break;
                    v39 += 8LL;
                    if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 99 )
                      goto LABEL_38;
                  }
                }
LABEL_28:
                v37 = 0;
              }
              else
              {
                v36 = *v33;
                while ( 1 )
                {
                  v34 = v36;
                  if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) == 99 )
                    break;
                  v36 += 8LL;
                  if ( v35 == v36 )
                    goto LABEL_28;
                }
LABEL_38:
                v37 = v34 != v35;
              }
              if ( v37 != v58 )
                return 0;
              goto LABEL_13;
            }
          }
        }
LABEL_12:
        if ( (*(_BYTE *)(v57 + 29) & 1) != 0 )
        {
          v58 = 0;
          goto LABEL_24;
        }
      }
LABEL_13:
      ++v55;
      ++v27;
      if ( v55 == v59 || v27 == v60 )
        return v15;
    }
  }
  return 0;
}
