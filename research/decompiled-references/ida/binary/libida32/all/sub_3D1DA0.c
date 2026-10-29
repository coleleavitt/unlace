unsigned __int64 __fastcall sub_3D1DA0(__int64 a1, unsigned int a2, int a3, int a4)
{
  int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // r15
  unsigned int v13; // edx
  unsigned int v14; // edx
  _QWORD *v15; // rax
  int *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rbp
  _QWORD **v20; // rbx
  void *v21; // rdi
  __m128i v24; // [rsp+18h] [rbp-80h] BYREF
  int v25; // [rsp+28h] [rbp-70h] BYREF
  void *v26; // [rsp+30h] [rbp-68h]
  int *v27; // [rsp+38h] [rbp-60h]
  int *v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v4 = a3 - a2;
  v5 = a1 + 1488;
  v30 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1496);
  v25 = 0;
  v26 = nullptr;
  v27 = &v25;
  v28 = &v25;
  v29 = 0;
  if ( v6 )
  {
    v7 = v4;
    v8 = a1 + 1488;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v6 + 16);
        v10 = *(_QWORD *)(v6 + 24);
        if ( *(_DWORD *)(v6 + 32) < a2 )
          break;
        v8 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v9 )
          goto LABEL_6;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v10 );
LABEL_6:
    if ( v5 == v8 )
    {
      v12 = v8;
    }
    else
    {
      v11 = a4 + a2;
      v12 = v8;
      do
      {
        v13 = *(_DWORD *)(v12 + 32);
        if ( v13 >= v11 )
          break;
        v14 = v7 + v13;
        v15 = v26;
        v16 = &v25;
        v24.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(*(_DWORD *)(v12 + 36))).m128i_u64[0];
        if ( !v26 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v17 = v15[2];
            v18 = v15[3];
            if ( *((_DWORD *)v15 + 8) < v14 )
              break;
            v16 = (int *)v15;
            v15 = (_QWORD *)v15[2];
            if ( !v17 )
              goto LABEL_14;
          }
          v15 = (_QWORD *)v15[3];
        }
        while ( v18 );
LABEL_14:
        if ( v16 == &v25 || v14 < v16[8] )
LABEL_16:
          sub_39EC70(&v24.m128i_i64[1], (__int64)v16, &v24);
        v12 = std::_Rb_tree_increment();
      }
      while ( v5 != v12 );
    }
  }
  else
  {
    v8 = a1 + 1488;
    v12 = a1 + 1488;
  }
  v19 = (_QWORD *)(a1 + 1480);
  if ( (unsigned __int8)sub_3A0490(v8, v12, 9) )
    sub_3A07C0((__int64)v19, v8, v12);
  sub_3C7FA0(v19, (__int64)v27, (__int64)&v25, 0xAu);
  v20 = (_QWORD **)v26;
  if ( v26 )
  {
    do
    {
      sub_3B66F0(v20[3]);
      v21 = v20;
      v20 = (_QWORD **)v20[2];
      operator delete(v21, 0x28u);
    }
    while ( v20 );
  }
  return v30 - __readfsqword(0x28u);
}

