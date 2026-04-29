unsigned __int64 __fastcall sub_2B75A0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  void **v8; // r13
  void *v9; // r12
  size_t v10; // r8
  int v11; // r13d
  const char *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rsi
  __m128i v21; // xmm0
  __int64 v22; // rdi
  void *v25; // r9
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-88h]
  size_t v29; // [rsp+0h] [rbp-88h]
  int v30; // [rsp+10h] [rbp-78h]
  void *v31; // [rsp+10h] [rbp-78h]
  unsigned __int64 v32; // [rsp+18h] [rbp-70h]
  int v33; // [rsp+20h] [rbp-68h]
  int v34; // [rsp+24h] [rbp-64h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v33 = 0;
  v34 = unpack_dd(a3);
  if ( v34 > 0 )
  {
    do
    {
      v11 = unpack_dd(a3);
      v32 = sub_32C840(a3, *(_QWORD *)(a1 + 8));
      v12 = (const char *)sub_32C800(a3, *(_QWORD *)(a3 + 8));
      sub_7CDC0((__int64)&src, v12);
      v13 = *(_QWORD *)(a1 + 24);
      if ( !v13 || (v30 = sub_23A6F0(v13, v32, 0), v30 == -1) )
        v30 = v11;
      v6 = a2[1];
      v7 = a2[2];
      if ( v7 < v6 + 1 )
      {
        v14 = qvector_reserve(a2, 0, v6 + 1, 40);
        v15 = a2[2];
        v16 = a2[1];
        a2[2] = v7;
        v28 = v14;
        v17 = *a2;
        v35 = v15;
        v18 = v16 - 1;
        if ( v18 >= 0 )
        {
          v19 = v14;
          do
          {
            v20 = *(_QWORD *)v17;
            v21 = _mm_loadu_si128((const __m128i *)(v17 + 8));
            *(_QWORD *)v17 = 0;
            *(_QWORD *)(v17 + 16) = 0;
            *(_QWORD *)v19 = v20;
            *(__m128i *)(v19 + 8) = v21;
            *(_QWORD *)(v19 + 24) = *(_QWORD *)(v17 + 24);
            *(_DWORD *)(v19 + 32) = *(_DWORD *)(v17 + 32);
            v22 = *(_QWORD *)v17;
            if ( *(_QWORD *)v17 )
            {
              *(_QWORD *)(v17 + 8) = 0;
              qfree(v22);
            }
            v17 += 40;
            v19 += 40;
          }
          while ( v18-- != 0 );
          v17 = *a2;
        }
        qfree(v17);
        *a2 = v28;
        a2[2] = v35;
        v6 = a2[1];
      }
      else
      {
        v28 = *a2;
      }
      v8 = (void **)(v28 + 40 * v6);
      *v8 = nullptr;
      *(_OWORD *)(v8 + 1) = 0;
      ++a2[1];
      *((_DWORD *)v8 + 8) = v30;
      v8[3] = (void *)v32;
      if ( v8 != &src )
      {
        v9 = (void *)v37;
        if ( v37 && (v10 = v37 - 1, v37 != 1) )
        {
          v25 = src;
          v26 = *v8;
          if ( (unsigned __int64)v8[2] < v37 )
          {
            v31 = src;
            v29 = v37 - 1;
            v27 = qvector_reserve(v8, *v8, v37, 1);
            v25 = v31;
            v10 = v29;
            *v8 = (void *)v27;
            v26 = (void *)v27;
          }
          v8[1] = v9;
          memmove(v26, v25, v10);
          *((_BYTE *)v9 + (_QWORD)*v8 - 1) = 0;
        }
        else
        {
          v8[1] = nullptr;
        }
      }
      if ( src )
      {
        v37 = 0;
        qfree(src);
      }
      ++v33;
    }
    while ( v34 != v33 );
  }
  return v38 - __readfsqword(0x28u);
}
