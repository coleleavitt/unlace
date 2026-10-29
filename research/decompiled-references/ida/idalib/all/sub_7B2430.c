unsigned __int64 __fastcall sub_7B2430(__int64 a1, __int8 *a2, void (__fastcall *a3)(__int8 *, __int64))
{
  __int8 *v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __m128i si128; // [rsp+0h] [rbp-238h] BYREF
  __int64 v13; // [rsp+10h] [rbp-228h]
  __int64 v14; // [rsp+18h] [rbp-220h]
  _BYTE v15[480]; // [rsp+20h] [rbp-218h] BYREF
  int v16; // [rsp+200h] [rbp-38h]
  __int16 v17; // [rsp+204h] [rbp-34h]
  char v18; // [rsp+206h] [rbp-32h]
  unsigned __int64 v19; // [rsp+208h] [rbp-30h]

  v3 = a2;
  v5 = 0;
  v19 = __readfsqword(0x28u);
  v13 = 114;
  v14 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A83C0);
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v6 = sub_7B1A10(a1, (__int64)a2, v5);
    v7 = v6;
    if ( a3 )
      a3(v3, v6);
    *(__int16 *)((char *)si128.m128i_i16 + 1) = 10;
    v8 = swap64(v7);
    a2 = &si128.m128i_i8[1];
    si128.m128i_i8[12] = 0;
    *(__int64 *)((char *)si128.m128i_i64 + 4) = v8;
    if ( (unsigned __int64)sub_7443D0(a1, (unsigned __int16 *)((char *)si128.m128i_u16 + 1)) <= 1 )
    {
      sub_741460(a1);
      if ( v9 < 2 || *(_BYTE *)(v9 + 2) != 46 )
        break;
      v10 = (*(_BYTE *)(a1 + 6016) & 2) != 0 ? _byteswap_ulong(*(_DWORD *)(v9 + 3)) : swap64(*(_QWORD *)(v9 + 3));
      if ( v7 < v10 )
        break;
    }
  }
  return v7;
}
