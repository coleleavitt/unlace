__int64 __fastcall sub_225B3E0(__int64 *a1, __int64 a2, _BYTE *a3)
{
  bool v3; // zf
  const char *v4; // rax
  size_t v6; // rdx
  size_t v7; // rbp
  __int64 v8; // rdi
  unsigned int v9; // ebp
  void *s1; // [rsp+0h] [rbp-88h] BYREF
  size_t n; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  __int64 v15; // [rsp+28h] [rbp-60h] BYREF
  const char *v16; // [rsp+30h] [rbp-58h] BYREF
  __int16 v17; // [rsp+50h] [rbp-38h]

  v3 = *(_DWORD *)(a2 + 32) == 1;
  s1 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA520);
  ptr = &v15;
  v4 = "expected string";
  n = 0;
  if ( !v3 )
    goto LABEL_13;
  s1 = (void *)sub_2270420(a2, &ptr);
  n = v6;
  v7 = v6;
  if ( v6 == j__strlen("true") )
  {
    if ( !(unsigned int)sub_22462B0((__int64)&s1, (unsigned __int8 *)"true", n) )
      goto LABEL_19;
    v7 = n;
  }
  if ( j__strlen("on") == v7 )
  {
    if ( !(unsigned int)sub_22462B0((__int64)&s1, (unsigned __int8 *)"on", v7) )
      goto LABEL_19;
    v7 = n;
  }
  if ( j__strlen("yes") == v7 )
  {
    if ( (unsigned int)sub_22462B0((__int64)&s1, (unsigned __int8 *)"yes", v7) )
    {
      v7 = n;
      goto LABEL_5;
    }
LABEL_19:
    *a3 = 1;
    v9 = 1;
    goto LABEL_14;
  }
LABEL_5:
  if ( v7 == j__strlen("1") && (!v7 || !memcmp(s1, "1", v7)) )
    goto LABEL_19;
  if ( v7 == j__strlen("false") )
  {
    if ( !(unsigned int)sub_22462B0((__int64)&s1, (unsigned __int8 *)"false", v7) )
      goto LABEL_23;
    v7 = n;
  }
  if ( j__strlen("off") == v7 )
  {
    if ( !(unsigned int)sub_22462B0((__int64)&s1, (unsigned __int8 *)"off", v7) )
      goto LABEL_23;
    v7 = n;
  }
  if ( j__strlen("no") == v7 )
  {
    if ( !(unsigned int)sub_22462B0((__int64)&s1, (unsigned __int8 *)"no", v7) )
      goto LABEL_23;
    v7 = n;
  }
  if ( j__strlen("0") != v7 || v7 && memcmp(s1, "0", v7) )
  {
    v4 = "expected boolean value";
LABEL_13:
    v8 = *a1;
    v16 = v4;
    v9 = 0;
    v17 = 259;
    sub_226EEF0(v8, a2, &v16, 0);
    goto LABEL_14;
  }
LABEL_23:
  *a3 = 0;
  v9 = 1;
LABEL_14:
  if ( ptr != &v15 )
    free(ptr);
  return v9;
}
