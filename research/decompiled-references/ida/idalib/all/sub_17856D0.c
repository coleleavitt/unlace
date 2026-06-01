void __fastcall sub_17856D0(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // r13
  char v6; // al
  __int64 v7; // rbx
  bool v8; // zf
  char *v9; // rax
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  void *v16; // rax
  _QWORD *v17; // rax
  unsigned __int8 *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rax
  _DWORD *v21; // rdx
  __int64 v22; // rax
  char *v23; // rsi
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void **v28; // rbx
  unsigned __int8 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  void *v36; // rax
  _QWORD *v37; // rax
  size_t v38; // rdx
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // r14
  void *v45; // rdi
  void *src; // [rsp+0h] [rbp-E8h] BYREF
  size_t n; // [rsp+8h] [rbp-E0h]
  _QWORD v48[2]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v49[2]; // [rsp+20h] [rbp-C8h] BYREF
  void *v50; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v51; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-A0h]
  char v53; // [rsp+98h] [rbp-50h]
  unsigned int v54; // [rsp+A0h] [rbp-48h]
  char v55; // [rsp+A4h] [rbp-44h]

  v4 = (__int64 *)(a1 + 8);
  if ( (*a2 & 0x1FF) == 0x5C )
  {
    v5 = sub_C946E0((__int64)a2);
    sub_168B9F0((__int64)v49, v4, *(_DWORD *)(v5 + 24), 0x17C1u, 0);
    if ( v53 )
    {
      sub_AE9DF0(&v51, v5, 0xAu);
    }
    else if ( v55 )
    {
      v35 = sub_168B9E0(v49);
      v36 = v50;
      if ( v50 )
        v36 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v50 + 32LL))(v50);
      src = v36;
      v37 = sub_1587BC0(v35, (__int64 *)&src, v31, v32, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v54 + 8), v5, 0xAu);
    }
    sub_15F7200(v49);
  }
  sub_168B9F0((__int64)v49, v4, *(_DWORD *)(a3 + 12), 0x16F0u, 0);
  v6 = (*(_BYTE *)(a3 + 10) >> 2) & 3;
  if ( v6 == 1 )
  {
    v7 = 8;
    v10 = "co_await";
    if ( !v53 )
    {
LABEL_9:
      if ( v55 )
      {
        v15 = sub_168B9E0(v49);
        v16 = v50;
        if ( v50 )
          v16 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v50 + 32LL))(v50);
        src = v16;
        v17 = sub_1587BC0(v15, (__int64 *)&src, v11, v12, v13, v14);
        sub_AEC220((unsigned __int8 **)(*v17 + 32LL * v54 + 8), v10, v7);
      }
      goto LABEL_10;
    }
  }
  else
  {
    v7 = (v6 == 0) - 1LL + 9;
    v8 = v6 == 0;
    v9 = "co_yield";
    if ( v8 )
      v9 = "co_return";
    v10 = v9;
    if ( !v53 )
      goto LABEL_9;
  }
  v18 = v51;
  if ( !v51 )
  {
    v39 = v52;
    v40 = *(_DWORD *)(v52 + 14976);
    if ( v40 )
    {
      v41 = (unsigned int)(v40 - 1);
      *(_DWORD *)(v52 + 14976) = v41;
      v18 = *(unsigned __int8 **)(v39 + 8 * v41 + 14848);
      v42 = *((unsigned int *)v18 + 134);
      *v18 = 0;
      v43 = *((_QWORD *)v18 + 66);
      *((_DWORD *)v18 + 106) = 0;
      v44 = v43 + (v42 << 6);
      while ( v43 != v44 )
      {
        while ( 1 )
        {
          v44 -= 64;
          v45 = *(void **)(v44 + 24);
          if ( v45 == (void *)(v44 + 40) )
            break;
          operator delete(v45);
          if ( v43 == v44 )
            goto LABEL_46;
        }
      }
LABEL_46:
      *((_DWORD *)v18 + 134) = 0;
    }
    else
    {
      v18 = (unsigned __int8 *)operator new(0x3A0u);
      *v18 = 0;
      *((_QWORD *)v18 + 12) = v18 + 112;
      *((_QWORD *)v18 + 16) = v18 + 144;
      *((_QWORD *)v18 + 20) = v18 + 176;
      *((_QWORD *)v18 + 24) = v18 + 208;
      *((_QWORD *)v18 + 28) = v18 + 240;
      *((_QWORD *)v18 + 32) = v18 + 272;
      *((_QWORD *)v18 + 36) = v18 + 304;
      *((_QWORD *)v18 + 40) = v18 + 336;
      *((_QWORD *)v18 + 44) = v18 + 368;
      *((_QWORD *)v18 + 48) = v18 + 400;
      *((_QWORD *)v18 + 52) = v18 + 432;
      *((_QWORD *)v18 + 13) = 0;
      v18[112] = 0;
      *((_QWORD *)v18 + 17) = 0;
      v18[144] = 0;
      *((_QWORD *)v18 + 21) = 0;
      v18[176] = 0;
      *((_QWORD *)v18 + 25) = 0;
      v18[208] = 0;
      *((_QWORD *)v18 + 29) = 0;
      v18[240] = 0;
      *((_QWORD *)v18 + 33) = 0;
      v18[272] = 0;
      *((_QWORD *)v18 + 37) = 0;
      v18[304] = 0;
      *((_QWORD *)v18 + 41) = 0;
      v18[336] = 0;
      *((_QWORD *)v18 + 45) = 0;
      v18[368] = 0;
      *((_QWORD *)v18 + 49) = 0;
      v18[400] = 0;
      *((_QWORD *)v18 + 53) = 0x800000000LL;
      *((_QWORD *)v18 + 66) = v18 + 544;
      *((_QWORD *)v18 + 67) = 0x600000000LL;
    }
    v51 = v18;
  }
  LODWORD(v19) = 0;
  v18[*v18 + 1] = 0;
  src = v48;
  do
  {
    v20 = (unsigned int)v19;
    v19 = (unsigned int)(v19 + 8);
    *(_QWORD *)((char *)v48 + v20) = *(_QWORD *)&v10[v20];
  }
  while ( (unsigned int)v19 < ((unsigned int)v7 & 0xFFFFFFF8) );
  v21 = (_DWORD *)((char *)v48 + v19);
  v22 = 0;
  v23 = &v10[v19];
  if ( (v7 & 4) != 0 )
  {
    *v21 = *(_DWORD *)v23;
    v22 = 4;
  }
  if ( (v7 & 2) != 0 )
  {
    *(_WORD *)((char *)v21 + v22) = *(_WORD *)&v23[v22];
    v22 += 2;
  }
  if ( (v7 & 1) != 0 )
    *((_BYTE *)v21 + v22) = v23[v22];
  n = v7;
  *((_BYTE *)v48 + v7) = 0;
  v24 = v51;
  v25 = *v51;
  *v51 = v25 + 1;
  v26 = (unsigned __int8)v25;
  v27 = 32 * (v25 + 3);
  v28 = (void **)&v24[v27];
  v29 = *(unsigned __int8 **)&v24[v27];
  if ( src == v48 )
  {
    v38 = n;
    if ( n )
    {
      if ( n == 1 )
        *v29 = v48[0];
      else
        memcpy(v29, src, n);
      v38 = n;
      v29 = (unsigned __int8 *)*v28;
    }
    v28[1] = (void *)v38;
    v29[v38] = 0;
    v29 = (unsigned __int8 *)src;
    goto LABEL_28;
  }
  if ( v29 == &v24[v27 + 16] )
  {
    *v28 = src;
    v28[1] = (void *)n;
    v28[2] = (void *)v48[0];
  }
  else
  {
    v30 = *(_QWORD *)&v24[32 * v26 + 112];
    *v28 = src;
    v28[1] = (void *)n;
    v28[2] = (void *)v48[0];
    if ( v29 )
    {
      src = v29;
      v48[0] = v30;
      goto LABEL_28;
    }
  }
  v29 = (unsigned __int8 *)v48;
  src = v48;
LABEL_28:
  n = 0;
  *v29 = 0;
  if ( src != v48 )
    operator delete(src);
LABEL_10:
  sub_15F7200(v49);
}
