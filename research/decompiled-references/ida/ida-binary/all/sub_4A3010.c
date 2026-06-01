__int64 __fastcall sub_4A3010(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // r13d
  void (*v14)(void); // rax
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rsi
  int v20; // eax
  __int64 (*v21)(); // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __m128 v25; // xmm4
  __m128 v26; // xmm5

  v14 = *(void (**)(void))(*(_QWORD *)a1 + 672LL);
  if ( v14 != nullsub_263 )
    v14();
  v15 = sub_4A0DB0(a1);
  LOBYTE(v11) = a3 < v15;
  if ( a3 < v15 )
  {
    *(_DWORD *)(a2 + 140) = *(_DWORD *)(*(_QWORD *)(a1 + 2392) + 72LL);
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 752LL);
    if ( v16 == sub_49AFB0 )
    {
      v17 = *(_DWORD *)(a2 + 132);
      if ( *(_DWORD *)(a1 + 2376) == 2 )
        *(_DWORD *)(a2 + 132) = v17 | 0x80000000;
      else
        *(_DWORD *)(a2 + 132) = v17 & 0x7FFFFFFF;
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64, unsigned __int64))v16)(a1, a2 + 128, a3);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, unsigned __int64))(**(_QWORD **)(a1 + 2392) + 48LL))(
      *(_QWORD *)(a1 + 2392),
      a2,
      a2 + 140,
      a2 + 128,
      a3);
    v19 = *(_QWORD *)(a1 + 2392);
    v20 = *(_DWORD *)(v19 + 12);
    if ( (v20 & 0x2000000) != 0 )
    {
      v21 = *(__int64 (**)())(*(_QWORD *)a1 + 688LL);
      if ( v21 != sub_49AD30 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64))v21)(a1) && (*(_BYTE *)(a1 + 1784) & 8) != 0 )
          *(_QWORD *)(a2 + 144) = sub_4A0960(a1, a3, 0, a4, a5, a6, a7, v25, v26, a10, a11, v23, v24, v18);
        v19 = *(_QWORD *)(a1 + 2392);
        v20 = *(_DWORD *)(v19 + 12);
      }
    }
    if ( (v20 & 0x20) != 0 )
      callui(90, v19, a3, a2 + 128, (unsigned int)&callui, v18);
  }
  return v11;
}
