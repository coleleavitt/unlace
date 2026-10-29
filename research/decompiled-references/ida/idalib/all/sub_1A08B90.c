__m128i *__fastcall sub_1A08B90(__int64 *a1, _BYTE *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r13
  int v9; // r14d
  unsigned __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v19; // r12
  __int64 *v20; // rdx
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  char **v23; // rax
  char *v24; // rcx
  char **v25; // r14
  __int64 v26; // r8
  char *v27; // rsi
  __int64 v28; // rax
  char *v29; // rdi
  char *v30; // rax
  char *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // rbp
  __int64 v34; // rax
  char *v35; // rax
  char *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v45[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v47; // [rsp+30h] [rbp-A8h] BYREF
  char v48; // [rsp+88h] [rbp-50h]
  unsigned int v49; // [rsp+90h] [rbp-48h]
  char v50; // [rsp+94h] [rbp-44h]

  if ( (a2[29] & 1) == 0 )
    goto LABEL_8;
  v8 = (__int64)a2;
  v9 = a4;
  v10 = sub_B8C3D0((__int64)a2, (__int64)a2, (__int64)a3, a4, a5, a6);
  v13 = *v10;
  v14 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( v13 < v14 )
  {
    a2 = (_BYTE *)v13;
    v15 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 92 )
    {
      do
      {
        a2 += 8;
        if ( (_BYTE *)v14 == a2 )
          goto LABEL_8;
        v15 = *(_QWORD *)a2;
      }
      while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 92 );
    }
    if ( (_BYTE *)v14 != a2 )
      goto LABEL_13;
LABEL_8:
    v17 = sub_168B6C0((__int64)a1);
    return sub_B25FF0(v17, a3);
  }
  if ( v13 == v14 )
    goto LABEL_8;
  v15 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 92 )
  {
    v16 = (__int64 *)(v14 + 8);
    while ( (__int64 *)v13 != v16 )
    {
      v15 = *v16++;
      if ( *(_WORD *)(v15 + 36) == 92 )
        goto LABEL_13;
    }
    goto LABEL_8;
  }
LABEL_13:
  v19 = *(_QWORD *)v13;
  if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 92 )
  {
    v20 = (__int64 *)(v13 + 8);
    do
      v19 = *v20++;
    while ( *(_WORD *)(v19 + 36) != 92 );
  }
  if ( (*(_BYTE *)(v19 + 34) & 0xF0) != 0xF0 )
  {
    v21 = *(_BYTE *)(v19 + 34) >> 4;
    v22 = v21;
    if ( v21 || v9 != 2 )
      goto LABEL_19;
LABEL_21:
    if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
    {
LABEL_41:
      v33 = ((unsigned __int64)a3[1].m128i_u32[3] << 32) | *(unsigned int *)(v19 + 24);
      v34 = sub_168B6C0((__int64)a1);
      return (__m128i *)sub_B30A60(v34, 1, v33, 1);
    }
    v23 = (char **)sub_B8C3D0(v8, (__int64)a2, v22, v15, v11, v12);
    v24 = *v23;
    v25 = v23;
    v26 = 8LL * *((unsigned int *)v23 + 2);
    v27 = &(*v23)[v26];
    v28 = v26 >> 3;
    if ( v26 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 92 )
      {
        v29 = v24;
      }
      else
      {
        v29 = v24 + 8;
        if ( *(_WORD *)(*((_QWORD *)v24 + 1) + 36LL) != 92 )
        {
          v29 = v24 + 16;
          if ( *(_WORD *)(*((_QWORD *)v24 + 2) + 36LL) != 92 )
          {
            v30 = v24;
            if ( *(_WORD *)(*((_QWORD *)v24 + 3) + 36LL) == 92 )
            {
              v29 = v24 + 24;
            }
            else
            {
              while ( 1 )
              {
                v29 = v30 + 32;
                if ( &v24[32 * (v26 >> 5)] == v30 + 32 )
                {
                  v28 = (v27 - v29) >> 3;
                  goto LABEL_35;
                }
                if ( *(_WORD *)(*((_QWORD *)v30 + 4) + 36LL) == 92 )
                  goto LABEL_42;
                if ( *(_WORD *)(*((_QWORD *)v30 + 5) + 36LL) == 92 )
                {
                  v29 = v30 + 40;
                  goto LABEL_42;
                }
                if ( *(_WORD *)(*((_QWORD *)v30 + 6) + 36LL) == 92 )
                {
                  v29 = v30 + 48;
                  goto LABEL_42;
                }
                if ( *(_WORD *)(*((_QWORD *)v30 + 7) + 36LL) == 92 )
                  break;
                v30 += 32;
              }
              v29 = v30 + 56;
            }
          }
        }
      }
LABEL_42:
      if ( v27 != v29 )
      {
        v35 = v29 + 8;
        if ( v27 == v29 + 8 )
        {
          v31 = v29;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 92 )
            {
              *(_QWORD *)v29 = *(_QWORD *)v35;
              v29 += 8;
            }
            v35 += 8;
          }
          while ( v27 != v35 );
          v24 = *v25;
          v36 = &(*v25)[v26];
          v31 = &v29[v36 - v27];
          if ( v27 != v36 )
          {
            memmove(v29, v27, v36 - v27);
            v24 = *v25;
          }
        }
        goto LABEL_39;
      }
      goto LABEL_38;
    }
    v29 = v24;
LABEL_35:
    if ( v28 != 2 )
    {
      if ( v28 != 3 )
      {
        if ( v28 != 1 )
        {
LABEL_38:
          v31 = v27;
          goto LABEL_39;
        }
        goto LABEL_64;
      }
      if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 92 )
        goto LABEL_42;
      v29 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 92 )
      goto LABEL_42;
    v29 += 8;
LABEL_64:
    v31 = v27;
    if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 92 )
    {
LABEL_39:
      v32 = (v31 - v24) >> 3;
      *((_DWORD *)v25 + 2) = v32;
      if ( !(_DWORD)v32 )
        *(_BYTE *)(v8 + 29) &= ~1u;
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  if ( !(unsigned int)sub_FA77D0(v19) && v9 == 2 )
    goto LABEL_21;
  if ( (*(_BYTE *)(v19 + 34) & 0xF0) == 0xF0 )
    v22 = (unsigned int)sub_FA77D0(v19);
  else
    v22 = *(_BYTE *)(v19 + 34) >> 4;
LABEL_19:
  if ( !v9 && (_DWORD)v22 == 2 )
    goto LABEL_21;
  sub_168B9F0((__int64)v45, a1, a3[1].m128i_u32[2], 0xF34u, 0);
  if ( v48 )
  {
    sub_AE9DF0(&v47, (__int64)a3, 0x10u);
  }
  else if ( v50 )
  {
    v41 = sub_168B9E0(v45);
    v42 = v46;
    if ( v46 )
      v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
    v44 = v42;
    v43 = sub_1587BC0(v41, &v44, v37, v38, v39, v40);
    sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v49 + 8), (__int64)a3, 0x10u);
  }
  sub_15F7200(v45);
  sub_168B9F0((__int64)v45, a1, *(_DWORD *)(v19 + 24), 0x16CFu, 0);
  sub_15F7200(v45);
  return nullptr;
}
