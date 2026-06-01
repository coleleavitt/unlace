__int64 __fastcall sub_C03F90(__int64 a1, __int64 a2, double a3)
{
  unsigned int *v4; // rbp
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  unsigned int *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r15
  __m128 v19; // xmm0
  unsigned int *v20; // rax
  unsigned int *v21; // r13
  unsigned int *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // [rsp+0h] [rbp-78h]
  int v27[2]; // [rsp+8h] [rbp-70h]
  int v28[2]; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h] BYREF
  __int64 v30; // [rsp+18h] [rbp-60h]
  unsigned int *v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h]
  __m128 v33; // [rsp+30h] [rbp-48h]
  int v34; // [rsp+40h] [rbp-38h]
  void *v35; // [rsp+48h] [rbp-30h]

  v4 = *(unsigned int **)(a1 + 8);
  result = sub_BB1010(a2);
  if ( (_BYTE)result )
  {
    result = sub_BB0A60(a2 + 136, v4);
    if ( (_BYTE)result )
    {
      result = sub_BFD010(a2, v4, a3);
      if ( !(_BYTE)result )
      {
        *(_QWORD *)v27 = *(_QWORD *)(a2 + 24);
        v9 = sub_15D1F10(v4);
        v10 = *(_QWORD *)(a2 + 1736);
        v11 = sub_15D2D60(v10, *(_DWORD *)(a2 + 1744), 1, 0, 0, 0, 0, v9);
        v14 = sub_15DC610(
                v10,
                v11,
                0,
                0,
                v12,
                v13,
                v26,
                v27[0],
                v29,
                v30,
                (int)v31,
                v32,
                v33.m128_i32[0],
                v33.m128_i32[2],
                v34,
                v35);
        v15 = (unsigned int *)v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v16 = *(_QWORD *)(a2 + 24);
        v29 = 0;
        v30 = v16;
        v31 = nullptr;
        v32 = v16;
        sub_14078B0(a2 + 1848, v4, &v29, &v31);
        v17 = *(_QWORD *)(a2 + 1736);
        v18 = *(_QWORD *)(a2 + 24);
        v19 = _mm_loadh_ps((const double *)&v31);
        v33 = v19;
        v20 = (unsigned int *)sub_15E1AF0(v17);
        v21 = v20;
        if ( v20 )
        {
          ++v20[2];
          result = sub_BC4460((_QWORD *)a2, v4, v20, *(double *)v19.m128_u64);
          if ( (_BYTE)result )
            result = sub_BF7830(a2, v31, v15);
          v8 = v21[2]-- == 1;
          if ( v8 )
            result = sub_15D7BC0(v18, v21);
        }
        else
        {
          result = sub_BC4460((_QWORD *)a2, v4, nullptr, *(double *)v19.m128_u64);
          if ( (_BYTE)result )
            result = sub_BF7830(a2, v31, v15);
        }
        v22 = v31;
        if ( v31 )
        {
          v23 = v32;
          v8 = v31[2]-- == 1;
          if ( v8 )
            result = sub_15D7BC0(v23, v22);
        }
        v24 = v29;
        if ( v29 )
        {
          v25 = v30;
          v8 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v8 )
            result = sub_15D7BC0(v25, v24);
        }
        if ( v15 )
        {
          v8 = v15[2]-- == 1;
          if ( v8 )
            result = sub_15D7BC0(*(_QWORD *)v28, v15);
        }
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v7, v6);
  }
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}

