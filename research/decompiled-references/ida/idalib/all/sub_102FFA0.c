__int64 __fastcall sub_102FFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char ***a6)
{
  char **v6; // rbx
  size_t v8; // r13
  bool v9; // r14
  const void *v10; // rbp
  void (__fastcall *v11)(__int64, __int64, const void *, char *, bool); // r9
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r9
  void *v17; // rax
  char *v18; // r15
  char *v19; // rbp
  char v20; // al
  unsigned __int8 *v21; // r14
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void **v26; // rbp
  _BYTE *v27; // rdi
  __int64 v28; // rax
  void **v29; // rbp
  unsigned __int64 v30; // rax
  void **v31; // r14
  void **v32; // r13
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // r14
  void **v36; // r13
  __int64 v38; // rax
  unsigned int v39; // r10d
  __int64 *v40; // r9
  __int64 v41; // r15
  unsigned int v42; // eax
  size_t v43; // rdx
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  char **v50; // r13
  __int64 v51; // rbx
  char *v52; // r12
  __int64 v53; // rbp
  void *v54; // rdi
  __int64 v55; // rdx
  char **v56; // [rsp+8h] [rbp-E0h]
  unsigned int v58; // [rsp+20h] [rbp-C8h]
  __int64 *v59; // [rsp+28h] [rbp-C0h]
  __int64 v60; // [rsp+28h] [rbp-C0h]
  void *v62; // [rsp+40h] [rbp-A8h] BYREF
  size_t n; // [rsp+48h] [rbp-A0h]
  _QWORD v64[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v65; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v66; // [rsp+68h] [rbp-80h]
  __int64 v67; // [rsp+70h] [rbp-78h]
  void *v68; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+90h] [rbp-58h] BYREF
  __int16 v70; // [rsp+A0h] [rbp-48h]

  v6 = *a6;
  v56 = a6[1];
  if ( *a6 != v56 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = v6[1];
        if ( !v18 )
          goto LABEL_8;
        v19 = *v6;
        v20 = **v6;
        if ( ((v20 - 43) & 0xFD) == 0 )
          break;
        sub_FC70B0((__int64)&v65, a3, 0, 816);
        v21 = (unsigned __int8 *)v65;
        if ( !v65 )
        {
          v44 = v66;
          v45 = *(_DWORD *)(v66 + 14976);
          if ( v45 )
          {
            v46 = (unsigned int)(v45 - 1);
            *(_DWORD *)(v66 + 14976) = v46;
            v21 = *(unsigned __int8 **)(v44 + 8 * v46 + 14848);
            v47 = *((unsigned int *)v21 + 134);
            *v21 = 0;
            v48 = *((_QWORD *)v21 + 66);
            *((_DWORD *)v21 + 106) = 0;
            v49 = v48 + (v47 << 6);
            if ( v48 != v49 )
            {
              v50 = v6;
              v51 = v49;
              v60 = a2;
              v52 = v19;
              v53 = v48;
              do
              {
                while ( 1 )
                {
                  v51 -= 64;
                  v54 = *(void **)(v51 + 24);
                  if ( v54 == (void *)(v51 + 40) )
                    break;
                  operator delete(v54);
                  if ( v53 == v51 )
                    goto LABEL_60;
                }
              }
              while ( v53 != v51 );
LABEL_60:
              v19 = v52;
              v6 = v50;
              a2 = v60;
            }
            *((_DWORD *)v21 + 134) = 0;
          }
          else
          {
            v21 = (unsigned __int8 *)operator new(0x3A0u);
            *v21 = 0;
            *((_QWORD *)v21 + 12) = v21 + 112;
            *((_QWORD *)v21 + 16) = v21 + 144;
            *((_QWORD *)v21 + 20) = v21 + 176;
            *((_QWORD *)v21 + 24) = v21 + 208;
            *((_QWORD *)v21 + 28) = v21 + 240;
            *((_QWORD *)v21 + 32) = v21 + 272;
            *((_QWORD *)v21 + 36) = v21 + 304;
            *((_QWORD *)v21 + 40) = v21 + 336;
            *((_QWORD *)v21 + 44) = v21 + 368;
            *((_QWORD *)v21 + 48) = v21 + 400;
            *((_QWORD *)v21 + 52) = v21 + 432;
            *((_QWORD *)v21 + 13) = 0;
            v21[112] = 0;
            *((_QWORD *)v21 + 17) = 0;
            v21[144] = 0;
            *((_QWORD *)v21 + 21) = 0;
            v21[176] = 0;
            *((_QWORD *)v21 + 25) = 0;
            v21[208] = 0;
            *((_QWORD *)v21 + 29) = 0;
            v21[240] = 0;
            *((_QWORD *)v21 + 33) = 0;
            v21[272] = 0;
            *((_QWORD *)v21 + 37) = 0;
            v21[304] = 0;
            *((_QWORD *)v21 + 41) = 0;
            v21[336] = 0;
            *((_QWORD *)v21 + 45) = 0;
            v21[368] = 0;
            *((_QWORD *)v21 + 49) = 0;
            v21[400] = 0;
            *((_QWORD *)v21 + 53) = 0x800000000LL;
            *((_QWORD *)v21 + 66) = v21 + 544;
            *((_QWORD *)v21 + 67) = 0x600000000LL;
          }
          v65 = v21;
        }
        v21[*v21 + 1] = 0;
        v62 = v64;
        sub_102BE20(&v62, v19, (__int64)&v18[(_QWORD)v19]);
        v22 = v65;
        v23 = *(unsigned __int8 *)v65;
        *(_BYTE *)v65 = v23 + 1;
        v24 = (unsigned __int8)v23;
        v25 = 4 * (v23 + 3);
        v26 = (void **)&v22[v25];
        v27 = (_BYTE *)v22[v25];
        if ( v62 == v64 )
        {
          v43 = n;
          if ( n )
          {
            if ( n == 1 )
              *v27 = v64[0];
            else
              memcpy(v27, v64, n);
            v43 = n;
            v27 = *v26;
          }
          v26[1] = (void *)v43;
          v27[v43] = 0;
          v27 = v62;
        }
        else
        {
          if ( v27 == (_BYTE *)&v22[v25 + 2] )
          {
            *v26 = v62;
            v26[1] = (void *)n;
            v26[2] = (void *)v64[0];
          }
          else
          {
            v28 = v22[4 * v24 + 14];
            *v26 = v62;
            v26[1] = (void *)n;
            v26[2] = (void *)v64[0];
            if ( v27 )
            {
              v62 = v27;
              v64[0] = v28;
              goto LABEL_16;
            }
          }
          v62 = v64;
          v27 = v64;
        }
LABEL_16:
        n = 0;
        *v27 = 0;
        if ( v62 != v64 )
          operator delete(v62);
        if ( (_BYTE)v70 )
        {
          sub_FC7790(v67, (__int64 *)&v65, SHIBYTE(v70));
          v67 = 0;
          v70 = 0;
        }
        if ( v68 != &v69 )
          operator delete(v68);
        v29 = (void **)v65;
        if ( !v65 )
          goto LABEL_8;
        v30 = v66;
        if ( !v66 )
          goto LABEL_8;
        if ( (unsigned __int64)v65 >= v66 && (unsigned __int64)v65 <= v66 + 14848 )
        {
          v55 = *(unsigned int *)(v66 + 14976);
          *(_DWORD *)(v66 + 14976) = v55 + 1;
          *(_QWORD *)(v30 + 8 * v55 + 14848) = v29;
          goto LABEL_8;
        }
        v31 = *((void ***)v65 + 66);
        v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v65 + 134)];
        if ( v31 != v32 )
        {
          do
          {
            while ( 1 )
            {
              v32 -= 8;
              v33 = (void **)v32[3];
              if ( v33 == v32 + 5 )
                break;
              operator delete(v33);
              if ( v31 == v32 )
                goto LABEL_29;
            }
          }
          while ( v31 != v32 );
LABEL_29:
          v32 = (void **)v29[66];
        }
        if ( v32 != v29 + 68 )
          free(v32);
        v34 = (void **)v29[52];
        if ( v34 != v29 + 54 )
          free(v34);
        v35 = v29 + 48;
        v36 = v29 + 8;
        do
        {
          while ( *v35 != v35 + 2 )
          {
            operator delete(*v35);
            v35 -= 4;
            if ( v35 == v36 )
              goto LABEL_37;
          }
          v35 -= 4;
        }
        while ( v35 != v36 );
LABEL_37:
        operator delete(v29, 0x3A0u);
        v6 += 4;
        if ( v56 == v6 )
          return 1;
      }
      v8 = (size_t)(v18 - 1);
      v9 = v20 == 43;
      v10 = v19 + 1;
      v11 = *(void (__fastcall **)(__int64, __int64, const void *, char *, bool))(*(_QWORD *)a1 + 536LL);
      if ( (char *)v11 != (char *)&sub_10306B0 )
      {
        v11(a1, a2, v10, v18 - 1, v20 == 43);
        goto LABEL_8;
      }
      v12 = sub_2244B30(v10, v18 - 1);
      v13 = sub_2244CB0(a2, v10, v18 - 1, v12);
      v16 = (__int64 *)(*(_QWORD *)a2 + 8LL * v13);
      if ( !*v16 )
        goto LABEL_40;
      if ( *v16 == -8 )
        break;
      sub_10298F0((__int64 **)&v65, v16, 0);
      v17 = v65;
LABEL_7:
      *(_BYTE *)(*(_QWORD *)v17 + 8LL) = v9;
LABEL_8:
      v6 += 4;
      if ( v56 == v6 )
        return 1;
    }
    --*(_DWORD *)(a2 + 16);
LABEL_40:
    v59 = v16;
    v58 = v13;
    v38 = sub_22300B0(v18 + 16, 8, v13, v14, v15, v16);
    v39 = v58;
    v40 = v59;
    v41 = v38;
    if ( v8 )
    {
      memcpy((void *)(v38 + 16), v10, v8);
      v40 = v59;
      v39 = v58;
    }
    *(_BYTE *)(v41 + v8 + 16) = 0;
    *(_QWORD *)v41 = v8;
    *(_BYTE *)(v41 + 8) = 0;
    *v40 = v41;
    ++*(_DWORD *)(a2 + 12);
    v42 = sub_22450D0(a2, v39);
    sub_10298F0((__int64 **)&v65, (__int64 *)(*(_QWORD *)a2 + 8LL * v42), 0);
    v17 = v65;
    goto LABEL_7;
  }
  return 1;
}
