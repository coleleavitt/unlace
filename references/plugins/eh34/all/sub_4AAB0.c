__int64 __fastcall sub_4AAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __m128i v18; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v7 = *(_QWORD *)(a2 + 240);
  v19 = __readfsqword(0x28u);
  v8 = *(_DWORD *)(v7 + 32);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      sub_64B50(
        (unsigned int)&v17,
        *(_QWORD *)(a2 + 16),
        (unsigned int)"one-way block %d has invalid successor type",
        *(_DWORD *)(a2 + 256),
        v7,
        a6);
      v13 = v17;
      v14 = _mm_loadu_si128(&v18);
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v13;
      *(__m128i *)(a1 + 8) = v14;
      return a1;
    }
    if ( *(_DWORD *)(v7 + 4) )
    {
      v11 = *(_QWORD *)(v7 + 24);
      sub_4C000(*(_QWORD *)(a2 + 248) + 24LL, (unsigned int)(*(_DWORD *)(a2 + 260) + 1));
      v12 = sub_4A9C0(a2);
      sub_4C010(v12 + 24, v11);
    }
  }
  else
  {
    v17 = sub_4A8B0((_QWORD *)a2, 0);
    if ( !BYTE4(v17) )
    {
      sub_4A930(a2, 0);
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
    v10 = *(_QWORD *)(a2 + 248);
    if ( *(_DWORD *)(v9 + 4) )
    {
      sub_4C000(v10 + 24, (unsigned int)(*(_DWORD *)(a2 + 260) + 1));
      v16 = sub_4A9C0(a2);
      sub_4C000(v16 + 24, (unsigned int)v17);
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
    sub_4C000(v10 + 24, (unsigned int)v17);
  }
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
