__int64 __fastcall sub_6F2740(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  char *v6; // r14
  char *v7; // r13
  __int64 *i; // rbx
  _BYTE *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rdx
  __int64 v14; // rcx
  _BYTE *v15; // r15
  char *v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v20; // rdi
  void *v21; // rax
  _QWORD *v22; // rdi
  unsigned int v23; // esi
  unsigned int v24; // esi
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  char *v27; // r14
  unsigned int v28; // esi
  unsigned int v29; // esi
  unsigned int v30; // ecx
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  char *v34; // r15
  unsigned int v35; // esi
  unsigned int v36; // esi
  unsigned int v37; // ecx
  __int64 v38; // rdi
  _BYTE *v39; // r12
  void **v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdi
  char *v43; // rdx
  void **v44; // rdi
  unsigned int v45; // eax
  unsigned __int64 v46; // rcx
  __int64 v47; // rdi
  char *v48; // rbx
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // edx
  __int64 v52; // rdi
  _BYTE *src; // [rsp+0h] [rbp-F0h]
  void *v54; // [rsp+8h] [rbp-E8h] BYREF
  char *v55; // [rsp+10h] [rbp-E0h]
  _QWORD v56[2]; // [rsp+18h] [rbp-D8h] BYREF
  void *v57; // [rsp+28h] [rbp-C8h] BYREF
  char *v58; // [rsp+30h] [rbp-C0h]
  _QWORD v59[2]; // [rsp+38h] [rbp-B8h] BYREF
  void *v60; // [rsp+48h] [rbp-A8h] BYREF
  char *v61; // [rsp+50h] [rbp-A0h]
  void *v62; // [rsp+58h] [rbp-98h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-90h]
  char v64; // [rsp+64h] [rbp-8Ch]
  char v65; // [rsp+68h] [rbp-88h]
  __int128 v66; // [rsp+78h] [rbp-78h] BYREF
  __int64 v67; // [rsp+88h] [rbp-68h]
  __int128 v68; // [rsp+90h] [rbp-60h]
  __int64 v69; // [rsp+A0h] [rbp-50h]
  __int64 v70; // [rsp+A8h] [rbp-48h]

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v3 = *(unsigned int *)(a2 + 8);
  v4 = *(_QWORD **)a2;
  v67 = 0;
  v66 = 0;
  v5 = &v4[2 * v3];
  v68 = 0;
  v69 = 0;
  v70 = 0;
  if ( v4 == v5 )
    goto LABEL_9;
  do
  {
    while ( 1 )
    {
      sub_264B1E0(&v60, *v4, v4[1]);
      if ( v65 )
      {
        if ( v64 )
          break;
      }
      v4 += 2;
      if ( v5 == v4 )
        goto LABEL_7;
    }
    v4 += 2;
    sub_264B5F0(&v66, v63);
  }
  while ( v5 != v4 );
LABEL_7:
  if ( !v70 )
    goto LABEL_9;
  v6 = *(char **)(v70 + 48);
  if ( !v6 )
    goto LABEL_9;
  v39 = *(_BYTE **)(v70 + 40);
  v60 = &v62;
  if ( !v39 )
LABEL_90:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v57 = v6;
  if ( (unsigned __int64)v6 > 0xF )
  {
    v60 = (void *)std::string::_M_create();
    v44 = (void **)v60;
    v62 = v57;
  }
  else
  {
    if ( v6 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v62) = *v39;
      v40 = &v62;
      goto LABEL_68;
    }
    v44 = &v62;
  }
  memcpy(v44, v39, (size_t)v6);
  v6 = (char *)v57;
  v40 = (void **)v60;
LABEL_68:
  v61 = v6;
  v6[(_QWORD)v40] = 0;
  v41 = *(_QWORD *)(a1 + 8);
  if ( v41 == *(_QWORD *)(a1 + 16) )
  {
    sub_625280(a1, (char **)&v60);
    if ( v60 != &v62 )
      operator delete(v60, (unsigned __int64)v62 + 1);
    goto LABEL_9;
  }
  v42 = v41 + 16;
  *(_QWORD *)v41 = v41 + 16;
  if ( v60 == &v62 )
  {
    v43 = v61;
    v45 = (_DWORD)v61 + 1;
    if ( (unsigned int)((_DWORD)v61 + 1) < 8 )
    {
      if ( (v45 & 4) != 0 )
      {
        *(_DWORD *)(v41 + 16) = (_DWORD)v62;
        *(_DWORD *)(v42 + v45 - 4) = *(_DWORD *)((char *)&v61 + v45 + 4);
        v43 = v61;
      }
      else if ( (_DWORD)v61 != -1 )
      {
        *(_BYTE *)(v41 + 16) = (_BYTE)v62;
        v43 = v61;
        if ( (v45 & 2) != 0 )
        {
          *(_WORD *)(v42 + v45 - 2) = *(_WORD *)((char *)&v61 + v45 + 6);
          v43 = v61;
        }
      }
      goto LABEL_72;
    }
    *(_QWORD *)(v41 + 16) = v62;
    *(_QWORD *)(v42 + v45 - 8) = *(char **)((char *)&v61 + v45);
    v46 = (v41 + 24) & 0xFFFFFFFFFFFFFFF8LL;
    v47 = v42 - v46;
    v48 = (char *)&v62 - v47;
    v49 = (v47 + v45) & 0xFFFFFFF8;
    if ( v49 >= 8 )
    {
      v50 = v49 & 0xFFFFFFF8;
      v51 = 0;
      do
      {
        v52 = v51;
        v51 += 8;
        *(_QWORD *)(v46 + v52) = *(_QWORD *)&v48[v52];
      }
      while ( v51 < v50 );
    }
  }
  else
  {
    *(_QWORD *)v41 = v60;
    *(_QWORD *)(v41 + 16) = v62;
  }
  v43 = v61;
LABEL_72:
  *(_QWORD *)(v41 + 8) = v43;
  *(_QWORD *)(a1 + 8) += 32LL;
LABEL_9:
  v7 = &byte_4;
  for ( i = &qword_47D0CC8[4]; ; v7 = (char *)i[6] )
  {
    if ( !v7 )
      goto LABEL_19;
    v14 = *(_DWORD *)i >> 6;
    if ( (*((_QWORD *)&v68 + v14) & (1LL << *(_DWORD *)i)) == 0 )
      goto LABEL_19;
    if ( (*((_QWORD *)&v66 + v14) & (1LL << *(_DWORD *)i)) == 0 )
    {
      v15 = (_BYTE *)i[7];
      v16 = (char *)i[8];
      v54 = v56;
      if ( !v15 && v16 )
        goto LABEL_90;
      v60 = v16;
      if ( (unsigned __int64)v16 > 0xF )
      {
        v54 = (void *)std::string::_M_create();
        v20 = v54;
        v56[0] = v60;
      }
      else
      {
        if ( v16 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v56[0]) = *v15;
          goto LABEL_29;
        }
        if ( !v16 )
        {
LABEL_29:
          v17 = v56;
LABEL_30:
          v55 = v16;
          v16[(_QWORD)v17] = 0;
          v11 = *(_QWORD *)(a1 + 8);
          if ( v11 != *(_QWORD *)(a1 + 16) )
          {
            v18 = v11 + 16;
            *(_QWORD *)v11 = v11 + 16;
            if ( v54 == v56 )
            {
              v13 = v55;
              v23 = (_DWORD)v55 + 1;
              if ( (unsigned int)((_DWORD)v55 + 1) < 8 )
              {
                if ( (v23 & 4) != 0 )
                {
                  *(_DWORD *)(v11 + 16) = v56[0];
                  *(_DWORD *)(v18 + v23 - 4) = *(_DWORD *)((char *)&v55 + v23 + 4);
                  v13 = v55;
                }
                else if ( (_DWORD)v55 != -1 )
                {
                  *(_BYTE *)(v11 + 16) = v56[0];
                  v13 = v55;
                  if ( (v23 & 2) != 0 )
                  {
                    *(_WORD *)(v18 + v23 - 2) = *(_WORD *)((char *)&v55 + v23 + 6);
                    v13 = v55;
                  }
                }
                goto LABEL_18;
              }
              *(_QWORD *)(v11 + 16) = v56[0];
              *(_QWORD *)(v18 + v23 - 8) = *(_QWORD *)((char *)&v56[-1] + v23);
              v25 = (v11 + 24) & 0xFFFFFFFFFFFFFFF8LL;
              v26 = v18 - v25;
              v27 = (char *)v56 - v26;
              v28 = (v26 + v23) & 0xFFFFFFF8;
              if ( v28 >= 8 )
              {
                v29 = v28 & 0xFFFFFFF8;
                v30 = 0;
                do
                {
                  v31 = v30;
                  v30 += 8;
                  *(_QWORD *)(v25 + v31) = *(_QWORD *)&v27[v31];
                }
                while ( v30 < v29 );
              }
            }
            else
            {
              *(_QWORD *)v11 = v54;
              *(_QWORD *)(v11 + 16) = v56[0];
            }
            v13 = v55;
LABEL_18:
            *(_QWORD *)(v11 + 8) = v13;
            *(_QWORD *)(a1 + 8) += 32LL;
            goto LABEL_19;
          }
          sub_625280(a1, (char **)&v54);
          if ( v54 != v56 )
            operator delete(v54, v56[0] + 1LL);
          goto LABEL_19;
        }
        v20 = v56;
      }
      memcpy(v20, v15, (size_t)v16);
      v16 = (char *)v60;
      v17 = v54;
      goto LABEL_30;
    }
    v9 = (_BYTE *)i[5];
    v57 = v59;
    if ( !v9 )
      goto LABEL_90;
    v60 = v7;
    if ( (unsigned __int64)v7 > 0xF )
    {
      src = v9;
      v21 = (void *)std::string::_M_create();
      v9 = src;
      v57 = v21;
      v22 = v21;
      v59[0] = v60;
    }
    else
    {
      if ( v7 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v59[0]) = *v9;
        v10 = v59;
        goto LABEL_14;
      }
      v22 = v59;
    }
    memcpy(v22, v9, (size_t)v7);
    v7 = (char *)v60;
    v10 = v57;
LABEL_14:
    v58 = v7;
    v7[(_QWORD)v10] = 0;
    v11 = *(_QWORD *)(a1 + 8);
    if ( v11 != *(_QWORD *)(a1 + 16) )
    {
      v12 = v11 + 16;
      *(_QWORD *)v11 = v11 + 16;
      if ( v57 == v59 )
      {
        v13 = v58;
        v24 = (_DWORD)v58 + 1;
        if ( (unsigned int)((_DWORD)v58 + 1) < 8 )
        {
          if ( (v24 & 4) != 0 )
          {
            *(_DWORD *)(v11 + 16) = v59[0];
            *(_DWORD *)(v12 + v24 - 4) = *(_DWORD *)((char *)&v58 + v24 + 4);
            v13 = v58;
          }
          else if ( (_DWORD)v58 != -1 )
          {
            *(_BYTE *)(v11 + 16) = v59[0];
            v13 = v58;
            if ( (v24 & 2) != 0 )
            {
              *(_WORD *)(v12 + v24 - 2) = *(_WORD *)((char *)&v58 + v24 + 6);
              v13 = v58;
            }
          }
          goto LABEL_18;
        }
        *(_QWORD *)(v11 + 16) = v59[0];
        *(_QWORD *)(v12 + v24 - 8) = *(_QWORD *)((char *)&v59[-1] + v24);
        v32 = (v11 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v33 = v12 - v32;
        v34 = (char *)v59 - v33;
        v35 = (v33 + v24) & 0xFFFFFFF8;
        if ( v35 >= 8 )
        {
          v36 = v35 & 0xFFFFFFF8;
          v37 = 0;
          do
          {
            v38 = v37;
            v37 += 8;
            *(_QWORD *)(v32 + v38) = *(_QWORD *)&v34[v38];
          }
          while ( v37 < v36 );
        }
      }
      else
      {
        *(_QWORD *)v11 = v57;
        *(_QWORD *)(v11 + 16) = v59[0];
      }
      v13 = v58;
      goto LABEL_18;
    }
    sub_625280(a1, (char **)&v57);
    if ( v57 != v59 )
      break;
LABEL_19:
    i += 14;
    if ( i == (__int64 *)&off_47D46A8 )
      return a1;
LABEL_20:
    ;
  }
  i += 14;
  operator delete(v57, v59[0] + 1LL);
  if ( i != (__int64 *)&off_47D46A8 )
    goto LABEL_20;
  return a1;
}

