__int64 __fastcall sub_DDFFC0(__int64 a1, _QWORD *a2)
{
  __m128i *v2; // rax
  __m128i *v3; // rbp
  __int64 v4; // rax
  int v5; // r10d
  unsigned int v6; // r13d
  __int64 v7; // r9
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // rcx
  const __m128i *v13; // rbx
  __int64 v14; // rax
  __m128i *v15; // rdi
  __m128i *v16; // rax
  __int32 v17; // edx
  unsigned int v18; // ebx
  unsigned int v20; // edx
  unsigned __int64 v21; // rsi
  __int64 v22; // r15
  __m128i *v23; // rdi
  __m128i *v24; // rax
  __m128i *v25; // rcx
  __int32 v26; // edx
  __m128i *i; // rax
  __int32 v28; // edx
  __int32 v29; // edx
  __int64 v30; // r15
  __m128i *v31; // rax
  __m128i *v32; // r11
  __m128i *v33; // rsi
  const __m128i *v34; // r10
  const __m128i *j; // rax
  __int64 v36; // rdx
  __m128i *v37; // rsi
  __m128i *v38; // rdx
  __m128i v39; // xmm0
  int v40; // [rsp+Ch] [rbp-7Ch]
  __int64 v41; // [rsp+10h] [rbp-78h]
  size_t v42; // [rsp+18h] [rbp-70h]
  __m128i *v43; // [rsp+20h] [rbp-68h]
  __m128i *v44; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+30h] [rbp-58h]
  __int64 v46; // [rsp+40h] [rbp-48h]

  v2 = (__m128i *)sub_186B270(0x80u);
  v2->m128i_i64[0] = 0;
  v3 = v2;
  v2->m128i_i64[1] = 0;
  v2[1].m128i_i64[0] = 0;
  v2[1].m128i_i64[1] = 0;
  v2[2].m128i_i64[0] = 0;
  v2[2].m128i_i64[1] = 0;
  v2[3].m128i_i64[0] = 0;
  v2[3].m128i_i64[1] = 0;
  v2[4].m128i_i64[0] = 0;
  v2[4].m128i_i64[1] = 0;
  v2[5].m128i_i64[0] = 0;
  v2[5].m128i_i64[1] = 0;
  v2[6].m128i_i64[0] = 0;
  v2[6].m128i_i64[1] = 0;
  v2[7].m128i_i64[0] = 0;
  v2[7].m128i_i64[1] = 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( !v4 || (v46 = v4 + 8LL * *(unsigned int *)(v4 - 4), v4 == v46) )
  {
    v18 = 0;
    goto LABEL_19;
  }
  v45 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  v6 = 8;
  v40 = 0;
  do
  {
    v7 = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
    if ( !v7 )
      goto LABEL_35;
    v41 = v7 + 8LL * *(unsigned int *)(v7 - 4);
    if ( v41 == v7 )
      goto LABEL_35;
    v8 = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
      if ( v9 )
      {
        if ( (*(_QWORD *)(*(_QWORD *)v8 + 24LL) & 7LL) == 1 )
          v10 = v9 >> 3;
        else
          LODWORD(v10) = *(_DWORD *)(v9 - 8);
      }
      else
      {
        LODWORD(v10) = -1640531495;
      }
      v11 = v6 - 1;
      v12 = 16LL * v6;
      v13 = (__m128i *)((char *)v3 + v12);
      v14 = 16LL * ((unsigned int)v10 & (v6 - 1));
      v15 = &v3[(unsigned __int64)v14 / 0x10];
      if ( v14 != v12 )
      {
        v16 = &v3[(unsigned __int64)v14 / 0x10];
        do
        {
          v17 = v16->m128i_i32[1];
          if ( v17 == 2 )
          {
            if ( (_DWORD)v10 == v16->m128i_i32[0] && v9 == v16->m128i_i64[1] )
            {
LABEL_17:
              v18 = 1;
              *a2 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
              goto LABEL_18;
            }
          }
          else if ( !v17 )
          {
            goto LABEL_21;
          }
          ++v16;
        }
        while ( v13 != v16 );
      }
      if ( v3 != v15 )
      {
        for ( i = v3; v15 != i; ++i )
        {
          v28 = i->m128i_i32[1];
          if ( v28 == 2 )
          {
            if ( (_DWORD)v10 == i->m128i_i32[0] && v9 == i->m128i_i64[1] )
              goto LABEL_17;
          }
          else if ( !v28 )
          {
            break;
          }
        }
      }
LABEL_21:
      v20 = 2 * v6;
      if ( 3 * v6 < 4 * (v5 + v40) )
      {
        v30 = v20;
        v6 *= 2;
        v42 = 16LL * v20;
        v31 = (__m128i *)sub_186B270(v42);
        v12 = v42;
        v32 = v31;
        v33 = &v31[v30];
        if ( v6 )
        {
          do
          {
            v31->m128i_i64[0] = 0;
            ++v31;
            v31[-1].m128i_i64[1] = 0;
          }
          while ( v33 != v31 );
        }
        v11 = v6 - 1;
        v34 = &v32[v42 / 0x10];
        for ( j = v3; v13 != j; *v38 = v39 )
        {
          while ( j->m128i_i32[1] != 2 )
          {
            if ( v13 == ++j )
              goto LABEL_72;
          }
          v36 = 16LL * (j->m128i_i32[0] & v11);
          v37 = &v32[(unsigned __int64)v36 / 0x10];
          if ( v42 == v36 )
          {
LABEL_76:
            if ( v32 == v37 )
            {
LABEL_83:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v38 = v32;
            while ( v38->m128i_i32[1] )
            {
              if ( v37 == ++v38 )
                goto LABEL_83;
            }
          }
          else
          {
            v38 = &v32[(unsigned __int64)v36 / 0x10];
            while ( v38->m128i_i32[1] )
            {
              if ( v34 == ++v38 )
                goto LABEL_76;
            }
          }
          v39 = _mm_loadu_si128(j++);
        }
LABEL_72:
        if ( v3 )
        {
          v44 = &v32[v42 / 0x10];
          v43 = v32;
          sub_186B220(v3);
          v34 = v44;
          v32 = v43;
          v12 = v42;
        }
        v13 = v34;
        v3 = v32;
        v5 = 0;
        if ( !v9 )
        {
LABEL_75:
          LODWORD(v21) = -1640531495;
          goto LABEL_25;
        }
      }
      else if ( !v9 )
      {
        goto LABEL_75;
      }
      if ( (v9 & 7) == 1 )
        v21 = v9 >> 3;
      else
        LODWORD(v21) = *(_DWORD *)(v9 - 8);
LABEL_25:
      v22 = 16LL * ((unsigned int)v21 & v11);
      v23 = &v3[(unsigned __int64)v22 / 0x10];
      if ( v22 == v12 )
      {
        v25 = nullptr;
LABEL_46:
        if ( v3 == v23 )
        {
LABEL_55:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v24 = v3;
        while ( 1 )
        {
          v29 = v24->m128i_i32[1];
          if ( v29 != 2 )
            break;
          if ( (_DWORD)v21 == v24->m128i_i32[0] )
          {
            if ( v9 == v24->m128i_i64[1] )
              goto LABEL_33;
            if ( v23 == ++v24 )
              goto LABEL_55;
          }
          else
          {
LABEL_50:
            if ( v23 == ++v24 )
              goto LABEL_55;
          }
        }
        if ( !v29 )
          goto LABEL_56;
        v25 = v24;
        goto LABEL_50;
      }
      v24 = &v3[(unsigned __int64)v22 / 0x10];
      v25 = nullptr;
      while ( 1 )
      {
        v26 = v24->m128i_i32[1];
        if ( v26 != 2 )
          break;
        if ( (_DWORD)v21 == v24->m128i_i32[0] && v9 == v24->m128i_i64[1] )
        {
LABEL_33:
          v24->m128i_i64[1] = v9;
          v24->m128i_i32[1] = 2;
          goto LABEL_34;
        }
LABEL_29:
        if ( ++v24 == v13 )
          goto LABEL_46;
      }
      if ( v26 )
      {
        v25 = v24;
        goto LABEL_29;
      }
LABEL_56:
      if ( v25 )
        --v5;
      else
        v25 = v24;
      v25->m128i_i64[1] = v9;
      v25->m128i_i32[1] = 2;
      v25->m128i_i32[0] = v21;
      ++v40;
LABEL_34:
      v8 += 8;
    }
    while ( v41 != v8 );
LABEL_35:
    v45 += 8;
  }
  while ( v46 != v45 );
  v18 = 0;
LABEL_18:
  if ( v3 )
LABEL_19:
    sub_186B220(v3);
  return v18;
}

