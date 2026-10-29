unsigned __int64 __fastcall sub_1DC380(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  const __m128i *v6; // r14
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 v13; // r12
  size_t v14; // r8
  __int64 v15; // r12
  size_t v16; // r8
  __int64 v18; // rax
  const char *v19; // r9
  void *v20; // rax
  const char *v21; // r9
  void *v22; // rax
  char v23; // [rsp+0h] [rbp-88h]
  __int64 *v24; // [rsp+0h] [rbp-88h]
  size_t v25; // [rsp+0h] [rbp-88h]
  size_t v26; // [rsp+0h] [rbp-88h]
  const char *v27; // [rsp+8h] [rbp-80h]
  const char *v28; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v30; // [rsp+18h] [rbp-70h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v2 = a2[1];
  if ( (int)v2 > 0 )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(v2 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v6 = *(const __m128i **)(*a2 + v4);
        if ( v6->m128i_i32[2] )
        {
          QT::QString::fromUtf8(&src, 0, (const char *)&unk_5C2F25);
          v23 = sub_1CF7D0(v6, (const QT::QString *)&src);
          sub_16D970(&src);
          if ( v23 )
          {
            src = nullptr;
            v31 = 0;
            v32 = nullptr;
            v30 = 0;
            v33 = 0;
            v7 = sub_1D8C80((size_t)&src, (__int64)v6);
            v8 = a1[1];
            v9 = *a1;
            v24 = v7;
            if ( a1[2] < (unsigned __int64)(v8 + 1) )
            {
              v18 = qvector_reserve(a1, v9, v8 + 1, 64);
              *a1 = v18;
              v8 = a1[1];
              v9 = v18;
            }
            v10 = v9 + (v8 << 6);
            *(_OWORD *)v10 = 0;
            *(_OWORD *)(v10 + 16) = 0;
            *(_OWORD *)(v10 + 32) = 0;
            *(_OWORD *)(v10 + 48) = 0;
            ++a1[1];
            v11 = operator new(0x18u);
            *(_QWORD *)v11 = 0;
            v12 = (const char *)v24;
            *(_QWORD *)(v11 + 8) = 0;
            *(_BYTE *)(v11 + 16) = 0;
            *(_QWORD *)v10 = v11;
            sub_4B74C0(v11, v24);
            if ( (void **)(v10 + 8) != &src )
            {
              v13 = v30;
              if ( (_QWORD)v30 && (v14 = v30 - 1, (_QWORD)v30 != 1) )
              {
                v19 = (const char *)src;
                v20 = *(void **)(v10 + 8);
                if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)v30 )
                {
                  v27 = (const char *)src;
                  v25 = v30 - 1;
                  v20 = (void *)qvector_reserve(v10 + 8, *(_QWORD *)(v10 + 8), v30, 1);
                  v19 = v27;
                  v14 = v25;
                  *(_QWORD *)(v10 + 8) = v20;
                }
                *(_QWORD *)(v10 + 16) = v13;
                v12 = v19;
                memmove(v20, v19, v14);
                *(_BYTE *)(*(_QWORD *)(v10 + 8) + v13 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v10 + 16) = 0;
              }
            }
            *(_WORD *)(v10 + 32) = v31;
            if ( (void **)(v10 + 40) != &v32 )
            {
              v15 = v33;
              if ( (_QWORD)v33 && (v16 = v33 - 1, (_QWORD)v33 != 1) )
              {
                v21 = (const char *)v32;
                v22 = *(void **)(v10 + 40);
                if ( *(_QWORD *)(v10 + 56) < (unsigned __int64)v33 )
                {
                  v28 = (const char *)v32;
                  v26 = v33 - 1;
                  v22 = (void *)qvector_reserve(v10 + 40, *(_QWORD *)(v10 + 40), v33, 1);
                  v21 = v28;
                  v16 = v26;
                  *(_QWORD *)(v10 + 40) = v22;
                }
                *(_QWORD *)(v10 + 48) = v15;
                v12 = v21;
                memmove(v22, v21, v16);
                *(_BYTE *)(*(_QWORD *)(v10 + 40) + v15 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v10 + 48) = 0;
              }
            }
            if ( v32 )
            {
              *(_QWORD *)&v33 = 0;
              qfree(v32, v12);
            }
            if ( src )
              break;
          }
        }
        v4 += 8;
        if ( v4 == v5 )
          return v34 - __readfsqword(0x28u);
      }
      *(_QWORD *)&v30 = 0;
      v4 += 8;
      qfree(src, v12);
    }
    while ( v4 != v5 );
  }
  return v34 - __readfsqword(0x28u);
}
