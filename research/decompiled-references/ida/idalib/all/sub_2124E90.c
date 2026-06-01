__int64 __fastcall sub_2124E90(__int64 a1, _QWORD *a2)
{
  char *v3; // rcx
  char v4; // dl
  char *v5; // rax
  __int64 v6; // rax
  char *v8; // rax
  char v9; // dl
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // r12
  __m128i si128; // xmm0
  __int64 v14; // rax
  _QWORD *v15; // rdi
  void *v16[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (char *)a2[7];
  v4 = *v3;
  if ( (unsigned __int8)(*v3 - 48) <= 9u )
  {
    v5 = v3 + 1;
    do
    {
      a2[7] = v5;
      v4 = *v5;
      v3 = v5++;
    }
    while ( (unsigned __int8)(v4 - 48) <= 9u );
  }
  if ( ((v4 - 43) & 0xFD) != 0 )
  {
    if ( (v4 & 0xDF) == 0x45 )
    {
      v8 = v3 + 1;
      a2[7] = v3 + 1;
      v9 = v3[1];
      if ( ((v9 - 43) & 0xFD) == 0 )
      {
        v8 = v3 + 2;
        a2[7] = v3 + 2;
        v9 = v3[2];
      }
      if ( (unsigned __int8)(v9 - 48) > 9u )
      {
        v3 = v8;
      }
      else
      {
        v10 = v8 + 1;
        do
        {
          v3 = v10;
          a2[7] = v10++;
        }
        while ( (unsigned __int8)(*v3 - 48) <= 9u );
      }
    }
    v6 = a2[17];
    *(_DWORD *)a1 = 6;
    *(_DWORD *)(a1 + 32) = 64;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = &v3[-v6];
    *(_QWORD *)(a1 + 24) = 0;
    return a1;
  }
  v16[0] = v17;
  v11 = (char *)operator new(0x1Eu);
  v12 = a2[7];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB3E0);
  strcpy(v11 + 16, "float literal");
  a2[10] = v12;
  *(__m128i *)v11 = si128;
  v16[0] = v11;
  v17[0] = 29;
  v16[1] = &qword_18 + 5;
  sub_9EE8A0((__int64)(a2 + 11), (__int64)v16);
  v14 = a2[7];
  v15 = v16[0];
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v12;
  *(_DWORD *)(a1 + 32) = 64;
  *(_QWORD *)(a1 + 16) = v14 - v12;
  *(_QWORD *)(a1 + 24) = 0;
  if ( v15 == v17 )
    return a1;
  operator delete(v15);
  return a1;
}
