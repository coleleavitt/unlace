void __fastcall sub_1808A90(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _WORD *v13; // rcx
  _WORD **v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __m128i *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char **v22; // rax
  char *v23; // rcx
  _QWORD *v24; // r13
  char *v25; // rsi
  __int64 v26; // rax
  char *v27; // rdi
  char *v28; // rax
  char *v29; // r14
  char *v30; // rax
  __int64 v31; // rax
  _BYTE v32[184]; // [rsp+0h] [rbp-B8h] BYREF

  v5 = a2;
  if ( sub_9B48E0(a2) )
  {
    sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xDEFu, 0);
    sub_15F7200(v32);
    return;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_9;
  v10 = sub_B8C3D0(a2, a2, v6, v7, v8, v9);
  v11 = *v10;
  v12 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( v11 < v12 )
  {
    v13 = (_WORD *)v11;
    while ( 1 )
    {
      a2 = *(_QWORD *)v13;
      if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 159 )
        break;
      v13 += 4;
      if ( (_WORD *)v12 == v13 )
        goto LABEL_9;
    }
    if ( (_WORD *)v12 == v13 )
      goto LABEL_9;
  }
  else
  {
    if ( v11 == v12 )
      goto LABEL_9;
    v13 = *(_WORD **)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 159 )
    {
      v14 = (_WORD **)(v12 + 8);
      while ( (_WORD **)v11 != v14 )
      {
        v13 = *v14++;
        if ( v13[18] == 159 )
          goto LABEL_16;
      }
      goto LABEL_9;
    }
  }
LABEL_16:
  while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 159 )
    v11 += 8LL;
  if ( (*(_BYTE *)(*(_QWORD *)v11 + 38LL) & 4) == 0 )
    return;
  if ( (*(_BYTE *)(v5 + 29) & 1) != 0 )
  {
    v22 = (char **)sub_B8C3D0(v5, a2, v11, (__int64)v13, v8, v9);
    v23 = *v22;
    v24 = v22;
    v8 = 8LL * *((unsigned int *)v22 + 2);
    v25 = &(*v22)[v8];
    v26 = v8 >> 3;
    v9 = v8 >> 5;
    if ( v8 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 159 )
      {
        v27 = v23;
      }
      else
      {
        v27 = v23 + 8;
        if ( *(_WORD *)(*((_QWORD *)v23 + 1) + 36LL) != 159 )
        {
          v27 = v23 + 16;
          if ( *(_WORD *)(*((_QWORD *)v23 + 2) + 36LL) != 159 )
          {
            v28 = v23;
            v27 = v23 + 24;
            v9 = (__int64)&v23[32 * v9];
            if ( *(_WORD *)(*((_QWORD *)v23 + 3) + 36LL) != 159 )
            {
              while ( 1 )
              {
                v27 = v28 + 32;
                if ( (char *)v9 == v28 + 32 )
                {
                  v26 = (v25 - v27) >> 3;
                  goto LABEL_32;
                }
                if ( *(_WORD *)(*((_QWORD *)v28 + 4) + 36LL) == 159 )
                  goto LABEL_43;
                if ( *(_WORD *)(*((_QWORD *)v28 + 5) + 36LL) == 159 )
                {
                  v27 = v28 + 40;
                  goto LABEL_43;
                }
                if ( *(_WORD *)(*((_QWORD *)v28 + 6) + 36LL) == 159 )
                {
                  v27 = v28 + 48;
                  goto LABEL_43;
                }
                if ( *(_WORD *)(*((_QWORD *)v28 + 7) + 36LL) == 159 )
                  break;
                v28 += 32;
              }
              v27 = v28 + 56;
            }
          }
        }
      }
LABEL_43:
      if ( v25 != v27 )
      {
        v30 = v27 + 8;
        if ( v25 == v27 + 8 )
        {
          v29 = v27;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 159 )
            {
              *(_QWORD *)v27 = *(_QWORD *)v30;
              v27 += 8;
            }
            v30 += 8;
          }
          while ( v25 != v30 );
          v23 = (char *)*v24;
          v8 += *v24;
          v29 = &v27[v8 - (_QWORD)v25];
          if ( v25 != (char *)v8 )
          {
            memmove(v27, v25, v8 - (_QWORD)v25);
            v23 = (char *)*v24;
          }
        }
        goto LABEL_50;
      }
      goto LABEL_35;
    }
    v27 = v23;
LABEL_32:
    if ( v26 != 2 )
    {
      if ( v26 != 3 )
      {
        if ( v26 != 1 )
        {
LABEL_35:
          v29 = v25;
          goto LABEL_50;
        }
        goto LABEL_59;
      }
      if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 159 )
        goto LABEL_43;
      v27 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 159 )
      goto LABEL_43;
    v27 += 8;
LABEL_59:
    v29 = v25;
    if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 159 )
    {
LABEL_50:
      v31 = (v29 - v23) >> 3;
      *((_DWORD *)v24 + 2) = v31;
      if ( !(_DWORD)v31 )
        *(_BYTE *)(v5 + 29) &= ~1u;
      goto LABEL_9;
    }
    goto LABEL_43;
  }
LABEL_9:
  v15 = *(_QWORD **)(a1 + 248);
  v16 = v15[294];
  v15[304] += 40LL;
  v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15[295] >= (unsigned __int64)&v17[2].m128i_u64[1] && v16 )
    v15[294] = (char *)v17 + 40;
  else
    v17 = (__m128i *)sub_986170((__int64)(v15 + 294), 40, 40, 3, v8, v9);
  sub_B0E090(v17, *(_QWORD *)(a1 + 248), a3);
  sub_B8CC60(v5, (__int64)v17, v18, v19, v20, v21);
}
