unsigned __int64 __fastcall sub_3D2940(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm0
  int *v16; // rax
  unsigned __int64 v17; // rdx
  int *v18; // rdi
  int *v19; // rsi
  __int64 v20; // rcx
  _QWORD **v21; // rbx
  void *v22; // rdi
  unsigned __int64 v26; // [rsp+20h] [rbp-98h] BYREF
  __m128i v27; // [rsp+28h] [rbp-90h]
  __int64 v28; // [rsp+40h] [rbp-78h] BYREF
  int v29; // [rsp+48h] [rbp-70h] BYREF
  void *v30; // [rsp+50h] [rbp-68h]
  int *v31; // [rsp+58h] [rbp-60h]
  int *v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v5 = a4 - a3;
  v6 = a2 + 1;
  v34 = __readfsqword(0x28u);
  v7 = (_QWORD *)a2[2];
  v29 = 0;
  v30 = nullptr;
  v31 = &v29;
  v32 = &v29;
  v33 = 0;
  if ( v7 )
  {
    v8 = v5;
    v9 = (__int64)(a2 + 1);
    do
    {
      while ( 1 )
      {
        v10 = v7[2];
        v11 = v7[3];
        if ( v7[4] < a3 )
          break;
        v9 = (__int64)v7;
        v7 = (_QWORD *)v7[2];
        if ( !v10 )
          goto LABEL_6;
      }
      v7 = (_QWORD *)v7[3];
    }
    while ( v11 );
LABEL_6:
    if ( v6 == (_QWORD *)v9 )
    {
      v13 = v9;
    }
    else
    {
      v12 = a5 + a3;
      v13 = v9;
      do
      {
        v14 = *(_QWORD *)(v13 + 32);
        if ( v14 >= v12 )
          break;
        v15 = _mm_loadu_si128((const __m128i *)(v13 + 40));
        v16 = (int *)v30;
        v17 = v8 + v14;
        v18 = &v29;
        v26 = v17;
        v27 = v15;
        if ( !v30 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v19 = *((int **)v16 + 2);
            v20 = *((_QWORD *)v16 + 3);
            if ( *((_QWORD *)v16 + 4) < v17 )
              break;
            v18 = v16;
            v16 = *((int **)v16 + 2);
            if ( !v19 )
              goto LABEL_14;
          }
          v16 = *((int **)v16 + 3);
        }
        while ( v20 );
LABEL_14:
        if ( v18 == &v29 || v17 < *((_QWORD *)v18 + 4) )
        {
LABEL_16:
          v19 = v18;
          sub_3CD760(&v28, v18, (__int64)&v26);
        }
        v13 = std::_Rb_tree_increment(v13, v19, v17, v20);
      }
      while ( v6 != (_QWORD *)v13 );
    }
  }
  else
  {
    v9 = (__int64)(a2 + 1);
    v13 = (__int64)(a2 + 1);
  }
  if ( (unsigned __int8)sub_3CCDE0(v9, v13, (unsigned int)(a1 + 952 != (_QWORD)a2) + 161) )
    sub_3D2660((__int64)a2, v9, v13);
  sub_3CD220((_QWORD *)a1, a2, (__int64)&v28, (a1 + 952 != (_QWORD)a2) + 159);
  *(_BYTE *)(a1 + 1200) = 1;
  v21 = (_QWORD **)v30;
  if ( v30 )
  {
    do
    {
      sub_3BBD60(v21[3]);
      v22 = v21;
      v21 = (_QWORD **)v21[2];
      operator delete(v22, 0x38u);
    }
    while ( v21 );
  }
  return v34 - __readfsqword(0x28u);
}
