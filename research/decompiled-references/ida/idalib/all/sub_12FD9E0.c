__int64 __fastcall sub_12FD9E0(_QWORD *a1)
{
  int v2; // edx
  __int64 result; // rax
  char v4; // cl
  char *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __m128i *); // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __m128i v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v12; // [rsp+20h] [rbp-28h]

  v2 = *(_DWORD *)(*a1 + 12LL);
  result = *(unsigned __int8 *)(*a1 + 2LL);
  v4 = *(_BYTE *)(*a1 + 2LL) & 2;
  if ( v2 )
  {
    v5 = nullptr;
    v6 = 4LL * (v2 == 1);
    if ( v2 == 1 )
      v5 = "json";
    if ( !v4 )
    {
      if ( (result & 1) == 0 )
        return result;
LABEL_12:
      v11[0].m128i_i64[0] = (__int64)v5;
      v12 = 261;
      v10 = a1[1];
      v11[0].m128i_i64[1] = v6;
      return sub_12FD7D0(*(__int64 (__fastcall **)(__int64, __m128i *))v10, *(_QWORD *)(v10 + 8), 0x8Du, v11);
    }
    v7 = a1[1];
    v11[0].m128i_i64[0] = (__int64)v5;
    v12 = 261;
    v8 = *(__int64 (__fastcall **)(__int64, __m128i *))v7;
    v9 = *(_QWORD *)(v7 + 8);
    v11[0].m128i_i64[1] = 4LL * (v2 == 1);
    sub_12FD7D0(v8, v9, 0x87u, v11);
    result = *(unsigned __int8 *)(*a1 + 2LL);
    if ( (result & 1) != 0 )
      goto LABEL_12;
  }
  else
  {
    if ( v4 )
    {
      sub_12FBD80(*(__int64 (__fastcall **)(__int64, _QWORD *))a1[1], *(_QWORD *)(a1[1] + 8LL), 0x88u);
      result = *(unsigned __int8 *)(*a1 + 2LL);
    }
    if ( (result & 1) != 0 )
      return sub_12FBD80(*(__int64 (__fastcall **)(__int64, _QWORD *))a1[1], *(_QWORD *)(a1[1] + 8LL), 0x8Eu);
  }
  return result;
}
