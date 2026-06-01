__int64 __fastcall sub_790930(__int64 a1, __int8 *a2, void (__fastcall *a3)(__int8 *, _QWORD))
{
  __int8 *v3; // r14
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __m128i si128; // [rsp+0h] [rbp-238h] BYREF
  __int64 v11; // [rsp+10h] [rbp-228h]
  __int64 v12; // [rsp+18h] [rbp-220h]
  _BYTE v13[480]; // [rsp+20h] [rbp-218h] BYREF
  int v14; // [rsp+200h] [rbp-38h]
  __int16 v15; // [rsp+204h] [rbp-34h]
  char v16; // [rsp+206h] [rbp-32h]
  unsigned __int64 v17; // [rsp+208h] [rbp-30h]

  v3 = a2;
  v5 = 0;
  v17 = __readfsqword(0x28u);
  v11 = 114;
  v12 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384390);
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v6 = sub_78FF30(a1, (__int64)a2, v5);
    v7 = v6;
    if ( a3 )
      a3(v3, v6);
    a2 = &si128.m128i_i8[1];
    si128.m128i_i8[8] = 0;
    *(__int16 *)((char *)si128.m128i_i16 + 1) = 6;
    si128.m128i_i32[1] = _byteswap_ulong(v7);
    if ( (unsigned __int64)sub_723E90(a1, (unsigned __int16 *)((char *)si128.m128i_u16 + 1)) <= 1 )
    {
      sub_720F20(a1);
      if ( v8 < 2 || *(_BYTE *)(v8 + 2) != 46 || v7 < _byteswap_ulong(*(_DWORD *)(v8 + 3)) )
        break;
    }
  }
  return v7;
}

