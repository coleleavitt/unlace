unsigned __int64 __fastcall sub_3D8A80(_QWORD *a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  char v7; // r13
  _QWORD *v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *i; // rax
  __int64 v13; // rsi
  __m128i v15; // xmm0
  __m128i *v16; // rax
  __int16 v17; // r11
  __int32 v18; // r10d
  __m128i v19; // xmm0
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _BOOL8 v23; // rdi
  void *v24; // [rsp+10h] [rbp-A8h]
  __int64 *v25; // [rsp+10h] [rbp-A8h]
  __int64 v26; // [rsp+18h] [rbp-A0h]
  __m128i v27; // [rsp+20h] [rbp-98h] BYREF
  char v28; // [rsp+33h] [rbp-85h]
  __int32 v29; // [rsp+34h] [rbp-84h]
  int v30; // [rsp+38h] [rbp-80h]
  int v31; // [rsp+3Ch] [rbp-7Ch]
  unsigned __int64 v32; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-70h]
  __int64 v34; // [rsp+50h] [rbp-68h] BYREF
  __m128i si128; // [rsp+58h] [rbp-60h] BYREF
  __int64 v36; // [rsp+68h] [rbp-50h]
  void *v37; // [rsp+70h] [rbp-48h]
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v6 = (__int64)(a1 + 1);
  v31 = a4;
  v38 = __readfsqword(0x28u);
  v32 = a3;
  v33 = a3 + a2;
  if ( a3 < v33 )
  {
    v28 = 1;
    v7 = a4;
    v8 = a1 + 1;
    while ( 1 )
    {
      v34 = 0;
      v36 = 0;
      v37 = nullptr;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v4 = unpack_dq(&v32);
      sub_41C0A0(&v34, &v32);
      if ( !v7 )
        break;
      v15 = _mm_loadu_si128(&si128);
      v30 = (unsigned __int16)v34;
      v29 = HIDWORD(v34);
      v26 = v36;
      v24 = v37;
      v27 = v15;
      v16 = (__m128i *)operator new(0x50u);
      v17 = v30;
      v18 = v29;
      v16[2].m128i_i64[0] = v4;
      v16[4].m128i_i64[1] = (__int64)v24;
      v19 = _mm_load_si128(&v27);
      v16[4].m128i_i64[0] = v26;
      v16[2].m128i_i16[4] = v17;
      v16[2].m128i_i32[3] = v18;
      v16[3] = v19;
      v25 = (__int64 *)v16;
      v21 = sub_3B9180(a1, v8, v4, v20);
      v8 = v21;
      if ( v22 )
      {
        v23 = v21 || v6 == v22 || v4 < *(_QWORD *)(v22 + 32);
        std::_Rb_tree_insert_and_rebalance(v23, v25, v22, v6);
        ++a1[5];
        v8 = v25;
        if ( v32 >= v33 )
          goto LABEL_15;
      }
      else if ( v25 )
      {
        operator delete(v25, 0x50u);
        if ( v32 >= v33 )
          goto LABEL_15;
      }
      else
      {
LABEL_14:
        if ( v32 >= v33 )
          goto LABEL_15;
      }
    }
    if ( v28 )
    {
      v9 = (_QWORD *)a1[2];
      v8 = (_QWORD *)v6;
      if ( v9 )
      {
        do
        {
          while ( 1 )
          {
            v10 = v9[2];
            v11 = v9[3];
            if ( v9[4] < v4 )
              break;
            v8 = v9;
            v9 = (_QWORD *)v9[2];
            if ( !v10 )
              goto LABEL_10;
          }
          v9 = (_QWORD *)v9[3];
        }
        while ( v11 );
LABEL_10:
        if ( (_QWORD *)v6 != v8 && v4 < v8[4] )
          v8 = (_QWORD *)v6;
      }
      v28 = 0;
    }
    goto LABEL_14;
  }
  v8 = a1 + 1;
LABEL_15:
  if ( !(_BYTE)v31 )
  {
    for ( i = (_QWORD *)a1[2]; i; i = (_QWORD *)i[3] )
    {
      while ( 1 )
      {
        v13 = i[2];
        if ( v4 >= i[4] )
          break;
        v6 = (__int64)i;
        i = (_QWORD *)i[2];
        if ( !v13 )
          goto LABEL_20;
      }
    }
LABEL_20:
    sub_3D8520((__int64)a1, (__int64)v8, v6);
  }
  return v38 - __readfsqword(0x28u);
}
