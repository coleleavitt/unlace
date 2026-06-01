__int64 __fastcall sub_1366E10(__int64 a1, __int64 *a2, int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // rax
  __m128i v9; // xmm2
  __int8 v11; // dl
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // r13
  __int64 *v15; // rdi
  __int64 v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  int v20; // [rsp+Ch] [rbp-5Ch]
  __m128i v21; // [rsp+10h] [rbp-58h] BYREF
  __m128i v22; // [rsp+20h] [rbp-48h] BYREF
  char v23; // [rsp+30h] [rbp-38h]

  v21.m128i_i8[0] = 0;
  if ( (unsigned int)(a3 + 1) <= 1 )
    goto LABEL_10;
  v7 = a4;
  if ( a3 < 0 )
  {
    v12 = (unsigned int)(-2 - a3);
    v13 = *(_QWORD *)(a2[40] + 8LL * ((unsigned int)v12 >> 6));
    if ( _bittest64(&v13, v12) )
    {
      v14 = (_QWORD *)(a2[34] + 8 * ((unsigned __int64)(int)v12 >> 5));
      if ( *v14 )
      {
        v8 = *v14 + 24LL * ((-2 - (_BYTE)a3) & 0x1F);
        goto LABEL_4;
      }
      v15 = (__int64 *)(a2[36] & 0xFFFFFFFFFFFFFFF8LL);
      v16 = *v15;
      v15[10] += 768;
      v17 = (_DWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v15[1] >= (unsigned __int64)(v17 + 192) && v16 )
      {
        *v15 = (__int64)(v17 + 192);
      }
      else
      {
        v20 = v7;
        v17 = (_DWORD *)sub_986170((__int64)v15, 768, 768, 3, v7, a6);
        LODWORD(v7) = v20;
      }
      *v14 = v17;
      v18 = v17 + 192;
      do
      {
        *v17 = 0;
        v17 += 6;
        *((_OWORD *)v17 - 1) = 0;
        *((_QWORD *)v17 - 1) = 0;
      }
      while ( v17 != v18 );
      v11 = v21.m128i_i8[0];
      v8 = *v14 + 24 * (v12 & 0x1F);
    }
    else
    {
      v8 = sub_101F930((__int64)a2, v12, &v21);
      v11 = v21.m128i_i8[0];
      LODWORD(v7) = a4;
    }
    if ( v11 )
      goto LABEL_10;
    goto LABEL_4;
  }
  v8 = a2[23] + 24LL * (unsigned int)a3;
LABEL_4:
  if ( v8 )
  {
    if ( *(char *)(v8 + 3) >= 0 )
    {
      sub_101D9A0(&v21, (__int64 *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL), a2[1], a2[2], v7);
      if ( v23 )
      {
        v9 = _mm_load_si128(&v22);
        *(__m128i *)a1 = _mm_load_si128(&v21);
        *(__m128i *)(a1 + 16) = v9;
        return a1;
      }
    }
  }
LABEL_10:
  sub_101D1C0(a1, (__int64)a2);
  return a1;
}
