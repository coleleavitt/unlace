__int64 __fastcall sub_43FB20(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  int v4; // eax
  unsigned __int64 v5; // rsi
  void *i; // r15
  __int64 v7; // r12
  __int64 *v8; // rax
  void *v9; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 *v12; // rax
  _QWORD *v13; // rax
  int v14; // edx
  _QWORD *v15; // rbp
  __int64 v16; // r13
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  __int64 *v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 *v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rdi
  void (__fastcall *v28)(__int64); // rax
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // rdi
  void *v34; // rax
  size_t v35; // rdx
  void *v36; // rax
  size_t v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 *v40; // rdi
  __int64 j; // rbp
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rax
  __int64 *v45; // rdi
  __int64 v46; // rax
  int v47; // r15d
  int v48; // r12d
  __int64 v49; // rbp
  int v50; // eax
  _DWORD *v51; // rax
  __int64 v52; // r13
  _QWORD *v53; // rax
  int v54; // edx
  _QWORD *v55; // rbx
  __int64 v56; // rax
  __int64 *v57; // rdi
  __int64 v58; // [rsp+20h] [rbp-68h]
  void *src; // [rsp+38h] [rbp-50h] BYREF
  void *v62; // [rsp+40h] [rbp-48h] BYREF
  unsigned int n; // [rsp+48h] [rbp-40h] BYREF
  int n_4; // [rsp+4Ch] [rbp-3Ch] BYREF
  int v65; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v66[13]; // [rsp+54h] [rbp-34h] BYREF

  v2 = sub_40FB00(120);
  sub_457B10(v2, 0xFFFFFFFFLL, &qword_655500);
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( (_UNKNOWN **)v3 != &off_655E20 )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      v4 = *(_DWORD *)(a2 + 16);
      v5 = *(_QWORD *)(a2 + 8);
      v65 = *(_DWORD *)(a2 + 16);
    }
    else
    {
      v5 = sub_47ACD0(a2, &v65);
      v4 = v65;
    }
    v62 = (void *)v5;
    for ( i = (void *)(v4 + v5); v5 < (unsigned __int64)i; v15[3] = v11 )
    {
      v10 = sub_49D1E0(
              a1,
              v5,
              (int)i - (int)v5,
              (unsigned int)&src,
              (unsigned int)&v62,
              (unsigned int)&n,
              (__int64)&n_4);
      if ( v10 )
        goto LABEL_55;
      if ( src == i )
        break;
      if ( v62 == i )
        goto LABEL_79;
      if ( n_4 )
      {
        v7 = sub_496740(a1, v5);
        *(_DWORD *)v7 = 0;
        if ( n )
        {
          v34 = (void *)sub_40FB00(n + 1);
          v35 = n;
          *(_QWORD *)(v7 + 8) = v34;
          memcpy(v34, src, v35);
          *(_BYTE *)(*(_QWORD *)(v7 + 8) + (int)n) = 0;
          *(_DWORD *)(v7 + 16) = n;
        }
        else
        {
          v8 = off_656088;
          *(_DWORD *)(v7 + 16) = 0;
          *(_QWORD *)(v7 + 8) = v8;
        }
        *(_QWORD *)(v7 + 24) = 0;
      }
      else
      {
        v7 = sub_496740(a1, v5);
        *(_DWORD *)v7 = 0;
        v20 = off_656088;
        *(_DWORD *)(v7 + 16) = 0;
        v21 = n;
        *(_QWORD *)(v7 + 24) = 0;
        *(_QWORD *)(v7 + 8) = v20;
        v22 = sub_40FB00(v21 + 1);
        v23 = n;
        *(_QWORD *)(v7 + 8) = v22;
        *(_DWORD *)(v7 + 16) = sub_49D4F0(v23, src, v22);
      }
      v9 = v62;
      v10 = sub_49D1E0(
              a1,
              (_DWORD)v62,
              (int)i - (int)v62,
              (unsigned int)&src,
              (unsigned int)&v62,
              (unsigned int)&n,
              (__int64)&n_4);
      if ( v10 )
      {
        v38 = *(_DWORD *)v7 - 1;
        v18 = *(_DWORD *)v7 == 1;
        *(_DWORD *)v7 = v38;
        if ( v38 < 0 || v18 )
        {
          v39 = *(_QWORD *)(v7 + 24);
          if ( v39 && *(_QWORD *)(v39 + 8) )
          {
            sub_47B120(v7);
          }
          else
          {
            v40 = *(__int64 **)(v7 + 8);
            if ( v40 && v40 != off_656088 )
              Tcl_Free((__int64)v40);
            *(_DWORD *)(v7 + 16) = -1;
            sub_496830(v7);
          }
        }
        goto LABEL_55;
      }
      if ( n_4 )
      {
        v11 = sub_496740(a1, v9);
        *(_DWORD *)v11 = 0;
        if ( n )
        {
          v36 = (void *)sub_40FB00(n + 1);
          v37 = n;
          *(_QWORD *)(v11 + 8) = v36;
          memcpy(v36, src, v37);
          *(_BYTE *)(*(_QWORD *)(v11 + 8) + (int)n) = 0;
          *(_DWORD *)(v11 + 16) = n;
        }
        else
        {
          v12 = off_656088;
          *(_DWORD *)(v11 + 16) = 0;
          *(_QWORD *)(v11 + 8) = v12;
        }
        *(_QWORD *)(v11 + 24) = 0;
      }
      else
      {
        v11 = sub_496740(a1, v9);
        *(_DWORD *)v11 = 0;
        v24 = off_656088;
        *(_DWORD *)(v11 + 16) = 0;
        v25 = n;
        *(_QWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 8) = v24;
        v26 = sub_40FB00(v25 + 1);
        v27 = n;
        *(_QWORD *)(v11 + 8) = v26;
        *(_DWORD *)(v11 + 16) = sub_49D4F0(v27, src, v26);
      }
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v2 + 72))(v2, v7, v66);
      v14 = v66[0];
      v15 = v13;
      if ( !v66[0]
        || ((v13[6] = 0, *(_QWORD *)(v2 + 88))
          ? (v13[5] = *(_QWORD *)(v2 + 96), *(_QWORD *)(*(_QWORD *)(v2 + 96) + 48LL) = v13)
          : (v13[5] = 0, *(_QWORD *)(v2 + 88) = v13),
            *(_QWORD *)(v2 + 96) = v13,
            !v14) )
      {
        v16 = v13[3];
        v17 = *(_DWORD *)v7 - 1;
        v18 = *(_DWORD *)v7 == 1;
        *(_DWORD *)v7 = v17;
        if ( v17 < 0 || v18 )
        {
          v32 = *(_QWORD *)(v7 + 24);
          if ( v32 && *(_QWORD *)(v32 + 8) )
          {
            sub_47B120(v7);
          }
          else
          {
            v33 = *(__int64 **)(v7 + 8);
            if ( v33 && v33 != off_656088 )
              Tcl_Free((__int64)v33);
            *(_DWORD *)(v7 + 16) = -1;
            sub_496830(v7);
          }
        }
        v19 = *(_DWORD *)v16 - 1;
        v18 = *(_DWORD *)v16 == 1;
        *(_DWORD *)v16 = v19;
        if ( v19 < 0 || v18 )
        {
          v30 = *(_QWORD *)(v16 + 24);
          if ( v30 && *(_QWORD *)(v30 + 8) )
          {
            sub_47B120(v16);
          }
          else
          {
            v31 = *(__int64 **)(v16 + 8);
            if ( v31 && v31 != off_656088 )
              Tcl_Free((__int64)v31);
            *(_DWORD *)(v16 + 16) = -1;
            sub_496830(v16);
          }
        }
      }
      v5 = (unsigned __int64)v62;
      ++*(_DWORD *)v11;
    }
    v3 = *(_QWORD *)(a2 + 24);
LABEL_29:
    if ( v3 )
    {
      v28 = *(void (__fastcall **)(__int64))(v3 + 8);
      if ( v28 )
        v28(a2);
    }
    *(_DWORD *)(v2 + 104) = 0;
    *(_QWORD *)(v2 + 112) = 0;
    *(_DWORD *)(v2 + 108) = 1;
    *(_QWORD *)(a2 + 24) = &off_6554A0;
    *(_QWORD *)(a2 + 32) = v2;
    return 0;
  }
  v46 = *(_QWORD *)(a2 + 32);
  v47 = *(_DWORD *)(v46 + 8);
  v58 = v46 + 16;
  if ( (v47 & 1) == 0 )
  {
    v48 = 0;
    if ( v47 > 0 )
    {
      do
      {
        v52 = v48;
        v53 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v2 + 72))(
                          v2,
                          *(_QWORD *)(v58 + 8LL * v48),
                          v66);
        v54 = v66[0];
        v55 = v53;
        if ( !v66[0]
          || ((v53[6] = 0, !*(_QWORD *)(v2 + 88))
            ? (v53[5] = 0, *(_QWORD *)(v2 + 88) = v53)
            : (v53[5] = *(_QWORD *)(v2 + 96), *(_QWORD *)(*(_QWORD *)(v2 + 96) + 48LL) = v53),
              *(_QWORD *)(v2 + 96) = v53,
              !v54) )
        {
          v49 = v53[3];
          sub_47B3B0(a2);
          v50 = *(_DWORD *)v49 - 1;
          v18 = *(_DWORD *)v49 == 1;
          *(_DWORD *)v49 = v50;
          if ( v50 < 0 || v18 )
          {
            v56 = *(_QWORD *)(v49 + 24);
            if ( v56 && *(_QWORD *)(v56 + 8) )
            {
              sub_47B120(v49);
            }
            else
            {
              v57 = *(__int64 **)(v49 + 8);
              if ( v57 && v57 != off_656088 )
                Tcl_Free((__int64)v57);
              *(_DWORD *)(v49 + 16) = -1;
              sub_496830(v49);
            }
          }
        }
        v48 += 2;
        v51 = *(_DWORD **)(v58 + 8 * v52 + 8);
        ++*v51;
        v55[3] = v51;
      }
      while ( v48 < v47 );
      v3 = *(_QWORD *)(a2 + 24);
    }
    goto LABEL_29;
  }
LABEL_79:
  if ( a1 )
    sub_48B860(a1, "missing value to go with key", 0);
  v10 = 1;
LABEL_55:
  for ( j = *(_QWORD *)(v2 + 88); j; j = *(_QWORD *)(j + 48) )
  {
    v42 = *(_QWORD *)(j + 24);
    v43 = *(_DWORD *)v42 - 1;
    v18 = *(_DWORD *)v42 == 1;
    *(_DWORD *)v42 = v43;
    if ( v43 < 0 || v18 )
    {
      v44 = *(_QWORD *)(v42 + 24);
      if ( v44 && *(_QWORD *)(v44 + 8) )
      {
        sub_47B120(v42);
      }
      else
      {
        v45 = *(__int64 **)(v42 + 8);
        if ( v45 && v45 != off_656088 )
          Tcl_Free((__int64)v45);
        *(_DWORD *)(v42 + 16) = -1;
        sub_496830(v42);
      }
    }
  }
  sub_457CE0(v2);
  Tcl_Free(v2);
  return v10;
}

