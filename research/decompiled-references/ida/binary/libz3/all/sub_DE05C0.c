__int64 __fastcall sub_DE05C0(__int64 a1, _QWORD *a2)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __m128i *v4; // rbp
  int v5; // r13d
  int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r9d
  __int32 v9; // r11d
  unsigned __int64 v10; // r12
  int v11; // eax
  __m128i *v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __m128i *v15; // rdi
  __m128i *v16; // rax
  __m128i *v17; // r10
  __int32 v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rbx
  __int64 *v24; // r12
  __int64 v25; // rdi
  __int64 result; // rax
  __int32 v27; // edx
  __int64 v28; // rbx
  __m128i *v29; // rax
  int v30; // r9d
  __m128i *v31; // r10
  __m128i *v32; // rdx
  const __m128i *v33; // rcx
  const __m128i *v34; // r13
  __int64 v35; // rdx
  __m128i *v36; // rsi
  __m128i *v37; // rdx
  __m128i v38; // xmm0
  unsigned __int8 v40; // [rsp+8h] [rbp-B0h]
  __int64 v41; // [rsp+10h] [rbp-A8h]
  __int32 v42; // [rsp+18h] [rbp-A0h]
  __int64 v43; // [rsp+18h] [rbp-A0h]
  size_t v44; // [rsp+20h] [rbp-98h]
  __int64 v45; // [rsp+20h] [rbp-98h]
  __int64 v46; // [rsp+28h] [rbp-90h]
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int64 v48; // [rsp+30h] [rbp-88h]
  int v49; // [rsp+30h] [rbp-88h]
  __int32 v50; // [rsp+38h] [rbp-80h]
  __m128i *v51; // [rsp+38h] [rbp-80h]
  __int32 v53; // [rsp+50h] [rbp-68h]
  __m128i *v54; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v55; // [rsp+68h] [rbp-50h]
  int v56; // [rsp+6Ch] [rbp-4Ch]
  int v57; // [rsp+70h] [rbp-48h]

  v2 = (__m128i *)sub_186B270(0xC0u);
  v3 = *(_QWORD *)(a1 + 24);
  v2->m128i_i64[0] = 0;
  v4 = v2;
  v2->m128i_i64[1] = 0;
  v2[1].m128i_i64[1] = 0;
  v2[2].m128i_i64[0] = 0;
  v2[3].m128i_i64[0] = 0;
  v2[3].m128i_i64[1] = 0;
  v2[4].m128i_i64[1] = 0;
  v2[5].m128i_i64[0] = 0;
  v2[6].m128i_i64[0] = 0;
  v2[6].m128i_i64[1] = 0;
  v2[7].m128i_i64[1] = 0;
  v2[8].m128i_i64[0] = 0;
  v2[9].m128i_i64[0] = 0;
  v2[9].m128i_i64[1] = 0;
  v2[10].m128i_i64[1] = 0;
  v2[11].m128i_i64[0] = 0;
  if ( !v3 || (v46 = v3 + 8LL * *(unsigned int *)(v3 - 4), v3 == v46) )
  {
    LOBYTE(result) = 1;
    goto LABEL_30;
  }
  v41 = v3;
  v5 = 0;
  v6 = 0;
  v7 = 8;
  v42 = 0;
  do
  {
    v8 = 2 * v7;
    v9 = v42++;
    v10 = *(_QWORD *)(*(_QWORD *)v41 + 24LL);
    if ( 3 * v7 >= 4 * (v5 + v6) )
    {
      v11 = v7 - 1;
      v44 = 24LL * v7;
      v12 = (__m128i *)((char *)v4 + v44);
      if ( !v10 )
        goto LABEL_65;
      goto LABEL_6;
    }
    v28 = v8;
    v50 = v9;
    v5 = 2 * v7;
    v44 = 24LL * v8;
    v29 = (__m128i *)sub_186B270(v44);
    v30 = 2 * v7;
    v31 = v29;
    v9 = v50;
    if ( 2 * v7 )
    {
      v32 = (__m128i *)((char *)v29 + 24 * v28);
      do
      {
        v29->m128i_i64[0] = 0;
        v29 = (__m128i *)((char *)v29 + 24);
        v29[-1].m128i_i64[0] = 0;
      }
      while ( v29 != v32 );
      v11 = v30 - 1;
      v12 = (__m128i *)((char *)v31 + v44);
      v33 = (__m128i *)((char *)v4 + 24 * v7);
    }
    else
    {
      v12 = v29;
      v33 = (__m128i *)((char *)v4 + 24 * v7);
      v11 = -1;
      if ( v4 == v33 )
      {
        if ( !v4 )
        {
          v7 = 0;
          v4 = v31;
          LODWORD(v13) = -1640531495;
          v44 = 0;
          v15 = (__m128i *)((char *)v31 + 0xED5336C58LL);
          if ( !v10 )
            goto LABEL_9;
          goto LABEL_6;
        }
LABEL_63:
        v51 = v31;
        v53 = v9;
        v49 = v11;
        sub_186B220(v4);
        v30 = 2 * v7;
        v31 = v51;
        v9 = v53;
        v11 = v49;
        goto LABEL_64;
      }
    }
    v34 = v4;
    do
    {
      while ( v34->m128i_i32[1] != 2 )
      {
        v34 = (const __m128i *)((char *)v34 + 24);
        if ( v33 == v34 )
          goto LABEL_62;
      }
      v35 = 24LL * (v34->m128i_i32[0] & (unsigned int)v11);
      v36 = (__m128i *)((char *)v31 + v35);
      if ( v44 == v35 )
      {
LABEL_66:
        if ( v31 == v36 )
        {
LABEL_72:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v37 = v31;
        while ( v37->m128i_i32[1] )
        {
          v37 = (__m128i *)((char *)v37 + 24);
          if ( v36 == v37 )
            goto LABEL_72;
        }
      }
      else
      {
        v37 = (__m128i *)((char *)v31 + v35);
        while ( v37->m128i_i32[1] )
        {
          v37 = (__m128i *)((char *)v37 + 24);
          if ( v37 == v12 )
            goto LABEL_66;
        }
      }
      v38 = _mm_loadu_si128(v34);
      v34 = (const __m128i *)((char *)v34 + 24);
      *v37 = v38;
      v37[1].m128i_i64[0] = v34[-1].m128i_i64[1];
    }
    while ( v33 != v34 );
LABEL_62:
    if ( v4 )
      goto LABEL_63;
LABEL_64:
    v7 = v30;
    v4 = v31;
    v5 = 0;
    if ( !v10 )
    {
LABEL_65:
      LODWORD(v13) = -1640531495;
      goto LABEL_8;
    }
LABEL_6:
    if ( (v10 & 7) == 1 )
      v13 = v10 >> 3;
    else
      LODWORD(v13) = *(_DWORD *)(v10 - 8);
LABEL_8:
    v14 = 24LL * ((unsigned int)v13 & v11);
    v15 = (__m128i *)((char *)v4 + v14);
    if ( v44 == v14 )
    {
      v17 = nullptr;
LABEL_36:
      if ( v15 == v4 )
      {
LABEL_45:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v16 = v4;
      while ( 1 )
      {
        v27 = v16->m128i_i32[1];
        if ( v27 != 2 )
          break;
        if ( v16->m128i_i32[0] == (_DWORD)v13 )
        {
          if ( v16->m128i_i64[1] == v10 )
            goto LABEL_16;
          v16 = (__m128i *)((char *)v16 + 24);
          if ( v15 == v16 )
            goto LABEL_45;
        }
        else
        {
LABEL_40:
          v16 = (__m128i *)((char *)v16 + 24);
          if ( v15 == v16 )
            goto LABEL_45;
        }
      }
      if ( !v27 )
        goto LABEL_46;
      v17 = v16;
      goto LABEL_40;
    }
LABEL_9:
    v16 = v15;
    v17 = nullptr;
    while ( 1 )
    {
      v18 = v16->m128i_i32[1];
      if ( v18 != 2 )
        break;
      if ( (_DWORD)v13 == v16->m128i_i32[0] && v16->m128i_i64[1] == v10 )
      {
LABEL_16:
        v16->m128i_i64[1] = v10;
        v16[1].m128i_i32[0] = v9;
        v16->m128i_i32[1] = 2;
        goto LABEL_17;
      }
LABEL_12:
      v16 = (__m128i *)((char *)v16 + 24);
      if ( v16 == v12 )
        goto LABEL_36;
    }
    if ( v18 )
    {
      v17 = v16;
      goto LABEL_12;
    }
LABEL_46:
    if ( v17 )
      --v5;
    else
      v17 = v16;
    v17->m128i_i64[1] = v10;
    ++v6;
    v17[1].m128i_i32[0] = v9;
    v17->m128i_i32[1] = 2;
    v17->m128i_i32[0] = v13;
LABEL_17:
    v41 += 8;
  }
  while ( v46 != v41 );
  v19 = *(_QWORD *)(a1 + 24);
  if ( !v19 || (v20 = *(unsigned int *)(v19 - 4), v19 == v19 + 8 * v20) )
  {
LABEL_34:
    result = 1;
  }
  else
  {
    v47 = *(_QWORD *)(a1 + 24);
    v48 = v19 + 8 * v20;
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)v47 + 48LL);
      if ( v21 )
      {
        v45 = v21 + 8LL * *(unsigned int *)(v21 - 4);
        if ( v21 != v45 )
          break;
      }
LABEL_33:
      v47 += 8;
      if ( v48 == v47 )
        goto LABEL_34;
    }
    v43 = *(_QWORD *)(*(_QWORD *)v47 + 48LL);
    while ( 1 )
    {
      v22 = *(__int64 **)(*(_QWORD *)v43 + 40LL);
      if ( v22 )
      {
        v23 = &v22[*((unsigned int *)v22 - 1)];
        if ( v22 != v23 )
          break;
      }
LABEL_32:
      v43 += 8;
      if ( v45 == v43 )
        goto LABEL_33;
    }
    v24 = *(__int64 **)(*(_QWORD *)v43 + 40LL);
    while ( 1 )
    {
      v25 = *v24;
      v54 = v4;
      v55 = v7;
      v56 = v6;
      v57 = v5;
      result = sub_DDF7E0(v25, (__int64 *)&v54, a2);
      if ( !(_BYTE)result )
        break;
      if ( v23 == ++v24 )
        goto LABEL_32;
    }
  }
  if ( v4 )
  {
LABEL_30:
    v40 = result;
    sub_186B220(v4);
    return v40;
  }
  return result;
}

