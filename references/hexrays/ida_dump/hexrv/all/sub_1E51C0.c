unsigned __int64 __fastcall sub_1E51C0(__int64 a1, const __m128i *a2, int *a3)
{
  int v3; // r13d
  int v5; // r15d
  unsigned __int64 v6; // r14
  int v8; // [rsp+Ch] [rbp-7Ch] BYREF
  __m128i v9; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v10[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 24) )
    return v11 - __readfsqword(0x28u);
  v3 = *a3;
  if ( *a3 == 1 )
    return v11 - __readfsqword(0x28u);
  if ( !v3 )
  {
LABEL_11:
    sub_13B7F0((unsigned __int64 **)(a1 + 8));
    *(_BYTE *)(a1 + 24) = 1;
    return v11 - __readfsqword(0x28u);
  }
  v5 = a3[1];
  v6 = sub_1DCF80(a1, &v8, (__int64)a2, v5);
  if ( v8 == 1 )
  {
    if ( !(unsigned __int8)sub_30F6B0(v6 + 40, a3) || *(_DWORD *)(v6 + 40) )
      return v11 - __readfsqword(0x28u);
    goto LABEL_11;
  }
  if ( v8 == 2 )
  {
    if ( v3 == 8 || !(unsigned __int8)sub_1E1A40(a1, v6, a2, (__int64)a3) )
      return sub_1DFBE0(a1, v6, a2, v5);
  }
  else
  {
    v9 = _mm_loadu_si128(a2);
    sub_30DB40(v10, a3);
    sub_1E4E40((__m128i *)(a1 + 8), v6, &v9);
    sub_30DA80(v10);
  }
  return v11 - __readfsqword(0x28u);
}
