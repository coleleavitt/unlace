__int64 __fastcall sub_21318A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ecx
  _DWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __m128i v12; // xmm0
  bool v13; // cc
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  _DWORD *v17; // rax
  void *v18; // rdi
  __m128 v20; // [rsp+0h] [rbp-48h] BYREF
  void *v21; // [rsp+18h] [rbp-30h]
  unsigned int v22; // [rsp+20h] [rbp-28h]

  v6 = -858993459;
  v8 = *(_DWORD **)a1;
  v9 = *(unsigned int *)(a1 + 8);
  *(_BYTE *)(a1 + 129) = **(_DWORD **)a1 == 9;
  v10 = 40 * v9;
  v11 = 0xCCCCCCCCCCCCCCCDLL * ((40 * v9 - 40) >> 3);
  if ( (unsigned __int64)(40 * v9) > 0x28 )
  {
    do
    {
      v12 = _mm_loadu_si128((const __m128i *)v8 + 3);
      v13 = v8[8] <= 0x40u;
      *v8 = v8[10];
      *(__m128i *)(v8 + 2) = v12;
      if ( !v13 )
      {
        v14 = *((void **)v8 + 3);
        if ( v14 )
          operator delete[](v14);
      }
      v15 = *((_QWORD *)v8 + 8);
      v8 += 10;
      *((_QWORD *)v8 - 2) = v15;
      LODWORD(v15) = v8[8];
      v8[8] = 0;
      *(v8 - 2) = v15;
      --v11;
    }
    while ( v11 );
    LODWORD(v9) = *(_DWORD *)(a1 + 8);
    v8 = *(_DWORD **)a1;
  }
  v16 = (unsigned int)(v9 - 1);
  *(_DWORD *)(a1 + 8) = v16;
  v17 = &v8[10 * v16];
  if ( v17[8] > 0x40u )
  {
    v18 = *((void **)v17 + 3);
    if ( v18 )
      operator delete[](v18);
  }
  if ( !*(_DWORD *)(a1 + 8) )
  {
    sub_2127580(&v20, a1, v10, v6, a5, a6);
    sub_2131610(a1, *(_QWORD *)a1, (unsigned __int64)&v20);
    if ( v22 > 0x40 )
    {
      if ( v21 )
        operator delete[](v21);
    }
  }
  return *(_QWORD *)a1;
}
