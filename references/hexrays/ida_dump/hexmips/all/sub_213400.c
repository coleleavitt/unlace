__int64 __fastcall sub_213400(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  const char *v9; // rdi
  unsigned int v10; // r13d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 func; // rax
  _QWORD *v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rax
  _QWORD *v24; // r13
  _QWORD *v25; // rbp
  const char *v26; // rdi
  __int64 v27; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 i; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rbp
  __int64 j; // rbx
  __int64 *v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rbp
  _QWORD *v41; // rdi
  _QWORD *v42; // rdi
  __int64 v44; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+20h] [rbp-98h] BYREF
  __int64 v46; // [rsp+28h] [rbp-90h]
  __int128 v47; // [rsp+30h] [rbp-88h]
  _QWORD *v48; // [rsp+40h] [rbp-78h] BYREF
  __int128 v49; // [rsp+48h] [rbp-70h]
  unsigned __int64 v50; // [rsp+58h] [rbp-60h]
  __int128 v51; // [rsp+60h] [rbp-58h]
  int v52; // [rsp+70h] [rbp-48h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v48 = nullptr;
  v50 = 0;
  v52 = 1;
  v49 = 0;
  v51 = 0;
  sub_2B3E30(a1, &v48, a3);
  v7 = v48;
  v8 = &v48[12 * v49];
  if ( v48 == v8 )
  {
LABEL_24:
    func = get_func(a3);
    if ( !func )
    {
      v10 = 0;
      goto LABEL_9;
    }
    v45 = func;
    v21 = (_QWORD *)a1;
    v47 = 0;
    v46 = 0;
    sub_148BC0(&v44, a1, &v45, nullptr, 1);
    v22 = v44;
    if ( v44 )
    {
      v23 = *(_QWORD *)(v44 + 8);
      v24 = *(_QWORD **)(v23 + 432);
      v25 = &v24[13 * *(_QWORD *)(v23 + 440)];
      if ( v25 == v24 )
      {
LABEL_63:
        v10 = 0;
      }
      else
      {
        while ( 1 )
        {
          v26 = s1;
          if ( v24[5] )
            v26 = (const char *)v24[4];
          v21 = a4;
          if ( !strcmp(v26, a4) )
            break;
          v24 += 13;
          if ( v24 == v25 )
            goto LABEL_63;
        }
        v21 = v24;
        copy_argloc(a2, v24);
        v27 = v24[2];
        v22 = v44;
        v10 = 1;
        *(_QWORD *)(a2 + 16) = v27;
        if ( !v22 )
          goto LABEL_51;
      }
      if ( (*(_DWORD *)(v22 + 104))-- == 1 )
      {
        sub_2540F0(v22, v21);
        v29 = *(_QWORD *)(v22 + 184);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v22 + 192);
          if ( v30 )
          {
            for ( i = 0; i != v30; ++i )
            {
              v32 = (__int64 *)(v29 + 24 * i);
              v33 = *v32;
              if ( *v32 )
              {
                v32[1] = 0;
                qfree(v33);
                v29 = *(_QWORD *)(v22 + 184);
              }
            }
          }
          *(_QWORD *)(v22 + 192) = 0;
          qfree(v29);
        }
        v34 = *(_QWORD *)(v22 + 160);
        if ( v34 )
        {
          *(_QWORD *)(v22 + 168) = 0;
          qfree(v34);
        }
        v35 = *(_QWORD *)(v22 + 128);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v22 + 136);
          if ( v36 )
          {
            for ( j = 0; j != v36; ++j )
            {
              v38 = (__int64 *)(v35 + 32 * j);
              v39 = *v38;
              if ( *v38 )
              {
                v38[1] = 0;
                qfree(v39);
                v35 = *(_QWORD *)(v22 + 128);
              }
            }
          }
          *(_QWORD *)(v22 + 136) = 0;
          qfree(v35);
        }
        sub_2507D0(v22 + 16);
        j__qfree(v22);
      }
    }
    else
    {
      v10 = 0;
    }
LABEL_51:
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46);
    }
    goto LABEL_9;
  }
  while ( 1 )
  {
    v9 = s1;
    if ( v7[4] )
      v9 = (const char *)v7[3];
    if ( !strcmp(v9, a4) )
      break;
    v7 += 12;
    if ( v8 == v7 )
      goto LABEL_24;
  }
  copy_argloc(a2, v7);
  v10 = 1;
  *(_QWORD *)(a2 + 16) = v7[2];
LABEL_9:
  v11 = v50;
  if ( v50 )
  {
    v12 = *(_QWORD *)v50;
    if ( !(_QWORD)v51 )
    {
      *(_QWORD *)v50 = *(_QWORD *)v50 & 3LL | v50 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v50 + 8) = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
      *(_QWORD *)v50 &= ~1uLL;
      *(_QWORD *)v50 |= 2uLL;
      goto LABEL_12;
    }
    v40 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_62:
      *(_QWORD *)v11 = v12 & 3 | v11 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v50 + 8) = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
      *(_QWORD *)v50 &= ~1uLL;
      *(_QWORD *)v50 |= 2uLL;
      *(_QWORD *)&v51 = 0;
LABEL_12:
      if ( v50 )
        qfree(v50);
      goto LABEL_14;
    }
    v41 = *(_QWORD **)(v40 + 8);
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = *(_QWORD **)(v40 + 16);
      if ( (*(_BYTE *)v42 & 2) != 0 )
        goto LABEL_66;
    }
    else
    {
      sub_211510(v41);
      v42 = *(_QWORD **)(v40 + 16);
      if ( (*(_BYTE *)v42 & 2) != 0 )
        goto LABEL_58;
    }
    sub_211510(v42);
LABEL_58:
    if ( (*(_BYTE *)v40 & 2) != 0 )
    {
LABEL_59:
      if ( v12 > 3 )
        qfree(v12 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v50;
      v12 = *(_QWORD *)v50;
      goto LABEL_62;
    }
LABEL_66:
    cleanup_argloc(v40 + 48);
    cleanup_argloc(v40 + 24);
    *(_QWORD *)v40 |= 2uLL;
    goto LABEL_59;
  }
LABEL_14:
  v13 = v48;
  if ( v48 )
  {
    v14 = v49;
    if ( (_QWORD)v49 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[12 * v15];
        v17 = v16[7];
        if ( v17 )
        {
          v16[8] = 0;
          qfree(v17);
        }
        clear_tinfo_t(v16 + 6);
        v18 = v16[3];
        if ( v18 )
        {
          v16[4] = 0;
          qfree(v18);
        }
        ++v15;
        cleanup_argloc(v16);
        v13 = v48;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v49 = 0;
    qfree(v13);
  }
  return v10;
}
