unsigned __int64 __fastcall sub_1FE740(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rcx
  __int64 *v5; // rsi
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 *v17; // rdi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 *v24; // rbp
  __int64 v25; // rax
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  _QWORD v28[5]; // [rsp+0h] [rbp-68h] BYREF
  char v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+38h] [rbp-30h]
  unsigned __int64 v32; // [rsp+48h] [rbp-20h]

  v32 = __readfsqword(0x28u);
  v29 = 0;
  memset(&v28[1], 0, 32);
  v28[0] = &off_4DED90;
  v30 = 0;
  v31 = 0;
  sub_11FBB0(a2, (__int64)v28);
  v3 = *(unsigned __int64 **)a1;
  v4 = v30;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v5 = (__int64 *)v3[1];
      if ( v3 != (unsigned __int64 *)v5 )
      {
        do
        {
LABEL_4:
          v6 = (unsigned __int64 *)(v5 + 3);
          if ( v4 )
          {
            v7 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
            while ( 1 )
            {
              v8 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
              if ( v7 )
              {
                if ( (*(_BYTE *)v7 & 2) != 0 )
                  break;
                v18 = *v6;
                v19 = *(_QWORD *)(v7 + 24);
                if ( v18 < v19 )
                {
LABEL_31:
                  v8 = *(_QWORD *)(v8 + 8);
                  goto LABEL_32;
                }
                while ( v19 < v18 )
                {
                  v8 = *(_QWORD *)(v8 + 16);
LABEL_32:
                  if ( (*(_BYTE *)v8 & 2) != 0 )
                    goto LABEL_8;
                  v19 = *(_QWORD *)(v8 + 24);
                  if ( v18 < v19 )
                    goto LABEL_31;
                }
                if ( v4 == v8 )
                  break;
              }
              if ( (*v5 & 2) != 0 )
              {
                if ( *(__int64 **)a1 == v5 )
                  goto LABEL_16;
                v6 = (unsigned __int64 *)(v5 + 3);
              }
              else
              {
                v17 = (__int64 *)v5[2];
                if ( (*(_BYTE *)v17 & 2) == 0 )
                {
                  do
                  {
                    v5 = v17;
                    v17 = (__int64 *)v17[1];
                  }
                  while ( (*(_BYTE *)v17 & 2) == 0 );
                  if ( *(__int64 **)a1 != v5 )
                    goto LABEL_4;
                  goto LABEL_16;
                }
                v20 = (__int64 *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
                v21 = *v20;
                if ( (*v20 & 2) == 0 )
                {
                  while ( 1 )
                  {
                    if ( v5 != (__int64 *)v20[2] )
                    {
                      v5 = v20;
                      goto LABEL_15;
                    }
                    v5 = v20;
                    v22 = v21 & 0xFFFFFFFFFFFFFFFCLL;
                    v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v21 & 2) != 0 )
                      break;
                    v20 = (__int64 *)v22;
                  }
                  v5 = (__int64 *)v22;
                  if ( *(_QWORD *)a1 != v22 )
                    goto LABEL_4;
                  goto LABEL_16;
                }
                if ( v20 == *(__int64 **)a1 )
                  goto LABEL_16;
                v6 = (unsigned __int64 *)(v20 + 3);
                v5 = (__int64 *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
              }
            }
          }
LABEL_8:
          v9 = *v5;
          v10 = (unsigned __int64)v5;
          if ( (*v5 & 2) == 0 )
          {
            v11 = v5[2];
            if ( (*(_BYTE *)v11 & 2) != 0 )
            {
              v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
              v12 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v12 & 2) == 0 )
              {
                v13 = (unsigned __int64)v5;
                do
                {
                  if ( *(_QWORD *)(v10 + 16) != v13 )
                    break;
                  v13 = v10;
                  v14 = v12 & 0xFFFFFFFFFFFFFFFCLL;
                  v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
                  v10 = v14;
                }
                while ( (v12 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v10 = v11;
                v23 = *(_QWORD *)(v11 + 8);
                if ( (*(_BYTE *)v23 & 2) != 0 )
                  break;
                v10 = v23;
                v11 = *(_QWORD *)(v23 + 8);
              }
              while ( (*(_BYTE *)v11 & 2) == 0 );
            }
          }
          sub_1FE390((unsigned __int64 **)a1, v5);
          v4 = v30;
          v5 = (__int64 *)v10;
LABEL_15:
          ;
        }
        while ( *(__int64 **)a1 != v5 );
      }
    }
  }
LABEL_16:
  v28[0] = &off_4DED90;
  if ( v4 )
  {
    v15 = *(_QWORD *)v4;
    if ( !v31 )
    {
      *(_QWORD *)v4 = *(_QWORD *)v4 & 3LL | v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      *(_QWORD *)v30 &= ~1uLL;
      *(_QWORD *)v30 |= 2uLL;
      goto LABEL_19;
    }
    v24 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    v25 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v25 & 2) != 0 )
    {
LABEL_55:
      *(_QWORD *)v4 = v15 & 3 | v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      *(_QWORD *)v30 &= ~1uLL;
      *(_QWORD *)v30 |= 2uLL;
      v31 = 0;
LABEL_19:
      if ( v30 )
        qfree(v30);
      return v32 - __readfsqword(0x28u);
    }
    v26 = (__int64 *)v24[1];
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
      v27 = (__int64 *)v24[2];
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_57;
    }
    else
    {
      sub_1FB6F0(v26);
      v27 = (__int64 *)v24[2];
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_51;
    }
    sub_1FB6F0(v27);
LABEL_51:
    v25 = *v24;
    if ( (*v24 & 2) != 0 )
    {
LABEL_52:
      if ( v15 > 3 )
        qfree(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v4 = v30;
      v15 = *(_QWORD *)v30;
      goto LABEL_55;
    }
LABEL_57:
    *v24 = v25 | 2;
    goto LABEL_52;
  }
  return v32 - __readfsqword(0x28u);
}
