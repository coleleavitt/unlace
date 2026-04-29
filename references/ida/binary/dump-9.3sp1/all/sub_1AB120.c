__int64 __fastcall sub_1AB120(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // zf
  _DWORD *v7; // r12
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  char v16; // r12
  __int64 v17; // rcx
  int v18; // r14d
  __int64 v19; // r15
  bool v20; // al
  __int64 v21; // rdi
  const __m128i *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // r14
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  __int64 *v28; // r14
  __int64 *v29; // r15
  int v30; // eax
  __int64 v31; // rsi
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // r15
  __int64 v35; // r13
  __int64 v36; // rcx
  int v37; // r14d
  __int64 v38; // rsi
  unsigned __int64 v39; // r13
  __int64 v40; // r12
  __int64 *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v50; // r15
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-88h]
  int v56; // [rsp+0h] [rbp-88h]
  __int64 *v57; // [rsp+0h] [rbp-88h]
  __int64 v58; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v59; // [rsp+0h] [rbp-88h]
  __int64 v60; // [rsp+0h] [rbp-88h]
  __int64 v61; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v62; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v63; // [rsp+8h] [rbp-80h]
  __int64 *i; // [rsp+8h] [rbp-80h]
  __int64 v65; // [rsp+10h] [rbp-78h]
  int v66; // [rsp+10h] [rbp-78h]
  __int64 v67; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v68; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v69[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(_BYTE *)a2 == 10;
  v69[3] = (_QWORD *)__readfsqword(0x28u);
  if ( !v5 || (v10 = *(_QWORD *)(a2 + 8), *(_BYTE *)v10 != 5) )
  {
    v7 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v7 == 4 )
    {
      v28 = (__int64 *)a1[4].m128i_i64[0];
      v62 = (unsigned __int8 *)(v7 + 16);
      v29 = &v28[a1[4].m128i_i64[1]];
      if ( v28 != v29 )
      {
        do
        {
          v31 = *v28;
          if ( v7[17] == -1 || *(_DWORD *)(v31 + 4) == -1 )
          {
            sub_123A40((__int64)v69, (unsigned __int8 *)v31, a3, a4);
            HIDWORD(v69[0]) = v7[17];
            v56 = sub_11DA40(v62, (unsigned __int8 *)v69);
            sub_11CDA0((__int64)v69);
            v30 = v56;
          }
          else
          {
            v30 = sub_11DA40(v62, (unsigned __int8 *)v31);
          }
          if ( !v30 )
            break;
          ++v28;
        }
        while ( v29 != v28 );
        v32 = (__int64 *)a1[4].m128i_i64[0];
        v33 = a1[4].m128i_i64[1];
        v34 = v32;
        v57 = &v32[v33];
        if ( v28 != v57 )
        {
          v35 = a1[2].m128i_i64[0];
          v63 = (unsigned __int8 *)(v35 + 32);
          v36 = (__int64)&v32[v33];
          if ( v32 == v57 )
            goto LABEL_46;
          do
          {
            v38 = *v34;
            if ( *(_DWORD *)(v35 + 36) == -1 || *(_DWORD *)(v38 + 4) == -1 )
            {
              sub_123A40((__int64)v69, (unsigned __int8 *)v38, v33, v36);
              HIDWORD(v69[0]) = *(_DWORD *)(v35 + 36);
              v37 = sub_11DA40(v63, (unsigned __int8 *)v69);
              sub_11CDA0((__int64)v69);
            }
            else
            {
              v37 = sub_11DA40(v63, (unsigned __int8 *)v38);
            }
            if ( !v37 )
              break;
            ++v34;
          }
          while ( v34 != v57 );
          v33 = a1[4].m128i_i64[1];
          v32 = (__int64 *)a1[4].m128i_i64[0];
          if ( v34 == &v32[v33] )
          {
LABEL_46:
            v39 = a1[5].m128i_u64[0];
            v40 = (__int64)v32;
            if ( v39 < v33 + 1 )
            {
              v43 = qvector_reserve((__int64)a1[4].m128i_i64, 0, v33 + 1, 8);
              v44 = a1[5].m128i_i64[0];
              v45 = (__int64 *)a1[4].m128i_i64[0];
              a1[5].m128i_i64[0] = v39;
              v40 = v43;
              v46 = a1[4].m128i_i64[1] - 1;
              if ( v46 >= 0 )
              {
                v47 = v40;
                do
                {
                  v48 = *v45;
                  v47 += 8;
                  ++v45;
                  *(_QWORD *)(v47 - 8) = v48;
                }
                while ( v46-- != 0 );
                v45 = (__int64 *)a1[4].m128i_i64[0];
              }
              qfree((__int64)v45);
              a1[4].m128i_i64[0] = v40;
              v33 = a1[4].m128i_i64[1];
              a1[5].m128i_i64[0] = v44;
            }
            *(_QWORD *)(v40 + 8 * v33) = v63;
            ++a1[4].m128i_i64[1];
          }
        }
      }
    }
    v8 = *(int *)(a2 + 4);
    if ( (_DWORD)v8 != -1 && *(_BYTE *)a2 == 5 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( (int)v8 > 1 )
      {
        v69[0] = (_QWORD *)(v25 + 1);
        v69[1] = (_QWORD *)((int)v8 - 1);
        sub_316BB0(&a1[8], v69);
      }
      v26 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
      v27 = (v26 - 1 + v25 + v8) & -v26;
      if ( v27 > a1[10].m128i_i64[1] )
        a1[10].m128i_i64[1] = v27;
    }
    return 1;
  }
  v12 = a1[10].m128i_i64[0];
  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
  if ( v12 > v13 )
    return 1;
  v14 = v13 - v12;
  if ( a1[11].m128i_i32[2] <= v13 - v12 )
    return 1;
  v15 = a1->m128i_i64[1];
  v16 = a4;
  v17 = *(int *)(*(_QWORD *)(v15 + 1504) + 80LL);
  v18 = *(_DWORD *)(*(_QWORD *)(v15 + 1504) + 80LL);
  if ( !(v14 % v17) )
  {
LABEL_13:
    v21 = a1[5].m128i_i64[1];
    v22 = *(const __m128i **)v21;
    v23 = *(_QWORD *)v21 + 40LL * *(_QWORD *)(v21 + 8);
    if ( *(_QWORD *)v21 == v23 )
      goto LABEL_65;
    while ( v13 != v22[1].m128i_i64[1] )
    {
      v22 = (const __m128i *)((char *)v22 + 40);
      if ( v22 == (const __m128i *)v23 )
        goto LABEL_65;
    }
    if ( v22 == (const __m128i *)v23 )
    {
LABEL_65:
      v60 = v13;
      v22 = (const __m128i *)sub_1999C0((const __m128i **)v21, v13, a1[1].m128i_u64[0], a1[2].m128i_u64[0]);
      v13 = v60;
    }
    if ( v16 )
      v22[2].m128i_i8[0] = 1;
    v24 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v24 == 4 && (_DWORD *)a2 == v24 + 8 )
    {
      v50 = (__int64 *)a1[4].m128i_i64[0];
      v59 = (unsigned __int8 *)(v24 + 16);
      for ( i = &v50[a1[4].m128i_i64[1]]; i != v50; ++v50 )
      {
        v52 = *v50;
        if ( v24[17] == -1 || *(_DWORD *)(v52 + 4) == -1 )
        {
          v67 = v13;
          sub_123A40((__int64)v69, (unsigned __int8 *)v52, v23, v17);
          HIDWORD(v69[0]) = v24[17];
          v66 = sub_11DA40(v59, (unsigned __int8 *)v69);
          sub_11CDA0((__int64)v69);
          v13 = v67;
          v51 = v66;
        }
        else
        {
          v65 = v13;
          v51 = sub_11DA40(v59, (unsigned __int8 *)v52);
          v13 = v65;
        }
        if ( !v51 )
          break;
      }
      if ( v50 != (__int64 *)(a1[4].m128i_i64[0] + 8 * a1[4].m128i_i64[1]) )
        goto LABEL_22;
      v53 = a1[2].m128i_i64[0];
      v61 = v13;
      v69[0] = &v68;
      v68 = (unsigned __int8 *)(v53 + 64);
      v54 = sub_1AAD00(a1 + 3, &v68, v69, v17);
      v13 = v61;
      *(_QWORD *)(v54 + 32) = a2;
    }
    if ( a2 == a3 )
    {
LABEL_22:
      if ( a1[9].m128i_i64[1] < v13 )
        a1[9].m128i_i64[1] = v13;
    }
    return 1;
  }
  v19 = -(int)v17;
  if ( *(_BYTE *)(*(_QWORD *)(v15 + 1496) + 145LL) )
  {
    v55 = v13;
    v20 = sub_11CA80(v17 - v14 % *(int *)(*(_QWORD *)(v15 + 1504) + 80LL));
    v13 = v55;
    if ( v20 )
    {
      v13 = v19 & v55;
      goto LABEL_13;
    }
  }
  v41 = (__int64 *)a1[5].m128i_i64[1];
  v42 = *v41;
  if ( *v41 )
  {
    v41[1] = 0;
    v58 = v13;
    qfree(v42);
    *v41 = 0;
    v13 = v58;
    v41[2] = 0;
  }
  a1[10].m128i_i64[0] = v19 & (v13 + v18 - 1);
  return 0;
}
