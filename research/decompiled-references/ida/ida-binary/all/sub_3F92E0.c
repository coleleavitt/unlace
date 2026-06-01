void __fastcall sub_3F92E0(__int64 a1, unsigned __int64 a2)
{
  void *v2; // r12
  const __m128i *v3; // rbx
  const __m128i *v4; // r15
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (*v9)(); // rax
  __int64 v10; // rsi
  void *v11; // [rsp+10h] [rbp-B8h] BYREF
  const __m128i *v12; // [rsp+18h] [rbp-B0h]
  __int64 v13; // [rsp+20h] [rbp-A8h]
  __m128i v14; // [rsp+30h] [rbp-98h] BYREF
  __int64 v15; // [rsp+40h] [rbp-88h]
  __m128i v16; // [rsp+50h] [rbp-78h] BYREF
  __int64 v17; // [rsp+60h] [rbp-68h]
  void *ptr[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v19; // [rsp+80h] [rbp-48h]
  unsigned __int64 v20; // [rsp+88h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  sub_3F9040((__int64)&v11, a1, a2);
  v2 = v11;
  v3 = v12;
  v4 = (const __m128i *)v11;
  if ( v12 != v11 )
  {
    do
    {
      v5 = v4->m128i_u32[0];
      if ( (int)v5 >= 0 )
      {
        v6 = v4->m128i_i32[1];
        if ( v6 >= 0 )
        {
          v7 = v4[1].m128i_i64[0];
          if ( v7 )
          {
            if ( v6 )
            {
              (*(void (__fastcall **)(__m128i *, __int64, __int64, _QWORD, const __m128i *))(*(_QWORD *)v7 + 112LL))(
                &v14,
                v7,
                v5,
                0,
                v4);
            }
            else
            {
              v14 = _mm_loadu_si128(v4);
              v15 = v4[1].m128i_i64[0];
            }
            v8 = 3;
            v9 = *(__int64 (**)())(*(_QWORD *)a1 + 128LL);
            if ( v9 != sub_3EDE50 )
              v8 = ((unsigned int (__fastcall *)(__int64, const __m128i *, __int64, __int64))v9)(a1, v4, v5, 3) - 1;
            v10 = v4[1].m128i_i64[0];
            if ( v10 )
            {
              if ( (_DWORD)v8 == v4->m128i_i32[1] )
              {
                v16 = _mm_loadu_si128(v4);
                v17 = v4[1].m128i_i64[0];
              }
              else
              {
                (*(void (__fastcall **)(__m128i *, __int64, _QWORD, __int64, const __m128i *))(*(_QWORD *)v10 + 112LL))(
                  &v16,
                  v10,
                  v4->m128i_u32[0],
                  v8,
                  v4);
              }
            }
            else
            {
              v16 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
              v17 = 0;
            }
            *(_OWORD *)ptr = 0;
            v19 = 0;
            QT::QAbstractItemModel::dataChanged(a1, &v14, &v16, ptr);
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
          }
        }
      }
      v4 = (const __m128i *)((char *)v4 + 24);
    }
    while ( v3 != v4 );
  }
  if ( v2 )
    operator delete(v2, v13 - (_QWORD)v2);
}
