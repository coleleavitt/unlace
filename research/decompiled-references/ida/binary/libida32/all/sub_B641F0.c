_BYTE *__fastcall sub_B641F0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rbp
  _BYTE *v3; // rax
  _BYTE *result; // rax
  __int64 v5; // rax
  _DWORD v6[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v6[0] = *(_DWORD *)(a1 + 24);
  if ( v6[0] || (v5 = *(_QWORD *)(a1 + 16)) != 0 && (v6[0] = *(_DWORD *)(v5 + 24)) != 0 )
  {
    sub_FF6F00(v6, a2, *(_QWORD *)(a1 + 32));
    sub_971800((__int64)a2, ": ");
  }
  sub_971800((__int64)a2, *(const char **)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 && (*(_BYTE *)(v2 + 28) & 0x7Fu) - 18 <= 0x3F )
  {
    sub_971800((__int64)a2, " '");
    sub_B53250((_QWORD *)v2, a2);
    v3 = (_BYTE *)a2[2].m128i_i64[0];
    if ( (unsigned __int64)v3 >= a2[1].m128i_i64[1] )
    {
      sub_2257CD0(a2, 39);
    }
    else
    {
      a2[2].m128i_i64[0] = (__int64)(v3 + 1);
      *v3 = 39;
    }
  }
  result = (_BYTE *)a2[2].m128i_i64[0];
  if ( (unsigned __int64)result >= a2[1].m128i_i64[1] )
    return (_BYTE *)sub_2257CD0(a2, 10);
  a2[2].m128i_i64[0] = (__int64)(result + 1);
  *result = 10;
  return result;
}

