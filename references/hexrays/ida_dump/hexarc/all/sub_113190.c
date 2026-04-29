__int64 __fastcall sub_113190(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  int v7; // ecx
  unsigned int v8; // r12d
  const __m128i *v10; // rax
  _DWORD *v11; // rsi
  __m128i v12; // xmm0
  _DWORD *v13; // [rsp+8h] [rbp-70h] BYREF
  _OWORD v14[2]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v4 = sub_116220(a1, &v13, 33);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 )
    return 0;
  v6 = -1;
  v7 = 8 * v13[1];
  if ( (unsigned __int64)v7 <= 0x3F )
    v6 = (1LL << v7) - 1;
  if ( (unsigned __int8)sub_1196C0(v4 + 48, v14, 0)
    && v6 == *(_QWORD *)&v14[0]
    && (v8 = sub_1283C0(*(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), a2, a3, (_DWORD)v13, a3, (int)v5 + 32, 0), (_BYTE)v8) )
  {
    v10 = *(const __m128i **)(v5 + 56);
    v11 = v13;
    v14[0] = _mm_loadu_si128(v10);
    v12 = _mm_loadu_si128(v10 + 1);
    *a1 = 17;
    v14[1] = v12;
    if ( a1 + 8 != v11 )
      sub_11EAC0(a1 + 8);
    sub_116C30(a1 + 12, v14, (unsigned int)a1[9]);
  }
  else
  {
    return 0;
  }
  return v8;
}
