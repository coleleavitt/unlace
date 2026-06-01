__int64 __fastcall sub_40B960(_QWORD *a1, unsigned int a2, int a3, unsigned int a4, char a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  unsigned int v12; // eax
  int *v13; // r9
  unsigned int v14; // r13d
  _QWORD *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i si128; // xmm1
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  _QWORD **v23; // rbx
  void *v24; // rdi
  int *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  void *v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rbp
  __int64 v33; // [rsp+0h] [rbp-A8h]
  unsigned int v35; // [rsp+10h] [rbp-98h]
  int *v36; // [rsp+18h] [rbp-90h]
  int *v37; // [rsp+18h] [rbp-90h]
  __int64 v38; // [rsp+20h] [rbp-88h]
  __int64 v41; // [rsp+30h] [rbp-78h] BYREF
  int v42; // [rsp+38h] [rbp-70h] BYREF
  void *v43; // [rsp+40h] [rbp-68h]
  int *v44; // [rsp+48h] [rbp-60h]
  int *v45; // [rsp+50h] [rbp-58h]
  __int64 v46; // [rsp+58h] [rbp-50h]
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v33 = (__int64)(a1 + 296);
  v7 = (__int64)(a1 + 296);
  v8 = a1[297];
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        v10 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) < a2 )
          break;
        v7 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v9 )
          goto LABEL_6;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v10 );
LABEL_6:
    if ( v33 != v7 )
    {
      v11 = v7;
      v42 = 0;
      v43 = nullptr;
      v44 = &v42;
      v35 = a2 + a4;
      v45 = &v42;
      v46 = 0;
      do
      {
        v12 = *(_DWORD *)(v11 + 32);
        if ( v12 >= v35 )
          break;
        v13 = &v42;
        v14 = a3 - a2 + v12;
        v15 = v43;
        if ( !v43 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v16 = v15[2];
            v17 = v15[3];
            if ( *((_DWORD *)v15 + 8) < v14 )
              break;
            v13 = (int *)v15;
            v15 = (_QWORD *)v15[2];
            if ( !v16 )
              goto LABEL_14;
          }
          v15 = (_QWORD *)v15[3];
        }
        while ( v17 );
LABEL_14:
        if ( v13 == &v42 || v14 < v13[8] )
        {
LABEL_16:
          v38 = (__int64)v13;
          v18 = operator new(0x40u);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
          *(_DWORD *)(v18 + 32) = v14;
          *(_DWORD *)(v18 + 36) = 0;
          *(_DWORD *)(v18 + 56) = 0;
          *(__m128i *)(v18 + 40) = si128;
          v36 = (int *)v18;
          v20 = sub_406E00(&v41, v38, v14);
          v13 = (int *)v20;
          if ( v21 )
          {
            std::_Rb_tree_insert_and_rebalance();
            ++v46;
            v13 = v36;
          }
          else if ( v36 )
          {
            v26 = v36;
            v37 = (int *)v20;
            operator delete(v26, 0x40u);
            v13 = v37;
          }
        }
        *(__m128i *)(v13 + 9) = _mm_loadu_si128((const __m128i *)(v11 + 36));
        *(_QWORD *)(v13 + 13) = *(_QWORD *)(v11 + 52);
        v11 = std::_Rb_tree_increment();
      }
      while ( v33 != v11 );
      if ( (unsigned __int8)sub_40B6F0(v7, v11, 167) )
      {
        if ( a1[298] == v7 && v33 == v11 )
        {
          sub_4072A0((_QWORD *)a1[297]);
          a1[297] = 0;
          a1[300] = 0;
          a1[298] = v33;
          a1[299] = v33;
        }
        else if ( v7 != v11 )
        {
          do
          {
            v29 = std::_Rb_tree_increment();
            v30 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v30, 0x40u);
            --a1[300];
          }
          while ( v11 != v29 );
        }
      }
      v22 = (__int64)v44;
      if ( (unsigned __int8)sub_40B6F0((__int64)v44, (__int64)&v42, 168) && (int *)v22 != &v42 )
      {
        do
        {
          sub_406E00(a1 + 295, v33, *(_DWORD *)(v22 + 32));
          if ( v28 )
          {
            v27 = operator new(0x40u);
            *(__m128i *)(v27 + 32) = _mm_loadu_si128((const __m128i *)(v22 + 32));
            *(__m128i *)(v27 + 44) = _mm_loadu_si128((const __m128i *)(v22 + 44));
            std::_Rb_tree_insert_and_rebalance();
            ++a1[300];
          }
          v22 = std::_Rb_tree_increment();
        }
        while ( (int *)v22 != &v42 );
      }
      v23 = (_QWORD **)v43;
      if ( v43 )
      {
        do
        {
          sub_4072A0(v23[3]);
          v24 = v23;
          v23 = (_QWORD **)v23[2];
          operator delete(v24, 0x40u);
        }
        while ( v23 );
      }
    }
  }
  if ( a5 )
    return v47 - __readfsqword(0x28u);
  v31 = sub_3B90A0(a1, a2);
  v32 = (unsigned int)sub_3B90A0(a1, a3);
  sub_79B990((char *)a1 + 2356, *a1, v31, v32, a4, 65);
  sub_79B990((char *)a1 + 2356, *a1, v31, (unsigned int)v32, a4, 67);
  return sub_79B9E0((char *)a1 + 2356, *a1, v31, (unsigned int)v32, a4, 83);
}

