unsigned __int64 __fastcall sub_3CCF40(__int64 a1, _QWORD *a2, unsigned int a3, int a4, int a5)
{
  int v5; // ecx
  unsigned int *v6; // r12
  __int64 v7; // rax
  int v8; // r13d
  unsigned int *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // ebp
  unsigned int *v13; // r15
  unsigned int v14; // edx
  __m128i v15; // xmm1
  unsigned int v16; // edx
  int *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  _QWORD **v21; // rbx
  void *v22; // rdi
  unsigned __int64 v26; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  int v29; // [rsp+38h] [rbp-70h] BYREF
  void *v30; // [rsp+40h] [rbp-68h]
  int *v31; // [rsp+48h] [rbp-60h]
  int *v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v5 = a4 - a3;
  v6 = (unsigned int *)(a2 + 1);
  v34 = __readfsqword(0x28u);
  v7 = a2[2];
  v29 = 0;
  v30 = nullptr;
  v31 = &v29;
  v32 = &v29;
  v33 = 0;
  if ( v7 )
  {
    v8 = v5;
    v9 = (unsigned int *)(a2 + 1);
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        v11 = *(_QWORD *)(v7 + 24);
        if ( *(_DWORD *)(v7 + 32) < a3 )
          break;
        v9 = (unsigned int *)v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v10 )
          goto LABEL_6;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v11 );
LABEL_6:
    if ( v6 == v9 )
    {
      v13 = v9;
    }
    else
    {
      v12 = a5 + a3;
      v13 = v9;
      do
      {
        v14 = v13[8];
        if ( v14 >= v12 )
          break;
        v15 = _mm_cvtsi32_si128(v13[9]);
        v16 = v8 + v14;
        v17 = &v29;
        v27 = v13[10];
        v18 = v30;
        v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), v15).m128i_u64[0];
        if ( !v30 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v19 = v18[2];
            v20 = v18[3];
            if ( *((_DWORD *)v18 + 8) < v16 )
              break;
            v17 = (int *)v18;
            v18 = (_QWORD *)v18[2];
            if ( !v19 )
              goto LABEL_14;
          }
          v18 = (_QWORD *)v18[3];
        }
        while ( v20 );
LABEL_14:
        if ( v17 == &v29 || v16 < v17[8] )
LABEL_16:
          sub_3C8070(&v28, (__int64)v17, (__int64)&v26);
        v13 = (unsigned int *)std::_Rb_tree_increment();
      }
      while ( v6 != v13 );
    }
  }
  else
  {
    v9 = (unsigned int *)(a2 + 1);
    v13 = (unsigned int *)(a2 + 1);
  }
  if ( (unsigned __int8)sub_3C7A50(v9, v13, (unsigned int)(a1 + 944 != (_QWORD)a2) + 161) )
    sub_3CCC70((__int64)a2, (__int64)v9, (__int64)v13);
  sub_3C7E80(a1, a2, (__int64)&v28, (a1 + 944 != (_QWORD)a2) + 159);
  *(_BYTE *)(a1 + 1192) = 1;
  v21 = (_QWORD **)v30;
  if ( v30 )
  {
    do
    {
      sub_3B68C0(v21[3]);
      v22 = v21;
      v21 = (_QWORD **)v21[2];
      operator delete(v22, 0x30u);
    }
    while ( v21 );
  }
  return v34 - __readfsqword(0x28u);
}

