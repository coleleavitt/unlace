__int64 __fastcall sub_215FE70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  size_t v5; // rax
  bool v6; // zf
  const char *v7; // rdx
  const char *v8; // rbp
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // r13
  char *v13; // rax
  __m128i si128; // xmm0
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  void *v17[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a2 + 120);
  if ( v4 <= 4 )
  {
    v12 = sub_2195B10(a1, a2, a3, a4);
    v17[0] = v18;
    v13 = (char *)operator new(0x13u);
    si128 = _mm_load_si128(xmmword_23AB5B0);
    strcpy(v13 + 16, "ty");
    *(__m128i *)v13 = si128;
    v17[0] = v13;
    v18[0] = 18;
    v17[1] = &word_12;
    sub_22205D0(&v16, v17, 3, v12);
    if ( v17[0] != v18 )
      operator delete(v17[0]);
    v15 = v16;
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v15;
    return a1;
  }
  else if ( v4 <= (unsigned int)a3 )
  {
    v10 = sub_2195B10(a1, a2, a3, a4);
    sub_2220500(v17, 4, v10);
    v11 = v17[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v11;
    return a1;
  }
  else
  {
    v5 = 0;
    v6 = *(_QWORD *)(a2 + 112) + (unsigned int)a3 == 0;
    v7 = (const char *)(*(_QWORD *)(a2 + 112) + (unsigned int)a3);
    v8 = v7;
    if ( !v6 )
      v5 = strlen(v7);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 16) &= ~1u;
    return a1;
  }
}
