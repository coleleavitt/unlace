void __fastcall sub_9A64E0(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __m128i v14; // xmm0
  int v15; // [rsp+Ch] [rbp-5Ch] BYREF
  void *v16; // [rsp+10h] [rbp-58h] BYREF
  void *v17; // [rsp+18h] [rbp-50h] BYREF
  __m128i v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]

  v15 = a5;
  sub_9A6400(a2, a3, a4);
  if ( *(_DWORD *)(a1 + 40) )
  {
    v11 = operator new(0x30u);
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(_DWORD *)(a1 + 32);
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v18.m128i_i64[0] = v11;
    *(_QWORD *)(v11 + 24) = v12;
    LODWORD(v12) = *(_DWORD *)(v11 + 32);
    *(_QWORD *)v11 = off_2B16600;
    *(__m128i *)(v11 + 8) = v14;
    *(_DWORD *)(v11 + 32) = v13 & 0xFFFFFF | v12 & 0xFF000000;
    *(_DWORD *)(v11 + 36) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(v11 + 40) = *(_DWORD *)(a1 + 40) - 1;
    sub_9A4A60(a2, a3, v18.m128i_i64);
    if ( v18.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18.m128i_i64[0] + 8LL))(v18.m128i_i64[0]);
  }
  else
  {
    v7 = *a4;
    v8 = (*a4 >> 1) & 3;
    if ( ((*a4 >> 1) & 1) == 0 )
    {
      v9 = a4[2];
      v18.m128i_i64[1] = a4[1];
      v19 = v9;
      v18.m128i_i64[0] = ((-(__int64)((v8 & 2) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 6) | v7 & 0xFFFFFFFFFFFFFFF8LL;
      sub_9A4480((__int64 *)&v16, &v18, 1, &v15);
      v10 = v16;
      v16 = nullptr;
      v17 = v10;
      sub_9A4A60(a2, a3, (__int64 *)&v17);
      if ( v17 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( v16 )
        operator delete(v16, 0x30u);
    }
  }
}

