const __m128i **__fastcall sub_9D3BD0(
        const __m128i **a1,
        __int64 a2,
        const __m128i **a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  const __m128i *v8; // rbp
  unsigned __int64 v9; // rax
  const __m128i *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  const __m128i *v14; // rbp
  const __m128i *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rdi
  const __m128i *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  const __m128i *v26; // r13
  __int64 v27; // r15
  const __m128i *v28; // r11
  const __m128i *v29; // r8
  const __m128i *v30; // r14
  __int64 v31; // rax
  const __m128i *v32; // r13
  const __m128i *v33; // r10
  __int64 v34; // rcx
  const __m128i *v35; // r9
  const __m128i *v36; // rsi
  const __m128i *v37; // r8
  const __m128i *v38; // rax
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  const __m128i *v44; // [rsp+8h] [rbp-80h]
  const __m128i *v45; // [rsp+8h] [rbp-80h]
  const __m128i *v46; // [rsp+10h] [rbp-78h]
  const __m128i *v47; // [rsp+10h] [rbp-78h]
  const __m128i *v48; // [rsp+18h] [rbp-70h]
  const __m128i *v49; // [rsp+18h] [rbp-70h]
  const __m128i *v50; // [rsp+20h] [rbp-68h]
  const __m128i *v51; // [rsp+20h] [rbp-68h]
  const __m128i *v52; // [rsp+28h] [rbp-60h]
  __int64 v53; // [rsp+30h] [rbp-58h]
  const __m128i *v54; // [rsp+38h] [rbp-50h]
  const __m128i *v55; // [rsp+48h] [rbp-40h] BYREF

  v8 = *a3;
  if ( !*a3 )
    goto LABEL_37;
  v9 = v8[3].m128i_u64[0];
  v10 = (const __m128i *)v8[1].m128i_i64[0];
  if ( *a4 != v9 )
  {
    if ( *a4 < v9 )
    {
      v23 = (const __m128i *)sub_9D0E30((_QWORD *)a2, a4, v8->m128i_i64[1], (__int64)a4, a5, a6);
      v14 = (const __m128i *)sub_9D0C20((_QWORD *)a2, v23, v8 + 3, (__int64)v10, v24, v25);
    }
    else
    {
      v11 = sub_9D0E30((_QWORD *)a2, a4, v8[1].m128i_i64[0], (__int64)a4, a5, a6);
      v14 = (const __m128i *)sub_9D0C20((_QWORD *)a2, (const __m128i *)v8->m128i_i64[1], v8 + 3, v11, v12, v13);
    }
    goto LABEL_5;
  }
  v14 = (const __m128i *)v8->m128i_i64[1];
  if ( !v14 )
  {
    v14 = v10;
    goto LABEL_5;
  }
  if ( v10 )
  {
    v26 = (const __m128i *)v10->m128i_i64[1];
    v27 = v10[1].m128i_i64[0];
    v28 = v10 + 3;
    if ( v26 )
    {
      v29 = (const __m128i *)v26->m128i_i64[1];
      v30 = (const __m128i *)v26[1].m128i_i64[0];
      if ( v29 )
      {
        v31 = v29->m128i_i64[1];
        v32 = v26 + 3;
        v33 = (const __m128i *)v29[1].m128i_i64[0];
        if ( v31 )
        {
          v34 = *(_QWORD *)(v31 + 8);
          v35 = *(const __m128i **)(v31 + 16);
          v44 = v29 + 3;
          if ( v34 )
          {
            v36 = *(const __m128i **)(v34 + 8);
            v37 = *(const __m128i **)(v34 + 16);
            v46 = (const __m128i *)(v31 + 48);
            if ( v36 )
            {
              v54 = v28;
              v52 = *(const __m128i **)(v31 + 16);
              v48 = v33;
              v53 = *(_QWORD *)(v34 + 16);
              v50 = *(const __m128i **)(v31 + 8);
              v38 = (const __m128i *)sub_9D0DF0((_QWORD *)a2, v36, &v55);
              v40 = sub_9D0C20((_QWORD *)a2, v38, v50 + 3, v53, v53, v39);
              v28 = v54;
              v35 = v52;
              v33 = v48;
              v37 = (const __m128i *)v40;
            }
            else
            {
              v55 = *(const __m128i **)(v31 + 8);
            }
            v51 = v28;
            v49 = v33;
            v41 = sub_9D0C20((_QWORD *)a2, v37, v46, (__int64)v35, (__int64)v37, (__int64)v35);
            v28 = v51;
            v33 = v49;
            v35 = (const __m128i *)v41;
          }
          else
          {
            v55 = (const __m128i *)v29->m128i_i64[1];
          }
          v47 = v28;
          v42 = sub_9D0C20((_QWORD *)a2, v35, v44, (__int64)v33, (__int64)v29, (__int64)v35);
          v28 = v47;
          v33 = (const __m128i *)v42;
        }
        else
        {
          v55 = v29;
        }
        v45 = v28;
        v43 = sub_9D0C20((_QWORD *)a2, v33, v32, (__int64)v30, (__int64)v29, a6);
        v28 = v45;
        v30 = (const __m128i *)v43;
      }
      else
      {
        v55 = v26;
      }
      v27 = sub_9D0C20((_QWORD *)a2, v30, v28, v27, (__int64)v29, a6);
      v28 = v55 + 3;
    }
    else
    {
      v55 = v10;
    }
    v14 = (const __m128i *)sub_9D0C20((_QWORD *)a2, v14, v28, v27, a5, a6);
LABEL_5:
    if ( v14 )
      goto LABEL_6;
LABEL_37:
    v14 = nullptr;
    goto LABEL_10;
  }
LABEL_6:
  if ( (v14[2].m128i_i8[11] & 0x10) != 0 )
  {
    v15 = v14;
    do
    {
      v15[2].m128i_i8[11] &= ~0x10u;
      sub_9CAA60(a2, v15->m128i_i64[1]);
      v15 = (const __m128i *)v15[1].m128i_i64[0];
    }
    while ( v15 && (v15[2].m128i_i8[11] & 0x10) != 0 );
  }
LABEL_10:
  v16 = *(_QWORD *)(a2 + 40);
  v17 = *(_QWORD *)(a2 + 32);
  v18 = (v16 - v17) >> 3;
  if ( (_DWORD)v18 )
  {
    v19 = 0;
    v20 = 8LL * (unsigned int)(v18 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v17 + v19);
        if ( (*(_BYTE *)(v21 + 43) & 0x10) != 0 && !*(_DWORD *)(v21 + 68) )
          break;
        v19 += 8;
        if ( v20 == v19 )
          goto LABEL_16;
      }
      sub_9D1530((void *)v21);
      v19 += 8;
      v17 = *(_QWORD *)(a2 + 32);
    }
    while ( v20 != v19 );
LABEL_16:
    v16 = *(_QWORD *)(a2 + 40);
  }
  if ( v17 != v16 )
    *(_QWORD *)(a2 + 40) = v17;
  if ( *(_BYTE *)(a2 + 80) )
    v14 = (const __m128i *)sub_9D2760(a2, (__int64)v14);
  *a1 = v14;
  if ( v14 )
    ++v14[4].m128i_i32[1];
  return a1;
}
