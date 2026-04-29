__int64 __fastcall sub_5C470(__int64 a1, unsigned int a2, _QWORD *a3, double a4, double a5, double a6)
{
  __int64 v7; // rax
  void *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r12
  unsigned __int32 v13; // r14d
  __int64 v14; // r15
  unsigned __int32 v15; // ebp
  unsigned __int32 v16; // edx
  __int64 v17; // rax
  __m128i v18; // xmm0
  void *v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  _BOOL8 v26; // rdi
  unsigned int v27; // ebx
  void (*v28)(void); // rax
  __int64 *v30; // rbx
  __int64 v31; // rsi
  __m128i si128; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-B8h]
  unsigned int v36; // [rsp+8h] [rbp-B0h]
  void *v37; // [rsp+28h] [rbp-90h] BYREF
  __m128i v38; // [rsp+30h] [rbp-88h] BYREF
  __m128i v39; // [rsp+40h] [rbp-78h] BYREF
  __m128i v40; // [rsp+58h] [rbp-60h] BYREF
  __m128i v41; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 608);
  v42 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(&v37, v7, a2);
  v9 = v37;
  if ( v37 )
  {
    v36 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v37 + 24LL))(v37);
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v37 + 32LL))(v37);
      v9 = v37;
      if ( v10 >= v36 )
      {
        v27 = 1;
        goto LABEL_26;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(void *, __m128i *, __int64))(*(_QWORD *)v37 + 48LL))(v37, &v38, 32) )
        break;
      v11 = a3[2];
      v12 = a3 + 1;
      v13 = v38.m128i_i32[0];
      v14 = (__int64)(a3 + 1);
      v40 = _mm_load_si128(&v38);
      v15 = v38.m128i_u32[1];
      v41 = _mm_load_si128(&v39);
      if ( v11 )
      {
        do
        {
          while ( 1 )
          {
            v16 = *(_DWORD *)(v11 + 32);
            if ( v16 < v38.m128i_i32[0] || v38.m128i_i32[0] == v16 && *(_DWORD *)(v11 + 36) < v38.m128i_i32[1] )
              break;
            v14 = v11;
            v11 = *(_QWORD *)(v11 + 16);
            if ( !v11 )
              goto LABEL_12;
          }
          v11 = *(_QWORD *)(v11 + 24);
        }
        while ( v11 );
LABEL_12:
        if ( v12 != (_QWORD *)v14
          && v38.m128i_i32[0] >= *(_DWORD *)(v14 + 32)
          && (v38.m128i_i32[0] != *(_DWORD *)(v14 + 32) || v38.m128i_i32[1] >= *(_DWORD *)(v14 + 36)) )
        {
          continue;
        }
      }
      v35 = v38.m128i_i64[0];
      v17 = operator new(0x48u);
      v18 = _mm_loadu_si128(&v40);
      v19 = (void *)v17;
      *(_QWORD *)(v17 + 32) = v35;
      *(__m128i *)(v17 + 40) = v18;
      v20 = _mm_loadu_si128(&v41);
      *(__m128i *)(v17 + 56) = v20;
      v24 = sub_5C320(a3, v14, (unsigned int *)(v17 + 32), v21, v22, v23, *(double *)v20.m128i_i64, a5, a6);
      if ( v25 )
      {
        v26 = 1;
        if ( !v24 && v12 != (_QWORD *)v25 && v13 >= *(_DWORD *)(v25 + 32) )
        {
          v26 = 0;
          if ( v13 == *(_DWORD *)(v25 + 32) )
            v26 = v15 < *(_DWORD *)(v25 + 36);
        }
        std::_Rb_tree_insert_and_rebalance(v26, v19, v25, a3 + 1, *(double *)v20.m128i_i64, a5, a6);
        ++a3[5];
      }
      else if ( v19 )
      {
        operator delete(v19, 0x48u);
      }
    }
    v9 = v37;
    v27 = 0;
  }
  else
  {
    v30 = *(__int64 **)(a1 + 600);
    v31 = *v30;
    if ( (unsigned __int64)v30[2] <= 0x19 )
    {
      v34 = qvector_reserve(*(_QWORD *)(a1 + 600), v31, 26, 1);
      *v30 = v34;
      v31 = v34;
      v9 = v37;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_94220);
    v30[1] = 26;
    *(__m128i *)v31 = si128;
    *(__m128i *)(v31 + 9) = _mm_load_si128((const __m128i *)&xmmword_94230);
    v33 = *v30;
    v27 = 0;
    *(_BYTE *)(v33 + 25) = 0;
  }
LABEL_26:
  if ( v9 )
  {
    v28 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
    if ( (char *)v28 == (char *)sub_54910 )
      operator delete(v9, 0x40u);
    else
      v28();
  }
  return v27;
}
