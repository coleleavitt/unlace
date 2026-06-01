unsigned __int64 __fastcall sub_228F900(std::_V2 *a1, int *a2, _QWORD *a3, char a4, int a5, char a6, unsigned int a7)
{
  unsigned __int64 v7; // rbx
  _BYTE *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // esi
  _BYTE *v20; // rax
  std::_V2 *v21; // rdi
  int *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-148h]
  unsigned int v26; // [rsp+28h] [rbp-120h]
  unsigned int v27; // [rsp+28h] [rbp-120h]
  int v28; // [rsp+38h] [rbp-110h]
  unsigned int v29; // [rsp+3Ch] [rbp-10Ch]
  size_t v30[4]; // [rsp+40h] [rbp-108h] BYREF
  __int16 v31; // [rsp+60h] [rbp-E8h]
  void *ptr; // [rsp+70h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-D0h]
  __int64 v34; // [rsp+88h] [rbp-C0h] BYREF
  __int16 v35; // [rsp+90h] [rbp-B8h]

  v28 = 128;
  std::_V2::system_category(a1);
  while ( 1 )
  {
    sub_228F6F0((const char **)a1, (__int64)a3, a4);
    if ( a5 == 1 )
      break;
    if ( a5 == 2 )
    {
      v20 = (_BYTE *)*a3;
      v31 = 257;
      if ( *v20 )
      {
        v30[0] = (size_t)v20;
        LOBYTE(v31) = 3;
      }
      ptr = &v34;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v21 = (std::_V2 *)sub_2253CC0(v30, &ptr);
      if ( access((const char *)v21, 0) == -1 )
      {
        std::_V2::generic_category(v21);
        v22 = __errno_location();
        v19 = *v22;
        if ( ptr != &v34 )
        {
          v27 = *v22;
          free(ptr);
          v19 = v27;
        }
        v7 = v19 | v7 & 0xFFFFFFFF00000000LL;
        if ( v19 == 2 )
          return 0;
        if ( v19 )
          return v7;
      }
      else
      {
        if ( ptr != &v34 )
          free(ptr);
        v19 = 0;
        v7 &= 0xFFFFFFFF00000000LL;
      }
    }
    else
    {
      v12 = (_BYTE *)*a3;
      v35 = 257;
      if ( *v12 )
      {
        ptr = v12;
        LOBYTE(v35) = 3;
      }
      v13 = sub_228BC10((size_t *)&ptr, 0, 0x1F8u);
      v23 = v14;
      v7 = v13;
      v26 = v13;
      if ( !v13 )
        return 0;
      v15 = std::_V2::generic_category((std::_V2 *)&ptr);
      if ( v26 != 17 || v23 != v15 )
        return v7;
      v19 = 17;
    }
LABEL_21:
    if ( !--v28 )
      return v7 & 0xFFFFFFFF00000000LL | v19;
  }
  v17 = (_BYTE *)*a3;
  v35 = 257;
  if ( *v17 )
  {
    ptr = v17;
    LOBYTE(v35) = 3;
  }
  v29 = sub_228D080((size_t *)&ptr, a2, 1, 3, a6, a7);
  if ( v29 )
  {
    v19 = v29;
    if ( std::_V2::generic_category((std::_V2 *)&ptr) != v18 || v29 != 17 && v29 != 13 )
      return v7 & 0xFFFFFFFF00000000LL | v29;
    goto LABEL_21;
  }
  return 0;
}
