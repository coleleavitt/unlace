void __fastcall sub_1BE6900(__int64 a1, char *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  char *v7; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r13
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  char ***v26; // rax
  char **v27; // rdx
  unsigned __int64 v28; // rax
  char **v29; // rcx
  char *v30; // rbp
  char **v31; // rax
  size_t v32; // rax
  __int64 *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 **v39; // rax
  __int64 *v40; // rdx
  unsigned __int64 v41; // rax
  char **v42; // rcx
  __int64 v43; // rdi
  __int64 *v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v48; // [rsp+10h] [rbp-108h] BYREF
  unsigned __int64 v49; // [rsp+18h] [rbp-100h]
  void *v50; // [rsp+30h] [rbp-E8h] BYREF
  signed __int64 v51; // [rsp+38h] [rbp-E0h]
  _BYTE v52[16]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE *v53; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-C0h]

  v7 = a2;
  if ( (_BYTE)a6 )
  {
    a2 = (char *)a3;
    if ( !(unsigned __int8)sub_1BDFA80(a1, (__int128 *)a3, 1, 1, 0, a6) )
      return;
  }
  if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) + 84) >= 0
    || (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
    goto LABEL_3;
  }
  v20 = sub_B8C3D0(a3, (__int64)a2, v10, v11, v12, v13);
  v23 = *v20;
  v24 = *v20 + 8LL * *((unsigned int *)v20 + 2);
  if ( *v20 < v24 )
  {
    v25 = (__int64 *)*v20;
    while ( 1 )
    {
      v23 = *v25;
      if ( *(_WORD *)(*v25 + 36) == 376 )
        break;
      if ( (__int64 *)v24 == ++v25 )
        goto LABEL_3;
    }
    if ( (__int64 *)v24 != v25 )
      goto LABEL_23;
LABEL_3:
    if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) + 84) < 0
      && (*(_BYTE *)(a3 + 29) & 1) != 0 )
    {
      v33 = sub_B8C3D0(a3, (__int64)a2, v14, v15, v16, v17);
      v36 = *v33;
      v37 = *v33 + 8LL * *((unsigned int *)v33 + 2);
      if ( *v33 >= v37 )
      {
        if ( v36 != v37 )
        {
          while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 378 )
          {
            v37 += 8LL;
            if ( v36 == v37 )
              goto LABEL_4;
          }
LABEL_42:
          if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
          {
            v39 = (__int64 **)sub_B8C3D0(a3, (__int64)a2, v36, v37, v34, v35);
            v40 = *v39;
            v41 = (unsigned __int64)&(*v39)[*((unsigned int *)v39 + 2)];
            if ( (unsigned __int64)v40 >= v41 )
            {
              if ( v40 != (__int64 *)v41 )
              {
                if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) == 378 )
                {
LABEL_68:
                  v43 = *v40;
                  if ( *(_WORD *)(*v40 + 36) != 378 )
                  {
                    v44 = v40 + 1;
                    do
                      v43 = *v44++;
                    while ( *(_WORD *)(v43 + 36) != 378 );
                  }
LABEL_48:
                  if ( !sub_17A1CC0(v43) )
                    return;
                  goto LABEL_4;
                }
                v45 = (__int64 *)(v41 + 8);
                while ( v45 != v40 )
                {
                  v46 = *v45++;
                  if ( *(_WORD *)(v46 + 36) == 378 )
                    goto LABEL_68;
                }
              }
            }
            else
            {
              v42 = (char **)v40;
              while ( 1 )
              {
                a2 = *v42;
                if ( *((_WORD *)*v42 + 18) == 378 )
                  break;
                if ( (char **)v41 == ++v42 )
                  goto LABEL_47;
              }
              if ( (char **)v41 != v42 )
                goto LABEL_68;
            }
          }
LABEL_47:
          v43 = 0;
          goto LABEL_48;
        }
      }
      else
      {
        v38 = (__int64 *)*v33;
        while ( 1 )
        {
          v36 = *v38;
          if ( *(_WORD *)(*v38 + 36) == 378 )
            break;
          if ( (__int64 *)v37 == ++v38 )
            goto LABEL_4;
        }
        if ( (__int64 *)v37 != v38 )
          goto LABEL_42;
      }
    }
LABEL_4:
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x25 || !sub_1BC9C10(a3, (__int64)a2) )
    {
      v52[0] = 0;
      v50 = v52;
      v51 = 0;
      v18 = sub_1BC9950(a1, v7, a3, a4, &v50);
      sub_168B9B0((__int64)&v53, a1 + 8, 6210);
      sub_AE9DF0(&v53, (unsigned int)v18, 3u);
      sub_AE9DF0(&v53, HIDWORD(v18), 3u);
      sub_AE9DF0(&v53, a3, 0xAu);
      sub_AEC220(&v53, v50, v51);
      sub_1582CA0((__int64)&v48, &v53);
      if ( v53 && v54 )
        sub_1580C40(v54, (unsigned __int64)v53);
      sub_1BE63A0(a1, (__int64)&v48, *(_QWORD *)(a3 + 48), a5, v19);
      sub_168CDE0((__int64)&v53, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), (__int64)&v48, 0);
      sub_15F7200(&v53);
      if ( (v7[28] & 0x7F) == 0x36 )
        sub_1BDB4F0(a1, (__int64)v7);
      if ( v48 && v49 )
        sub_1580C40(v49, v48);
      if ( v50 != v52 )
        operator delete(v50);
    }
    return;
  }
  if ( v23 == v24 )
    goto LABEL_3;
  while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 376 )
  {
    v24 += 8LL;
    if ( v23 == v24 )
      goto LABEL_3;
  }
LABEL_23:
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_78;
  v26 = (char ***)sub_B8C3D0(a3, (__int64)a2, v23, v24, v21, v22);
  v27 = *v26;
  v28 = (unsigned __int64)&(*v26)[*((unsigned int *)v26 + 2)];
  if ( (unsigned __int64)v27 < v28 )
  {
    v29 = v27;
    while ( 1 )
    {
      a2 = *v29;
      if ( *((_WORD *)*v29 + 18) == 376 )
        break;
      if ( (char **)v28 == ++v29 )
        goto LABEL_78;
    }
    if ( (char **)v28 != v29 )
      goto LABEL_29;
LABEL_78:
    BUG();
  }
  if ( v27 == (char **)v28 )
    goto LABEL_78;
  while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 376 )
  {
    v28 += 8LL;
    if ( v27 == (char **)v28 )
      goto LABEL_78;
  }
LABEL_29:
  v30 = *v27;
  if ( *((_WORD *)*v27 + 18) != 376 )
  {
    v31 = v27 + 1;
    do
      v30 = *v31++;
    while ( *((_WORD *)v30 + 18) != 376 );
  }
  v32 = j__strlen("default");
  if ( v32 == *((_DWORD *)v30 + 10) )
  {
    if ( !v32 )
      goto LABEL_3;
    a2 = "default";
    if ( !memcmp(*((const void **)v30 + 6), "default", v32) )
      goto LABEL_3;
  }
}
