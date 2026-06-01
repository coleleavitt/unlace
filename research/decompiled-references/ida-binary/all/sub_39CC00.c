__int64 __fastcall sub_39CC00(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // r10d
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  _QWORD *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __m128 v10; // xmm0
  __m128i v11; // xmm0
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rbx
  _BOOL4 v20; // ebp
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-D8h] BYREF
  int v23; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD *v24; // [rsp+10h] [rbp-C8h]
  int *v25; // [rsp+18h] [rbp-C0h] BYREF
  int *v26; // [rsp+20h] [rbp-B8h]
  __int64 v27; // [rsp+28h] [rbp-B0h]
  __m128i v28; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-98h]
  unsigned __int64 v30; // [rsp+50h] [rbp-88h] BYREF
  int v31; // [rsp+60h] [rbp-78h] BYREF
  __m128 v32; // [rsp+68h] [rbp-70h]
  int *v33; // [rsp+78h] [rbp-60h]
  __int64 v34; // [rsp+80h] [rbp-58h]
  __m128i v35; // [rsp+88h] [rbp-50h]
  __int64 v36; // [rsp+98h] [rbp-40h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_39AE20(a1, a2) )
  {
    return 0;
  }
  else if ( !(unsigned __int8)sub_39AE20(a1, a3) )
  {
    v5 = *(_QWORD **)(a1 + 728);
    v6 = (_QWORD *)(a1 + 720);
    if ( !v5 )
      goto LABEL_10;
    v7 = (_QWORD *)(a1 + 720);
    do
    {
      while ( 1 )
      {
        v8 = v5[2];
        v9 = v5[3];
        if ( v5[4] < a3 )
          break;
        v7 = v5;
        v5 = (_QWORD *)v5[2];
        if ( !v8 )
          goto LABEL_8;
      }
      v5 = (_QWORD *)v5[3];
    }
    while ( v9 );
LABEL_8:
    if ( v6 != v7 && a3 >= v7[4] )
    {
      v17 = sub_398580((__int64)(v7 + 5), a2);
      v19 = v18;
      if ( v18 )
      {
        v20 = 1;
        if ( !v17 && v18 != v7 + 6 )
          v20 = a2 < v18[4];
        v21 = operator new(0x30u);
        *(_QWORD *)(v21 + 32) = a2;
        *(_DWORD *)(v21 + 40) = -1;
        std::_Rb_tree_insert_and_rebalance(v20, v21, v19, v7 + 6);
        ++v7[10];
      }
      return 1;
    }
    else
    {
LABEL_10:
      sub_399440((__int64)&v22, a2, a3);
      v30 = a3;
      if ( v24 )
      {
        v10 = _mm_loadh_ps((const double *)&v25);
        v31 = v23;
        v32 = v10;
        v33 = v26;
        v24[1] = &v31;
        v24 = nullptr;
        v34 = v27;
        v25 = &v23;
        v26 = &v23;
        v27 = 0;
      }
      else
      {
        v31 = 0;
        v32.m128_u64[0] = 0;
        v32.m128_u64[1] = (unsigned __int64)&v31;
        v33 = &v31;
        v34 = 0;
      }
      v11 = _mm_load_si128(&v28);
      v12 = (_QWORD *)(a1 + 720);
      v36 = v29;
      v13 = *(_QWORD **)(a1 + 728);
      v35 = v11;
      if ( !v13 )
        goto LABEL_19;
      do
      {
        while ( 1 )
        {
          v14 = v13[2];
          v15 = v13[3];
          if ( v13[4] < a3 )
            break;
          v12 = v13;
          v13 = (_QWORD *)v13[2];
          if ( !v14 )
            goto LABEL_17;
        }
        v13 = (_QWORD *)v13[3];
      }
      while ( v15 );
LABEL_17:
      if ( v12 == v6 || a3 < v12[4] )
LABEL_19:
        sub_39C9D0((_QWORD *)(a1 + 712), v12, (__int64)&v30);
      sub_398830(v32.m128_u64[0]);
      sub_398830(v24);
      return 1;
    }
  }
  return v4;
}
