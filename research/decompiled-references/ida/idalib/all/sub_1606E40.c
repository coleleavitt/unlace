void __fastcall sub_1606E40(__int64 a1, char *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int8 v8; // al
  __int64 v9; // rax
  _BYTE *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 *v25; // rax
  char ***v26; // rax
  char **v27; // rdx
  unsigned __int64 v28; // rax
  char **v29; // rsi
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 *v36; // rax
  __int64 **v37; // rax
  __int64 *v38; // rdx
  unsigned __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r13
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbp
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rax
  _QWORD *v57; // rax
  char **v58; // rax
  __int64 v59; // rcx
  size_t v60; // rdx
  const void *v61; // rdi
  __int64 *v62; // rax
  __int64 v63; // rcx
  char *v65; // [rsp+8h] [rbp-100h]
  unsigned int v66; // [rsp+10h] [rbp-F8h]
  size_t n; // [rsp+20h] [rbp-E8h]
  __int64 v69; // [rsp+28h] [rbp-E0h]
  size_t v70; // [rsp+28h] [rbp-E0h]
  void *s1; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v72; // [rsp+38h] [rbp-D0h]
  __int64 v73; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v74; // [rsp+48h] [rbp-C0h]
  void *v75; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v76; // [rsp+60h] [rbp-A8h] BYREF
  char v77; // [rsp+B8h] [rbp-50h]
  unsigned int v78; // [rsp+C0h] [rbp-48h]
  char v79; // [rsp+C4h] [rbp-44h]

  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD *)a2 + 8LL * *((unsigned int *)a2 + 2);
  if ( *(_QWORD *)a2 == v4 )
    return;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 264);
  v65 = (char *)(a1 + 8);
  v66 = 0;
  do
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(v6 + 12);
      if ( v19 )
        break;
      if ( v5 >= 0x7FFFFFFF )
        goto LABEL_15;
LABEL_4:
      v7 = *v3 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = *(_BYTE *)(v7 + 28) & 0x7F;
      if ( ((v8 + 52) & 0x7Fu) <= 1 || (unsigned int)v8 - 53 <= 1 )
        v7 = sub_B72ED0(*v3 & 0xFFFFFFFFFFFFFFF8LL);
      v9 = sub_B8BF30(v7);
      v10 = (_BYTE *)v9;
      if ( !v9 )
        goto LABEL_10;
      if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) + 84) < 0 && (v10[29] & 1) != 0 )
      {
        v20 = sub_B8C3D0((__int64)v10, (__int64)a2, v11, v12, v13, v14);
        v24 = *v20;
        a2 = (char *)(*v20 + 8LL * *((unsigned int *)v20 + 2));
        if ( *v20 < (unsigned __int64)a2 )
        {
          v50 = (__int64 *)*v20;
          while ( 1 )
          {
            v24 = *v50;
            if ( *(_WORD *)(*v50 + 36) == 376 )
              break;
            if ( a2 == (char *)++v50 )
              goto LABEL_9;
          }
          if ( a2 != (char *)v50 )
          {
LABEL_27:
            if ( (v10[29] & 1) == 0 )
              goto LABEL_94;
            v26 = (char ***)sub_B8C3D0((__int64)v10, (__int64)a2, v24, v21, v22, v23);
            v27 = *v26;
            v28 = (unsigned __int64)&(*v26)[*((unsigned int *)v26 + 2)];
            if ( (unsigned __int64)v27 >= v28 )
            {
              if ( v27 == (char **)v28 )
                goto LABEL_94;
              if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 376 )
              {
                v58 = (char **)(v28 + 8);
                while ( v27 != v58 )
                {
                  v59 = (__int64)*v58++;
                  if ( *(_WORD *)(v59 + 36) == 376 )
                    goto LABEL_82;
                }
LABEL_94:
                BUG();
              }
            }
            else
            {
              v29 = v27;
              while ( *((_WORD *)*v29 + 18) != 376 )
              {
                if ( (char **)v28 == ++v29 )
                  goto LABEL_94;
              }
              if ( (char **)v28 == v29 )
                goto LABEL_94;
            }
LABEL_82:
            while ( *((_WORD *)*v27 + 18) != 376 )
              ++v27;
            a2 = *v27;
            v60 = j__strlen("default");
            v61 = *((const void **)a2 + 6);
            if ( v60 != *((_DWORD *)a2 + 10) )
              goto LABEL_11;
            if ( v60 )
            {
              a2 = "default";
              if ( memcmp(v61, "default", v60) )
                goto LABEL_11;
            }
          }
        }
        else if ( (char *)v24 != a2 )
        {
          if ( *(_WORD *)(*(_QWORD *)a2 + 36LL) == 376 )
            goto LABEL_27;
          v25 = (__int64 *)(a2 + 8);
          while ( (__int64 *)v24 != v25 )
          {
            v21 = *v25++;
            if ( *(_WORD *)(v21 + 36) == 376 )
              goto LABEL_27;
          }
        }
      }
LABEL_9:
      if ( *(char *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 32LL))(v10) + 84) >= 0 || (v10[29] & 1) == 0 )
        goto LABEL_10;
      v30 = sub_B8C3D0((__int64)v10, (__int64)a2, v15, v16, v17, v18);
      v34 = *v30;
      v35 = *v30 + 8LL * *((unsigned int *)v30 + 2);
      if ( *v30 >= v35 )
      {
        if ( v34 == v35 )
          goto LABEL_10;
        while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 378 )
        {
          v35 += 8LL;
          if ( v34 == v35 )
            goto LABEL_10;
        }
      }
      else
      {
        v36 = (__int64 *)*v30;
        while ( 1 )
        {
          v34 = *v36;
          if ( *(_WORD *)(*v36 + 36) == 378 )
            break;
          if ( (__int64 *)v35 == ++v36 )
            goto LABEL_10;
        }
        if ( (__int64 *)v35 == v36 )
          goto LABEL_10;
      }
      if ( (v10[29] & 1) == 0 )
        goto LABEL_94;
      v37 = (__int64 **)sub_B8C3D0((__int64)v10, v35, v34, v31, v32, v33);
      v38 = *v37;
      v39 = (unsigned __int64)&(*v37)[*((unsigned int *)v37 + 2)];
      if ( (unsigned __int64)v38 >= v39 )
      {
        if ( v38 == (__int64 *)v39 )
          goto LABEL_94;
        if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) != 378 )
        {
          v62 = (__int64 *)(v39 + 8);
          while ( v62 != v38 )
          {
            v63 = *v62++;
            if ( *(_WORD *)(v63 + 36) == 378 )
              goto LABEL_46;
          }
          goto LABEL_94;
        }
      }
      else
      {
        v40 = v38;
        while ( *(_WORD *)(*v40 + 36) != 378 )
        {
          if ( (__int64 *)v39 == ++v40 )
            goto LABEL_94;
        }
        if ( (__int64 *)v39 == v40 )
          goto LABEL_94;
      }
LABEL_46:
      v41 = *v38;
      if ( *(_WORD *)(*v38 + 36) != 378 )
      {
        v42 = v38 + 1;
        do
          v41 = *v42++;
        while ( *(_WORD *)(v41 + 36) != 378 );
      }
      v69 = v41;
      n = j__strlen("default");
      v43 = *(unsigned int *)(v69 + 40);
      v73 = *(_QWORD *)(v69 + 48);
      v74 = v43;
      v70 = j__strlen(asc_22E1692);
      v44 = sub_2246FB0(&v73, asc_22E1692, v70, 0);
      v45 = v74;
      v46 = 0;
      if ( v44 < v74 )
      {
        v46 = v74 - v44;
        v45 = v44;
      }
      v47 = v46;
      v72 = v46;
      a2 = asc_22E1692;
      s1 = (void *)(v45 + v73);
      v48 = sub_2247130(&s1, asc_22E1692, v70, -1) + 1;
      if ( v48 > v72 )
        v48 = v72;
      v49 = v72 - v47 + v48;
      if ( v49 > v72 )
        v49 = v72;
      if ( n == v49 )
      {
        if ( !n || (a2 = "default", !memcmp(s1, "default", n)) )
        {
LABEL_10:
          a2 = v65;
          ++v5;
          sub_168B9F0(&v73, v65, *(unsigned int *)(v7 + 24), 6268, 0);
          sub_15F7200(&v73);
        }
      }
LABEL_11:
      ++v3;
      v6 = *(_QWORD *)(a1 + 264);
      if ( (_QWORD *)v4 == v3 )
        goto LABEL_16;
    }
    if ( v19 != 1 )
      goto LABEL_94;
    if ( *(_DWORD *)(v6 + 16) > v5 )
      goto LABEL_4;
LABEL_15:
    ++v3;
    ++v66;
  }
  while ( (_QWORD *)v4 != v3 );
LABEL_16:
  if ( v5 > 4 )
    *(_DWORD *)(v6 + 16) = 4;
  if ( v66 )
  {
    sub_168B9F0(&v73, a1 + 8, a3, 6255, 0);
    if ( v77 )
    {
      sub_AE9DF0(&v76, v66, 3u);
      sub_15F7200(&v73);
    }
    else
    {
      if ( v79 )
      {
        v53 = sub_168B9E0(&v73);
        v56 = v75;
        if ( v75 )
          v56 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v75 + 32LL))(v75);
        s1 = v56;
        v57 = sub_1587BC0(v53, (__int64 *)&s1, v51, v52, v54, v55);
        sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v78 + 8), v66, 3u);
      }
      sub_15F7200(&v73);
    }
  }
}
