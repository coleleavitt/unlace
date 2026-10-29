unsigned __int64 __fastcall sub_3D2D60(_QWORD *a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  char v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 i; // rax
  __int64 v12; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rax
  int v16; // edx
  __int16 v17; // si
  __m128i v18; // xmm0
  __int64 v19; // rdx
  char v20; // [rsp+7h] [rbp-91h]
  __m128i v21; // [rsp+10h] [rbp-88h] BYREF
  void *v22; // [rsp+20h] [rbp-78h]
  int v23; // [rsp+28h] [rbp-70h]
  int v24; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-60h]
  _QWORD v27[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+50h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v5 = (__int64)(a1 + 1);
  v24 = a4;
  v29 = __readfsqword(0x28u);
  v25 = a3;
  v26 = a3 + a2;
  if ( a3 < v26 )
  {
    v20 = 1;
    v6 = a4;
    v7 = (__int64)(a1 + 1);
    while ( 1 )
    {
      v27[0] = 0;
      v27[1] = 0xFFFFFFFF00000000LL;
      v28 = 0;
      v4 = unpack_dd(&v25);
      sub_408E00(v27, &v25);
      if ( !v6 )
        break;
      v14 = _mm_loadu_si128((const __m128i *)((char *)v27 + 4));
      v23 = LOWORD(v27[0]);
      LODWORD(v22) = HIDWORD(v28);
      v21 = v14;
      v15 = operator new(0x40u);
      v16 = (int)v22;
      v17 = v23;
      v18 = _mm_load_si128(&v21);
      *(_DWORD *)(v15 + 32) = v4;
      *(_WORD *)(v15 + 36) = v17;
      *(_DWORD *)(v15 + 56) = v16;
      *(__m128i *)(v15 + 40) = v18;
      v22 = (void *)v15;
      v7 = sub_3B49C0(a1, v7, v4);
      if ( v19 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++a1[5];
        v7 = (__int64)v22;
        if ( v25 >= v26 )
          goto LABEL_15;
      }
      else if ( v22 )
      {
        operator delete(v22, 0x40u);
        if ( v25 >= v26 )
          goto LABEL_15;
      }
      else
      {
LABEL_14:
        if ( v25 >= v26 )
          goto LABEL_15;
      }
    }
    if ( v20 )
    {
      v8 = a1[2];
      v7 = (__int64)(a1 + 1);
      if ( v8 )
      {
        do
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v8 + 16);
            v10 = *(_QWORD *)(v8 + 24);
            if ( *(_DWORD *)(v8 + 32) < v4 )
              break;
            v7 = v8;
            v8 = *(_QWORD *)(v8 + 16);
            if ( !v9 )
              goto LABEL_10;
          }
          v8 = *(_QWORD *)(v8 + 24);
        }
        while ( v10 );
LABEL_10:
        if ( v5 != v7 && v4 < *(_DWORD *)(v7 + 32) )
          v7 = (__int64)(a1 + 1);
      }
      v20 = 0;
    }
    goto LABEL_14;
  }
  v7 = (__int64)(a1 + 1);
LABEL_15:
  if ( !(_BYTE)v24 )
  {
    for ( i = a1[2]; i; i = *(_QWORD *)(i + 24) )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(i + 16);
        if ( v4 >= *(_DWORD *)(i + 32) )
          break;
        v5 = i;
        i = *(_QWORD *)(i + 16);
        if ( !v12 )
          goto LABEL_20;
      }
    }
LABEL_20:
    sub_3D2820((__int64)a1, v7, v5);
  }
  return v29 - __readfsqword(0x28u);
}

