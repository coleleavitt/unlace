__int64 __fastcall sub_2FA840(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __m128i si128; // xmm1
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  size_t v13; // r8
  unsigned __int64 *v14; // rdx
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  char v21; // bl
  __int64 *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rbp
  _QWORD *v25; // r12
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // r15
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 *i; // rcx
  unsigned __int64 v39; // rcx
  const void *v40; // r9
  void *v41; // rax
  unsigned __int64 *v42; // rsi
  unsigned __int8 v43; // [rsp+0h] [rbp-150h]
  unsigned __int64 *v44; // [rsp+8h] [rbp-148h]
  unsigned __int64 v45; // [rsp+10h] [rbp-140h]
  unsigned __int64 *v47; // [rsp+20h] [rbp-130h]
  int v48; // [rsp+2Ch] [rbp-124h]
  unsigned __int64 **v49; // [rsp+30h] [rbp-120h]
  __int64 v50; // [rsp+38h] [rbp-118h]
  const void *v51; // [rsp+38h] [rbp-118h]
  __int64 v52; // [rsp+40h] [rbp-110h]
  _QWORD v53[2]; // [rsp+58h] [rbp-F8h] BYREF
  char v54; // [rsp+68h] [rbp-E8h]
  __int64 v55; // [rsp+70h] [rbp-E0h]
  __m128i v56; // [rsp+78h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+88h] [rbp-C8h]
  _QWORD v58[2]; // [rsp+98h] [rbp-B8h] BYREF
  _BYTE v59[72]; // [rsp+A8h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v61; // [rsp+F8h] [rbp-58h]
  __int64 v62; // [rsp+108h] [rbp-48h]
  unsigned __int64 v63; // [rsp+110h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v1 = a1[22];
  v58[0] = a1[1];
  v2 = (__int64 *)v59;
  v58[1] = v1;
  v3 = (__int64 *)v59;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v60 );
  v60 = 0;
  v62 = 0;
  v61 = 0;
  if ( !v1 )
  {
    v21 = 0;
    goto LABEL_41;
  }
  v45 = 0;
  v48 = 0;
  do
  {
    v4 = a1[v45 + 19];
    if ( v4 )
    {
      switch_dbctx();
      v5 = *(_QWORD *)(v4 + 80);
      v6 = *(_QWORD *)(v4 + 64);
      v54 = 100;
      v53[1] = v5;
      v53[0] = &off_4E1118;
      v55 = 0;
      v7 = sub_2B63F0(v6, v53);
      v49 = (unsigned __int64 **)v7;
      if ( v7 )
      {
        v47 = *(unsigned __int64 **)v7;
        if ( !*(_QWORD *)v7 )
        {
LABEL_33:
          qfree();
          goto LABEL_34;
        }
        if ( *(_QWORD *)(v7 + 8) )
        {
          v44 = (unsigned __int64 *)v47[1];
          if ( v47 == v44 )
          {
            v16 = *v47;
            goto LABEL_22;
          }
          do
          {
            v8 = v3[2];
            v9 = v3[1];
            if ( v8 < v9 + 1 )
            {
              v27 = qvector_reserve();
              v28 = v3[2];
              v29 = v3[1];
              v50 = v27;
              v3[2] = v8;
              v30 = *v3;
              v52 = v28;
              v31 = v29 - 1;
              if ( v31 >= 0 )
              {
                v32 = v27;
                do
                {
                  v33 = *(_QWORD *)(v30 + 8);
                  *(_QWORD *)v32 = off_4E14B0;
                  *(_QWORD *)(v32 + 8) = v33;
                  v34 = _mm_loadu_si128((const __m128i *)(v30 + 24));
                  v35 = *(_QWORD *)(v30 + 16);
                  *(_QWORD *)(v30 + 16) = 0;
                  *(__m128i *)(v32 + 24) = v34;
                  *(_OWORD *)(v30 + 24) = 0;
                  *(_QWORD *)(v32 + 16) = v35;
                  *(_QWORD *)(v32 + 40) = 0;
                  copy_tinfo_t();
                  *(_QWORD *)(v32 + 48) = *(_QWORD *)(v30 + 48);
                  *(_DWORD *)(v32 + 56) = *(_DWORD *)(v30 + 56);
                  *(_QWORD *)v32 = off_4E2CD8;
                  *(_QWORD *)(v32 + 64) = *(_QWORD *)(v30 + 64);
                  *(_QWORD *)v30 = off_4E14B0;
                  clear_tinfo_t();
                  if ( *(_QWORD *)(v30 + 16) )
                  {
                    *(_QWORD *)(v30 + 24) = 0;
                    qfree();
                  }
                  v30 += 72;
                  v32 += 72;
                }
                while ( v31-- != 0 );
              }
              qfree();
              *v3 = v50;
              v3[2] = v52;
              v9 = v3[1];
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
            v11 = *v3 + 72 * v9;
            *(_QWORD *)(v11 + 8) = -1;
            *(_QWORD *)(v11 + 16) = 0;
            *(_DWORD *)(v11 + 56) = -2;
            *(_QWORD *)v11 = off_4E2CD8;
            *(_QWORD *)(v11 + 64) = -1;
            *(_OWORD *)(v11 + 24) = 0;
            *(__m128i *)(v11 + 40) = si128;
            ++v3[1];
            *(_QWORD *)(v11 + 8) = v44[3];
            if ( (unsigned __int64 *)(v11 + 16) != v44 + 4 )
            {
              v12 = v44[5];
              if ( v12 && (v13 = v12 - 1, v12 != 1) )
              {
                v40 = (const void *)v44[4];
                v41 = *(void **)(v11 + 16);
                if ( *(_QWORD *)(v11 + 32) < v12 )
                {
                  v51 = (const void *)v44[4];
                  v41 = (void *)qvector_reserve();
                  v40 = v51;
                  v13 = v12 - 1;
                  *(_QWORD *)(v11 + 16) = v41;
                }
                *(_QWORD *)(v11 + 24) = v12;
                memmove(v41, v40, v13);
                *(_BYTE *)(*(_QWORD *)(v11 + 16) + v12 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v11 + 24) = 0;
              }
            }
            copy_tinfo_t();
            ++v48;
            if ( (*v44 & 2) == 0 )
            {
              v14 = (unsigned __int64 *)v44[2];
              if ( (*(_BYTE *)v14 & 2) != 0 )
              {
                v15 = (unsigned __int64 *)(*v44 & 0xFFFFFFFFFFFFFFFCLL);
                v37 = *v15;
                if ( (*v15 & 2) == 0 )
                {
                  for ( i = v44; (unsigned __int64 *)v15[2] == i; i = v42 )
                  {
                    v39 = v37 & 0xFFFFFFFFFFFFFFFCLL;
                    v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v37 & 2) != 0 )
                    {
                      v44 = (unsigned __int64 *)v39;
                      goto LABEL_19;
                    }
                    v42 = v15;
                    v15 = (unsigned __int64 *)v39;
                  }
                }
              }
              else
              {
                do
                {
                  v15 = v14;
                  v14 = (unsigned __int64 *)v14[1];
                }
                while ( (*(_BYTE *)v14 & 2) == 0 );
              }
              v44 = v15;
            }
LABEL_19:
            ;
          }
          while ( v47 != v44 );
          v47 = *v49;
          if ( !*v49 )
            goto LABEL_33;
          v16 = **v49;
          if ( v49[1] )
          {
LABEL_22:
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            {
LABEL_30:
              *v47 = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFCLL | *v47 & 3;
              *(__m128i *)(*v49 + 1) = _mm_unpacklo_epi64(
                                         (__m128i)(unsigned __int64)*v49,
                                         (__m128i)(unsigned __int64)*v49);
              **v49 &= ~1uLL;
              **v49 |= 2u;
              v49[1] = nullptr;
              goto LABEL_31;
            }
            v18 = *(_QWORD **)(v17 + 8);
            if ( (*(_BYTE *)v18 & 2) != 0 )
            {
              v19 = *(_QWORD **)(v17 + 16);
              if ( (*(_BYTE *)v19 & 2) != 0 )
                goto LABEL_70;
            }
            else
            {
              sub_2B5AC0(v18);
              v19 = *(_QWORD **)(v17 + 16);
              if ( (*(_BYTE *)v19 & 2) != 0 )
                goto LABEL_26;
            }
            sub_2B5AC0(v19);
LABEL_26:
            if ( (*(_BYTE *)v17 & 2) != 0 )
            {
LABEL_27:
              if ( v16 > 3 )
                qfree();
              v47 = *v49;
              goto LABEL_30;
            }
LABEL_70:
            sub_2B5160((_QWORD *)(v17 + 32));
            *(_QWORD *)v17 |= 2uLL;
            goto LABEL_27;
          }
        }
        else
        {
          v16 = **(_QWORD **)v7;
        }
        *v47 = v16 & 3 | (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v49 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v49, (__m128i)(unsigned __int64)*v49);
        **v49 &= ~1uLL;
        **v49 |= 2u;
LABEL_31:
        if ( *v49 )
          qfree();
        goto LABEL_33;
      }
    }
LABEL_34:
    ++v45;
    v3 += 3;
  }
  while ( v45 < a1[22] );
  if ( v48 )
  {
    v57 = 0u;
    v56 = 0;
    if ( sub_2B3D60 )
    {
      v56.m128i_i64[0] = (__int64)sub_2B3D60;
      v57 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E2DA8), (__m128i)(unsigned __int64)sub_2AD240);
    }
    sub_2F8E80(v58, &v56, 1);
    sub_66C50((__int64)&v56);
    sub_2CD130(v58, a1 + 19, 1, v20);
    v21 = 1;
  }
  else
  {
    v21 = 0;
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
LABEL_41:
  v43 = v21;
  v22 = &v60;
  do
  {
    v22 -= 3;
    if ( *v22 )
    {
      v23 = v22[1];
      v24 = 0;
      if ( v23 )
      {
        do
        {
          v25 = (_QWORD *)(*v22 + 72 * v24);
          *v25 = off_4E14B0;
          clear_tinfo_t();
          if ( v25[2] )
          {
            v25[3] = 0;
            qfree();
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      v22[1] = 0;
      qfree();
    }
  }
  while ( v22 != (__int64 *)v59 );
  return v43;
}
