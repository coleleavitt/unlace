__int64 __fastcall sub_18202C0(__int64 a1, __int64 a2, __int64 a3, __m128i a4, double a5)
{
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // [rsp+Ch] [rbp-2Ch] BYREF
  const void *v16; // [rsp+10h] [rbp-28h] BYREF
  size_t v17; // [rsp+18h] [rbp-20h]

  v16 = nullptr;
  v17 = 0;
  v15 = 0;
  result = sub_181F2D0(a1, a3, &v16, &v15, a4, a5);
  if ( (_BYTE)result )
  {
    result = sub_180C270(a1, v15, (int)v16, v17);
    if ( (_BYTE)result )
    {
      result = (__int64)sub_180ABB0(a1, a2, a3, v16, v17, v7);
      v12 = result;
      if ( result )
      {
        sub_B8CC60(a2, result, v8, v9, v10, v11);
        result = *(unsigned __int8 *)(a2 + 28);
        v14 = ((_BYTE)result + 110) & 0x7F;
        if ( (unsigned __int8)v14 <= 0x39u )
        {
          result = 0x2200000003F0001LL;
          if ( _bittest64(&result, v14) )
            return sub_166D380(a1, *(const void **)(v12 + 48), *(unsigned int *)(v12 + 40), 5, a2, v13);
        }
      }
    }
  }
  return result;
}
