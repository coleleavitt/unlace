void __fastcall sub_13660E0(__int64 a1)
{
  __int64 *v1; // rbp
  void *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  size_t v8; // rdx
  __m128i *v9; // rdi
  void *v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h]

  v1 = (__int64 *)(a1 + 16);
  v10[0] = &v11;
  if ( *(_QWORD *)a1 == a1 + 16 )
  {
    v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  }
  else
  {
    v10[0] = *(void **)a1;
    v11.m128i_i64[0] = *(_QWORD *)(a1 + 16);
  }
  v2 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 8) = 0;
  v10[1] = v2;
  v3 = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 16) = 0;
  v12 = v3;
  while ( sub_9C4B50((__int64)v10, (__int64)(v1 - 7)) < 0 )
  {
    v5 = (__int64 *)*(v1 - 7);
    v6 = v1 - 5;
    v7 = (__int64 *)*(v1 - 2);
    if ( v5 == v1 - 5 )
    {
      v8 = *(v1 - 6);
      if ( v8 )
      {
        if ( v8 == 1 )
          *(_BYTE *)v7 = *(_BYTE *)v6;
        else
          memcpy(v7, v1 - 5, v8);
        v8 = *(v1 - 6);
        v7 = (__int64 *)v6[3];
      }
      v6[4] = v8;
      *((_BYTE *)v7 + v8) = 0;
      v7 = (__int64 *)*(v1 - 7);
    }
    else
    {
      if ( v7 == v1 )
      {
        v6[3] = (__int64)v5;
        *(v1 - 1) = *(v1 - 6);
        *v1 = *(v1 - 5);
      }
      else
      {
        v6[3] = (__int64)v5;
        v4 = *v1;
        *(v1 - 1) = *(v1 - 6);
        *v1 = *(v1 - 5);
        if ( v7 )
        {
          *(v1 - 7) = (__int64)v7;
          *v6 = v4;
          goto LABEL_7;
        }
      }
      *(v1 - 7) = (__int64)(v1 - 5);
      v7 = v1 - 5;
    }
LABEL_7:
    *(v1 - 6) = 0;
    v1 -= 5;
    *(_BYTE *)v7 = 0;
    v6[7] = v6[2];
  }
  sub_A0AAD0((__int64)(v1 - 2), v10);
  v9 = (__m128i *)v10[0];
  v1[2] = v12;
  if ( v9 != &v11 )
    operator delete(v9);
}
