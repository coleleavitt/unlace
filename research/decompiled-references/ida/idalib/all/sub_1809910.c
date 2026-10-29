__int64 __fastcall sub_1809910(__int64 a1, __int64 i, const __m128i *a3, const void *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 **v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // r15
  char *v26; // rax
  __int64 v27; // rcx
  char *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rcx
  char *v31; // rcx
  char *v32; // rsi
  char *j; // rax
  __int64 v35; // [rsp+8h] [rbp-D0h]
  _BYTE v36[200]; // [rsp+10h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(i + 29) & 1) == 0 )
    goto LABEL_8;
  v10 = i;
  v11 = (__int64 **)sub_B8C3D0(i, i, (__int64)a3, (__int64)a4, a5, a6);
  v12 = *v11;
  v13 = (unsigned __int64)&(*v11)[*((unsigned int *)v11 + 2)];
  if ( (unsigned __int64)v12 < v13 )
  {
    v20 = v12;
    for ( i = *v12; *(_WORD *)(*v20 + 36) != 392; i = *v20 )
    {
      if ( (__int64 *)v13 == ++v20 )
        goto LABEL_8;
    }
    if ( (__int64 *)v13 == v20 )
      goto LABEL_8;
  }
  else
  {
    if ( v12 == (__int64 *)v13 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 392 )
    {
      v14 = (__int64 *)(v13 + 8);
      while ( v12 != v14 )
      {
        v15 = *v14++;
        if ( *(_WORD *)(v15 + 36) == 392 )
          goto LABEL_17;
      }
      goto LABEL_8;
    }
  }
LABEL_17:
  v21 = *v12;
  if ( *(_WORD *)(*v12 + 36) != 392 )
  {
    ++v12;
    do
      v21 = *v12++;
    while ( *(_WORD *)(v21 + 36) != 392 );
  }
  v22 = *(_QWORD *)(v21 + 56);
  if ( a6 )
  {
    if ( v22 )
    {
      if ( a6 == v22 )
        return 0;
      v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, i, v12);
      if ( v35 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a6 + 32LL))(a6) )
        return 0;
    }
  }
  if ( *(_DWORD *)(v21 + 40) )
  {
    sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), *(_DWORD *)(v21 + 24), 0x1053u, 0);
    sub_15F7200(v36);
    sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1894u, 0);
    sub_15F7200(v36);
    if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
    {
      v25 = sub_B8C3D0(v10, a1 + 8, v23, v24, a5, a6);
      v26 = (char *)*v25;
      v27 = 8LL * *((unsigned int *)v25 + 2);
      v28 = (char *)(*v25 + v27);
      v29 = v27 >> 3;
      v30 = v27 >> 5;
      if ( v30 )
      {
        if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 392 )
        {
          v32 = (char *)*v25;
        }
        else if ( *(_WORD *)(*((_QWORD *)v26 + 1) + 36LL) == 392 )
        {
          v32 = v26 + 8;
        }
        else if ( *(_WORD *)(*((_QWORD *)v26 + 2) + 36LL) == 392 )
        {
          v32 = v26 + 16;
        }
        else
        {
          v31 = &v26[32 * v30];
          if ( *(_WORD *)(*((_QWORD *)v26 + 3) + 36LL) == 392 )
          {
            v32 = v26 + 24;
          }
          else
          {
            while ( 1 )
            {
              v32 = v26 + 32;
              if ( v31 == v26 + 32 )
              {
                v29 = (v28 - v32) >> 3;
                goto LABEL_39;
              }
              if ( *(_WORD *)(*((_QWORD *)v26 + 4) + 36LL) == 392 )
                goto LABEL_47;
              if ( *(_WORD *)(*((_QWORD *)v26 + 5) + 36LL) == 392 )
              {
                v32 = v26 + 40;
                goto LABEL_47;
              }
              if ( *(_WORD *)(*((_QWORD *)v26 + 6) + 36LL) == 392 )
              {
                v32 = v26 + 48;
                goto LABEL_47;
              }
              if ( *(_WORD *)(*((_QWORD *)v26 + 7) + 36LL) == 392 )
                break;
              v26 += 32;
            }
            v32 = v26 + 56;
          }
        }
        goto LABEL_47;
      }
      v32 = (char *)*v25;
LABEL_39:
      if ( v29 != 2 )
      {
        if ( v29 != 3 )
        {
          if ( v29 != 1 )
          {
LABEL_42:
            v32 = v28;
LABEL_43:
            sub_17A9430(v25, v32, v28);
            if ( !*((_DWORD *)v25 + 2) )
              *(_BYTE *)(v10 + 29) &= ~1u;
            goto LABEL_8;
          }
LABEL_60:
          if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 392 )
            goto LABEL_42;
LABEL_47:
          if ( v28 != v32 )
          {
            for ( j = v32 + 8; v28 != j; j += 8 )
            {
              if ( *(_WORD *)(*(_QWORD *)j + 36LL) != 392 )
              {
                *(_QWORD *)v32 = *(_QWORD *)j;
                v32 += 8;
              }
            }
          }
          goto LABEL_43;
        }
        if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 392 )
          goto LABEL_47;
        v32 += 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 392 )
        goto LABEL_47;
      v32 += 8;
      goto LABEL_60;
    }
  }
LABEL_8:
  v16 = *(_QWORD **)(a1 + 248);
  v17 = v16[294];
  v16[304] += 64LL;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16[295] >= (unsigned __int64)(v18 + 64) && v17 )
    v16[294] = v18 + 64;
  else
    v18 = sub_986170((__int64)(v16 + 294), 64, 64, 3, a5, a6);
  sub_B30530(v18, *(_QWORD *)(a1 + 248), a3, a4, a5, a6);
  return v18;
}
