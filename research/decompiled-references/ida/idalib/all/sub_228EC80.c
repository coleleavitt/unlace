__int64 __fastcall sub_228EC80(__int64 a1)
{
  char *v1; // rax
  unsigned int v2; // ebp
  unsigned int v4; // eax
  const char *v5[4]; // [rsp+10h] [rbp-E8h] BYREF
  __int16 v6; // [rsp+30h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B0h]
  _WORD v9[80]; // [rsp+58h] [rbp-A0h] BYREF

  v1 = *(char **)a1;
  v9[4] = 261;
  ptr = v1;
  si128.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)sub_2289C70((void ***)&ptr) )
  {
    std::_V2::system_category((std::_V2 *)&ptr);
    return 0;
  }
  ptr = v9;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v4 = sub_228DB00((std::_V2 *)&ptr);
  if ( v4 )
  {
    v2 = v4;
  }
  else
  {
    v2 = 0;
    v6 = 261;
    v5[0] = (const char *)ptr;
    v5[1] = (const char *)si128.m128i_i64[0];
    sub_228E8C0(v5, (char **)a1);
    std::_V2::system_category((std::_V2 *)v5);
  }
  if ( ptr == v9 )
    return v2;
  free(ptr);
  return v2;
}
