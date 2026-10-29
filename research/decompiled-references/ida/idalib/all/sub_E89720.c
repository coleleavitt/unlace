__int64 __fastcall sub_E89720(__int64 *a1, __int64 a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 result; // rax
  unsigned __int8 v12; // al
  size_t v13; // [rsp+8h] [rbp-30h]

  v6 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = a1[1];
  v10 = *(void **)(v9 + 32);
  if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 < a5 )
  {
    sub_227BF10(v9, a4, a5);
  }
  else if ( a5 )
  {
    v13 = a5;
    memcpy(v10, a4, a5);
    a5 = v13;
    *(_QWORD *)(v9 + 32) += v13;
  }
  sub_E82590(a1, a2, a3, (__int64)a4, a5, a6);
  result = *(_BYTE *)(v6 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)result - 34 > 5 )
  {
    if ( (unsigned int)(unsigned __int8)result - 40 > 6 )
    {
      if ( (_BYTE)result == 31 )
        return sub_995540(a1[1], "3U__s_GUID@@B");
    }
    else
    {
      return (__int64)sub_E89290(a1, v6);
    }
  }
  else
  {
    v12 = sub_E6F1E0((__int64 *)*a1, v6);
    return (__int64)sub_E841B0((__int64)a1, a2, a3, v12);
  }
  return result;
}
