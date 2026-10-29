__m128i *__fastcall sub_1807A70(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v7; // ebp
  __int64 **v10; // rax
  __int64 *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __m128i *v17; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char **v22; // rax
  char *v23; // rcx
  char **v24; // r14
  __int64 v25; // rdx
  char *v26; // rsi
  __int64 v27; // rax
  char *v28; // rdi
  char *v29; // rax
  char *v30; // r15
  __int64 v31; // rax
  __int64 *v32; // rcx
  char *v33; // rax
  char *v34; // rax
  _BYTE v35[200]; // [rsp+0h] [rbp-C8h] BYREF

  v7 = a4;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v10 = (__int64 **)sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v11 = *v10;
  v12 = (unsigned __int64)&(*v10)[*((unsigned int *)v10 + 2)];
  if ( (unsigned __int64)v11 < v12 )
  {
    v32 = v11;
    while ( *(_WORD *)(*v32 + 36) != 385 )
    {
      if ( (__int64 *)v12 == ++v32 )
        goto LABEL_8;
    }
    if ( (__int64 *)v12 == v32 )
      goto LABEL_8;
  }
  else
  {
    if ( v11 == (__int64 *)v12 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 385 )
    {
      v13 = (__int64 *)(v12 + 8);
      while ( v11 != v13 )
      {
        v14 = *v13++;
        if ( *(_WORD *)(v14 + 36) == 385 )
          goto LABEL_14;
      }
      goto LABEL_8;
    }
  }
LABEL_14:
  while ( 1 )
  {
    v19 = *v11;
    if ( *(_WORD *)(*v11 + 36) == 385 )
      break;
    ++v11;
  }
  if ( v7 == *(_DWORD *)(v19 + 40) )
    return nullptr;
  sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x1054u, 0);
  sub_15F7200(v35);
  sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1889u, 0);
  sub_15F7200(v35);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v22 = (char **)sub_B8C3D0(a2, a1 + 8, v20, v21, a5, a6);
    v23 = *v22;
    v24 = v22;
    v25 = 8LL * *((unsigned int *)v22 + 2);
    v26 = &(*v22)[v25];
    v27 = v25 >> 3;
    a5 = v25 >> 5;
    if ( v25 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 385 )
      {
        v28 = v23;
      }
      else
      {
        v28 = v23 + 8;
        if ( *(_WORD *)(*((_QWORD *)v23 + 1) + 36LL) != 385 )
        {
          v28 = v23 + 16;
          if ( *(_WORD *)(*((_QWORD *)v23 + 2) + 36LL) != 385 )
          {
            v29 = v23;
            a5 = (__int64)&v23[32 * a5];
            if ( *(_WORD *)(*((_QWORD *)v23 + 3) + 36LL) == 385 )
            {
              v28 = v23 + 24;
            }
            else
            {
              while ( 1 )
              {
                v28 = v29 + 32;
                if ( (char *)a5 == v29 + 32 )
                {
                  v27 = (v26 - v28) >> 3;
                  goto LABEL_30;
                }
                a6 = *((_QWORD *)v29 + 4);
                if ( *(_WORD *)(a6 + 36) == 385 )
                  goto LABEL_41;
                a6 = *((_QWORD *)v29 + 5);
                if ( *(_WORD *)(a6 + 36) == 385 )
                {
                  v28 = v29 + 40;
                  goto LABEL_41;
                }
                a6 = *((_QWORD *)v29 + 6);
                if ( *(_WORD *)(a6 + 36) == 385 )
                {
                  v28 = v29 + 48;
                  goto LABEL_41;
                }
                a6 = *((_QWORD *)v29 + 7);
                if ( *(_WORD *)(a6 + 36) == 385 )
                  break;
                v29 += 32;
              }
              v28 = v29 + 56;
            }
          }
        }
      }
LABEL_41:
      if ( v26 != v28 )
      {
        v33 = v28 + 8;
        if ( v26 == v28 + 8 )
        {
          v30 = v28;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 385 )
            {
              *(_QWORD *)v28 = *(_QWORD *)v33;
              v28 += 8;
            }
            v33 += 8;
          }
          while ( v26 != v33 );
          v23 = *v24;
          v34 = &(*v24)[v25];
          v30 = &v28[v34 - v26];
          if ( v26 != v34 )
          {
            memmove(v28, v26, v34 - v26);
            v23 = *v24;
          }
        }
        goto LABEL_34;
      }
      goto LABEL_33;
    }
    v28 = v23;
LABEL_30:
    if ( v27 != 2 )
    {
      if ( v27 != 3 )
      {
        if ( v27 != 1 )
        {
LABEL_33:
          v30 = v26;
          goto LABEL_34;
        }
        goto LABEL_57;
      }
      if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 385 )
        goto LABEL_41;
      v28 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 385 )
      goto LABEL_41;
    v28 += 8;
LABEL_57:
    v30 = v26;
    if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 385 )
    {
LABEL_34:
      v31 = (v30 - v23) >> 3;
      *((_DWORD *)v24 + 2) = v31;
      if ( !(_DWORD)v31 )
        *(_BYTE *)(a2 + 29) &= ~1u;
      goto LABEL_8;
    }
    goto LABEL_41;
  }
LABEL_8:
  v15 = *(_QWORD **)(a1 + 248);
  v16 = v15[294];
  v15[304] += 48LL;
  v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15[295] >= (unsigned __int64)&v17[3] && v16 )
    v15[294] = v17 + 3;
  else
    v17 = (__m128i *)sub_986170((__int64)(v15 + 294), 48, 48, 3, a5, a6);
  sub_B1A980(v17, *(_QWORD *)(a1 + 248), a3, v7);
  return v17;
}
