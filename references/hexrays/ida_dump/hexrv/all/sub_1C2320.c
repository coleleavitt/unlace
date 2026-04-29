__int64 __fastcall sub_1C2320(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r12
  unsigned int v8; // r13d
  int v9; // r15d
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rax
  int v14; // r12d
  char *v15; // r15
  __int64 v16; // rax
  signed __int64 v17; // r8
  unsigned int v18; // eax
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  char *v21; // rsi
  char *v22; // rax
  char *v23; // rax
  char *v24; // rdx
  char *v25; // rsi
  __int16 v26; // cx
  __int64 v27; // rax
  __int64 *v28; // rbp
  __int64 v29; // r12
  char *v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // r14
  _DWORD *v37; // r13
  char *v38; // rbx
  unsigned int v39; // [rsp+4h] [rbp-C4h]
  __int16 v40; // [rsp+4h] [rbp-C4h]
  char *v41; // [rsp+18h] [rbp-B0h]
  signed __int64 v42; // [rsp+18h] [rbp-B0h]
  char v43; // [rsp+23h] [rbp-A5h]
  void *src; // [rsp+30h] [rbp-98h] BYREF
  __int128 v47; // [rsp+38h] [rbp-90h]
  int v48; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-70h]
  int v50; // [rsp+60h] [rbp-68h]
  _DWORD v51[4]; // [rsp+70h] [rbp-58h] BYREF
  int v52; // [rsp+80h] [rbp-48h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v6 = a3;
  v53 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a2 + 184LL))(a2, a3);
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, v7);
  v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, a4);
  if ( v9 != -1 )
  {
    if ( (int)v8 >= (int)a4 )
    {
LABEL_3:
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 8) = v9;
      return a1;
    }
LABEL_5:
    if ( 2 * v8 == a4 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v8 + v6, v8);
      if ( v12 != -1 )
      {
        *(_DWORD *)a1 = 4;
        *(_DWORD *)(a1 + 8) = v9 | (v12 << 16);
        return a1;
      }
    }
    v11 = 0;
LABEL_19:
    v13 = a2[12];
    src = nullptr;
    v40 = 0;
    LOBYTE(v13) = *(_BYTE *)(v13 + 145);
    v47 = 0;
    v43 = v13;
    v14 = a4;
    if ( a4 )
    {
      while ( 1 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v8);
        if ( v18 == -1 )
          break;
        v48 = 3;
        LOWORD(v50) = v40;
        v49 = (unsigned int)(v11 << 16) | (unsigned __int64)v18;
        v19 = v8 - v11;
        if ( (int)(v8 - v11) > v14 )
          v19 = v14;
        v6 += v8;
        HIWORD(v50) = v19;
        v14 -= v19;
        v40 += v19;
        if ( v43 )
        {
          v15 = (char *)src;
          v51[0] = 0;
          copy_argloc(v51, &v48);
          v52 = v50;
          v16 = v47;
          v17 = v15 - (_BYTE *)src;
          if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
          {
            v42 = v15 - (_BYTE *)src;
            v23 = (char *)qvector_reserve(&src, src, v47 + 1, 24);
            v17 = v42;
            src = v23;
            v15 = &v23[v42];
            v16 = v47;
          }
          memmove(v15 + 24, v15, 24 * v16 - v17);
          *(_DWORD *)v15 = 0;
          copy_argloc(v15, v51);
          *(_QWORD *)&v47 = v47 + 1;
          *((_DWORD *)v15 + 4) = v52;
          cleanup_argloc(v51);
        }
        else
        {
          v51[0] = 0;
          copy_argloc(v51, &v48);
          v20 = v47;
          v21 = (char *)src;
          v52 = v50;
          if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
          {
            src = (void *)qvector_reserve(&src, src, v47 + 1, 24);
            v20 = v47;
            v21 = (char *)src;
          }
          v22 = &v21[24 * v20];
          *(_DWORD *)v22 = 0;
          v41 = v22;
          copy_argloc(v22, v51);
          *(_QWORD *)&v47 = v47 + 1;
          *((_DWORD *)v41 + 4) = v52;
          cleanup_argloc(v51);
        }
        v11 = 0;
        cleanup_argloc(&v48);
        if ( !v14 )
        {
          if ( v43 )
          {
            v24 = (char *)src;
            v25 = (char *)src + 24 * v47;
            if ( 24LL * (_QWORD)v47 )
            {
              do
              {
                v26 = a4 - *((_WORD *)v24 + 9) - *((_WORD *)v24 + 8);
                v24 += 24;
                *((_WORD *)v24 - 4) = v26;
              }
              while ( v24 != v25 );
            }
          }
          goto LABEL_35;
        }
      }
    }
    else
    {
LABEL_35:
      v27 = qalloc_or_throw(24);
      *(_QWORD *)v27 = 0;
      v28 = (__int64 *)v27;
      *(_OWORD *)(v27 + 8) = 0;
      v29 = v47;
      if ( (_QWORD)v47 )
      {
        v34 = qalloc_or_throw(24 * v47);
        *v28 = v34;
        v35 = v34;
        v36 = 0;
        v28[2] = v29;
        while ( 1 )
        {
          v37 = (_DWORD *)(24 * v36 + v35);
          v38 = (char *)src + 24 * v36;
          *v37 = 0;
          copy_argloc(v37, v38);
          ++v36;
          v37[4] = *((_DWORD *)v38 + 4);
          if ( v29 == v36 )
            break;
          v35 = *v28;
        }
        v28[1] = v29;
      }
      if ( v28 )
      {
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v28;
      }
    }
    v30 = (char *)src;
    if ( src )
    {
      v31 = v47;
      if ( (_QWORD)v47 )
      {
        v32 = 0;
        do
        {
          v33 = 3 * v32++;
          cleanup_argloc(&v30[8 * v33]);
          v30 = (char *)src;
        }
        while ( v31 != v32 );
      }
      *(_QWORD *)&v47 = 0;
      qfree(v30);
    }
    return a1;
  }
  v11 = 0;
  v39 = v6 + a4;
  if ( (int)v6 > (int)v7 )
  {
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v39 - v6);
      if ( v9 != -1 )
        break;
      --v6;
      ++v11;
      if ( (_DWORD)v7 == v6 )
        goto LABEL_16;
    }
LABEL_11:
    if ( v11 >= (int)v8 )
      return a1;
    if ( (int)(v11 + a4) <= (int)v8 )
    {
      v9 |= v11 << 16;
      goto LABEL_3;
    }
    if ( v11 )
      goto LABEL_19;
    goto LABEL_5;
  }
  if ( v6 != (_DWORD)v7 )
  {
    if ( !under_debugger )
      sub_37DDE0(51576);
    BUG();
  }
LABEL_16:
  v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v8);
  if ( v9 != -1 )
    goto LABEL_11;
  return a1;
}
