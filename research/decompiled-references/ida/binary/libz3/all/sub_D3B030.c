__int64 __fastcall sub_D3B030(__m128i *a1, __m128i *a2, __m128i **a3)
{
  __m128i *v3; // r13
  __int64 v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i *v9; // r14
  _DWORD *v10; // rax
  __int64 v11; // r12
  _DWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i *v15; // r15
  __m128i *v16; // rax
  __m128i *v17; // rdx
  bool v18; // zf
  int v19; // eax
  __int64 result; // rax
  __m128i *v21; // rsi
  __m128i *v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r12
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-A8h]
  __int64 v34; // [rsp+0h] [rbp-A8h]
  __int64 v35; // [rsp+8h] [rbp-A0h]
  int v36[2]; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+28h] [rbp-80h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 v40; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  __m128i *v42; // [rsp+50h] [rbp-58h] BYREF
  __int64 v43; // [rsp+58h] [rbp-50h]
  __m128i *v44; // [rsp+60h] [rbp-48h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]

  v3 = a2;
  v39 = a1->m128i_i64[0];
  if ( a2 )
    ++a2->m128i_i32[2];
  v35 = (__int64)&a1[5].m128i_i64[1];
  while ( 1 )
  {
    v5 = sub_D30E40((size_t *)a1->m128i_i64[1], v3);
    if ( !v5 )
      break;
    v33 = a1->m128i_i64[0];
    if ( *(_WORD *)(v5 + 4) || (v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr || *v6 )
    {
      a1[41].m128i_i64[0] = v5;
      a1[41].m128i_i8[8] = 0;
      a1[42].m128i_i64[0] = 0;
    }
    else
    {
      v23 = v6[1];
      if ( v23 == 8 )
      {
        v32 = *(_QWORD *)(v5 + 32);
        a1[41].m128i_i8[8] = 1;
        a1[42].m128i_i64[0] = 0;
        a1[41].m128i_i64[0] = v32;
      }
      else
      {
        v24 = a1[39].m128i_i64[1];
        a1[41].m128i_i64[0] = v5;
        a1[41].m128i_i8[8] = 0;
        a1[42].m128i_i64[0] = 0;
        if ( *(_BYTE *)(v24 + 24) && v23 == 2 && *(_DWORD *)(v5 + 24) == 2 )
        {
          v25 = *(_QWORD *)(v5 + 32);
          v26 = *(_QWORD *)(v5 + 40);
          if ( (unsigned __int8)sub_15D2710(a1[39].m128i_i64[0], v25) )
          {
            a1[42] = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v25);
          }
          else if ( (unsigned __int8)sub_15D2710(a1[39].m128i_i64[0], v26) )
          {
            a1[42] = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v26);
          }
        }
      }
    }
    sub_1584740(v35);
    v7 = a1[15].m128i_i64[1];
    if ( v7 )
      *(_DWORD *)(v7 - 4) = 0;
    v8 = a1[38].m128i_i64[1];
    if ( v8 )
      *(_DWORD *)(v8 - 4) = 0;
    sub_1584740(&a1[16]);
    sub_1584740(&a1[26]);
    v42 = nullptr;
    v43 = v33;
    sub_D345E0(v35, (__int64)v3, (__int64)&v42, (__int64)&a1[36].m128i_i64[1]);
    v9 = v42;
    v37 = v43;
    *(_QWORD *)v36 = a1->m128i_i64[0];
    if ( *(_WORD *)(v5 + 4) || (v10 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr || *v10 || v10[1] != 8 )
      v11 = sub_15E1A70(v36[0]);
    else
      v11 = *(_QWORD *)(v5 + 32);
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    if ( *(_WORD *)(v11 + 4) || (v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) == nullptr || *v12 )
    {
      a1[41].m128i_i64[0] = v11;
      a1[41].m128i_i8[8] = 0;
      a1[42].m128i_i64[0] = 0;
    }
    else
    {
      v27 = v12[1];
      if ( v27 == 8 )
      {
        v31 = *(_QWORD *)(v11 + 32);
        a1[41].m128i_i8[8] = 1;
        a1[42].m128i_i64[0] = 0;
        a1[41].m128i_i64[0] = v31;
      }
      else
      {
        v28 = a1[39].m128i_i64[1];
        a1[41].m128i_i64[0] = v11;
        a1[41].m128i_i8[8] = 0;
        a1[42].m128i_i64[0] = 0;
        if ( *(_BYTE *)(v28 + 24) && v27 == 2 && *(_DWORD *)(v11 + 24) == 2 )
        {
          v29 = *(_QWORD *)(v11 + 40);
          v30 = a1[39].m128i_i64[0];
          v41 = *(_QWORD *)(v11 + 32);
          v40 = v29;
          if ( (unsigned __int8)sub_15D2710(v30, v41) )
          {
            a1[42] = (__m128i)_mm_loadh_ps((const double *)&v41);
          }
          else if ( (unsigned __int8)sub_15D2710(a1[39].m128i_i64[0], v40) )
          {
            a1[42] = (__m128i)_mm_loadh_ps((const double *)&v40);
          }
        }
      }
    }
    sub_1584740(v35);
    v13 = a1[15].m128i_i64[1];
    if ( v13 )
      *(_DWORD *)(v13 - 4) = 0;
    v14 = a1[38].m128i_i64[1];
    if ( v14 )
      *(_DWORD *)(v14 - 4) = 0;
    sub_1584740(&a1[16]);
    sub_1584740(&a1[26]);
    v44 = nullptr;
    v45 = v33;
    sub_D345E0(v35, (__int64)v3, (__int64)&v44, (__int64)&a1[36].m128i_i64[1]);
    v15 = v44;
    v34 = v45;
    if ( v44 == v9 )
    {
      if ( v3 == v9 )
      {
        v5 = (__int64)v9;
        v19 = *(_DWORD *)(v11 + 8) - 1;
        goto LABEL_37;
      }
      if ( v3 )
      {
        v18 = v3->m128i_i32[2]-- == 1;
        if ( v18 )
          sub_15D7BC0(v39, v3);
      }
      if ( v9 )
      {
        ++v9->m128i_i32[2];
        v18 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( !v18 )
        {
          v18 = v15->m128i_i32[2]-- == 1;
          if ( v18 )
          {
            v3 = v9;
            sub_15D7BC0(v34, v15);
            goto LABEL_43;
          }
LABEL_52:
          v3 = v9;
          goto LABEL_43;
        }
        sub_15D7BC0(*(_QWORD *)v36, v11);
        v18 = v15->m128i_i32[2]-- == 1;
        if ( !v18 )
          goto LABEL_52;
        v5 = (__int64)v9;
LABEL_57:
        sub_15D7BC0(v34, v15);
        goto LABEL_41;
      }
      v18 = (*(_DWORD *)(v11 + 8))-- == 1;
      v3 = nullptr;
      if ( v18 )
        sub_15D7BC0(*(_QWORD *)v36, v11);
    }
    else
    {
      v16 = *(__m128i **)(a1->m128i_i64[0] + 856);
      v17 = *(__m128i **)(a1->m128i_i64[0] + 864);
      if ( v16 == v9 )
      {
        if ( v44 == v17 )
        {
LABEL_32:
          ++*(_DWORD *)(v5 + 8);
        }
        else
        {
LABEL_31:
          v5 = sub_15E1BF0(a1->m128i_i64[0]);
          if ( v5 )
            goto LABEL_32;
        }
        if ( v3 )
        {
          v18 = v3->m128i_i32[2]-- == 1;
          if ( v18 )
            sub_15D7BC0(v39, v3);
        }
        v19 = *(_DWORD *)(v11 + 8) - 1;
        goto LABEL_37;
      }
      if ( v17 != v9 || v44 != v16 )
        goto LABEL_31;
      if ( (__m128i *)v11 == v3 )
      {
        v5 = v11;
        v19 = *(_DWORD *)(v11 + 8) - 1;
      }
      else
      {
        if ( v3 )
        {
          v18 = v3->m128i_i32[2]-- == 1;
          if ( v18 )
            sub_15D7BC0(v39, v3);
        }
        v19 = *(_DWORD *)(v11 + 8);
        v5 = v11;
      }
LABEL_37:
      *(_DWORD *)(v11 + 8) = v19;
      if ( !v19 )
        sub_15D7BC0(*(_QWORD *)v36, v11);
      v3 = (__m128i *)v5;
      if ( !v15 )
        goto LABEL_42;
      v18 = v15->m128i_i32[2]-- == 1;
      if ( v18 )
        goto LABEL_57;
LABEL_41:
      v3 = (__m128i *)v5;
LABEL_42:
      if ( v9 )
      {
LABEL_43:
        v18 = v9->m128i_i32[2]-- == 1;
        if ( v18 )
          sub_15D7BC0(v37, v9);
      }
    }
  }
  result = (__int64)a3;
  v21 = *a3;
  v22 = a3[1];
  if ( v3 )
  {
    result = v3->m128i_u32[2];
    v3->m128i_i32[2] = result + 1;
    if ( v21 )
    {
      v18 = v21->m128i_i32[2]-- == 1;
      if ( v18 )
        sub_15D7BC0(v22, v21);
      *a3 = v3;
      result = (unsigned int)(v3->m128i_i32[2] - 1);
      v3->m128i_i32[2] = result;
      if ( (_DWORD)result )
        return result;
    }
    else
    {
      *a3 = v3;
      v3->m128i_i32[2] = result;
      if ( (_DWORD)result )
        return result;
    }
    return sub_15D7BC0(v39, v3);
  }
  if ( v21 )
  {
    v18 = v21->m128i_i32[2]-- == 1;
    if ( v18 )
      sub_15D7BC0(v22, v21);
    result = (__int64)a3;
  }
  *(_QWORD *)result = 0;
  return result;
}

