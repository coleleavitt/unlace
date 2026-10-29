__int64 __fastcall sub_46CF90(__int64 a1, int a2, int a3, unsigned int a4, int *a5)
{
  unsigned int v10; // eax
  __int64 v11; // rdi
  void ***v12; // rdx
  void **v13; // rax
  int v14; // edx
  unsigned int v15; // ecx
  const __m128i ***v16; // rdi
  const __m128i *v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // r13
  const __m128i *v20; // r12
  __int64 v21; // rdi
  _QWORD *v22; // rbx
  unsigned __int64 v23; // r14
  __int64 v24; // rsi
  __int64 (__fastcall ***v25)(_QWORD, __int64, _QWORD, unsigned __int64); // rdi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+10h] [rbp-88h]
  unsigned int v31; // [rsp+20h] [rbp-78h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  __m128i v34; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v35[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v15 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v16 = *((const __m128i ****)a5 + 1);
      *((_QWORD *)a5 + 1) = v16 + 1;
    }
    else
    {
      v16 = (const __m128i ***)(*((_QWORD *)a5 + 2) + v15);
      *a5 = v15 + 8;
    }
    v17 = **v16;
    v18 = (__int64)(*v16)[1];
    if ( v17 != &v17[v18] )
    {
      v19 = (int)a4 + 4LL;
      v20 = &v17[v18];
      v31 = a4;
      v30 = a3 + 6LL;
      v33 = (int)a4;
      do
      {
        v21 = *(int *)(*(_QWORD *)(a1 + 8) + 4 * v19);
        v34 = _mm_loadu_si128(v17);
        v22 = *(_QWORD **)(switch_dbctx(v21) + 1672);
        v23 = sub_46CB10(v22, v34.m128i_u64[0], 0, 0xFFFFFFFFFFFFFFFFLL);
        if ( v23 != -1 )
        {
          v24 = *(_QWORD *)(a1 + 8);
          v25 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, unsigned __int64))(v24 + 56);
          if ( v25 && v23 != (**v25)(v25, v24, v31, v23) )
            v23 = sub_4695A0(*(_QWORD *)(a1 + 8), v31, v23);
          v26 = sub_46CB10(v22, v34.m128i_u64[1], 2u, 0xFFFFFFFFFFFFFFFFLL);
          if ( v26 != -1 )
          {
            v29 = v26;
            v27 = v26 + sub_46CF20(v22, v26, 1);
            if ( v34.m128i_i64[1] < v27 )
              v27 = v29;
            if ( v23 < v27 )
            {
              v34.m128i_i64[1] = v27;
              v35[1] = v27;
              v34.m128i_i64[0] = v23;
              v28 = *(_QWORD *)(a1 + 8 * v30 + 8);
              v35[0] = v23;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v28 + 104LL))(
                v28,
                *(_QWORD *)(a1 + 8 * v33 + 56),
                v35);
              sub_47BE10(*(_QWORD *)(a1 + 8), &v34, (unsigned int)a3, v31);
            }
          }
        }
        ++v17;
      }
      while ( v20 != v17 );
    }
    return v36 - __readfsqword(0x28u);
  }
  if ( a2 != 3 )
    return v36 - __readfsqword(0x28u);
  v10 = *a5;
  v11 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)*a5 > 0x2F )
  {
    v12 = *((void ****)a5 + 1);
    *((_QWORD *)a5 + 1) = v12 + 1;
  }
  else
  {
    v12 = (void ***)(*((_QWORD *)a5 + 2) + v10);
    *a5 = v10 + 8;
  }
  v13 = *v12;
  v14 = 1;
  if ( a3 )
    v14 = -(a3 != 1);
  return sub_46B610(v11, a3, v14, *v13);
}
