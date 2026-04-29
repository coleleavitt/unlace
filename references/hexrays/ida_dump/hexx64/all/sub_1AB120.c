__int64 __fastcall sub_1AB120(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // zf
  _DWORD *v7; // r12
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  int v17; // ecx
  int v18; // r14d
  __int64 v19; // r15
  bool v20; // al
  unsigned __int64 *v21; // rdi
  __int64 v22; // rax
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
  int v36; // r14d
  __int64 v37; // rsi
  unsigned __int64 v38; // r13
  __int64 v39; // r12
  __int64 *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v49; // r15
  int v50; // eax
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-88h]
  int v55; // [rsp+0h] [rbp-88h]
  __int64 *v56; // [rsp+0h] [rbp-88h]
  __int64 v57; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v58; // [rsp+0h] [rbp-88h]
  __int64 v59; // [rsp+0h] [rbp-88h]
  __int64 v60; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v61; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v62; // [rsp+8h] [rbp-80h]
  __int64 *i; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+10h] [rbp-78h]
  int v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v67; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v68[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(_BYTE *)a2 == 10;
  v68[3] = (_QWORD *)__readfsqword(0x28u);
  if ( !v5 || (v10 = *(_QWORD *)(a2 + 8), *(_BYTE *)v10 != 5) )
  {
    v7 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v7 == 4 )
    {
      v28 = (__int64 *)a1[4].m128i_i64[0];
      v61 = (unsigned __int8 *)(v7 + 16);
      v29 = &v28[a1[4].m128i_i64[1]];
      if ( v28 != v29 )
      {
        do
        {
          v31 = *v28;
          if ( v7[17] == -1 || *(_DWORD *)(v31 + 4) == -1 )
          {
            sub_123A40((__int64)v68, (unsigned __int8 *)v31);
            HIDWORD(v68[0]) = v7[17];
            v55 = sub_11DA40(v61, (unsigned __int8 *)v68);
            sub_11CDA0((__int64)v68);
            v30 = v55;
          }
          else
          {
            v30 = sub_11DA40(v61, (unsigned __int8 *)v31);
          }
          if ( !v30 )
            break;
          ++v28;
        }
        while ( v29 != v28 );
        v32 = (__int64 *)a1[4].m128i_i64[0];
        v33 = a1[4].m128i_i64[1];
        v34 = v32;
        v56 = &v32[v33];
        if ( v28 != v56 )
        {
          v35 = a1[2].m128i_i64[0];
          v62 = (unsigned __int8 *)(v35 + 32);
          if ( v32 == v56 )
            goto LABEL_46;
          do
          {
            v37 = *v34;
            if ( *(_DWORD *)(v35 + 36) == -1 || *(_DWORD *)(v37 + 4) == -1 )
            {
              sub_123A40((__int64)v68, (unsigned __int8 *)v37);
              HIDWORD(v68[0]) = *(_DWORD *)(v35 + 36);
              v36 = sub_11DA40(v62, (unsigned __int8 *)v68);
              sub_11CDA0((__int64)v68);
            }
            else
            {
              v36 = sub_11DA40(v62, (unsigned __int8 *)v37);
            }
            if ( !v36 )
              break;
            ++v34;
          }
          while ( v34 != v56 );
          v33 = a1[4].m128i_i64[1];
          v32 = (__int64 *)a1[4].m128i_i64[0];
          if ( v34 == &v32[v33] )
          {
LABEL_46:
            v38 = a1[5].m128i_u64[0];
            v39 = (__int64)v32;
            if ( v38 < v33 + 1 )
            {
              v42 = qvector_reserve(&a1[4], 0, v33 + 1, 8);
              v43 = a1[5].m128i_i64[0];
              v44 = (__int64 *)a1[4].m128i_i64[0];
              a1[5].m128i_i64[0] = v38;
              v39 = v42;
              v45 = a1[4].m128i_i64[1] - 1;
              if ( v45 >= 0 )
              {
                v46 = v39;
                do
                {
                  v47 = *v44;
                  v46 += 8;
                  ++v44;
                  *(_QWORD *)(v46 - 8) = v47;
                }
                while ( v45-- != 0 );
                v44 = (__int64 *)a1[4].m128i_i64[0];
              }
              qfree(v44);
              a1[4].m128i_i64[0] = v39;
              v33 = a1[4].m128i_i64[1];
              a1[5].m128i_i64[0] = v43;
            }
            *(_QWORD *)(v39 + 8 * v33) = v62;
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
        v68[0] = (_QWORD *)(v25 + 1);
        v68[1] = (_QWORD *)((int)v8 - 1);
        sub_316BB0(&a1[8], v68);
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
  v17 = *(_DWORD *)(*(_QWORD *)(v15 + 1504) + 80LL);
  v18 = v17;
  if ( !(v14 % v17) )
  {
LABEL_13:
    v21 = (unsigned __int64 *)a1[5].m128i_i64[1];
    v22 = *v21;
    v23 = *v21 + 40 * v21[1];
    if ( *v21 == v23 )
      goto LABEL_65;
    while ( v13 != *(_QWORD *)(v22 + 24) )
    {
      v22 += 40;
      if ( v22 == v23 )
        goto LABEL_65;
    }
    if ( v22 == v23 )
    {
LABEL_65:
      v59 = v13;
      v22 = sub_1999C0(v21, v13, a1[1].m128i_u64[0], a1[2].m128i_u64[0]);
      v13 = v59;
    }
    if ( a4 )
      *(_BYTE *)(v22 + 32) = 1;
    v24 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v24 == 4 && (_DWORD *)a2 == v24 + 8 )
    {
      v49 = (__int64 *)a1[4].m128i_i64[0];
      v58 = (unsigned __int8 *)(v24 + 16);
      for ( i = &v49[a1[4].m128i_i64[1]]; i != v49; ++v49 )
      {
        v51 = *v49;
        if ( v24[17] == -1 || *(_DWORD *)(v51 + 4) == -1 )
        {
          v66 = v13;
          sub_123A40((__int64)v68, (unsigned __int8 *)v51);
          HIDWORD(v68[0]) = v24[17];
          v65 = sub_11DA40(v58, (unsigned __int8 *)v68);
          sub_11CDA0((__int64)v68);
          v13 = v66;
          v50 = v65;
        }
        else
        {
          v64 = v13;
          v50 = sub_11DA40(v58, (unsigned __int8 *)v51);
          v13 = v64;
        }
        if ( !v50 )
          break;
      }
      if ( v49 != (__int64 *)(a1[4].m128i_i64[0] + 8 * a1[4].m128i_i64[1]) )
        goto LABEL_22;
      v52 = a1[2].m128i_i64[0];
      v60 = v13;
      v68[0] = &v67;
      v67 = (unsigned __int8 *)(v52 + 64);
      v53 = sub_1AAD00(a1 + 3, &v67, v68);
      v13 = v60;
      *(_QWORD *)(v53 + 32) = a2;
    }
    if ( a2 == a3 )
    {
LABEL_22:
      if ( a1[9].m128i_i64[1] < v13 )
        a1[9].m128i_i64[1] = v13;
    }
    return 1;
  }
  v19 = -v17;
  if ( *(_BYTE *)(*(_QWORD *)(v15 + 1496) + 145LL) )
  {
    v54 = v13;
    v20 = sub_11CA80(v17 - v14 % *(int *)(*(_QWORD *)(v15 + 1504) + 80LL));
    v13 = v54;
    if ( v20 )
    {
      v13 = v19 & v54;
      goto LABEL_13;
    }
  }
  v40 = (__int64 *)a1[5].m128i_i64[1];
  v41 = *v40;
  if ( *v40 )
  {
    v40[1] = 0;
    v57 = v13;
    qfree(v41);
    *v40 = 0;
    v13 = v57;
    v40[2] = 0;
  }
  a1[10].m128i_i64[0] = v19 & (v13 + v18 - 1);
  return 0;
}
