__m128i *__fastcall sub_1811220(__int64 a1, char *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  __int64 *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 *i; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __m128i *v22; // rbx
  __int64 v24; // r13
  __int64 *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  char **v29; // rax
  _QWORD *v30; // r13
  __int64 v31; // rax
  char *v32; // rdi
  char *v33; // rax
  char *v34; // r14
  char *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v46[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v48; // [rsp+30h] [rbp-A8h] BYREF
  char v49; // [rsp+88h] [rbp-50h]
  unsigned int v50; // [rsp+90h] [rbp-48h]
  char v51; // [rsp+94h] [rbp-44h]

  if ( (a2[29] & 1) == 0 )
    goto LABEL_15;
  v8 = (__int64)a2;
  v9 = sub_B8C3D0((__int64)a2, (__int64)a2, (__int64)a3, a4, a5, a6);
  v11 = *v9;
  v12 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( v11 >= v12 )
  {
    if ( v11 == v12 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 197 )
    {
      v13 = (__int64 *)(v12 + 8);
      do
      {
        v10 = (char *)v13;
        if ( (__int64 *)v11 == v13 )
          goto LABEL_8;
        v14 = *v13++;
      }
      while ( *(_WORD *)(v14 + 36) != 197 );
    }
LABEL_24:
    v24 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 197 )
    {
      v25 = (__int64 *)(v11 + 8);
      do
        v24 = *v25++;
      while ( *(_WORD *)(v24 + 36) != 197 );
    }
    v26 = a1 + 8;
    sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), *(_DWORD *)(v24 + 24), 0x7Fu, 0);
    if ( v49 )
    {
      v26 = v24;
      sub_AE9DF0(&v48, v24, 0xEu);
    }
    else if ( v51 )
    {
      v42 = sub_168B9E0(v46);
      v43 = v47;
      if ( v47 )
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v43;
      v44 = sub_1587BC0(v42, &v45, v38, v39, v40, v41);
      v26 = v24;
      sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v50 + 8), v24, 0xEu);
    }
    sub_15F7200(v46);
    if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
      goto LABEL_15;
    v29 = (char **)sub_B8C3D0(v8, v26, v27, v28, a5, a6);
    v10 = *v29;
    v30 = v29;
    a5 = 8LL * *((unsigned int *)v29 + 2);
    a2 = &(*v29)[a5];
    v31 = a5 >> 3;
    v11 = a5 >> 5;
    if ( a5 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 197 )
      {
        v32 = v10;
      }
      else
      {
        v32 = v10 + 8;
        if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 36LL) != 197 )
        {
          v32 = v10 + 16;
          if ( *(_WORD *)(*((_QWORD *)v10 + 2) + 36LL) != 197 )
          {
            v33 = v10;
            v11 = (unsigned __int64)&v10[32 * v11];
            if ( *(_WORD *)(*((_QWORD *)v10 + 3) + 36LL) == 197 )
            {
              v32 = v10 + 24;
            }
            else
            {
              while ( 1 )
              {
                v32 = v33 + 32;
                if ( (char *)v11 == v33 + 32 )
                {
                  v31 = (a2 - v32) >> 3;
                  goto LABEL_43;
                }
                a6 = *((_QWORD *)v33 + 4);
                if ( *(_WORD *)(a6 + 36) == 197 )
                  goto LABEL_47;
                a6 = *((_QWORD *)v33 + 5);
                if ( *(_WORD *)(a6 + 36) == 197 )
                {
                  v32 = v33 + 40;
                  goto LABEL_47;
                }
                a6 = *((_QWORD *)v33 + 6);
                if ( *(_WORD *)(a6 + 36) == 197 )
                {
                  v32 = v33 + 48;
                  goto LABEL_47;
                }
                a6 = *((_QWORD *)v33 + 7);
                if ( *(_WORD *)(a6 + 36) == 197 )
                  break;
                v33 += 32;
              }
              v32 = v33 + 56;
            }
          }
        }
      }
LABEL_47:
      if ( a2 != v32 )
      {
        v35 = v32 + 8;
        if ( a2 == v32 + 8 )
        {
          v34 = v32;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 197 )
            {
              *(_QWORD *)v32 = *(_QWORD *)v35;
              v32 += 8;
            }
            v35 += 8;
          }
          while ( a2 != v35 );
          v10 = (char *)*v30;
          a5 += *v30;
          v11 = a5 - (_QWORD)a2;
          v34 = &v32[a5 - (_QWORD)a2];
          if ( a2 != (char *)a5 )
          {
            memmove(v32, a2, v11);
            v10 = (char *)*v30;
          }
        }
        goto LABEL_54;
      }
      goto LABEL_46;
    }
    v32 = v10;
LABEL_43:
    if ( v31 != 2 )
    {
      if ( v31 != 3 )
      {
        if ( v31 != 1 )
        {
LABEL_46:
          v34 = a2;
          goto LABEL_54;
        }
        goto LABEL_75;
      }
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 197 )
        goto LABEL_47;
      v32 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 197 )
      goto LABEL_47;
    v32 += 8;
LABEL_75:
    v34 = a2;
    if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 197 )
    {
LABEL_54:
      v36 = (v34 - v10) >> 3;
      *((_DWORD *)v30 + 2) = v36;
      if ( !(_DWORD)v36 )
        *(_BYTE *)(v8 + 29) &= ~1u;
      goto LABEL_8;
    }
    goto LABEL_47;
  }
  v10 = (char *)v11;
  a2 = *(char **)v11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 197 )
  {
LABEL_23:
    if ( (char *)v12 == v10 )
      goto LABEL_8;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v10 += 8;
    if ( (char *)v12 == v10 )
      break;
    a2 = *(char **)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 197 )
      goto LABEL_23;
  }
LABEL_8:
  if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
  {
    v15 = sub_B8C3D0(v8, (__int64)a2, v11, (__int64)v10, a5, a6);
    v16 = (__int64 *)*v15;
    v17 = *v15 + 8LL * *((unsigned int *)v15 + 2);
    if ( *v15 < v17 )
    {
      v37 = *v15;
      while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 195 )
      {
        v37 += 8LL;
        if ( v17 == v37 )
          goto LABEL_15;
      }
      if ( v17 == v37 )
        goto LABEL_15;
      return nullptr;
    }
    if ( v16 != (__int64 *)v17 )
    {
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 195 )
      {
        for ( i = (__int64 *)(v17 + 8); v16 != i; ++i )
        {
          v19 = *i;
          if ( *(_WORD *)(v19 + 36) == 195 )
            return nullptr;
        }
        goto LABEL_15;
      }
      return nullptr;
    }
  }
LABEL_15:
  v20 = *(_QWORD **)(a1 + 248);
  v21 = v20[294];
  v20[304] += 40LL;
  v22 = (__m128i *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v20[295] >= (unsigned __int64)&v22[2].m128i_u64[1] && v21 )
    v20[294] = (char *)v22 + 40;
  else
    v22 = (__m128i *)sub_986170((__int64)(v20 + 294), 40, 40, 3, a5, a6);
  sub_B11320(v22, *(_QWORD *)(a1 + 248), a3);
  return v22;
}
