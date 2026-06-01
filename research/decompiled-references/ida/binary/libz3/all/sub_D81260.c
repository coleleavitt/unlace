_QWORD *__fastcall sub_D81260(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rax
  _QWORD *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // r8
  _QWORD *result; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r14
  const __m128i *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rbx
  _QWORD *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // [rsp+0h] [rbp-70h]
  int v31; // [rsp+8h] [rbp-68h]
  int v32; // [rsp+10h] [rbp-60h]
  int v33[2]; // [rsp+10h] [rbp-60h]
  int v34[2]; // [rsp+10h] [rbp-60h]
  __int64 v36; // [rsp+18h] [rbp-58h]
  int v37; // [rsp+20h] [rbp-50h]
  int v38[2]; // [rsp+28h] [rbp-48h] BYREF
  __m128i v39; // [rsp+30h] [rbp-40h] BYREF
  int v40; // [rsp+40h] [rbp-30h]
  void *v41; // [rsp+48h] [rbp-28h]

  v8 = *(unsigned int *)(a1 + 560);
  v9 = *(_QWORD **)(a1 + 552);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (_QWORD *)((char *)v9 + v8);
  v13 = 16LL * (v10 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    for ( result = &v9[(unsigned __int64)v13 / 8]; v12 != result; result += 2 )
    {
      v16 = *result;
      if ( *result > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v10 && a2 == v16 )
        {
LABEL_22:
          v26 = result[1];
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          v27 = (_QWORD *)*a3;
          if ( *a3 )
          {
            v28 = a3[1];
            v25 = (*((_DWORD *)v27 + 2))-- == 1;
            if ( v25 )
              result = (_QWORD *)sub_15D7BC0(v28, v27);
          }
          *a3 = v26;
          return result;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v14 != v9; v9 += 2 )
  {
    v29 = *v9;
    if ( *v9 > 1u )
    {
      if ( *(_DWORD *)(v29 + 12) == v10 && a2 == v29 )
      {
        result = v9;
        goto LABEL_22;
      }
    }
    else if ( !v29 )
    {
      break;
    }
  }
LABEL_8:
  v17 = a1;
  v18 = *(_QWORD *)(a1 + 8);
  v19 = (const __m128i *)sub_15DC610(
                           v18,
                           a2,
                           0,
                           0,
                           (int)v14,
                           a6,
                           v30,
                           v31,
                           v32,
                           a1,
                           v37,
                           v38[0],
                           v39.m128i_i32[0],
                           v39.m128i_i32[2],
                           v40,
                           v41);
  sub_D56BF0(v39.m128i_i64, v17, v19);
  v20 = v39.m128i_i64[0];
  if ( v39.m128i_i64[0] && !*(_DWORD *)(v39.m128i_i64[0] + 8) )
    sub_15D7BC0(v39.m128i_i64[1], v39.m128i_i64[0]);
  *(_QWORD *)v38 = v20;
  *(_QWORD *)v33 = *(_QWORD *)(v36 + 432);
  v21 = sub_15D2CD0(*(_QWORD *)v33, *(unsigned int *)(v36 + 448), 1, 0, 0);
  v22 = sub_15DCAD0(v33[0], (int)v38, v21);
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v23 = *a3;
  if ( *a3 )
  {
    v24 = a3[1];
    v25 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v25 )
    {
      *(_QWORD *)v34 = v22;
      sub_15D7BC0(v24, v23);
      v22 = *(_QWORD *)v34;
    }
  }
  *a3 = v22;
  v39.m128i_i64[0] = a2;
  v39.m128i_i64[1] = v22;
  sub_2FF2A0(v36 + 552, &v39);
  result = (_QWORD *)*a3;
  ++*(_DWORD *)(a2 + 8);
  if ( result )
    ++*((_DWORD *)result + 2);
  if ( v20 )
  {
    v25 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v25 )
      return (_QWORD *)sub_15D7BC0(v18, v20);
  }
  return result;
}

