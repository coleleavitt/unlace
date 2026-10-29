__int64 __fastcall sub_BFD230(__int64 a1, unsigned int *a2, double a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  unsigned int *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r15
  __m128 v16; // xmm0
  unsigned int *v17; // rax
  unsigned int *v18; // r13
  bool v19; // zf
  unsigned int *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // [rsp+0h] [rbp-78h]
  int v25[2]; // [rsp+8h] [rbp-70h]
  int v26[2]; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+10h] [rbp-68h] BYREF
  __int64 v28; // [rsp+18h] [rbp-60h]
  unsigned int *v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  __m128 v31; // [rsp+30h] [rbp-48h]
  int v32; // [rsp+40h] [rbp-38h]
  void *v33; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int8)sub_BB1010(a1) && (v4 = sub_BB0A60(a1 + 136, a2), (_BYTE)v4) )
  {
    if ( !(unsigned __int8)sub_BFD010(a1, a2, a3) )
    {
      *(_QWORD *)v25 = *(_QWORD *)(a1 + 24);
      v6 = sub_15D1F10(a2);
      v7 = *(_QWORD *)(a1 + 1736);
      v8 = sub_15D2D60(v7, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v6);
      v11 = sub_15DC610(
              v7,
              v8,
              0,
              0,
              v9,
              v10,
              v24,
              v25[0],
              v27,
              v28,
              (int)v29,
              v30,
              v31.m128_i32[0],
              v31.m128_i32[2],
              v32,
              v33);
      v12 = (unsigned int *)v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      v13 = *(_QWORD *)(a1 + 24);
      v27 = 0;
      v28 = v13;
      v29 = nullptr;
      v30 = v13;
      sub_14078B0(a1 + 1848, a2, &v27, &v29);
      v14 = *(_QWORD *)(a1 + 1736);
      v15 = *(_QWORD *)(a1 + 24);
      v16 = _mm_loadh_ps((const double *)&v29);
      v31 = v16;
      v17 = (unsigned int *)sub_15E1AF0(v14);
      v18 = v17;
      if ( v17 )
      {
        ++v17[2];
        if ( (unsigned __int8)sub_BC4460((_QWORD *)a1, a2, v17, *(double *)v16.m128_u64) )
          sub_BF7830(a1, v29, v12);
        v19 = v18[2]-- == 1;
        if ( v19 )
          sub_15D7BC0(v15, v18);
      }
      else if ( (unsigned __int8)sub_BC4460((_QWORD *)a1, a2, nullptr, *(double *)v16.m128_u64) )
      {
        sub_BF7830(a1, v29, v12);
      }
      v20 = v29;
      if ( v29 )
      {
        v21 = v30;
        v19 = v29[2]-- == 1;
        if ( v19 )
          sub_15D7BC0(v21, v20);
      }
      v22 = v27;
      if ( v27 )
      {
        v23 = v28;
        v19 = (*(_DWORD *)(v27 + 8))-- == 1;
        if ( v19 )
          sub_15D7BC0(v23, v22);
      }
      if ( v12 )
      {
        v19 = v12[2]-- == 1;
        if ( v19 )
          sub_15D7BC0(*(_QWORD *)v26, v12);
      }
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

