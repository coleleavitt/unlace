__int64 __fastcall sub_217C80(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  _QWORD *v6; // r14
  _QWORD *v7; // rbp
  const char *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 func; // rax
  _QWORD *v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // r13
  _QWORD *v24; // rbp
  const char *v25; // rdi
  __int64 v26; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 i; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 j; // rbx
  __int64 *v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rbp
  _QWORD *v40; // rdi
  _QWORD *v41; // rdi
  __int64 v43; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+20h] [rbp-98h] BYREF
  __int64 v45; // [rsp+28h] [rbp-90h]
  __int128 v46; // [rsp+30h] [rbp-88h]
  _QWORD *v47; // [rsp+40h] [rbp-78h] BYREF
  __int128 v48; // [rsp+48h] [rbp-70h]
  __int64 v49; // [rsp+58h] [rbp-60h]
  __int128 v50; // [rsp+60h] [rbp-58h]
  int v51; // [rsp+70h] [rbp-48h]
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v47 = nullptr;
  v49 = 0;
  v51 = 1;
  v48 = 0;
  v50 = 0;
  sub_2B86B0(a1, &v47, a3);
  v6 = v47;
  v7 = &v47[12 * v48];
  if ( v47 == v7 )
  {
LABEL_24:
    func = get_func();
    if ( !func )
    {
      v9 = 0;
      goto LABEL_9;
    }
    v44 = func;
    v20 = (_QWORD *)a1;
    v46 = 0;
    v45 = 0;
    sub_14CDC0(&v43, a1, &v44, nullptr, 1);
    v21 = v43;
    if ( v43 )
    {
      v22 = *(_QWORD *)(v43 + 8);
      v23 = *(_QWORD **)(v22 + 432);
      v24 = &v23[13 * *(_QWORD *)(v22 + 440)];
      if ( v24 == v23 )
      {
LABEL_63:
        v9 = 0;
      }
      else
      {
        while ( 1 )
        {
          v25 = s1;
          if ( v23[5] )
            v25 = (const char *)v23[4];
          v20 = a4;
          if ( !strcmp(v25, a4) )
            break;
          v23 += 13;
          if ( v23 == v24 )
            goto LABEL_63;
        }
        v20 = v23;
        copy_argloc();
        v26 = v23[2];
        v21 = v43;
        v9 = 1;
        *(_QWORD *)(a2 + 16) = v26;
        if ( !v21 )
          goto LABEL_51;
      }
      if ( (*(_DWORD *)(v21 + 104))-- == 1 )
      {
        sub_258970(v21, v20);
        v28 = *(_QWORD *)(v21 + 184);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v21 + 192);
          if ( v29 )
          {
            for ( i = 0; i != v29; ++i )
            {
              v31 = (__int64 *)(v28 + 24 * i);
              v32 = *v31;
              if ( *v31 )
              {
                v31[1] = 0;
                qfree(v32);
                v28 = *(_QWORD *)(v21 + 184);
              }
            }
          }
          *(_QWORD *)(v21 + 192) = 0;
          qfree(v28);
        }
        v33 = *(_QWORD *)(v21 + 160);
        if ( v33 )
        {
          *(_QWORD *)(v21 + 168) = 0;
          qfree(v33);
        }
        v34 = *(_QWORD *)(v21 + 128);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v21 + 136);
          if ( v35 )
          {
            for ( j = 0; j != v35; ++j )
            {
              v37 = (__int64 *)(v34 + 32 * j);
              v38 = *v37;
              if ( *v37 )
              {
                v37[1] = 0;
                qfree(v38);
                v34 = *(_QWORD *)(v21 + 128);
              }
            }
          }
          *(_QWORD *)(v21 + 136) = 0;
          qfree(v34);
        }
        sub_255050(v21 + 16);
        j__qfree(v21);
      }
    }
    else
    {
      v9 = 0;
    }
LABEL_51:
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    goto LABEL_9;
  }
  while ( 1 )
  {
    v8 = s1;
    if ( v6[4] )
      v8 = (const char *)v6[3];
    if ( !strcmp(v8, a4) )
      break;
    v6 += 12;
    if ( v7 == v6 )
      goto LABEL_24;
  }
  copy_argloc();
  v9 = 1;
  *(_QWORD *)(a2 + 16) = v6[2];
LABEL_9:
  v10 = v49;
  if ( v49 )
  {
    v11 = *(_QWORD *)v49;
    if ( !(_QWORD)v50 )
    {
      *(_QWORD *)v49 = *(_QWORD *)v49 & 3LL | v49 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
      *(_QWORD *)v49 &= ~1uLL;
      *(_QWORD *)v49 |= 2uLL;
      goto LABEL_12;
    }
    v39 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_62:
      *(_QWORD *)v10 = v11 & 3 | v10 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
      *(_QWORD *)v49 &= ~1uLL;
      *(_QWORD *)v49 |= 2uLL;
      *(_QWORD *)&v50 = 0;
LABEL_12:
      if ( v49 )
        qfree(v49);
      goto LABEL_14;
    }
    v40 = *(_QWORD **)(v39 + 8);
    if ( (*(_BYTE *)v40 & 2) != 0 )
    {
      v41 = *(_QWORD **)(v39 + 16);
      if ( (*(_BYTE *)v41 & 2) != 0 )
        goto LABEL_66;
    }
    else
    {
      sub_215D90(v40);
      v41 = *(_QWORD **)(v39 + 16);
      if ( (*(_BYTE *)v41 & 2) != 0 )
        goto LABEL_58;
    }
    sub_215D90(v41);
LABEL_58:
    if ( (*(_BYTE *)v39 & 2) != 0 )
    {
LABEL_59:
      if ( v11 > 3 )
        qfree(v11 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v49;
      v11 = *(_QWORD *)v49;
      goto LABEL_62;
    }
LABEL_66:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v39 |= 2uLL;
    goto LABEL_59;
  }
LABEL_14:
  v12 = (__int64)v47;
  if ( v47 )
  {
    v13 = v48;
    if ( (_QWORD)v48 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 96 * v14);
        v16 = v15[7];
        if ( v16 )
        {
          v15[8] = 0;
          qfree(v16);
        }
        clear_tinfo_t();
        v17 = v15[3];
        if ( v17 )
        {
          v15[4] = 0;
          qfree(v17);
        }
        ++v14;
        cleanup_argloc();
        v12 = (__int64)v47;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v48 = 0;
    qfree(v12);
  }
  return v9;
}
