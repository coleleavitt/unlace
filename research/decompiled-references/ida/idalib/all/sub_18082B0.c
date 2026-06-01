void __fastcall sub_18082B0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _WORD *v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char **v20; // rax
  char *v21; // rcx
  _QWORD *v22; // r13
  char *v23; // rsi
  __int64 v24; // rax
  char *v25; // rdi
  char *v26; // rax
  char *v27; // r14
  _WORD **v28; // rax
  char *v29; // rax
  __int64 v30; // rax
  _BYTE v31[184]; // [rsp+0h] [rbp-B8h] BYREF

  v6 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 && sub_9B48E0(a2) )
  {
    sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xDEFu, 0);
    sub_15F7200(v31);
    return;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v9 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v10 = *v9;
  v11 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( v10 >= v11 )
  {
    if ( v10 == v11 )
      goto LABEL_8;
    v12 = *(_WORD **)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 160 )
    {
      v28 = (_WORD **)(v11 + 8);
      while ( (_WORD **)v10 != v28 )
      {
        v12 = *v28++;
        if ( v12[18] == 160 )
          goto LABEL_16;
      }
      goto LABEL_8;
    }
  }
  else
  {
    v12 = (_WORD *)v10;
    while ( 1 )
    {
      a2 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 160 )
        break;
      v12 += 4;
      if ( (_WORD *)v11 == v12 )
        goto LABEL_8;
    }
    if ( (_WORD *)v11 == v12 )
      goto LABEL_8;
  }
LABEL_16:
  while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 160 )
    v10 += 8LL;
  if ( (*(_BYTE *)(*(_QWORD *)v10 + 38LL) & 4) == 0 )
    return;
  if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
  {
    v20 = (char **)sub_B8C3D0(v6, a2, v10, (__int64)v12, a5, a6);
    v21 = *v20;
    v22 = v20;
    a5 = 8LL * *((unsigned int *)v20 + 2);
    v23 = &(*v20)[a5];
    v24 = a5 >> 3;
    if ( a5 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 160 )
      {
        v25 = v21;
      }
      else
      {
        v25 = v21 + 8;
        if ( *(_WORD *)(*((_QWORD *)v21 + 1) + 36LL) != 160 )
        {
          v25 = v21 + 16;
          if ( *(_WORD *)(*((_QWORD *)v21 + 2) + 36LL) != 160 )
          {
            v26 = v21;
            if ( *(_WORD *)(*((_QWORD *)v21 + 3) + 36LL) == 160 )
            {
              v25 = v21 + 24;
            }
            else
            {
              while ( 1 )
              {
                v25 = v26 + 32;
                if ( &v21[32 * (a5 >> 5)] == v26 + 32 )
                {
                  v24 = (v23 - v25) >> 3;
                  goto LABEL_32;
                }
                a6 = *((_QWORD *)v26 + 4);
                if ( *(_WORD *)(a6 + 36) == 160 )
                  goto LABEL_43;
                a6 = *((_QWORD *)v26 + 5);
                if ( *(_WORD *)(a6 + 36) == 160 )
                {
                  v25 = v26 + 40;
                  goto LABEL_43;
                }
                a6 = *((_QWORD *)v26 + 6);
                if ( *(_WORD *)(a6 + 36) == 160 )
                {
                  v25 = v26 + 48;
                  goto LABEL_43;
                }
                a6 = *((_QWORD *)v26 + 7);
                if ( *(_WORD *)(a6 + 36) == 160 )
                  break;
                v26 += 32;
              }
              v25 = v26 + 56;
            }
          }
        }
      }
LABEL_43:
      if ( v23 != v25 )
      {
        v29 = v25 + 8;
        if ( v23 == v25 + 8 )
        {
          v27 = v25;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 160 )
            {
              *(_QWORD *)v25 = *(_QWORD *)v29;
              v25 += 8;
            }
            v29 += 8;
          }
          while ( v23 != v29 );
          v21 = (char *)*v22;
          a5 += *v22;
          v27 = &v25[a5 - (_QWORD)v23];
          if ( v23 != (char *)a5 )
          {
            memmove(v25, v23, a5 - (_QWORD)v23);
            v21 = (char *)*v22;
          }
        }
        goto LABEL_50;
      }
      goto LABEL_35;
    }
    v25 = v21;
LABEL_32:
    if ( v24 != 2 )
    {
      if ( v24 != 3 )
      {
        if ( v24 != 1 )
        {
LABEL_35:
          v27 = v23;
          goto LABEL_50;
        }
        goto LABEL_60;
      }
      if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 160 )
        goto LABEL_43;
      v25 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 160 )
      goto LABEL_43;
    v25 += 8;
LABEL_60:
    v27 = v23;
    if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 160 )
    {
LABEL_50:
      v30 = (v27 - v21) >> 3;
      *((_DWORD *)v22 + 2) = v30;
      if ( !(_DWORD)v30 )
        *(_BYTE *)(v6 + 29) &= ~1u;
      goto LABEL_8;
    }
    goto LABEL_43;
  }
LABEL_8:
  v13 = *(_QWORD **)(a1 + 248);
  v14 = v13[294];
  v13[304] += 40LL;
  v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v13[295] >= (unsigned __int64)&v15[2].m128i_u64[1] && v14 )
    v13[294] = (char *)v15 + 40;
  else
    v15 = (__m128i *)sub_986170((__int64)(v13 + 294), 40, 40, 3, a5, a6);
  sub_B0E170(v15, *(_QWORD *)(a1 + 248), a3);
  sub_B8CC60(v6, (__int64)v15, v16, v17, v18, v19);
}
