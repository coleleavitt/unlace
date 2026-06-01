__int64 __fastcall sub_1460620(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // r14d
  _BYTE *v10; // r14
  char *v11; // rax
  int v12; // edi
  char v13; // dl
  char v14; // si
  char *v15; // r8
  char *v16; // rax
  __int64 v17; // r9
  char *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // rcx
  size_t v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // dl
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  signed __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // r8
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  char *v40; // [rsp+8h] [rbp-C0h]
  __int64 v41; // [rsp+8h] [rbp-C0h]
  __int64 v42; // [rsp+8h] [rbp-C0h]
  char v43; // [rsp+14h] [rbp-B4h]
  _QWORD *v44; // [rsp+18h] [rbp-B0h]
  void **v45; // [rsp+28h] [rbp-A0h] BYREF
  __m128i src; // [rsp+30h] [rbp-98h] BYREF
  __int64 v47; // [rsp+40h] [rbp-88h]
  __int64 v48; // [rsp+48h] [rbp-80h]
  char v49; // [rsp+50h] [rbp-78h]
  __int64 v50[4]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v51; // [rsp+80h] [rbp-48h]

  v4 = a2;
  v5 = 1;
  sub_1023400(&src, *(_QWORD *)(a1 + 88), a2);
  if ( !v49 )
    return v5;
  v10 = (_BYTE *)src.m128i_i64[0];
  v11 = (char *)src.m128i_i64[0];
  if ( a3 > 1 )
  {
    v12 = 1;
    do
    {
      v13 = *v11;
      if ( *v11 )
      {
        if ( v13 == 10 || v13 == 13 )
        {
LABEL_10:
          v14 = v11[1];
          v15 = v11 + 1;
          if ( v14 == 10 || v14 == 13 )
          {
            v16 = v11 + 2;
            if ( v14 != v13 )
              v15 = v16;
          }
          v11 = v15;
        }
        else
        {
          while ( 1 )
          {
            v13 = *++v11;
            if ( !*v11 )
              break;
            if ( v13 == 13 || v13 == 10 )
              goto LABEL_10;
          }
        }
      }
      ++v12;
    }
    while ( a3 != v12 );
  }
  v17 = src.m128i_i64[1];
  v18 = &v11[a4 - 1];
  if ( *(_DWORD *)(a1 + 1000) )
  {
    v26 = *(_QWORD *)(a1 + 88);
    v27 = *(unsigned int *)(v26 + 520);
    LOBYTE(v50[0]) = 0;
    if ( (unsigned int)(v27 + 1) <= 1 )
      goto LABEL_44;
    if ( (int)v27 >= 0 )
    {
      v28 = *(_QWORD *)(v26 + 184) + 24 * v27;
LABEL_34:
      if ( v28 && *(char *)(v28 + 3) >= 0 )
      {
        v29 = *(_QWORD *)((*(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( !v29 )
          goto LABEL_45;
        while ( 1 )
        {
          v30 = *(_QWORD *)(v29 + 8);
          if ( !v30 )
            break;
          v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v30 & 4) == 0 || !v29 )
            goto LABEL_45;
        }
      }
LABEL_44:
      v29 = 0;
LABEL_45:
      v32 = a2;
      while ( 1 )
      {
        v33 = *(_QWORD *)(v32 + 8);
        if ( !v33 )
          break;
        v32 = v33 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v33 & 4) == 0 || !v32 )
          goto LABEL_49;
      }
      v32 = 0;
LABEL_49:
      if ( v29 == v32 )
      {
        v34 = *(int *)(a1 + 1000);
        if ( v18 - v10 < v34 )
          v18 = &v10[v34];
      }
      goto LABEL_16;
    }
    v35 = (unsigned int)(-2 - v27);
    v36 = *(_QWORD *)(*(_QWORD *)(v26 + 320) + 8LL * ((unsigned int)(-2 - v27) >> 6));
    if ( _bittest64(&v36, v35) )
    {
      v37 = (_QWORD *)(*(_QWORD *)(v26 + 272) + 8 * ((unsigned __int64)(int)v35 >> 5));
      if ( *v37 )
      {
        v28 = *v37 + 24 * (v35 & 0x1F);
        goto LABEL_34;
      }
      v44 = (_QWORD *)(*(_QWORD *)(v26 + 272) + 8 * ((unsigned __int64)(int)v35 >> 5));
      v43 = v35;
      v42 = src.m128i_i64[1];
      v38 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v26 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      v17 = v42;
      v39 = v38 + 192;
      *v44 = v38;
      do
      {
        *v38 = 0;
        v38 += 6;
        *((_OWORD *)v38 - 1) = 0;
        *((_QWORD *)v38 - 1) = 0;
      }
      while ( v38 != v39 );
      v31 = v50[0];
      v28 = *v44 + 24LL * (v43 & 0x1F);
    }
    else
    {
      v41 = src.m128i_i64[1];
      v28 = sub_101F930(v26, v35, v50);
      v31 = v50[0];
      v17 = v41;
    }
    if ( v31 )
      goto LABEL_44;
    goto LABEL_34;
  }
LABEL_16:
  if ( v18 > &v10[v17] )
    v18 = &v10[v17];
  while ( 1 )
  {
    v19 = *(_QWORD *)(v4 + 8);
    if ( !v19 )
      break;
    v4 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v19 & 4) == 0 || !v4 )
      goto LABEL_21;
  }
  v4 = 0;
LABEL_21:
  *(_QWORD *)(a1 + 760) = v4;
  v51 = 261;
  v20 = v47;
  *(_DWORD *)(a1 + 768) = (_DWORD)v18 - (_DWORD)v10;
  v50[0] = v20;
  v40 = &v10[v17];
  v50[1] = v48;
  sub_2230400(&v45, v17 + 1, v50, 0);
  v21 = (char *)v45[1];
  if ( v18 != v10 )
  {
    v21 = (char *)memmove(v45[1], v10, v18 - v10) + v18 - v10;
    *v21 = 0;
    v22 = v40 - v18;
    if ( v40 == v18 )
      goto LABEL_23;
    goto LABEL_28;
  }
  *v21 = 0;
  v22 = v40 - v18;
  if ( v40 != v18 )
LABEL_28:
    memmove(v21 + 1, v18, v22);
LABEL_23:
  v23 = (__int64)v45;
  v24 = *(_QWORD *)(a1 + 88);
  v45 = nullptr;
  v50[0] = v23;
  sub_10249A0(v24, a2, v50);
  if ( v50[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50[0] + 8LL))(v50[0]);
  v5 = 0;
  if ( v45 )
    (*((void (__fastcall **)(void **))*v45 + 1))(v45);
  return v5;
}
