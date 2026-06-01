__int64 __fastcall sub_1E1330(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rax
  int v5; // r14d
  int v6; // r15d
  unsigned int v7; // eax
  __int64 v8; // rax
  __m128i si128; // xmm0
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+Ch] [rbp-4Ch]
  int v14; // [rsp+14h] [rbp-44h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v15 = __readfsqword(0x28u);
  v4 = sub_1F3B50(a2, a3);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    v6 = *(_DWORD *)(v4 + 20);
    v13 = *(_QWORD *)(v4 + 12);
    v12 = v5;
    v11 = dbgreg_place_t___vtable;
    v7 = sub_1EBFA0(a2, v3);
    v14 = v6;
    sub_1E0B90((__int64)&v11, v7, a2 + 1000);
    v8 = v13;
    *(_DWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = dbgreg_place_t___vtable;
    *(_QWORD *)(a1 + 12) = v8;
    *(_DWORD *)(a1 + 20) = v14;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC600);
    *(_QWORD *)a1 = dbgreg_place_t___vtable;
    *(__m128i *)(a1 + 8) = si128;
  }
  return a1;
}
