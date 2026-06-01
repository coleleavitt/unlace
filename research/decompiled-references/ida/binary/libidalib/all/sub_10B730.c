__m128i *sub_10B730()
{
  TMenuItem *v0; // r13
  _QWORD *v1; // rbp
  unsigned __int16 **i; // rbx
  TMenuItem *v3; // rax
  __m128i *result; // rax
  __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

  v0 = nullptr;
  v1 = nullptr;
  for ( i = (unsigned __int16 **)&off_245FE0;
        (*i || ((unsigned __int64)i[1] & 0xFFFFFFFFFFFFLL) != 0) && !(unsigned int)lowMemory();
        i += 2 )
  {
    if ( *i && ((unsigned __int64)i[1] & 0xFFFFFFFFFFFFLL) == 0 )
    {
      if ( !sub_19BD30(**i) )
        continue;
      v3 = sub_1085D0(i);
      if ( v0 )
        goto LABEL_7;
    }
    else
    {
      if ( !*((_WORD *)i + 5) )
        continue;
      v3 = sub_1085D0(i);
      if ( v0 )
      {
LABEL_7:
        *v1 = v3;
        v1 = v3;
        continue;
      }
    }
    v1 = v3;
    v0 = v3;
  }
  v5[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v0, (__m128i)(unsigned __int64)v0);
  result = (__m128i *)operator new(0x10u);
  *result = _mm_load_si128(v5);
  return result;
}

