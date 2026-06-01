std::_V2 *__fastcall sub_2161FB0(std::_V2 *a1, char *a2)
{
  unsigned __int64 v2; // r14
  std::_V2 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _WORD *v10; // r15
  char v11; // r13
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r10
  unsigned __int64 v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdi
  char *v45; // r12
  __int64 v46; // r9
  unsigned __int64 v47; // r15
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdi
  char *v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // [rsp+8h] [rbp-70h]
  _QWORD *v62; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v63; // [rsp+20h] [rbp-58h] BYREF
  __int64 v64; // [rsp+28h] [rbp-50h]
  __int64 v65; // [rsp+30h] [rbp-48h]
  __int64 v66; // [rsp+38h] [rbp-40h]

  v2 = (unsigned __int64)a2;
  v3 = a1;
  v61 = std::_V2::system_category(a1);
  v8 = *((_QWORD *)a2 + 3);
  if ( v8 <= 0x13 )
  {
    v18 = sub_2195B10(a1, a2, v4, v5);
    sub_2220500(a1, 4, v18);
    return v3;
  }
  if ( v8 <= 0x43 )
  {
    sub_2195B10(a1, a2, v4, v5);
    v9 = *((_QWORD *)a2 + 2);
    v11 = 0;
    v12 = 0;
    v10 = (_WORD *)v9;
    v8 = *((_QWORD *)a2 + 3);
  }
  else
  {
    v9 = *((_QWORD *)a2 + 2);
    if ( *(_BYTE *)v9 == 77 && *(_BYTE *)(v9 + 1) == 90 )
    {
      v17 = *(unsigned int *)(v9 + 60);
      v5 = *(unsigned int *)(v9 + v17);
      if ( (_DWORD)v5 != 17744 )
        goto LABEL_72;
      v12 = v17 + 4;
      v11 = 1;
      v10 = (_WORD *)(v9 + v12);
    }
    else
    {
      v10 = *((_WORD **)a2 + 2);
      v11 = 0;
      v12 = 0;
    }
  }
  v13 = (unsigned __int64)(v10 + 10);
  if ( (unsigned __int64)v10 >= 0xFFFFFFFFFFFFFFECLL || v13 > v9 + v8 || v9 > (unsigned __int64)v10 )
  {
    v14 = sub_2195B10(a1, v13, v9, v5);
    v13 = 4;
    a1 = (std::_V2 *)&v63;
    sub_2220500(&v63, 4, v14);
    v15 = v63;
    if ( v63 )
      goto LABEL_8;
  }
  *(_QWORD *)(v2 + 48) = v10;
  if ( !v11 )
  {
    if ( !*v10 && v10[1] == 0xFFFF )
    {
      if ( *(_QWORD *)(v2 + 24) <= 0x37u )
      {
        sub_2195B10(a1, v13, v9, v5);
        v10 = *(_WORD **)(v2 + 48);
      }
      else
      {
        v53 = *(_QWORD *)(v2 + 24);
        v54 = *(_QWORD *)(v2 + 32);
        v55 = *(_QWORD *)(v2 + 40);
        v63 = *(_QWORD **)(v2 + 16);
        v64 = v53;
        v65 = v54;
        v52 = (char *)v63 + v12;
        v66 = v55;
        sub_215ED20(&v62, (unsigned __int64)v63 + v12, 56, v5, v6, v7, (unsigned __int64)v63, v53);
        v15 = v62;
        if ( v62 )
          goto LABEL_8;
        *(_QWORD *)(v2 + 56) = v52;
        if ( *((_WORD *)v52 + 2) > 1u
          && !(*(_QWORD *)(v52 + 12) ^ 0x4BA9BAEED1BAA1C7LL | *(_QWORD *)(v52 + 20) ^ 0xB8DCA46AF6FA20AFLL) )
        {
          *(_QWORD *)(v2 + 48) = 0;
          v12 += 56;
          goto LABEL_70;
        }
        *(_QWORD *)(v2 + 56) = 0;
        v10 = *(_WORD **)(v2 + 48);
      }
    }
    if ( !v10 )
    {
      v52 = *(char **)(v2 + 56);
      goto LABEL_70;
    }
    v12 += 20;
    if ( v10[1] == 0xFFFF )
    {
LABEL_17:
      sub_2220500(v3, 0, v61);
      return v3;
    }
LABEL_23:
    v19 = 0;
    v12 += (unsigned __int16)v10[8];
    v20 = (unsigned __int16)v10[1];
    if ( (_WORD)v20 == 0xFFFF )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( v10 )
  {
    v12 += 20;
    if ( v10[1] == 0xFFFF )
      goto LABEL_17;
  }
  v42 = *(_QWORD *)(v2 + 24);
  v43 = *(_QWORD *)(v2 + 32);
  v44 = *(_QWORD *)(v2 + 40);
  v63 = *(_QWORD **)(v2 + 16);
  v64 = v42;
  v65 = v43;
  v45 = (char *)v63 + v12;
  v66 = v44;
  a1 = (std::_V2 *)&v62;
  a2 = (char *)v63 + v12;
  sub_215ED20(&v62, (unsigned __int64)v63 + v12, 96, v5, v6, v7, (unsigned __int64)v63, v42);
  v15 = v62;
  if ( v62 )
    goto LABEL_8;
  if ( *(_WORD *)v45 != 267 )
  {
    if ( *(_WORD *)v45 == 523 )
    {
      *(_QWORD *)(v2 + 72) = v45;
      v47 = *(_QWORD *)(v2 + 16) + v12 + 112;
      v48 = 8LL * *((unsigned int *)v45 + 27);
      goto LABEL_62;
    }
LABEL_72:
    v56 = sub_2195B10(a1, a2, v9, v5);
    sub_A09EA0((__int64)v3, 3u, v56, "incorrect PE magic");
    return v3;
  }
  *(_QWORD *)(v2 + 64) = v45;
  v47 = *(_QWORD *)(v2 + 16) + v12 + 96;
  v48 = 8LL * *((unsigned int *)v45 + 23);
LABEL_62:
  v49 = *(_QWORD *)(v2 + 24);
  v50 = *(_QWORD *)(v2 + 32);
  v51 = *(_QWORD *)(v2 + 40);
  v63 = *(_QWORD **)(v2 + 16);
  v64 = v49;
  v65 = v50;
  v66 = v51;
  sub_215ED20(&v62, v47, v48, v5, v48, v46, (unsigned __int64)v63, v49);
  v15 = v62;
  if ( v62 )
    goto LABEL_8;
  *(_QWORD *)(v2 + 80) = v47;
  v10 = *(_WORD **)(v2 + 48);
  if ( v10 )
    goto LABEL_23;
  v52 = *(char **)(v2 + 56);
LABEL_70:
  v20 = *((unsigned int *)v52 + 11);
LABEL_24:
  v19 = 40 * v20;
LABEL_25:
  v21 = *(_QWORD *)(v2 + 24);
  v22 = *(_QWORD *)(v2 + 32);
  v23 = *(_QWORD *)(v2 + 40);
  v63 = *(_QWORD **)(v2 + 16);
  v24 = *(_QWORD *)(v2 + 16) + v12;
  v64 = v21;
  v65 = v22;
  v66 = v23;
  sub_215ED20(&v62, v24, v19, v5, v6, v22, (unsigned __int64)v63, v21);
  v15 = v62;
  if ( !v62 )
  {
    v27 = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(v2 + 88) = v24;
    if ( v27 )
    {
      if ( *(_WORD *)(v27 + 2) == 0xFFFF )
        goto LABEL_35;
      v28 = *(unsigned int *)(v27 + 8);
    }
    else
    {
      v28 = *(unsigned int *)(*(_QWORD *)(v2 + 56) + 48LL);
    }
    if ( (_DWORD)v28 )
    {
      sub_215ED80(&v62, v2, v28, v25, v26);
      if ( v62 )
      {
        v63 = v62;
        v62 = nullptr;
        sub_A0E8E0(&v63);
        if ( v63 )
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, __int64, _QWORD **))(*v63 + 8LL))(
            v63,
            v2,
            v57,
            v58,
            &v63);
        v59 = v62;
        *(_QWORD *)(v2 + 112) = 0;
        *(_OWORD *)(v2 + 96) = 0;
        *(_DWORD *)(v2 + 120) = 0;
        if ( v59 )
          (*(void (__fastcall **)(_QWORD *))(*v59 + 8LL))(v59);
      }
    }
    else if ( *(_QWORD *)(v2 + 96) || *(_QWORD *)(v2 + 104) )
    {
      if ( v27 )
      {
        if ( *(_WORD *)(v27 + 2) == 0xFFFF )
          goto LABEL_35;
        v29 = *(_DWORD *)(v27 + 12);
      }
      else
      {
        v29 = *(_DWORD *)(*(_QWORD *)(v2 + 56) + 52LL);
      }
      if ( v29 )
      {
        v60 = sub_2195B10(&v62, v24, v28, v25);
        sub_A09EA0((__int64)v3, 3u, v60, "symbol table missing");
        return v3;
      }
    }
LABEL_35:
    sub_215F530(&v63, v2);
    sub_2161F20(&v62, &v63);
    if ( v63 )
      (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64, _QWORD **))(*v63 + 8LL))(v63, &v63, v30, v31, &v63);
    v15 = v62;
    if ( !v62 )
    {
      sub_215F640(&v63, v2);
      sub_2161F20(&v62, &v63);
      if ( v63 )
        (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64, _QWORD **))(*v63 + 8LL))(
          v63,
          &v63,
          v32,
          v33,
          &v63);
      v15 = v62;
      if ( !v62 )
      {
        sub_215F760(&v63, v2);
        sub_2161F20(&v62, &v63);
        if ( v63 )
          (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64, _QWORD **))(*v63 + 8LL))(
            v63,
            &v63,
            v34,
            v35,
            &v63);
        v15 = v62;
        if ( !v62 )
        {
          sub_215F870(&v63, v2);
          sub_2161F20(&v62, &v63);
          if ( v63 )
            (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64, _QWORD **))(*v63 + 8LL))(
              v63,
              &v63,
              v36,
              v37,
              &v63);
          v15 = v62;
          if ( !v62 )
          {
            sub_215F990(&v63, v2);
            sub_2161F20(&v62, &v63);
            if ( v63 )
              (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64, _QWORD **))(*v63 + 8LL))(
                v63,
                &v63,
                v38,
                v39,
                &v63);
            v15 = v62;
            if ( !v62 )
            {
              sub_215FAF0((void ***)&v63, v2, v38, v39);
              sub_2161F20(&v62, &v63);
              if ( v63 )
                (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64, _QWORD **))(*v63 + 8LL))(
                  v63,
                  &v63,
                  v40,
                  v41,
                  &v63);
              v15 = v62;
              if ( !v62 )
              {
                sub_2161B70((__int64 *)&v63, v2);
                sub_2161F20(&v62, &v63);
                if ( v63 )
                  (*(void (__fastcall **)(_QWORD *))(*v63 + 8LL))(v63);
                v15 = v62;
                if ( !v62 )
                {
                  *(_QWORD *)v3 = 0;
                  return v3;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_8:
  *(_QWORD *)v3 = v15;
  return v3;
}
