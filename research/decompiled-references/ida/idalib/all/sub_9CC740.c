void __fastcall sub_9CC740(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // r14
  __int64 v9; // r12
  void (*v10)(); // r13
  __int64 *v11; // rdi
  __int64 v13; // rax
  int v14; // edx
  _QWORD *v15; // rbx
  unsigned __int16 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int16 *v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-5Ch]
  __m128i v21; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF

  v6 = (__int64 *)(a4 + 8);
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 && *(_BYTE *)(a4 + 33) == *(_BYTE *)(a1 + 33) )
  {
    v13 = operator new(0x30u);
    v14 = *(_DWORD *)(a1 + 32);
    v15 = (_QWORD *)v13;
    v16 = *(unsigned __int16 **)a2;
    *(__m128i *)(v13 + 8) = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v17 = *(_QWORD *)(a1 + 24);
    v21.m128i_i64[0] = (__int64)v15;
    v15[3] = v17;
    *((_DWORD *)v15 + 8) = v14 & 0xFFFFFF | v15[4] & 0xFF000000;
    *((_DWORD *)v15 + 9) = *(_DWORD *)(a1 + 36);
    *v15 = off_2B405A0;
    *((_DWORD *)v15 + 10) = *(_DWORD *)(a1 + 40) + 1;
    v18 = (__int64)&v16[*(_QWORD *)(a2 + 8)];
    v19 = sub_9C9E00(v16, v18, a3, v6);
    if ( (unsigned __int16 *)v18 == v19 )
    {
      sub_9C8000(v15);
    }
    else
    {
      sub_9C85E0(a3, v19, v21.m128i_i64);
      if ( v21.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21.m128i_i64[0] + 8LL))(v21.m128i_i64[0]);
    }
  }
  else
  {
    v9 = *(unsigned int *)(a4 + 36);
    v10 = *(void (**)())(*(_QWORD *)a5 + 40LL);
    v20 = *(_DWORD *)(a1 + 36);
    sub_9CC3A0(&v21, (__int64 *)(a4 + 8));
    v11 = (__int64 *)v21.m128i_i64[0];
    if ( v10 != nullsub_372 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD, __int64))v10)(
        a5,
        *(_QWORD *)(a4 + 16),
        *(_QWORD *)(a4 + 24),
        v21.m128i_i64[0],
        v21.m128i_i64[1],
        v20,
        v9);
      v11 = (__int64 *)v21.m128i_i64[0];
    }
    if ( v11 != &v22 )
      operator delete(v11);
  }
}
