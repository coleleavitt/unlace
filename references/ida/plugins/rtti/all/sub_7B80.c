unsigned __int64 __fastcall sub_7B80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r13
  char *v5; // rbx
  char *v6; // r15
  __int64 v7; // r14
  void *v8; // rax
  const void *v9; // rsi
  bool v10; // zf
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  int v20; // r13d
  __int64 v21; // rax
  char v22; // al
  char v23; // bl
  char *v24; // rsi
  const char *v25; // rsi
  __int64 v26; // rdi
  void *v28; // rax
  const void *v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-240h]
  char *v31; // [rsp+28h] [rbp-218h] BYREF
  __int128 v32; // [rsp+30h] [rbp-210h]
  __int64 v33; // [rsp+48h] [rbp-1F8h]
  char v34; // [rsp+58h] [rbp-1E8h]
  __int64 v35; // [rsp+68h] [rbp-1D8h]
  __int128 v36; // [rsp+70h] [rbp-1D0h]
  const char *v37; // [rsp+88h] [rbp-1B8h] BYREF
  __int128 v38; // [rsp+90h] [rbp-1B0h]
  __int128 v39; // [rsp+A8h] [rbp-198h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-188h]
  __int128 v41; // [rsp+C0h] [rbp-180h]
  __int64 v42; // [rsp+D0h] [rbp-170h]
  __int64 v43; // [rsp+D8h] [rbp-168h]
  int v44; // [rsp+E0h] [rbp-160h]
  __int128 v45; // [rsp+E8h] [rbp-158h]
  __int64 v46; // [rsp+F8h] [rbp-148h]
  void *v47; // [rsp+108h] [rbp-138h] BYREF
  __int128 v48; // [rsp+110h] [rbp-130h]
  __int64 v49; // [rsp+120h] [rbp-120h]
  int v50; // [rsp+128h] [rbp-118h]
  __int64 v51; // [rsp+130h] [rbp-110h]
  _BYTE v52[192]; // [rsp+138h] [rbp-108h] BYREF
  char v53; // [rsp+1F8h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+200h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 128);
  v54 = __readfsqword(0x28u);
  v48 = 0;
  v47 = 0;
  if ( v1 )
  {
    v28 = (void *)qalloc_or_throw();
    v29 = *(const void **)(a1 + 120);
    *((_QWORD *)&v48 + 1) = v1;
    v47 = v28;
    memcpy(v28, v29, 16 * v1);
    *(_QWORD *)&v48 = v1;
  }
  v2 = *(_QWORD *)(a1 + 160);
  v3 = a1 + 168;
  v49 = 0;
  v4 = 7;
  v50 = -1;
  v51 = v2;
  v5 = v52;
  do
  {
    v7 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
    if ( v7 )
    {
      v8 = (void *)qalloc_or_throw();
      *(_QWORD *)v5 = v8;
      v9 = *(const void **)v3;
      *((_QWORD *)v5 + 2) = v7;
      memcpy(v8, v9, 8 * v7);
      *((_QWORD *)v5 + 1) = v7;
    }
    v5 += 24;
    v6 = &v53;
    --v4;
    v3 += 24;
  }
  while ( v5 != &v53 );
  v10 = *(_QWORD *)(a1 + 272) == 0;
  v53 = *(_BYTE *)(a1 + 360);
  if ( !v10 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 264);
      v40 = 0;
      v43 = 0xFFFFFFFFLL;
      v42 = a1;
      v44 = 0;
      v46 = -1;
      v39 = 0;
      v41 = 0;
      v45 = -1;
      if ( (unsigned __int8)sub_6C70(&v39, (__int64)&v47, *(_QWORD *)(v13 + 8 * v12), 0) )
      {
        v32 = 0;
        v31 = 0;
        if ( (unsigned __int8)sub_7980(a1, (__int64)&v47, (__int64)&v31, v45, 0) )
        {
          v36 = 0;
          v35 = 0;
          if ( (unsigned __int8)xrefblk_t_first_to() )
          {
            while ( 1 )
            {
              v14 = v33;
              if ( v34 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
                break;
              if ( !*(_QWORD *)(a1 + 128) || !rangeset_t_find_range() )
              {
                v15 = getseg();
                if ( v15 )
                {
                  v16 = *(_QWORD *)(a1 + 368);
                  if ( v16 < *(_QWORD *)(v15 + 8) - v14 )
                  {
                    v17 = v16 + v14;
                    v18 = (_QWORD *)(v35 + 8 * v36);
                    if ( (_QWORD *)v35 == v18 )
                      goto LABEL_58;
                    v19 = (_QWORD *)v35;
                    while ( v17 != *v19 )
                    {
                      if ( v18 == ++v19 )
                        goto LABEL_58;
                    }
                    if ( v19 == v18 )
                    {
LABEL_58:
                      if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
                      {
                        v35 = qvector_reserve();
                        v18 = (_QWORD *)(v35 + 8 * v36);
                      }
                      *v18 = v17;
                      *(_QWORD *)&v36 = v36 + 1;
                    }
                  }
                }
              }
              if ( !(unsigned __int8)xrefblk_t_next_to() )
                goto LABEL_28;
            }
          }
          else
          {
LABEL_28:
            if ( (_QWORD)v36 )
            {
              v20 = 0;
              v21 = 0;
              do
              {
                v30 = 8 * v21;
                v22 = xrefblk_t_first_to();
                v23 = 0;
                while ( v22 )
                {
                  if ( v34 )
                    goto LABEL_43;
                  v23 |= (~(unsigned __int16)get_flags_ex() & 0x600) == 0;
                  v22 = xrefblk_t_next_to();
                }
                v37 = 0;
                v38 = 0;
                if ( v23 )
                {
                  v24 = (char *)&haystack;
                  if ( (_QWORD)v32 )
                    v24 = v31;
                  if ( (unsigned __int8)sub_4600((__int64)&v37, v24, 1, "??_7", "6B@") )
                  {
                    v25 = &haystack;
                    if ( (_QWORD)v38 )
                      v25 = v37;
                    sub_10260(*(_QWORD *)(v35 + v30), v25);
                  }
                  if ( v37 )
                  {
                    *(_QWORD *)&v38 = 0;
                    qfree();
                  }
                }
LABEL_43:
                v21 = ++v20;
              }
              while ( v20 < (unsigned __int64)v36 );
            }
          }
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree();
          }
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree();
          }
          if ( !v40 )
            goto LABEL_13;
LABEL_12:
          *(_QWORD *)&v41 = 0;
          qfree();
          goto LABEL_13;
        }
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree();
        }
      }
      if ( v40 )
        goto LABEL_12;
LABEL_13:
      v12 = ++v11;
      if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 272) )
        goto LABEL_52;
    }
  }
  do
  {
LABEL_52:
    v26 = *((_QWORD *)v6 - 3);
    v6 -= 24;
    if ( v26 )
    {
      *((_QWORD *)v6 + 1) = 0;
      qfree();
    }
  }
  while ( v6 != v52 );
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  return v54 - __readfsqword(0x28u);
}
