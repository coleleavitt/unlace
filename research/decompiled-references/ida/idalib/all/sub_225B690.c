__int64 __fastcall sub_225B690(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  _BYTE v14[24]; // [rsp+28h] [rbp-60h] BYREF
  const char *v15; // [rsp+40h] [rbp-48h] BYREF
  __int16 v16; // [rsp+60h] [rbp-28h]

  v2 = *(_DWORD *)(a2 + 32) == 1;
  v10 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23ABCE0);
  ptr = v14;
  v11 = 0;
  if ( !v2 )
  {
    v6 = *a1;
    v5 = 0;
    v15 = "expected string";
    v16 = 259;
    sub_226EEF0(v6, a2, &v15, 0);
    goto LABEL_7;
  }
  v10 = sub_2270420(a2, &ptr);
  v11 = v3;
  v4 = v3;
  if ( v3 == j__strlen("fallthrough") )
  {
    v5 = 0x100000000LL;
    if ( !(unsigned int)sub_22462B0((__int64)&v10, (unsigned __int8 *)"fallthrough", v11) )
      goto LABEL_7;
    v4 = v11;
  }
  if ( v4 == j__strlen("fallback") )
  {
    v9 = v4;
    v5 = 0x100000001LL;
    if ( !(unsigned int)sub_22462B0((__int64)&v10, "fallback", v9) )
      goto LABEL_7;
    v4 = v11;
  }
  if ( j__strlen("redirect-only") == v4 )
  {
    v8 = v4;
    v5 = 0x100000002LL;
    if ( (unsigned int)sub_22462B0((__int64)&v10, "redirect-only", v8) )
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
LABEL_7:
  if ( ptr != v14 )
    free(ptr);
  return v5;
}
