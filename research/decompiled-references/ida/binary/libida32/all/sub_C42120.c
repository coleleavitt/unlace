__int64 __fastcall sub_C42120(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+4h] [rbp-24h] BYREF
  char v12; // [rsp+Ch] [rbp-1Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1->m128i_i64[0]) + 1) & 0x20) != 0
    || (v7 = a1->m128i_i64[0], *(_DWORD *)(a1->m128i_i64[0] + 48)) && (*(_BYTE *)(v7 + 914) || *(_BYTE *)(v7 + 915)) )
  {
    result = sub_C38AE0(a1, *(__m128i **)(a2 + 16), v3, v4, v5, v6);
    if ( (_BYTE)result )
      return sub_C0DFE0(
               (__int64 *)a1->m128i_i64[0],
               (__int64 *)a2,
               (__m128i *)a1->m128i_i64[1],
               *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
               ((*(_BYTE *)(a2 + 2) >> 3) & 0x1D) == 0,
               0);
  }
  else
  {
    v8 = (__int64 *)sub_E0FED0(v7, a2, 108, 0);
    v9 = sub_EC8B80(a2);
    if ( v8 )
    {
      v11 = v9;
      v12 = 1;
      sub_AC88D0(v8, &v11);
    }
    return 0;
  }
  return result;
}

