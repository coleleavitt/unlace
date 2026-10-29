__int64 __fastcall sub_14EAB10(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  _QWORD *v4; // rax
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rax
  void **v8; // r12
  unsigned __int64 v9; // rax
  void **v10; // r13
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbx
  void **v15; // r13
  int v17; // eax
  int v18; // edx
  __int32 v19; // esi
  _QWORD *v20; // rax
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rbx
  void *v25; // rdi
  void **v26; // rdi
  void **v27; // rdi
  void **v28; // rbx
  void **v29; // r13
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // r13
  int v33; // eax
  __int64 v34; // r13
  __int64 v35; // rbx
  void *v36; // rdi
  void **v37; // rdi
  void **v38; // rdi
  void **v39; // rbx
  void **v40; // r13
  __m128i v41; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+10h] [rbp-B8h]
  __m128i v43; // [rsp+20h] [rbp-A8h] BYREF
  char v44; // [rsp+30h] [rbp-98h]
  int v45; // [rsp+34h] [rbp-94h]
  char v46; // [rsp+38h] [rbp-90h]
  int v47; // [rsp+3Ch] [rbp-8Ch]
  char v48; // [rsp+40h] [rbp-88h]
  char v49; // [rsp+44h] [rbp-84h]
  void *v50; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-70h]
  __int64 v52; // [rsp+60h] [rbp-68h]
  void *v53; // [rsp+70h] [rbp-58h]
  _BYTE v54[16]; // [rsp+80h] [rbp-48h] BYREF
  __int16 v55; // [rsp+90h] [rbp-38h]

  v3 = *(_DWORD *)(a2 + 88);
  LODWORD(v50) = 8;
  if ( !sub_14E3360(a2, &v50, 1) )
  {
    v4 = *(_QWORD **)(a2 + 80);
    v5 = v4[6];
    v6 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v4[11], v4[7], v4[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v50, v5, v6, 15);
    v7 = sub_14DC730(&v50, v3);
    sub_14DC730(v7, 8);
    if ( (_BYTE)v55 )
    {
      sub_FC7790(v52, (__int64 *)&v50, SHIBYTE(v55));
      v52 = 0;
      v55 = 0;
    }
    if ( v53 != v54 )
      operator delete(v53);
    v8 = (void **)v50;
    if ( !v50 )
      goto LABEL_22;
    v9 = v51;
    if ( !v51 )
      goto LABEL_22;
    if ( (unsigned __int64)v50 < v51 || (unsigned __int64)v50 > v51 + 14848 )
    {
      v10 = *((void ***)v50 + 66);
      v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v50 + 134)];
      if ( v10 != v11 )
      {
        do
        {
          while ( 1 )
          {
            v11 -= 8;
            v12 = (void **)v11[3];
            if ( v12 == v11 + 5 )
              break;
            operator delete(v12);
            if ( v10 == v11 )
              goto LABEL_13;
          }
        }
        while ( v10 != v11 );
LABEL_13:
        v11 = (void **)v8[66];
      }
      if ( v11 != v8 + 68 )
        free(v11);
      v13 = (void **)v8[52];
      if ( v13 != v8 + 54 )
        free(v13);
      v14 = v8 + 48;
      v15 = v8 + 8;
      do
      {
        while ( *v14 != v14 + 2 )
        {
          operator delete(*v14);
          v14 -= 4;
          if ( v15 == v14 )
            goto LABEL_21;
        }
        v14 -= 4;
      }
      while ( v14 != v15 );
LABEL_21:
      operator delete(v8, 0x3A0u);
LABEL_22:
      *(_BYTE *)(a1 + 20) = 0;
      return a1;
    }
    goto LABEL_57;
  }
  sub_13DF9D0(&v41, a2 + 24);
  *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v41);
  *(_QWORD *)(a2 + 104) = v42;
  sub_14E9E40(&v43, a2);
  if ( !v49 || (unsigned __int8)sub_14E5150(a2, 9u, 17, 0xAu) )
    goto LABEL_22;
  if ( !v44 )
  {
    v20 = *(_QWORD **)(a2 + 80);
    v21 = v20[6];
    v22 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v20[11], v20[7], v20[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v50, v21, v22, 1692);
    sub_14DC730(&v50, 20);
    if ( (_BYTE)v55 )
    {
      sub_FC7790(v52, (__int64 *)&v50, SHIBYTE(v55));
      v52 = 0;
      v55 = 0;
    }
    if ( v53 != v54 )
      operator delete(v53);
    v8 = (void **)v50;
    if ( !v50 )
      goto LABEL_22;
    v9 = v51;
    if ( !v51 )
      goto LABEL_22;
    if ( (unsigned __int64)v50 < v51 || (unsigned __int64)v50 > v51 + 14848 )
    {
      v23 = *((_QWORD *)v50 + 66);
      v24 = v23 + ((unsigned __int64)*((unsigned int *)v50 + 134) << 6);
      while ( v23 != v24 )
      {
        while ( 1 )
        {
          v24 -= 64;
          v25 = *(void **)(v24 + 24);
          if ( v25 == (void *)(v24 + 40) )
            break;
          operator delete(v25);
          if ( v23 == v24 )
            goto LABEL_48;
        }
      }
LABEL_48:
      v26 = (void **)v8[66];
      if ( v26 != v8 + 68 )
        free(v26);
      v27 = (void **)v8[52];
      if ( v27 != v8 + 54 )
        free(v27);
      v28 = v8 + 48;
      v29 = v8 + 8;
      do
      {
        while ( *v28 != v28 + 2 )
        {
          operator delete(*v28);
          v28 -= 4;
          if ( v29 == v28 )
            goto LABEL_21;
        }
        v28 -= 4;
      }
      while ( v29 != v28 );
      goto LABEL_21;
    }
    goto LABEL_57;
  }
  if ( !v43.m128i_i8[8] )
  {
    v31 = *(_QWORD **)(a2 + 80);
    v32 = v31[6];
    v33 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v31[11], v31[7], v31[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v50, v32, v33, 1692);
    sub_14DC730(&v50, 4);
    if ( (_BYTE)v55 )
    {
      sub_FC7790(v52, (__int64 *)&v50, SHIBYTE(v55));
      v52 = 0;
      v55 = 0;
    }
    if ( v53 != v54 )
      operator delete(v53);
    v8 = (void **)v50;
    if ( !v50 )
      goto LABEL_22;
    v9 = v51;
    if ( !v51 )
      goto LABEL_22;
    if ( (unsigned __int64)v50 < v51 || (unsigned __int64)v50 > v51 + 14848 )
    {
      v34 = *((_QWORD *)v50 + 66);
      v35 = v34 + ((unsigned __int64)*((unsigned int *)v50 + 134) << 6);
      while ( v34 != v35 )
      {
        while ( 1 )
        {
          v35 -= 64;
          v36 = *(void **)(v35 + 24);
          if ( v36 == (void *)(v35 + 40) )
            break;
          operator delete(v36);
          if ( v34 == v35 )
            goto LABEL_71;
        }
      }
LABEL_71:
      v37 = (void **)v8[66];
      if ( v37 != v8 + 68 )
        free(v37);
      v38 = (void **)v8[52];
      if ( v38 != v8 + 54 )
        free(v38);
      v39 = v8 + 48;
      v40 = v8 + 8;
      do
      {
        while ( *v39 != v39 + 2 )
        {
          operator delete(*v39);
          v39 -= 4;
          if ( v40 == v39 )
            goto LABEL_21;
        }
        v39 -= 4;
      }
      while ( v40 != v39 );
      goto LABEL_21;
    }
LABEL_57:
    v30 = *(unsigned int *)(v9 + 14976);
    *(_DWORD *)(v9 + 14976) = v30 + 1;
    *(_QWORD *)(v9 + 8 * v30 + 14848) = v8;
    goto LABEL_22;
  }
  v17 = 0;
  if ( v48 )
    v17 = v47;
  v18 = 0;
  if ( v46 )
    v18 = v45;
  v19 = v43.m128i_i32[3];
  *(_QWORD *)(a1 + 4) = v43.m128i_i64[0];
  *(_DWORD *)(a1 + 12) = v18;
  *(_DWORD *)a1 = v19;
  *(_DWORD *)(a1 + 16) = v17;
  *(_BYTE *)(a1 + 20) = 1;
  return a1;
}
