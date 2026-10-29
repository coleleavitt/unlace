__int64 __fastcall sub_1C69A0(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r12
  unsigned int v8; // r13d
  __int64 v9; // rsi
  _WORD *v10; // rdx
  int v11; // r15d
  int v13; // r14d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r12d
  char *v18; // r15
  __int64 v19; // rax
  signed __int64 v20; // r8
  unsigned int v21; // eax
  unsigned __int16 v22; // ax
  __int64 v23; // rdx
  char *v24; // rsi
  char *v25; // rax
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rbp
  __int64 v31; // r12
  void *v32; // rdi
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r14
  _DWORD *v38; // r13
  char *v39; // rbx
  unsigned int v40; // [rsp+4h] [rbp-C4h]
  __int16 v41; // [rsp+4h] [rbp-C4h]
  char *v42; // [rsp+18h] [rbp-B0h]
  signed __int64 v43; // [rsp+18h] [rbp-B0h]
  char v44; // [rsp+23h] [rbp-A5h]
  void *src; // [rsp+30h] [rbp-98h] BYREF
  __int128 v48; // [rsp+38h] [rbp-90h]
  int v49; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-70h]
  int v51; // [rsp+60h] [rbp-68h]
  _DWORD v52[4]; // [rsp+70h] [rbp-58h] BYREF
  int v53; // [rsp+80h] [rbp-48h]
  unsigned __int64 v54; // [rsp+88h] [rbp-40h]

  v6 = a3;
  v54 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a2 + 184LL))(a2, a3);
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, v7);
  v9 = v6;
  v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, a4);
  if ( v11 != -1 )
  {
    if ( (int)v8 >= (int)a4 )
    {
LABEL_3:
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 8) = v11;
      return a1;
    }
LABEL_5:
    if ( 2 * v8 == a4 )
    {
      v9 = v8 + v6;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 176LL))(a2, v9, v8);
      if ( v14 != -1 )
      {
        *(_DWORD *)a1 = 4;
        *(_DWORD *)(a1 + 8) = v11 | (v14 << 16);
        return a1;
      }
    }
    v13 = 0;
LABEL_19:
    v15 = a2[12];
    v16 = (__int64)&v49;
    src = nullptr;
    v41 = 0;
    LOBYTE(v15) = *(_BYTE *)(v15 + 145);
    v48 = 0;
    v44 = v15;
    v17 = a4;
    if ( a4 )
    {
      while ( 1 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v8);
        if ( v21 == -1 )
          break;
        v49 = 3;
        LOWORD(v51) = v41;
        v50 = (unsigned int)(v13 << 16) | (unsigned __int64)v21;
        v22 = v8 - v13;
        if ( (int)(v8 - v13) > v17 )
          v22 = v17;
        v6 += v8;
        HIWORD(v51) = v22;
        v17 -= v22;
        v41 += v22;
        if ( v44 )
        {
          v18 = (char *)src;
          v52[0] = 0;
          copy_argloc();
          v53 = v51;
          v19 = v48;
          v20 = v18 - (_BYTE *)src;
          if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
          {
            v43 = v18 - (_BYTE *)src;
            v26 = (char *)qvector_reserve((__int64)&src, (__int64)src, v48 + 1, 24);
            v20 = v43;
            src = v26;
            v18 = &v26[v43];
            v19 = v48;
          }
          memmove(v18 + 24, v18, 24 * v19 - v20);
          v9 = (__int64)v52;
          *(_DWORD *)v18 = 0;
          copy_argloc();
          *(_QWORD *)&v48 = v48 + 1;
          *((_DWORD *)v18 + 4) = v53;
          cleanup_argloc();
        }
        else
        {
          v52[0] = 0;
          copy_argloc();
          v23 = v48;
          v24 = (char *)src;
          v53 = v51;
          if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
          {
            src = (void *)qvector_reserve((__int64)&src, (__int64)src, v48 + 1, 24);
            v23 = v48;
            v24 = (char *)src;
          }
          v25 = &v24[24 * v23];
          v9 = (__int64)v52;
          *(_DWORD *)v25 = 0;
          v42 = v25;
          copy_argloc();
          *(_QWORD *)&v48 = v48 + 1;
          *((_DWORD *)v42 + 4) = v53;
          cleanup_argloc();
        }
        v13 = 0;
        cleanup_argloc();
        if ( !v17 )
        {
          if ( v44 )
          {
            v10 = src;
            v9 = (__int64)src + 24 * v48;
            if ( 24LL * (_QWORD)v48 )
            {
              do
              {
                v16 = (unsigned __int16)a4;
                LOWORD(v16) = a4 - v10[9] - v10[8];
                v10 += 12;
                *(v10 - 4) = v16;
              }
              while ( v10 != (_WORD *)v9 );
            }
          }
          goto LABEL_35;
        }
      }
    }
    else
    {
LABEL_35:
      v27 = qalloc_or_throw(24, v9, (__int64)v10, v16);
      *(_QWORD *)v27 = 0;
      v30 = (__int64 *)v27;
      *(_OWORD *)(v27 + 8) = 0;
      v31 = v48;
      if ( (_QWORD)v48 )
      {
        v35 = qalloc_or_throw(24 * v48, v9, v28, v29);
        *v30 = v35;
        v36 = v35;
        v37 = 0;
        v30[2] = v31;
        while ( 1 )
        {
          v38 = (_DWORD *)(24 * v37 + v36);
          v39 = (char *)src + 24 * v37;
          *v38 = 0;
          copy_argloc();
          ++v37;
          v38[4] = *((_DWORD *)v39 + 4);
          if ( v31 == v37 )
            break;
          v36 = *v30;
        }
        v30[1] = v31;
      }
      if ( v30 )
      {
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v30;
      }
    }
    v32 = src;
    if ( src )
    {
      v33 = v48;
      if ( (_QWORD)v48 )
      {
        v34 = 0;
        do
        {
          ++v34;
          cleanup_argloc();
          v32 = src;
        }
        while ( v33 != v34 );
      }
      *(_QWORD *)&v48 = 0;
      qfree((__int64)v32);
    }
    return a1;
  }
  v13 = 0;
  v40 = v6 + a4;
  if ( (int)v6 > (int)v7 )
  {
    while ( 1 )
    {
      v9 = v6;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v40 - v6);
      if ( v11 != -1 )
        break;
      --v6;
      ++v13;
      if ( (_DWORD)v7 == v6 )
        goto LABEL_16;
    }
LABEL_11:
    if ( v13 >= (int)v8 )
      return a1;
    if ( (int)(v13 + a4) <= (int)v8 )
    {
      v11 |= v13 << 16;
      goto LABEL_3;
    }
    if ( v13 )
      goto LABEL_19;
    goto LABEL_5;
  }
  if ( v6 != (_DWORD)v7 )
  {
    if ( !under_debugger )
      sub_383060(51576);
    BUG();
  }
LABEL_16:
  v9 = v6;
  v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v8);
  if ( v11 != -1 )
    goto LABEL_11;
  return a1;
}
