void __fastcall sub_8426D0(const double *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  _DWORD *v8; // rdx
  __int64 v9; // r9
  int v10; // edi
  unsigned int v11; // r10d
  __int64 *v12; // rbp
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 *v15; // rax
  int v16; // r8d
  __int64 v17; // rdx
  __int64 *v18; // r10
  __int64 *v19; // rdx
  __int64 *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbp
  void *v24; // rdi
  __int64 *v25; // rbp
  unsigned __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  __int64 *v32; // rax
  int v33; // r10d
  __int64 *v34; // r8
  __int64 *v35; // r11
  __int64 v36; // rdx
  __int64 *v37; // rsi
  __int64 *v38; // rdx
  __int64 v39; // rsi
  _QWORD *v41; // [rsp+8h] [rbp-140h]
  size_t v42; // [rsp+20h] [rbp-128h]
  unsigned int v43; // [rsp+20h] [rbp-128h]
  __int64 v44; // [rsp+28h] [rbp-120h]
  __int64 v45; // [rsp+28h] [rbp-120h]
  int v46; // [rsp+30h] [rbp-118h]
  char *v47; // [rsp+30h] [rbp-118h]
  int v48; // [rsp+38h] [rbp-110h]
  __m128 v49; // [rsp+50h] [rbp-F8h] BYREF
  char v50[8]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-E0h]
  __int64 *v52; // [rsp+70h] [rbp-D8h]
  __int64 v53; // [rsp+80h] [rbp-C8h]
  char v54[8]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+98h] [rbp-B0h]
  void *v56; // [rsp+B8h] [rbp-90h]
  char v57[8]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-70h]
  void *ptr; // [rsp+F8h] [rbp-50h]

  v3 = (_QWORD *)*a2;
  if ( !*a2 )
    return;
  v41 = &v3[*((unsigned int *)v3 - 1)];
  if ( v3 == v41 )
    return;
  do
  {
    v5 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(const double *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, *v3) + 16)
                   + 24LL);
    v49 = _mm_loadh_ps(a1 + 3);
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    sub_167EE60(v50, &v49, 0, 0, 0);
    sub_167F5F0(v54, v50);
    sub_167F5B0(v57, v50);
    while ( (unsigned __int8)sub_167E490(v54, v57) )
    {
      v6 = sub_167E460(v54);
      if ( *(_WORD *)(v6 + 4) )
        goto LABEL_6;
      v7 = *(_QWORD *)(v6 + 16);
      v8 = *(_DWORD **)(v7 + 24);
      if ( v8 )
      {
        if ( *v8 != -1 )
          goto LABEL_6;
      }
      if ( (*(_BYTE *)(v6 + 30) & 1) != 0 )
        goto LABEL_6;
      v9 = *(unsigned int *)(a3 + 8);
      v10 = *(_DWORD *)(a3 + 16);
      v11 = 2 * v9;
      if ( 3 * (int)v9 < (unsigned int)(4 * (v10 + *(_DWORD *)(a3 + 12))) )
      {
        v46 = 2 * v9;
        v44 = v11;
        v42 = 8LL * v11;
        v32 = (__int64 *)sub_186B270(v42);
        v33 = v46;
        v14 = v42;
        v12 = v32;
        if ( v46 )
        {
          memset(v32, 0, 8 * v44);
          v14 = v42;
          v33 = v46;
        }
        v13 = v33 - 1;
        v34 = *(__int64 **)a3;
        v35 = (__int64 *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8));
        v15 = (__int64 *)((char *)v12 + v14);
        if ( *(__int64 **)a3 != v35 )
        {
          do
          {
            while ( (unsigned __int64)*v34 <= 1 )
            {
              if ( v35 == ++v34 )
                goto LABEL_67;
            }
            v36 = 8LL * (*(_DWORD *)(*v34 + 12) & v13);
            v37 = &v12[(unsigned __int64)v36 / 8];
            if ( v14 == v36 )
            {
LABEL_71:
              if ( v12 == v37 )
              {
LABEL_79:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v38 = v12;
              while ( *v38 )
              {
                if ( v37 == ++v38 )
                  goto LABEL_79;
              }
            }
            else
            {
              v38 = &v12[(unsigned __int64)v36 / 8];
              while ( *v38 )
              {
                if ( v15 == ++v38 )
                  goto LABEL_71;
              }
            }
            v39 = *v34++;
            *v38 = v39;
          }
          while ( v35 != v34 );
LABEL_67:
          v35 = *(__int64 **)a3;
        }
        if ( v35 )
        {
          v48 = v33;
          v47 = (char *)v12 + v14;
          v45 = v14;
          v43 = v33 - 1;
          sub_186B220(v35);
          v33 = v48;
          v15 = (__int64 *)v47;
          v14 = v45;
          v13 = v43;
        }
        v10 = 0;
        *(_QWORD *)a3 = v12;
        *(_DWORD *)(a3 + 8) = v33;
        *(_DWORD *)(a3 + 16) = 0;
      }
      else
      {
        v12 = *(__int64 **)a3;
        v13 = v9 - 1;
        v14 = 8 * v9;
        v15 = (__int64 *)(*(_QWORD *)a3 + v14);
      }
      v16 = *(_DWORD *)(v7 + 12);
      v17 = 8LL * (v16 & v13);
      v18 = &v12[(unsigned __int64)v17 / 8];
      if ( v17 != v14 )
      {
        v19 = &v12[(unsigned __int64)v17 / 8];
        v20 = nullptr;
        while ( 1 )
        {
          v21 = *v19;
          if ( (unsigned __int64)*v19 > 1 )
          {
            if ( *(_DWORD *)(v21 + 12) == v16 && v7 == v21 )
            {
              *v19 = v7;
              goto LABEL_6;
            }
          }
          else
          {
            if ( !v21 )
            {
              if ( v20 )
                goto LABEL_77;
              v20 = v19;
              goto LABEL_78;
            }
            v20 = v19;
          }
          if ( ++v19 == v15 )
            goto LABEL_25;
        }
      }
      v20 = nullptr;
      while ( 1 )
      {
LABEL_25:
        if ( v18 == v12 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v22 = *v12;
        if ( (unsigned __int64)*v12 <= 1 )
          break;
        if ( *(_DWORD *)(v22 + 12) == v16 && v7 == v22 )
        {
          *v12 = v7;
          goto LABEL_6;
        }
LABEL_24:
        ++v12;
      }
      if ( v22 )
      {
        v20 = v12;
        goto LABEL_24;
      }
      if ( v20 )
LABEL_77:
        *(_DWORD *)(a3 + 16) = v10 - 1;
      else
        v20 = v12;
LABEL_78:
      *v20 = v7;
      ++*(_DWORD *)(a3 + 12);
LABEL_6:
      sub_167EA90(v54);
    }
    if ( ptr )
      sub_186B220(ptr);
    if ( v58 )
      sub_186B220((void *)(v58 - 8));
    if ( v56 )
      sub_186B220(v56);
    if ( v55 )
      sub_186B220((void *)(v55 - 8));
    v23 = v53;
    if ( v53 )
    {
      v24 = *(void **)(v53 + 16);
      if ( v24 )
        memset(v24, 0, 4LL * *(unsigned int *)(v53 + 12));
      *(_DWORD *)(v23 + 8) = 0;
    }
    v25 = v52;
    if ( v52 )
    {
      v26 = (unsigned __int64)&v52[*((unsigned int *)v52 - 1)];
      if ( (unsigned __int64)v52 >= v26 )
        goto LABEL_49;
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v28 = v51;
            v29 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v29 )
              break;
          }
          if ( (unsigned __int64)++v25 >= v26 )
            goto LABEL_48;
        }
        sub_15D7BC0(v28, v27);
        ++v25;
      }
      while ( (unsigned __int64)v25 < v26 );
LABEL_48:
      v25 = v52;
      if ( v52 )
LABEL_49:
        sub_186B220(v25 - 1);
    }
    v30 = v49.m128_u64[0];
    if ( v49.m128_u64[0] )
    {
      v31 = v49.m128_u64[1];
      v29 = (*(_DWORD *)(v49.m128_u64[0] + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v31, v30);
    }
    ++v3;
  }
  while ( v41 != v3 );
}

