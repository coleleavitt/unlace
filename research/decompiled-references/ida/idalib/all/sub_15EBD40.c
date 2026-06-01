__int64 __fastcall sub_15EBD40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rdi
  unsigned __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 **v30; // rax
  __int64 *v31; // rdx
  unsigned __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v36; // r13
  __int64 *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r14
  bool v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 *v48; // rax
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 *v52; // rcx
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-E0h]
  __int64 v56; // [rsp+0h] [rbp-E0h]
  __int64 v57; // [rsp+10h] [rbp-D0h] BYREF
  _BYTE v58[200]; // [rsp+18h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 1;
  v8 = a2;
  v9 = (__int64 **)sub_B8C3D0(a4, a2, a3, a4, a5, a6);
  v14 = *v9;
  v15 = (unsigned __int64)&(*v9)[*((unsigned int *)v9 + 2)];
  if ( (unsigned __int64)v14 < v15 )
  {
    v10 = (__int64)v14;
    v11 = *v14;
    if ( *(_WORD *)(*v14 + 36) != 377 )
    {
      do
      {
        v10 += 8;
        if ( v15 == v10 )
          goto LABEL_8;
        v11 = *(_QWORD *)v10;
      }
      while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 377 );
    }
    if ( v15 != v10 )
      goto LABEL_30;
  }
  else if ( v14 != (__int64 *)v15 )
  {
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 377 )
    {
      v16 = (__int64 *)(v15 + 8);
      do
      {
        v10 = (__int64)v16;
        if ( v16 == v14 )
          goto LABEL_8;
        v17 = *v16++;
      }
      while ( *(_WORD *)(v17 + 36) != 377 );
    }
LABEL_30:
    v36 = *v14;
    if ( *(_WORD *)(*v14 + 36) != 377 )
    {
      v37 = v14 + 1;
      do
        v36 = *v37++;
      while ( *(_WORD *)(v36 + 36) != 377 );
    }
    goto LABEL_33;
  }
LABEL_8:
  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 1;
  v18 = sub_B8C3D0(a4, a2, v10, v11, v12, v13);
  v22 = *v18;
  v23 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( v22 >= v23 )
  {
    if ( v22 == v23 )
    {
LABEL_13:
      if ( (*(_BYTE *)(a4 + 29) & 1) != 0 )
      {
        v24 = sub_B8C3D0(a4, a2, v22, v19, v20, v21);
        v28 = *v24;
        v29 = *v24 + 8LL * *((unsigned int *)v24 + 2);
        if ( v28 >= v29 )
        {
          if ( v28 != v29 )
          {
            if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 376 )
            {
LABEL_53:
              v36 = *(_QWORD *)v28;
              if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 376 )
              {
                v49 = (__int64 *)(v28 + 8);
                do
                  v36 = *v49++;
                while ( *(_WORD *)(v36 + 36) != 376 );
              }
              goto LABEL_33;
            }
            v50 = (__int64 *)(v29 + 8);
            while ( 1 )
            {
              v25 = (__int64)v50;
              if ( v50 == (__int64 *)v28 )
                break;
              v51 = *v50++;
              if ( *(_WORD *)(v51 + 36) == 376 )
                goto LABEL_53;
            }
          }
        }
        else
        {
          v25 = v28;
          while ( 1 )
          {
            a2 = *(_QWORD *)v25;
            if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 376 )
              break;
            v25 += 8;
            if ( v29 == v25 )
              goto LABEL_18;
          }
          if ( v29 != v25 )
            goto LABEL_53;
        }
LABEL_18:
        if ( (*(_BYTE *)(a4 + 29) & 1) != 0 )
        {
          v30 = (__int64 **)sub_B8C3D0(a4, a2, v28, v25, v26, v27);
          v31 = *v30;
          v32 = (unsigned __int64)&(*v30)[*((unsigned int *)v30 + 2)];
          if ( (unsigned __int64)v31 < v32 )
          {
            v52 = v31;
            while ( *(_WORD *)(*v52 + 36) != 158 )
            {
              if ( (__int64 *)v32 == ++v52 )
                return 1;
            }
            if ( (__int64 *)v32 == v52 )
              return 1;
            goto LABEL_68;
          }
          if ( v31 != (__int64 *)v32 )
          {
            if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 158 )
            {
              v33 = (__int64 *)(v32 + 8);
              while ( v31 != v33 )
              {
                v34 = *v33++;
                if ( *(_WORD *)(v34 + 36) == 158 )
                  goto LABEL_68;
              }
              return 1;
            }
LABEL_68:
            v36 = *v31;
            if ( *(_WORD *)(*v31 + 36) != 158 )
            {
              v53 = v31 + 1;
              do
                v36 = *v53++;
              while ( *(_WORD *)(v36 + 36) != 158 );
            }
            v38 = v8 + 8;
            sub_168B9F0(v58, v38, *(unsigned int *)(a3 + 24), 3245, 0);
            v54 = sub_15DD120((__int64)v58, a3);
            v40 = v54;
            if ( !*(_BYTE *)(v54 + 120) )
            {
              if ( !*(_BYTE *)(v54 + 132) )
                goto LABEL_35;
              v42 = sub_168B9E0(v54);
              v46 = *(_QWORD *)(v40 + 16);
              if ( v46 )
              {
                v56 = v42;
                v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
                v42 = v56;
              }
              goto LABEL_41;
            }
LABEL_38:
            sub_15D6640((unsigned __int8 **)(v40 + 32), v36);
            goto LABEL_35;
          }
        }
      }
      return 1;
    }
    while ( 1 )
    {
      v19 = *(_QWORD *)v23;
      if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 378 )
        break;
      v23 += 8LL;
      if ( v22 == v23 )
        goto LABEL_13;
    }
  }
  else
  {
    v19 = v22;
    while ( 1 )
    {
      a2 = *(_QWORD *)v19;
      if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 378 )
        break;
      v19 += 8;
      if ( v23 == v19 )
        goto LABEL_13;
    }
    if ( v23 == v19 )
      goto LABEL_13;
  }
  v36 = *(_QWORD *)v22;
  if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 378 )
  {
    v48 = (__int64 *)(v22 + 8);
    do
      v36 = *v48++;
    while ( *(_WORD *)(v36 + 36) != 378 );
  }
LABEL_33:
  v38 = v8 + 8;
  sub_168B9F0(v58, v38, *(unsigned int *)(a3 + 24), 3245, 0);
  v39 = sub_15DD120((__int64)v58, a3);
  v40 = v39;
  if ( *(_BYTE *)(v39 + 120) )
    goto LABEL_38;
  if ( *(_BYTE *)(v39 + 132) )
  {
    v42 = sub_168B9E0(v39);
    v46 = *(_QWORD *)(v40 + 16);
    if ( v46 )
    {
      v55 = v42;
      v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
      v42 = v55;
    }
LABEL_41:
    v57 = v46;
    v47 = sub_1587BC0(v42, &v57, v42, v43, v44, v45);
    sub_15D6640((unsigned __int8 **)(*v47 + 32LL * *(unsigned int *)(v40 + 128) + 8), v36);
  }
LABEL_35:
  v41 = 1;
  if ( (*(_BYTE *)(a3 + 35) & 2) == 0 )
    v41 = (*(_BYTE *)(v36 + 35) & 2) != 0;
  LOBYTE(v57) = v41;
  sub_1588420(v40, (unsigned __int8 *)&v57);
  sub_15F7200(v58);
  sub_168B9F0(v58, v38, *(unsigned int *)(v36 + 24), 5839, 0);
  sub_15F7200(v58);
  return 0;
}
