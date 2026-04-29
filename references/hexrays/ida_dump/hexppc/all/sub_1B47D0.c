__int64 __fastcall sub_1B47D0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned __int8 v8[16]; // [rsp+18h] [rbp-68h] BYREF
  unsigned __int8 v9[24]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-40h]

  v3 = a1[4].m128i_i64[0];
  v10 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1504);
  v6 = sub_12B040(v5, a1, a3, a2, 0, a2, 0);
  if ( !(_BYTE)v6 && *(_DWORD *)(a2 + 4) != 1 )
  {
    sub_120000((__int64)v8, (unsigned __int8 *)a2);
    sub_120000((__int64)v9, (unsigned __int8 *)a2);
    if ( (unsigned __int8)sub_123A80(v8, v5, *(_DWORD *)(a2 + 4) / 2, 0)
      && (unsigned __int8)sub_123A80(v9, v5, *(_DWORD *)(a2 + 4) / 2, 0)
      && (unsigned __int8)sub_1B47D0(a1, v8, a3) )
    {
      v6 = sub_1B47D0(a1, v9, a3);
    }
    sub_119360((__int64)v9);
    sub_119360((__int64)v8);
  }
  return v6;
}
